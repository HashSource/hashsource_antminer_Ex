int __fastcall format_hashrate_string(const char *a1, char *a2)
{
  double v2; // d0
  double v5; // d8
  int v6; // r0
  int v7; // r3
  double v8; // d8
  double v10; // d0
  _BYTE v11[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = v2;
  V_LOCK(a1);
  v6 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c",
    127,
    "format_hashrate_string",
    22,
    63,
    20,
    v11);
  if ( v2 < 10000.0 )
    return sprintf(a2, "%.2f %s/s", v2, a1);
  if ( v2 >= 10000000.0 )
  {
    if ( v2 >= 1.0e10 )
    {
      if ( v2 >= 1.0e13 )
        v7 = 84;
      else
        v7 = 71;
      if ( v2 >= 1.0e13 )
        v10 = 1.0e-12;
      else
        v10 = 0.000000001;
      v8 = v5 * v10;
    }
    else
    {
      v7 = 77;
      v8 = v2 * 0.000001;
    }
  }
  else
  {
    v7 = 75;
    v8 = v2 * 0.001;
  }
  return sprintf(a2, "%.2f %c%s/s", v8, v7, a1);
}
