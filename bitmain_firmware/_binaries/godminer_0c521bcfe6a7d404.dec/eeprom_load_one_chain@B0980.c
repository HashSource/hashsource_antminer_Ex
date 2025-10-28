int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  int v4; // r7
  int v5; // r9
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  unsigned __int8 *v13; // [sp+14h] [bp-1A08h]
  unsigned __int8 s[256]; // [sp+18h] [bp-1A04h] BYREF
  _WORD v15[128]; // [sp+118h] [bp-1904h] BYREF
  char v16[2040]; // [sp+218h] [bp-1804h] BYREF
  _BYTE v17[4100]; // [sp+A18h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v15, 0, sizeof(v15));
  v4 = 3;
  v13 = *(unsigned __int8 **)(a2 + 4 * a1);
  while ( 1 )
  {
    v5 = eeprom_read(a1, 0, (int)s, 256);
    if ( v5 )
    {
      v10 = snprintf(v16, 0x800u, "Read configuration fail for chain %d.", a1);
      V_LOCK(v10);
      v11 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_load_one_chain",
        21,
        822,
        100,
        v17);
      return v5;
    }
    if ( !eeprom_decode_fixture_info_0(s, v15) )
      break;
    v6 = snprintf(v16, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "eeprom_load_one_chain",
      21,
      836,
      100,
      v17);
    usleep(0x7A120u);
    if ( !--v4 )
      goto LABEL_6;
  }
  if ( !sub_AF61C(v15, (int)v13) || !sub_AE560((int)v15, v13) )
  {
LABEL_6:
    *(_BYTE *)(a2 + a1 + 64) = 0;
    v8 = snprintf(v16, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v9);
    v5 = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "eeprom_load_one_chain",
      21,
      853,
      100,
      v17);
    return v5;
  }
  *(_BYTE *)(a2 + a1 + 64) = 1;
  return v5;
}
