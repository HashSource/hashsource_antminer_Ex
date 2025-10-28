int __fastcall format_hashrate_string(const char *a1, char *a2)
{
  double v2; // d0
  double v6; // [sp+18h] [bp-1014h]
  _BYTE v7[8]; // [sp+24h] [bp-1008h] BYREF
  unsigned __int8 v8; // [sp+1027h] [bp-5h]

  v6 = v2;
  v8 = 0;
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "format hashrate string %f %s", v2, a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/util.c",
    134,
    "format_hashrate_string",
    22,
    51,
    20,
    v7);
  if ( v2 >= 10000.0 )
  {
    if ( v2 >= 10000000.0 )
    {
      if ( v2 >= 1.0e10 )
      {
        v8 = 71;
        v6 = v2 * 0.000000001;
      }
      else
      {
        v8 = 77;
        v6 = v2 * 0.000001;
      }
    }
    else
    {
      v8 = 75;
      v6 = v2 * 0.001;
    }
  }
  if ( v8 )
    return sprintf(a2, "%.2f %c%s/s", v6, v8, a1);
  else
    return sprintf(a2, "%.2f %s/s", v6, a1);
}
