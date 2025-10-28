int __fastcall sub_7BD0C(int a1, char a2)
{
  _BYTE v5[24]; // [sp+1Ch] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-18h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_one_asic_core_KAS_2380", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_software_reset_one_asic_core_KAS_2380",
    49,
    206,
    20,
    v5);
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = *(_DWORD *)(a1 + 468) * a2;
  HIWORD(s[2]) = 68;
  s[0] = 1;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
}
