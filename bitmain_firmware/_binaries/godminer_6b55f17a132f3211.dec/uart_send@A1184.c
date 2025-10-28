size_t __fastcall uart_send(int a1, const void *a2, size_t a3)
{
  size_t v6; // r3
  size_t v7; // r7
  _DWORD *v8; // r4
  int v9; // r3
  int v10; // r3
  _DWORD *v11; // r7
  int v12; // r1
  int v13; // r0
  int v14; // r0
  int v16; // [sp+14h] [bp-1918h] BYREF
  int v17; // [sp+18h] [bp-1914h] BYREF
  int v18; // [sp+1Ch] [bp-1910h] BYREF
  size_t v19; // [sp+20h] [bp-190Ch] BYREF
  int v20; // [sp+24h] [bp-1908h] BYREF
  _DWORD s[64]; // [sp+28h] [bp-1904h] BYREF
  char v22[2040]; // [sp+128h] [bp-1804h] BYREF
  _DWORD v23[1025]; // [sp+928h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  pthread_mutex_lock(stru_177130);
  if ( sub_A08B8(a1, &v20, &v16, &v17, &v18) )
  {
    v13 = snprintf(v22, 0x800u, "get_send_address_info error, chain_id = %d", a1);
    V_LOCK(v13);
    v14 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_uart.c",
      171,
      "uart_send",
      9,
      349,
      100,
      v23);
    pthread_mutex_unlock(stru_177130);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      fpga_read(v16, &v19);
      v6 = (unsigned __int8)(v19 >> v20);
      v19 = v6;
      if ( v6 >= a3 )
        break;
      usleep(0);
    }
    fpga_read(v17, &v19);
    v19 = (unsigned __int8)(v19 >> v20);
    memcpy(s, a2, a3);
    v7 = a3 >> 2;
    if ( a3 >> 2 )
    {
      v8 = s;
      do
      {
        v9 = *((unsigned __int8 *)v8++ + 1);
        fpga_write(
          v18,
          (v9 << 16)
        | (*((unsigned __int8 *)v8 - 4) << 24)
        | *((unsigned __int8 *)v8 - 1)
        | (*((unsigned __int8 *)v8 - 2) << 8));
      }
      while ( &s[v7] != v8 );
    }
    v10 = a3 & 3;
    if ( (a3 & 3) != 0 )
    {
      v11 = &v23[v7];
      v12 = *((unsigned __int8 *)v11 - 2304) << 24;
      if ( v10 == 2 )
      {
        v12 |= *((unsigned __int8 *)v11 - 2303) << 16;
      }
      else if ( v10 == 3 )
      {
        v12 |= (*((unsigned __int8 *)v11 - 2302) << 8) | (*((unsigned __int8 *)v11 - 2303) << 16);
      }
      fpga_write(v18, v12);
    }
    fpga_write(v17, a3 | 0x80000000);
    pthread_mutex_unlock(stru_177130);
    return a3;
  }
}
