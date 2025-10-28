int eeprom_get_max_voltage()
{
  char *v0; // r3
  int result; // r0
  int v2; // t1
  int v3; // r2
  int v4; // r0
  int v5; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  _BYTE v7[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( dword_177470[0] && *(_BYTE *)(dword_177470[0] + 80) )
  {
    if ( dword_177474 <= 0 )
    {
      return 0;
    }
    else
    {
      v0 = (char *)&unk_177478;
      result = 0;
      do
      {
        v2 = *(_DWORD *)v0;
        v0 += 4;
        v3 = *(unsigned __int16 *)(*(_DWORD *)(dword_177470[0] + 4 * v2) + 35);
        if ( result < v3 )
          result = v3;
      }
      while ( v0 != (char *)&unk_177478 + 4 * dword_177474 );
    }
  }
  else
  {
    v4 = snprintf(s, 0x800u, "%s: eeprom is not ready", "eeprom_get_max_voltage");
    V_LOCK(v4);
    v5 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_get_max_voltage",
      22,
      1013,
      100,
      v7);
    return -1;
  }
  return result;
}
