int __fastcall sub_B5B58(int a1, void *a2)
{
  int v2; // r0
  int v3; // r0
  const char *v6; // r5
  size_t v7; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v9[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_16D578[0] && *(_BYTE *)(dword_16D578[0] + 80) )
  {
    v6 = *(const char **)(*(_DWORD *)(dword_16D578[0] + 4 * a1) + 47);
    v7 = strlen(v6);
    memcpy(a2, v6, v7);
    return 0;
  }
  else
  {
    v2 = snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_miner_type", a1);
    V_LOCK(v2);
    v3 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "get_miner_type",
      14,
      853,
      100,
      v9);
    return 0;
  }
}
