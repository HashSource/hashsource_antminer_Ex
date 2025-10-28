int __fastcall chip_setting_software_reset_ltc(int a1)
{
  _BYTE v3[24]; // [sp+1Ch] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-18h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "software_reset %s %02x", "chip_setting_software_reset_ltc", 52);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_software_reset_ltc",
    31,
    39,
    20,
    v3);
  memset(s, 0, sizeof(s));
  s[2] = 3407873;
  s[0] = 0;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
}
