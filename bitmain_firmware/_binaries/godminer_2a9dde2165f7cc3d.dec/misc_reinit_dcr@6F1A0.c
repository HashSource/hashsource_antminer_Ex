int __fastcall misc_reinit_dcr(int a1)
{
  int v2; // r0
  int v4; // [sp+28h] [bp-1020h] BYREF
  _BYTE v5[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v4, "chain");
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
    174,
    "misc_reinit_dcr",
    15,
    450,
    40,
    v5);
  sub_6EE84(a1);
  return 0;
}
