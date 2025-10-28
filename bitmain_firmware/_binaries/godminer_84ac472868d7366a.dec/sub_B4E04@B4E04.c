int __fastcall sub_B4E04(int a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v5; // r0
  int v6; // r3
  int v8; // r0
  int v9; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v11[4100]; // [sp+810h] [bp-1004h] BYREF

  v5 = BM_CRC5(a1, 8 * (*a2 - 1));
  v6 = *a3;
  if ( v5 == v6 )
    return 1;
  v8 = snprintf(s, 0x800u, "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n", v6, *a2, v5);
  V_LOCK(v8);
  v9 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "_is_fixture_crc_pass",
    20,
    230,
    100,
    v11);
  return 0;
}
