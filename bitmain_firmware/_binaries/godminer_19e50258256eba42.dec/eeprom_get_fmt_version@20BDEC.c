int __fastcall eeprom_get_fmt_version(int a1, _BYTE *a2)
{
  char v4[4]; // [sp+18h] [bp-1804h] BYREF
  int v5; // [sp+818h] [bp-1004h] BYREF

  if ( dword_C25F58 && *(_BYTE *)(dword_C25F58 + 80) )
  {
    *a2 = *(_BYTE *)(*(_DWORD *)(dword_C25F58 + 4 * a1) + 2);
    return 0;
  }
  else
  {
    snprintf(v4, 0x800u, "%s: g_eeprom_data is not ready", "eeprom_get_fmt_version");
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_get_fmt_version",
      22,
      1172,
      100,
      &v5);
    return -1;
  }
}
