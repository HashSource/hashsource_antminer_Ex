int __fastcall format_hashrate_string(const char *a1, char *a2)
{
  double v2; // d0
  double v5; // d8
  int v6; // r0
  int v7; // r3
  double v8; // d0
  double v9; // d8
  _BYTE v11[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = v2;
  V_LOCK(a1);
  v6 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/util.c",
    133,
    "format_hashrate_string",
    22,
    55,
    20,
    v11);
  if ( v2 < 10000.0 )
    return sprintf(a2, "%.2f %s/s", v2, a1);
  if ( v2 < 10000000.0 )
  {
    v7 = 75;
    v9 = v2 * 0.001;
  }
  else
  {
    if ( v2 >= 1.0e10 )
      v7 = 71;
    else
      v7 = 77;
    if ( v2 >= 1.0e10 )
      v8 = 0.000000001;
    else
      v8 = 0.000001;
    v9 = v5 * v8;
  }
  return sprintf(a2, "%.2f %c%s/s", v9, v7, a1);
}
