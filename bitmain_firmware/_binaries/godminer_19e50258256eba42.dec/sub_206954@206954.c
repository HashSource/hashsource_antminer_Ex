int sub_206954()
{
  int v0; // r4
  char v3[2048]; // [sp+10h] [bp-1814h] BYREF
  _BYTE v4[20]; // [sp+810h] [bp-1014h] BYREF
  int v5; // [sp+1810h] [bp-14h]
  unsigned __int8 i; // [sp+1817h] [bp-Dh]

  if ( dword_C25F58 || (dword_C25F58 = (int)calloc(1u, 0x54u)) != 0 )
  {
    for ( i = 0; i < dword_C25F9C; ++i )
    {
      v5 = dword_C25F5C[i];
      if ( !*(_DWORD *)(dword_C25F58 + 4 * v5) )
      {
        v0 = dword_C25F58;
        *(_DWORD *)(v0 + 4 * v5) = calloc(1u, 0xCCu);
        if ( !*(_DWORD *)(dword_C25F58 + 4 * v5) )
        {
          snprintf(v3, 0x800u, "No memory for configuraion for chain %d.", v5);
          V_LOCK();
          logfmt_raw(v4, 0x1000u, 0, v3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
            170,
            "_alloc_memory",
            13,
            278,
            100,
            v4);
          goto LABEL_11;
        }
      }
    }
    return 0;
  }
  else
  {
    strcpy(v3, "No memory for configuraion.");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "_alloc_memory",
      13,
      265,
      100,
      v4);
LABEL_11:
    sub_20686C();
    return -1;
  }
}
