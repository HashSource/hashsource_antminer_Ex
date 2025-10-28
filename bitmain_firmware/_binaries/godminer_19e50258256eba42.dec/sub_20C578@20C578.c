int __fastcall sub_20C578(int a1, char *a2)
{
  char v4[4]; // [sp+18h] [bp-1804h] BYREF
  int v5; // [sp+818h] [bp-1004h] BYREF

  if ( dword_C25F58 && *(_BYTE *)(dword_C25F58 + 80) )
  {
    sprintf(
      a2,
      "%x%02x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_C25F58 + 4 * a1) + 31),
      *(unsigned __int8 *)(*(_DWORD *)(dword_C25F58 + 4 * a1) + 32));
    return 0;
  }
  else
  {
    snprintf(v4, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_pcb_version", a1);
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "get_pcb_version",
      15,
      1258,
      100,
      &v5);
    return 255;
  }
}
