int __fastcall eeprom_decode_fixture_info_0(unsigned __int8 *a1, _WORD *a2)
{
  int v4; // r0
  unsigned int v5; // r2
  size_t v6; // r6
  int v7; // r3
  bool v8; // zf
  int v9; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r0
  char s[256]; // [sp+10h] [bp-1904h] BYREF
  char v17[2048]; // [sp+110h] [bp-1804h] BYREF
  _BYTE v18[4100]; // [sp+910h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = a1[1];
  v5 = *a1;
  v6 = v4 - 2;
  if ( (unsigned __int8)(v4 - 2) > 0xFDu )
  {
    v14 = snprintf(
            v17,
            0x800u,
            "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
            a1[1],
            v6,
            a1[1]);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v15);
    v13 = 279;
    goto LABEL_11;
  }
  v7 = v5 & 0xF;
  v8 = v5 >> 4 == 1;
  if ( v5 >> 4 == 1 )
    v8 = v7 == 1;
  v9 = !v8;
  if ( !v8 )
  {
    v11 = snprintf(
            v17,
            0x800u,
            "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
            v7,
            v5 >> 4);
    V_LOCK(v11);
    v12 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v12);
    v13 = 285;
LABEL_11:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "decode_eeprom_fixture_info",
      26,
      v13,
      100,
      v18);
    return -1;
  }
  memcpy(s, a1 + 2, v4 - 2);
  data_dec(s, v6, 1);
  *a2 = *(_WORD *)a1;
  memcpy(a2 + 1, s, v6);
  return v9;
}
