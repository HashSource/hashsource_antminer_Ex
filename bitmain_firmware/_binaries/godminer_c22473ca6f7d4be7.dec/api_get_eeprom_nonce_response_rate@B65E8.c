int __fastcall api_get_eeprom_nonce_response_rate(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = dword_16C55C[a1 + 2];
  if ( dword_16C55C[0] && *(_BYTE *)(dword_16C55C[0] + 80) )
  {
    if ( a2 )
    {
      result = 0;
      *a2 = *(_DWORD *)(*(_DWORD *)(dword_16C55C[0] + 4 * v2) + 39);
    }
    else
    {
      snprintf(
        s,
        0x800u,
        "%s: chain = %d nonce response rate in eeprom is invalid\n",
        "api_get_eeprom_nonce_response_rate",
        dword_16C55C[a1 + 2]);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "api_get_eeprom_nonce_response_rate",
        34,
        826,
        100,
        v5);
      return -2;
    }
  }
  else
  {
    snprintf(
      s,
      0x800u,
      "%s: g_eeprom_data is not ready, chain = %d.\n",
      "api_get_eeprom_nonce_response_rate",
      dword_16C55C[a1 + 2]);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "api_get_eeprom_nonce_response_rate",
      34,
      817,
      100,
      v5);
    return -1;
  }
  return result;
}
