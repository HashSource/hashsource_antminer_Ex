int __fastcall dram_post_bist1_rvn(int a1, char a2)
{
  char v5[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "dram_post_bist1_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    174,
    "dram_post_bist1_rvn",
    19,
    3189,
    40,
    v5);
  sub_A40D8(a1, a2, 15, 3);
  sub_A40D8(a1, a2, 28, 2);
  sub_A40D8(a1, a2, 244, 1208484609);
  sub_A40D8(a1, a2, 243, 24);
  sub_A40D8(a1, a2, 242, -65536);
  sub_A40D8(a1, a2, 241, 4096);
  sub_A40D8(a1, a2, 245, 0);
  sub_A40D8(a1, a2, 246, 0);
  sub_A40D8(a1, a2, 247, 0);
  sub_A40D8(a1, a2, 248, 0);
  sub_A40D8(a1, a2, 249, 0);
  sub_A40D8(a1, a2, 250, 0);
  sub_A40D8(a1, a2, 251, 0);
  sub_A40D8(a1, a2, 252, 0);
  sub_A40D8(a1, a2, 253, 0);
  sub_A40D8(a1, a2, 254, 0);
  sub_A40D8(a1, a2, 255, 4);
  sub_A40D8(a1, a2, 240, 769);
  sub_A40D8(a1, a2, 245, 0);
  sub_A40D8(a1, a2, 246, 0);
  sub_A40D8(a1, a2, 247, 0);
  sub_A40D8(a1, a2, 248, 0);
  sub_A40D8(a1, a2, 249, 0);
  sub_A40D8(a1, a2, 250, 0);
  sub_A40D8(a1, a2, 251, 0);
  sub_A40D8(a1, a2, 252, 0);
  sub_A40D8(a1, a2, 253, 0);
  sub_A40D8(a1, a2, 254, 401408);
  sub_A40D8(a1, a2, 255, (int)&loc_62000 + 1);
  sub_A40D8(a1, a2, 240, 769);
  usleep(0x4Cu);
  sub_A40D8(a1, a2, 245, 0);
  sub_A40D8(a1, a2, 246, 0);
  sub_A40D8(a1, a2, 247, 0);
  sub_A40D8(a1, a2, 248, 0);
  sub_A40D8(a1, a2, 249, 0);
  sub_A40D8(a1, a2, 250, 0);
  sub_A40D8(a1, a2, 251, 0);
  sub_A40D8(a1, a2, 252, 0);
  sub_A40D8(a1, a2, 253, 0);
  sub_A40D8(a1, a2, 254, 0);
  sub_A40D8(a1, a2, 255, 24);
  sub_A40D8(a1, a2, 240, 769);
  sub_A40D8(a1, a2, 245, 0);
  sub_A40D8(a1, a2, 246, 268445696);
  sub_A40D8(a1, a2, 247, 268437504);
  sub_A40D8(a1, a2, 248, 268445696);
  sub_A40D8(a1, a2, 249, 536872960);
  sub_A40D8(a1, a2, 250, 0);
  sub_A40D8(a1, a2, 251, 0);
  sub_A40D8(a1, a2, 252, 0);
  sub_A40D8(a1, a2, 253, 0);
  sub_A40D8(a1, a2, 254, 14948376);
  sub_A40D8(a1, a2, 255, 14948377);
  sub_A40D8(a1, a2, 240, 769);
  usleep(0x249u);
  sub_A40D8(a1, a2, 245, 16711935);
  sub_A40D8(a1, a2, 246, 268445696);
  sub_A40D8(a1, a2, 247, 268437504);
  sub_A40D8(a1, a2, 248, 268445696);
  sub_A40D8(a1, a2, 249, 536872960);
  sub_A40D8(a1, a2, 250, 0);
  sub_A40D8(a1, a2, 251, 0);
  sub_A40D8(a1, a2, 252, 0);
  sub_A40D8(a1, a2, 253, 0);
  sub_A40D8(a1, a2, 254, 14948376);
  sub_A40D8(a1, a2, 255, 14948377);
  sub_A40D8(a1, a2, 240, 769);
  usleep(0x249u);
  sub_A40D8(a1, a2, 245, -16711936);
  sub_A40D8(a1, a2, 246, 268445696);
  sub_A40D8(a1, a2, 247, 268437504);
  sub_A40D8(a1, a2, 248, 268445696);
  sub_A40D8(a1, a2, 249, 536872960);
  sub_A40D8(a1, a2, 250, 0);
  sub_A40D8(a1, a2, 251, 0);
  sub_A40D8(a1, a2, 252, 0);
  sub_A40D8(a1, a2, 253, 0);
  sub_A40D8(a1, a2, 254, 14948376);
  sub_A40D8(a1, a2, 255, 14948377);
  sub_A40D8(a1, a2, 240, 769);
  usleep(0x249u);
  sub_A40D8(a1, a2, 245, -1);
  sub_A40D8(a1, a2, 246, 268445696);
  sub_A40D8(a1, a2, 247, 268437504);
  sub_A40D8(a1, a2, 248, 268445696);
  sub_A40D8(a1, a2, 249, 536872960);
  sub_A40D8(a1, a2, 250, 0);
  sub_A40D8(a1, a2, 251, 0);
  sub_A40D8(a1, a2, 252, 0);
  sub_A40D8(a1, a2, 253, 0);
  sub_A40D8(a1, a2, 254, 14948376);
  sub_A40D8(a1, a2, 255, 14948377);
  sub_A40D8(a1, a2, 240, 769);
  usleep(0x249u);
  sub_A40D8(a1, a2, 245, (int)&loc_40010);
  sub_A40D8(a1, a2, 246, 0x40000);
  sub_A40D8(a1, a2, 247, (int)&loc_40018);
  sub_A40D8(a1, a2, 248, 6);
  sub_A40D8(a1, a2, 240, 18287369);
  usleep(0x9C4u);
  return 0;
}
