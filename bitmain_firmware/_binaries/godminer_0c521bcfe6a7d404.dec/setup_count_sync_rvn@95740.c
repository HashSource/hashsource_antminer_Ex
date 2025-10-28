int __fastcall setup_count_sync_rvn(int a1, unsigned __int8 a2)
{
  int v4; // r0
  _BYTE v6[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "setup_count_sync_rvn",
    20,
    295,
    20,
    v6);
  sub_92D44(a1, a2, 202, 0);
  sub_92D44(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_92D44(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  return 0;
}
