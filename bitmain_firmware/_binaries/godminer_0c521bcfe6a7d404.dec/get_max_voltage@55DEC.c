int __fastcall get_max_voltage(int a1)
{
  double v1; // d0
  int v4; // r0
  _BYTE v5[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_174348 )
  {
    bitmain_convert_N_to_V(0);
    return (int)(v1 * 100.0);
  }
  else
  {
    V_LOCK(a1);
    v4 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/power_api.c",
      153,
      "get_max_voltage",
      15,
      517,
      100,
      v5);
    return -1;
  }
}
