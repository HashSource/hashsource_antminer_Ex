int __fastcall eeprom_rewrite_one_chain(unsigned int a1, int a2, int a3, int a4)
{
  char v10[16]; // [sp+24h] [bp-1B10h] BYREF
  _BYTE v11[16]; // [sp+824h] [bp-1310h] BYREF
  char v12[256]; // [sp+1824h] [bp-310h] BYREF
  char v13[256]; // [sp+1924h] [bp-210h] BYREF
  _BYTE s[256]; // [sp+1A24h] [bp-110h] BYREF
  unsigned __int8 *v15; // [sp+1B24h] [bp-10h]
  int v16; // [sp+1B28h] [bp-Ch]
  int v17; // [sp+1B2Ch] [bp-8h]

  v16 = 0;
  v17 = 3;
  memset(s, 0, sizeof(s));
  memset(v13, 0, sizeof(v13));
  memset(v12, 0, sizeof(v12));
  v15 = *(unsigned __int8 **)(a2 + 4 * a1);
  do
  {
    v16 = eeprom_read(a1, 0, (int)s, 0x100u);
    if ( v16 )
    {
      snprintf(v10, 0x800u, "Read configuration fail for chain %d.", a1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_rewrite_one_chain",
        24,
        937,
        100,
        v11);
      return v16;
    }
    if ( !sub_206DB0(s, v13) )
      break;
    snprintf(v10, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_rewrite_one_chain",
      24,
      951,
      100,
      v11);
    usleep(0x7A120u);
    --v17;
  }
  while ( v17 );
  if ( !v17 || !sub_208A7C(v13, (int)v15) || !sub_206BB0(v13, v15) )
  {
    *(_BYTE *)(a2 + a1 + 64) = 0;
    snprintf(v10, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_rewrite_one_chain",
      24,
      968,
      100,
      v11);
    return -1;
  }
  *(_BYTE *)(a2 + a1 + 64) = 1;
  snprintf(
    v10,
    0x800u,
    "chain[%d], modify voltage from %d to %d, freq from %d to %d",
    a1,
    *(unsigned __int16 *)(v15 + 39),
    *(unsigned __int16 *)(v15 + 39) + a3,
    *(unsigned __int16 *)(v15 + 41),
    *(unsigned __int16 *)(v15 + 41) + a4);
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_rewrite_one_chain",
    24,
    974,
    100,
    v11);
  *(_WORD *)(v15 + 39) += a3;
  *(_WORD *)(v15 + 41) += a4;
  sub_209B24(v13, (int)v15);
  if ( sub_2070B4(v13, v12) )
    return -1;
  v17 = 3;
  while ( 1 )
  {
    eeprom_write(a1, 0, (int)v12, v15[1]);
    memset(s, 0, sizeof(s));
    v16 = eeprom_read(a1, 0, (int)s, 0x100u);
    if ( !v16 )
      break;
    snprintf(v10, 0x800u, "Read configuration fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_rewrite_one_chain",
      24,
      992,
      100,
      v11);
LABEL_21:
    if ( !--v17 )
      return v16;
  }
  if ( sub_206DB0(s, v13) )
  {
    snprintf(v10, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_rewrite_one_chain",
      24,
      1006,
      100,
      v11);
    usleep(0x7A120u);
    goto LABEL_21;
  }
  if ( !sub_208A7C(v13, (int)v15) || !sub_206BB0(v13, v15) )
  {
    *(_BYTE *)(a2 + a1 + 64) = 0;
    v16 = -1;
    snprintf(v10, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_rewrite_one_chain",
      24,
      1021,
      100,
      v11);
    goto LABEL_21;
  }
  *(_BYTE *)(a2 + a1 + 64) = 1;
  return 0;
}
