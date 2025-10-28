int __fastcall sub_B5FA8(int a1, _BYTE *a2)
{
  int v2; // r3
  int v4; // r0
  int v5; // r0
  char s[2048]; // [sp+10h] [bp-1808h] BYREF
  _BYTE v7[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( dword_16D578[0] && *(_BYTE *)(dword_16D578[0] + 80) )
  {
    v2 = *(_DWORD *)(dword_16D578[0] + 4 * a1);
    *a2 = *(_BYTE *)(v2 + 2);
    return 0;
  }
  else
  {
    v4 = snprintf(s, 0x800u, "No work mode freq, chain = %d.\n", a1);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_get_fmt_version",
      22,
      960,
      100,
      v7);
    return 255;
  }
}
