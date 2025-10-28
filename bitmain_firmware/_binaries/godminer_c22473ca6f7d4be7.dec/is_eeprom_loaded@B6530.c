int is_eeprom_loaded()
{
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  char v2[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( !dword_16C55C[0] || (result = *(unsigned __int8 *)(dword_16C55C[0] + 80), !*(_BYTE *)(dword_16C55C[0] + 80)) )
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "is_eeprom_loaded");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "is_eeprom_loaded",
      16,
      731,
      20,
      v2);
    return 0;
  }
  return result;
}
