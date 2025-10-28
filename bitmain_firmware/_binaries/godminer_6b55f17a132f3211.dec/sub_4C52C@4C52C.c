int __fastcall sub_4C52C(int a1)
{
  int v1; // r0
  _BYTE v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/dhash_content/rvn/rvn_2020/rvn_2020_content.c",
    172,
    "nonce_pop_handler_rvn_2020",
    26,
    115,
    80,
    v3);
  return 1;
}
