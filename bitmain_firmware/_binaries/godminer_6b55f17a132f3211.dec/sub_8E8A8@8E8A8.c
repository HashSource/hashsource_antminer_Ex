int __fastcall sub_8E8A8(int a1)
{
  int v1; // r0
  int v3; // [sp+30h] [bp-1020h] BYREF
  _BYTE v4[4096]; // [sp+50h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v3, "chain");
  v1 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v1);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-or"
           "igin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
           173,
           "phy_handshake_rvn",
           17,
           827,
           100,
           v4);
}
