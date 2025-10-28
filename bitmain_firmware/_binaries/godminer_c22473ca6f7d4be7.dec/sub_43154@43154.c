int sub_43154()
{
  int v0; // s0
  int v1; // s1
  int v3; // [sp+4h] [bp-1010h]
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s, Targetdiff: %f", "dump_target_diff", v3, v0, v1);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/frontend/frontend_grin32/frontend_grin32.c",
           163,
           "dump_target_diff",
           16,
           18,
           20,
           v4);
}
