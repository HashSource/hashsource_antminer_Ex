size_t __fastcall uart_send(int a1, const void *a2, size_t a3)
{
  char v8[44]; // [sp+20h] [bp-192Ch] BYREF
  _BYTE v9[44]; // [sp+820h] [bp-112Ch] BYREF
  int v10; // [sp+1820h] [bp-12Ch] BYREF
  size_t v11; // [sp+1824h] [bp-128h] BYREF
  int v12; // [sp+1828h] [bp-124h] BYREF
  int v13; // [sp+182Ch] [bp-120h] BYREF
  int v14; // [sp+1830h] [bp-11Ch] BYREF
  _BYTE s[256]; // [sp+1834h] [bp-118h] BYREF
  size_t v16; // [sp+1934h] [bp-18h]
  signed int v17; // [sp+1938h] [bp-14h]
  int v18; // [sp+193Ch] [bp-10h]
  signed int i; // [sp+1940h] [bp-Ch]
  int v20; // [sp+1944h] [bp-8h]

  v18 = 0;
  v17 = 0;
  i = 0;
  memset(s, 0, sizeof(s));
  v16 = a3;
  v20 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  pthread_mutex_lock(&stru_C25B9C[a1]);
  if ( sub_20157C(a1, &v10, &v14, &v13, &v12) )
  {
    snprintf(v8, 0x800u, "get_send_address_info error, chain_id = %d", a1);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
      178,
      "uart_send",
      9,
      543,
      100,
      v9);
    pthread_mutex_unlock(&stru_C25B9C[a1]);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      fpga_read(v14, &v11);
      v11 = (unsigned __int8)(v11 >> v10);
      if ( a3 <= v11 )
        break;
      usleep(0);
    }
    fpga_read(v13, &v11);
    v11 = (unsigned __int8)(v11 >> v10);
    memcpy(s, a2, a3);
    v17 = v16 >> 2;
    for ( i = 0; i < v17; ++i )
    {
      v20 = ((unsigned __int8)s[4 * i] << 24)
          | ((unsigned __int8)s[4 * i + 1] << 16)
          | ((unsigned __int8)s[4 * i + 2] << 8)
          | (unsigned __int8)s[4 * i + 3];
      fpga_write(v12, v20);
    }
    v17 = v16 & 3;
    if ( (v16 & 3) != 0 )
    {
      switch ( v17 )
      {
        case 2:
          v20 = ((unsigned __int8)s[4 * i] << 24) | ((unsigned __int8)s[4 * i + 1] << 16);
          break;
        case 3:
          v20 = ((unsigned __int8)s[4 * i] << 24)
              | ((unsigned __int8)s[4 * i + 1] << 16)
              | ((unsigned __int8)s[4 * i + 2] << 8);
          break;
        case 1:
          v20 = (unsigned __int8)s[4 * i] << 24;
          break;
        default:
          printf("%s: the uart%d send left data is 4*N length, error!!!\n", "uart_send", a1);
          break;
      }
      fpga_write(v12, v20);
    }
    fpga_write(v13, v16 | 0x80000000);
    pthread_mutex_unlock(&stru_C25B9C[a1]);
    return v16;
  }
}
