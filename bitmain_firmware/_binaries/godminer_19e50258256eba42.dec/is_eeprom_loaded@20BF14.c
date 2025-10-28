int is_eeprom_loaded()
{
  char v2[4]; // [sp+10h] [bp-1804h] BYREF
  int v3; // [sp+810h] [bp-1004h] BYREF

  if ( dword_C25F58 && *(_BYTE *)(dword_C25F58 + 80) )
    return *(unsigned __int8 *)(dword_C25F58 + 80);
  snprintf(v2, 0x800u, "%s: g_eeprom_data is not ready", "is_eeprom_loaded");
  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "is_eeprom_loaded",
    16,
    1184,
    20,
    &v3);
  return 0;
}
