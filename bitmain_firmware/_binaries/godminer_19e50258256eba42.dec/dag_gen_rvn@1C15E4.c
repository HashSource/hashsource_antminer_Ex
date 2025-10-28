int __fastcall dag_gen_rvn(int a1)
{
  int v3; // [sp+20h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "dag_gen_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "dag_gen_rvn",
    11,
    2786,
    40,
    &v3);
  sub_1B4A74(a1, 180, 83886046);
  usleep(0x2710u);
  sub_1B4A74(a1, 164, 62);
  sleep(0xAu);
  cache_dag_done_check_rvn(a1, 0xA0u, 2);
  sleep(1u);
  return 0;
}
