int __fastcall reset_chip_reg_rvn(int a1)
{
  int v1; // r3
  _BYTE v4[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v5[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v6; // [sp+104Ch] [bp-10h]

  V_LOCK();
  sub_1A9DE8((int)v5, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s...", "reset_chip_reg_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "reset_chip_reg_rvn",
    18,
    324,
    60,
    v4);
  sub_1B47A0(a1, 252, -1414856447);
  usleep(0x2710u);
  return v1;
}
