int __fastcall api_get_eeprom_sweep_freq(int a1)
{
  char v4[4]; // [sp+18h] [bp-1804h] BYREF
  int v5; // [sp+818h] [bp-1004h] BYREF

  if ( dword_C25F58 && *(_BYTE *)(dword_C25F58 + 80) )
  {
    V_LOCK();
    logfmt_raw(
      &v5,
      0x1000u,
      0,
      "get eeprom sweep freq: %hu",
      *(unsigned __int16 *)(*(_DWORD *)(dword_C25F58 + 4 * dword_C25F5C[a1]) + 191));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_sweep_freq",
      25,
      1333,
      20,
      &v5);
    return *(__int16 *)(*(_DWORD *)(dword_C25F58 + 4 * dword_C25F5C[a1]) + 191);
  }
  else
  {
    snprintf(v4, 0x800u, "%s: g_eeprom_data is not ready", "api_get_eeprom_sweep_freq");
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_sweep_freq",
      25,
      1328,
      20,
      &v5);
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, "get eeprom sweep freq fail");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_sweep_freq",
      25,
      1329,
      60,
      &v5);
    return 0;
  }
}
