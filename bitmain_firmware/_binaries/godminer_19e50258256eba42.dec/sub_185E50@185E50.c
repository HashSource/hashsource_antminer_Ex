int __fastcall sub_185E50(int a1)
{
  _BYTE v3[24]; // [sp+1Ch] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-18h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "bridge reset %s %02x", "ChipSetting_bridge_reset_KS5_2382", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_bridge_reset_KS5_2382",
    33,
    167,
    20,
    v3);
  memset(s, 0, sizeof(s));
  s[2] = 4456449;
  s[0] = 2;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
}
