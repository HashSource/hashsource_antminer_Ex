int __fastcall sub_20C348(int a1)
{
  char v3[4]; // [sp+18h] [bp-1804h] BYREF
  int v4; // [sp+818h] [bp-1004h] BYREF

  if ( dword_C25F58 && *(_BYTE *)(dword_C25F58 + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_C25F58 + 4 * a1) + 50);
  snprintf(v3, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_test_standard_code", a1);
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "get_test_standard_code",
    22,
    1238,
    100,
    &v4);
  return 255;
}
