int eeprom_get_min_freq()
{
  char *v0; // r3
  int result; // r0
  int v2; // t1
  int v3; // r2
  int v4; // r0
  int v5; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  _BYTE v7[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( dword_18D880[0] && *(_BYTE *)(dword_18D880[0] + 80) )
  {
    if ( dword_18D884 <= 0 )
    {
      return 0xFFFF;
    }
    else
    {
      v0 = (char *)&unk_18D888;
      result = 0xFFFF;
      do
      {
        v2 = *(_DWORD *)v0;
        v0 += 4;
        v3 = *(unsigned __int16 *)(*(_DWORD *)(dword_18D880[0] + 4 * v2) + 37);
        if ( result >= v3 )
          result = v3;
      }
      while ( v0 != (char *)&unk_18D888 + 4 * dword_18D884 );
    }
  }
  else
  {
    v4 = snprintf(s, 0x800u, "%s: g_eeprom_data is not ready", "eeprom_get_min_freq");
    V_LOCK(v4);
    v5 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "eeprom_get_min_freq",
      19,
      1093,
      100,
      v7);
    return -1;
  }
  return result;
}
