__int64 sub_5E16C()
{
  int v0; // s0
  int v1; // s1
  int v3; // [sp+4h] [bp-1020h]
  int v4; // [sp+20h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, "%s, Targetdiff: %f", "dump_target_diff_dcr", v3, v0, v1);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
           164,
           "dump_target_diff_dcr",
           20,
           319,
           20,
           &v4);
}
