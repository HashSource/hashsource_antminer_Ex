void __fastcall __noreturn dhash_dag_gen_mining_start_rvn(int a1)
{
  int v2; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v2, 0x1000u, 0, "%s...", "dhash_dag_gen_mining_start_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "dhash_dag_gen_mining_start_rvn",
    30,
    3679,
    40,
    &v2);
  dram_bist_rvn(a1);
  while ( 1 )
    ;
}
