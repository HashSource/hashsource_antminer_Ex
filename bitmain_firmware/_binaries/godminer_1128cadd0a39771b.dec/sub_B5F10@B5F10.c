int __fastcall sub_B5F10(int a1)
{
  int v1; // r0
  int v2; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v5[4100]; // [sp+810h] [bp-1004h] BYREF

  v1 = snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_open", a1);
  V_LOCK(v1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_open",
    11,
    44,
    100,
    v5);
  return -2147483391;
}
