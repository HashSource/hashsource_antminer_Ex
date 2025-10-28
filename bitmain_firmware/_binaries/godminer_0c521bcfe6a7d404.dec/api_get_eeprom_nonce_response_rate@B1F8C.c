int __fastcall api_get_eeprom_nonce_response_rate(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v9[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = dword_18D880[a1 + 2];
  if ( dword_18D880[0] && *(_BYTE *)(dword_18D880[0] + 80) )
  {
    if ( a2 )
    {
      result = 0;
      *a2 = *(_DWORD *)(*(_DWORD *)(dword_18D880[0] + 4 * v2) + 39);
    }
    else
    {
      v6 = snprintf(
             s,
             0x800u,
             "%s: chain = %d nonce response rate in eeprom is invalid",
             "api_get_eeprom_nonce_response_rate",
             dword_18D880[a1 + 2]);
      V_LOCK(v6);
      v7 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "api_get_eeprom_nonce_response_rate",
        34,
        1249,
        100,
        v9);
      return -2;
    }
  }
  else
  {
    v4 = snprintf(
           s,
           0x800u,
           "%s: g_eeprom_data is not ready, chain = %d.",
           "api_get_eeprom_nonce_response_rate",
           dword_18D880[a1 + 2]);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "api_get_eeprom_nonce_response_rate",
      34,
      1240,
      100,
      v9);
    return -1;
  }
  return result;
}
