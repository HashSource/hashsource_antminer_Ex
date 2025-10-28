int __fastcall sub_5F2E8(int a1)
{
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s unknow temp type %d", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/set_pwm_by_temp.c",
    159,
    "get_temp",
    8,
    169,
    100,
    v3);
  return 0x7FFFFFFF;
}
