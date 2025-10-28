int __fastcall api_get_eeprom_chip_ft(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  _BYTE v6[4104]; // [sp+810h] [bp-1008h] BYREF

  v4 = dword_177470[a1 + 2];
  if ( dword_177470[0] && *(_BYTE *)(dword_177470[0] + 80) )
    return *(_DWORD *)(*(_DWORD *)(dword_177470[0] + 4 * v4) + 16);
  v2 = snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_chip_ft", v4);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "get_chip_ft",
    11,
    1089,
    100,
    v6);
  return 0;
}
