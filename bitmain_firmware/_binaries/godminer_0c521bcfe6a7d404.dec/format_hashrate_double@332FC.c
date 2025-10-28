int __fastcall format_hashrate_double(const char *a1, double *a2, char *a3)
{
  double v3; // d0
  int v7; // r0
  int v9; // r2
  double v10; // d9
  _BYTE v11[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v7 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/util.c",
    137,
    "format_hashrate_double",
    22,
    90,
    20,
    v11);
  if ( v3 >= 10000.0 )
  {
    if ( v3 < 10000000.0 )
    {
      v9 = 75;
      *a2 = v3 * 0.001;
    }
    else
    {
      if ( v3 < 1.0e10 )
        v9 = 77;
      else
        v9 = 71;
      if ( v3 < 1.0e10 )
        v10 = 0.000001;
      else
        v10 = 0.000000001;
      *a2 = v3 * v10;
    }
    return sprintf(a3, "%c%s/s", v9, a1);
  }
  else
  {
    *a2 = v3;
    return sprintf(a3, "%s/s", a1);
  }
}
