int __fastcall setup_clk_rvn(int a1)
{
  _BYTE v3[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v5; // [sp+104Ch] [bp-10h]

  V_LOCK();
  sub_1A9DE8((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "%s...", "setup_clk_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "setup_clk_rvn",
    13,
    333,
    60,
    v3);
  sub_1B47A0(a1, 8, 1076363553);
  usleep(0x2710u);
  sub_1B47A0(a1, 12, 1076363537);
  usleep(0x2710u);
  sub_1B47A0(a1, 216, 1077936417);
  usleep(0x2710u);
  return 0;
}
