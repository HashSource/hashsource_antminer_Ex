int __fastcall sub_B4B00(int a1, unsigned __int8 *a2)
{
  int v3; // r0
  int v4; // r3
  int v5; // r3
  int v7; // r0
  int v8; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v10[4096]; // [sp+810h] [bp-1000h] BYREF

  v3 = BM_CRC5(a1, 8 * (a2[1] - 1));
  v4 = a2[2];
  if ( v4 == 3 )
  {
    v5 = a2[55];
  }
  else if ( v4 == 4 )
  {
    v5 = a2[199];
  }
  else
  {
    v5 = 0;
  }
  if ( v5 == v3 )
    return 1;
  v7 = snprintf(s, 0x800u, "Fixture CRC check fail. store_crc = 0x%x, len = 0x%x, crc = 0x%x\n", v5, a2[1], v3);
  V_LOCK(v7);
  v8 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "_is_fixture_crc_pass",
    20,
    240,
    100,
    v10);
  return 0;
}
