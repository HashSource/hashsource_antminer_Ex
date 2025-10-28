int __fastcall api_get_eeprom_sweep_freq(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int *v6; // r5
  int v7; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v9[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18D880[0] && *(_BYTE *)(dword_18D880[0] + 80) )
  {
    v6 = &dword_18D880[a1];
    V_LOCK(a1);
    v7 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "api_get_eeprom_sweep_freq",
      25,
      1270,
      20,
      v9);
    return *(__int16 *)(*(_DWORD *)(dword_18D880[0] + 4 * v6[2]) + 187);
  }
  else
  {
    v1 = snprintf(s, 0x800u, "%s: g_eeprom_data is not ready", "api_get_eeprom_sweep_freq");
    V_LOCK(v1);
    v2 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v2);
    v3 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
           173,
           "api_get_eeprom_sweep_freq",
           25,
           1265,
           20,
           v9);
    V_LOCK(v3);
    v4 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "api_get_eeprom_sweep_freq",
      25,
      1266,
      60,
      v9);
    return 0;
  }
}
