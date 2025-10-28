int __fastcall eeprom_get_PT2_freq(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v8[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_18D880[0] && *(_BYTE *)(dword_18D880[0] + 80) )
  {
    v2 = *(unsigned __int16 *)(*(_DWORD *)(dword_18D880[0] + 4 * a1) + 37);
    if ( a2 )
    {
      result = 0;
      *a2 = v2;
    }
    else
    {
      strcpy(s, "freq level not match");
      V_LOCK(*(_DWORD *)"atch");
      v6 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_get_PT2_freq",
        19,
        1083,
        100,
        v8);
      return -2;
    }
  }
  else
  {
    v4 = snprintf(s, 0x800u, "No work mode freq, chain = %d.", a1);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "eeprom_get_PT2_freq",
      19,
      1072,
      100,
      v8);
    return -1;
  }
  return result;
}
