size_t __fastcall uart_send(int a1, const void *a2, size_t a3)
{
  size_t v6; // r3
  size_t v7; // r7
  _DWORD *v8; // r4
  int v9; // r3
  size_t v10; // r3
  _DWORD *v11; // r7
  int v12; // r1
  int v14; // [sp+14h] [bp-1918h] BYREF
  int v15; // [sp+18h] [bp-1914h] BYREF
  int v16; // [sp+1Ch] [bp-1910h] BYREF
  size_t v17; // [sp+20h] [bp-190Ch] BYREF
  int v18; // [sp+24h] [bp-1908h] BYREF
  _DWORD s[64]; // [sp+28h] [bp-1904h] BYREF
  char v20[2040]; // [sp+128h] [bp-1804h] BYREF
  _DWORD v21[1025]; // [sp+928h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  pthread_mutex_lock(stru_1B32E8);
  if ( sub_C0750(a1, &v18, &v14, &v15, &v16) )
  {
    snprintf(v20, 0x800u, "get_send_address_info error, chain_id = %d", a1);
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
      175,
      "uart_send",
      9,
      350,
      100,
      v21);
    pthread_mutex_unlock(stru_1B32E8);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      fpga_read(v14, &v17);
      v6 = (unsigned __int8)(v17 >> v18);
      v17 = v6;
      if ( v6 >= a3 )
        break;
      usleep(0);
    }
    fpga_read(v15, &v17);
    v17 = (unsigned __int8)(v17 >> v18);
    memcpy(s, a2, a3);
    v7 = a3 >> 2;
    if ( a3 >> 2 )
    {
      v8 = s;
      do
      {
        v9 = *((unsigned __int8 *)v8++ + 1);
        fpga_write(
          v16,
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
      v11 = &v21[v7];
      v12 = *((unsigned __int8 *)v11 - 2304) << 24;
      if ( v10 == 2 )
      {
        v12 |= *((unsigned __int8 *)v11 - 2303) << 16;
      }
      else if ( v10 == 3 )
      {
        v12 |= (*((unsigned __int8 *)v11 - 2302) << 8) | (*((unsigned __int8 *)v11 - 2303) << 16);
      }
      fpga_write(v16, v12);
    }
    fpga_write(v15, a3 | 0x80000000);
    pthread_mutex_unlock(stru_1B32E8);
    return a3;
  }
}
