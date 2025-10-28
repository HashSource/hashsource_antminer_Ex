int __fastcall eeprom_get_PT2_freq(int a1, _DWORD *a2)
{
  char v4[2048]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v6; // [sp+181Ch] [bp-8h]

  if ( dword_C25F58 && *(_BYTE *)(dword_C25F58 + 80) )
  {
    v6 = *(unsigned __int16 *)(*(_DWORD *)(dword_C25F58 + 4 * a1) + 41);
    if ( a2 )
    {
      *a2 = v6;
      return 0;
    }
    else
    {
      strcpy(v4, "freq level not match");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_get_PT2_freq",
        19,
        1146,
        100,
        v5);
      return -2;
    }
  }
  else
  {
    snprintf(v4, 0x800u, "No work mode freq, chain = %d.", a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_get_PT2_freq",
      19,
      1135,
      100,
      v5);
    return -1;
  }
}
