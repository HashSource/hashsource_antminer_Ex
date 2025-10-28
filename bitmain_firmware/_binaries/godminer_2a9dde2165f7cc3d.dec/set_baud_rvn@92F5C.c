int __fastcall set_baud_rvn(int a1)
{
  int v2; // r0
  int v3; // r4
  _BYTE v5[32]; // [sp+28h] [bp-1024h] BYREF
  _BYTE v6[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v5, "chain");
  v2 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "set_baud_rvn",
    12,
    1173,
    60,
    v6);
  v3 = sub_92E58(a1, (int)&loc_121F10);
  usleep(0x2710u);
  return v3 | sub_92E58(a1, (int)&loc_121F10 + 1);
}
