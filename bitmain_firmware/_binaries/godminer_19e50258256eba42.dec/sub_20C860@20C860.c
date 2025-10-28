int __fastcall sub_20C860(int a1, void *a2)
{
  size_t v2; // r0
  char v6[12]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v7[12]; // [sp+818h] [bp-100Ch] BYREF

  if ( dword_C25F58 && *(_BYTE *)(dword_C25F58 + 80) )
  {
    v2 = strlen(*(const char **)(*(_DWORD *)(dword_C25F58 + 4 * a1) + 51));
    memcpy(a2, *(const void **)(*(_DWORD *)(dword_C25F58 + 4 * a1) + 51), v2);
  }
  else
  {
    snprintf(v6, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_miner_type", a1);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "get_miner_type",
      14,
      1281,
      100,
      v7);
  }
  return 0;
}
