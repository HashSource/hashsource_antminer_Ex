int __fastcall format_hashrate_double(const char *a1, double *a2, char *a3)
{
  double v3; // d0
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r1
  const char *v10; // r1
  int v12; // r2
  const char *v13; // r1
  double v14; // d9
  char v15[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = 4376;
  HIWORD(v7) = (unsigned int)"terminated string" >> 16;
  logfmt_raw(v15, 0x1000u, 0, v7, v3, a1);
  V_UNLOCK();
  LOWORD(v8) = -14512;
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v9) = 4048;
  HIWORD(v9) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/stratum_handler.c" >> 16;
  zlog(*v8, v9, 127, "format_hashrate_double", 22, 98, 20, v15);
  if ( v3 >= 10000.0 )
  {
    if ( v3 >= 10000000.0 )
    {
      if ( v3 >= 1.0e10 )
      {
        if ( v3 < 1.0e13 )
          v12 = 71;
        else
          v12 = 84;
        if ( v3 < 1.0e13 )
          v14 = 0.000000001;
        else
          v14 = 1.0e-12;
        *a2 = v3 * v14;
      }
      else
      {
        v12 = 77;
        *a2 = v3 * 0.000001;
      }
    }
    else
    {
      v12 = 75;
      *a2 = v3 * 0.001;
    }
    LOWORD(v13) = 4416;
    HIWORD(v13) = (unsigned int)"et_full sockbuf len %zu" >> 16;
    return sprintf(a3, v13, v12, a1);
  }
  else
  {
    LOWORD(v10) = 4408;
    *a2 = v3;
    HIWORD(v10) = (unsigned int)"tum_socket_full sockbuf len %zu" >> 16;
    return sprintf(a3, v10, a1);
  }
}
