int __fastcall cache_and_dag_gen_rvn(int a1)
{
  char v3[4080]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "cache_and_dag_gen_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    174,
    "cache_and_dag_gen_rvn",
    21,
    2814,
    40,
    v3);
  cache_gen_rvn(a1);
  dag_gen_rvn(a1);
  return 0;
}
