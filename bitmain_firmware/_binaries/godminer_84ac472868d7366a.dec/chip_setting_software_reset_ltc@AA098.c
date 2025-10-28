int __fastcall chip_setting_software_reset_ltc(int a1)
{
  int v2; // r0
  _DWORD v4[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_software_reset_ltc",
    31,
    39,
    20,
    v4);
  v4[2] = 3407873;
  v4[0] = 0;
  v4[1] = 0;
  v4[3] = 0;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v4);
}
