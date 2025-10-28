void __fastcall dram_bist_rvn(int a1)
{
  _BYTE v2[4304]; // [sp+18h] [bp-10DCh] BYREF
  int v3; // [sp+10ECh] [bp-8h]

  memset(&v2[4096], 0, 0xD0u);
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "%s...", "dram_bist_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "dram_bist_rvn",
    13,
    3330,
    40,
    v2);
  sub_1AB80C(a1, (int)&unk_940010);
  sub_1AB974(a1, -58331);
  sub_1ABADC(a1, 1100);
  v3 = 0;
  dram_pre_bist0_rvn(a1, 0);
  dram_pre_bist1_rvn(a1, v3);
  dram_bist_check_and_repair_rvn(a1, 0, v3);
}
