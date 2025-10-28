int __fastcall sub_206DB0(_BYTE *a1, char *a2)
{
  char v6[24]; // [sp+1Ch] [bp-1918h] BYREF
  _BYTE v7[24]; // [sp+81Ch] [bp-1118h] BYREF
  unsigned int s[64]; // [sp+181Ch] [bp-118h] BYREF
  int v9; // [sp+191Ch] [bp-18h]
  size_t v10; // [sp+1920h] [bp-14h]
  size_t n; // [sp+1924h] [bp-10h]
  int v12; // [sp+1928h] [bp-Ch]
  unsigned __int8 v13; // [sp+192Eh] [bp-6h]
  unsigned __int8 v14; // [sp+192Fh] [bp-5h]

  memset(s, 0, sizeof(s));
  v9 = 0;
  v10 = 0;
  n = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v14 = *a1 & 0xF;
  v13 = *a1 >> 4;
  v9 = (unsigned __int8)a1[1];
  v10 = 2;
  n = v9 - 2;
  v12 = v9;
  if ( v9 && (n & 0x80000000) == 0 )
  {
    if ( v14 == 1 && v13 == 1 )
    {
      memcpy(s, &a1[v10], n);
      data_dec(s, n, v13, v14);
      memcpy(a2, a1, v10);
      memcpy(&a2[v10], s, n);
      return 0;
    }
    else
    {
      snprintf(
        v6,
        0x800u,
        "EEPROM decode eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
        v14,
        v13);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "decode_eeprom_fixture_info",
        26,
        348,
        100,
        v7);
      return -1;
    }
  }
  else
  {
    snprintf(
      v6,
      0x800u,
      "EEPROM decode info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
      v9,
      n,
      v12);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "decode_eeprom_fixture_info",
      26,
      342,
      100,
      v7);
    return -1;
  }
}
