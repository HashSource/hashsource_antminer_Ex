int __fastcall set_dag_node_num_rvn(int a1, __int64 a2)
{
  int v4; // [sp+4h] [bp-1020h]
  int v7; // [sp+20h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v7, 0x1000u, 0, "%s at %llx ...", "set_dag_node_num_rvn", v4, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "set_dag_node_num_rvn",
    20,
    2131,
    60,
    &v7);
  sub_1B4A74(a1, 27, a2);
  usleep(0x3E8u);
  return 0;
}
