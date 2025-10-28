int __fastcall api_get_eeprom_nonce_response_rate(int a1, _DWORD *a2)
{
  char v4[4]; // [sp+18h] [bp-1804h] BYREF
  int v5; // [sp+818h] [bp-1004h] BYREF

  if ( dword_C25F58 && *(_BYTE *)(dword_C25F58 + 80) )
  {
    if ( a2 )
    {
      *a2 = *(_DWORD *)(*(_DWORD *)(dword_C25F58 + 4 * dword_C25F5C[a1]) + 43);
      return 0;
    }
    else
    {
      snprintf(
        v4,
        0x800u,
        "%s: chain = %d nonce response rate in eeprom is invalid",
        "api_get_eeprom_nonce_response_rate",
        dword_C25F5C[a1]);
      V_LOCK();
      logfmt_raw(&v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "api_get_eeprom_nonce_response_rate",
        34,
        1312,
        100,
        &v5);
      return -2;
    }
  }
  else
  {
    snprintf(
      v4,
      0x800u,
      "%s: g_eeprom_data is not ready, chain = %d.",
      "api_get_eeprom_nonce_response_rate",
      dword_C25F5C[a1]);
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_nonce_response_rate",
      34,
      1303,
      100,
      &v5);
    return -1;
  }
}
