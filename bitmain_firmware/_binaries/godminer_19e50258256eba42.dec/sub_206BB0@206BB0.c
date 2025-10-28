int __fastcall sub_206BB0(_BYTE *a1, unsigned __int8 *a2)
{
  char v4[8]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  unsigned __int8 v6; // [sp+181Dh] [bp-7h]
  unsigned __int8 v7; // [sp+181Eh] [bp-6h]
  unsigned __int8 v8; // [sp+181Fh] [bp-5h]

  v7 = 0;
  v8 = 0;
  v6 = 0;
  v7 = BM_CRC5(a1, 8 * (a2[1] - 1));
  if ( a2[2] == 3 )
  {
    v8 = a2[60];
  }
  else if ( a2[2] == 4 )
  {
    v8 = a2[196];
  }
  if ( v7 == v8 )
  {
    return 1;
  }
  else
  {
    snprintf(v4, 0x800u, "Fixture CRC check fail. store_crc = 0x%x, len = 0x%x, crc = 0x%x\n", v8, a2[1], v7);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "_is_fixture_crc_pass",
      20,
      309,
      100,
      v5);
  }
  return v6;
}
