int __fastcall set_core_reset_rvn(int a1)
{
  int v2; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "set_core_reset_rvn",
    18,
    206,
    40,
    v4);
  sub_92A5C(a1, 2, 0);
  usleep(0x2710u);
  sub_92A5C(a1, 2, 255);
  usleep(0x2710u);
  return 0;
}
