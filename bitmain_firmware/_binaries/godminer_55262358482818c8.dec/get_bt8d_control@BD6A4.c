int get_bt8d_control()
{
  int *v1; // r12
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r12
  int v7; // r1
  int v8; // [sp+14h] [bp-1804h] BYREF
  _DWORD v9[510]; // [sp+18h] [bp-1800h] BYREF
  char v10[4096]; // [sp+818h] [bp-1000h] BYREF

  v8 = 0;
  if ( platform_inited[0] )
  {
    fpga_read(60, &v8);
    return v8;
  }
  else
  {
    LOWORD(v1) = 17944;
    HIWORD(v1) = (unsigned int)" end==================" >> 16;
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    v5 = v1[3];
    v6 = v1[4];
    v9[0] = v2;
    v9[1] = v3;
    v9[2] = v4;
    v9[3] = v5;
    v9[4] = v6;
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v7) = 17424;
    HIWORD(v7) = (unsigned int)"_control" >> 16;
    zlog(g_zc, v7, 177, "get_bt8d_control", 16, 374, 100, v10);
    return 0;
  }
}
