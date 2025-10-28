int __fastcall format_hashrate_double(const char *a1, double *a2, char *a3)
{
  double v3; // d0
  _BYTE v8[20]; // [sp+28h] [bp-1014h] BYREF
  double v9; // [sp+1028h] [bp-14h]
  unsigned __int8 v10; // [sp+1037h] [bp-5h]

  v10 = 0;
  v9 = 0.0;
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "format hashrate double %f %s", v3, a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/util.c",
    134,
    "format_hashrate_double",
    22,
    86,
    20,
    v8);
  if ( v3 >= 10000.0 )
  {
    if ( v3 >= 10000000.0 )
    {
      v10 = 77;
      v9 = 0.000001;
    }
    else
    {
      v10 = 75;
      v9 = 0.001;
    }
  }
  else
  {
    v9 = 1.0;
  }
  *a2 = v3 * v9;
  if ( v10 )
    return sprintf(a3, "%c%s/s", v10, a1);
  else
    return sprintf(a3, "%s/s", a1);
}
