int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  int v4; // r5
  int v5; // r8
  int v6; // r7
  size_t v7; // r1
  int v8; // r3
  int v9; // r2
  bool v10; // zf
  _BOOL4 v11; // r0
  unsigned int v12; // r6
  int v13; // r8
  char v14; // r7
  char v15; // r3
  int v16; // r3
  void *v18; // r0
  int v19; // r3
  int v20; // r8
  int v21; // lr
  int v22; // r12
  int v23; // r2
  _WORD *v24; // r8
  _DWORD *v25; // r8
  int v26; // r2
  int v27; // r1
  int v28; // r3
  bool v29; // cf
  _DWORD *v30; // r8
  int v31; // r1
  _DWORD *v32; // r8
  _WORD *v33; // r8
  float v34; // s12
  _DWORD *v35; // r8
  int v36; // r1
  _BYTE *v37; // r0
  char v38; // r1
  int v39; // r0
  int v40; // r3
  char *v41; // r0
  char *v42; // r8
  int v43; // r3
  int v44; // r0
  int v45; // r2
  int v47; // [sp+1Ch] [bp-1B08h]
  _WORD s[128]; // [sp+20h] [bp-1B04h] BYREF
  _DWORD v49[64]; // [sp+120h] [bp-1A04h] BYREF
  unsigned int dest[64]; // [sp+220h] [bp-1904h] BYREF
  char v51[2048]; // [sp+320h] [bp-1804h] BYREF
  char v52[4100]; // [sp+B20h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v49, 0, sizeof(v49));
  v4 = *(_DWORD *)(a2 + 4 * a1);
  v5 = 3;
  while ( 1 )
  {
    v6 = eeprom_read(a1, 0, s, 256);
    if ( v6 )
    {
      snprintf(v51, 0x800u, "Read configuration fail for chain %d.\n", a1);
      V_LOCK();
      logfmt_raw(v52, 0x1000u, 0, v51);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_load_one_chain",
        21,
        578,
        100,
        v52);
      return v6;
    }
    memset(dest, 0, sizeof(dest));
    v7 = HIBYTE(s[0]) - 2;
    v8 = s[0] & 0xF;
    v9 = LOBYTE(s[0]) >> 4;
    if ( (unsigned __int8)(HIBYTE(s[0]) - 2) > 0xFDu )
    {
      snprintf(
        v51,
        0x800u,
        "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
        HIBYTE(s[0]),
        v7,
        HIBYTE(s[0]));
      V_LOCK();
      logfmt_raw(v52, 0x1000u, 0, v51);
      V_UNLOCK();
      v44 = g_zc;
      v45 = 265;
      goto LABEL_44;
    }
    v10 = v9 == 1;
    if ( v9 == 1 )
      v10 = v8 == 1;
    v11 = !v10;
    if ( v10 )
      break;
    snprintf(
      v51,
      0x800u,
      "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
      v8,
      v9);
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, v51);
    V_UNLOCK();
    v44 = g_zc;
    v45 = 271;
LABEL_44:
    zlog(
      v44,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "decode_eeprom_fixture_info",
      26,
      v45,
      100,
      v52);
    snprintf(v51, 0x800u, "Data decode fail for chain %d.\n", a1);
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_load_one_chain",
      21,
      592,
      100,
      v52);
    usleep(0x7A120u);
    if ( !--v5 )
      goto LABEL_13;
  }
  v12 = HIBYTE(s[0]) - 2;
  v13 = v11;
  memcpy(dest, &s[1], v7);
  data_dec(dest, v12, 1, 1);
  LOWORD(v49[0]) = s[0];
  v14 = LOBYTE(s[0]) >> 4;
  memcpy((char *)v49 + 2, dest, v12);
  v15 = *(_BYTE *)v4 & 0xF | (16 * (v14 & 0xF));
  *(_BYTE *)v4 = v15;
  *(_BYTE *)v4 = v15 & 0xF0 | v49[0] & 0xF;
  *(_BYTE *)(v4 + 1) = BYTE1(v49[0]);
  v16 = BYTE2(v49[0]);
  *(_BYTE *)(v4 + 2) = BYTE2(v49[0]);
  if ( v16 != 3 )
  {
    strcpy(v51, "This FMT is not supported\n");
    V_LOCK();
    logfmt_raw(v52, 0x1000u, v13, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "init_eeprom_fmt_info",
      20,
      359,
      100,
      v52);
LABEL_13:
    *(_BYTE *)(a2 + a1 + 64) = 0;
    snprintf(v51, 0x800u, "Data load fail for chain %d.\n", a1);
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_load_one_chain",
      21,
      609,
      100,
      v52);
    return -1;
  }
  v18 = calloc(0x12u, 1u);
  v20 = (int)v18;
  if ( v18 )
    v19 = 1;
  *(_DWORD *)(v4 + 3) = v18;
  if ( v18 )
  {
    v47 = v19;
  }
  else
  {
    v47 = 0;
    strcpy(v51, "Decode SN OOM\n");
    V_LOCK();
    logfmt_raw(v52, 0x1000u, v20, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      420,
      100,
      v52);
    v20 = *(_DWORD *)(v4 + 3);
  }
  v21 = *(_DWORD *)((char *)&v49[1] + 3);
  v22 = *(_DWORD *)((char *)&v49[2] + 3);
  v23 = *(_DWORD *)((char *)&v49[3] + 3);
  *(_DWORD *)v20 = *(_DWORD *)((char *)v49 + 3);
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = v22;
  *(_DWORD *)(v20 + 12) = v23;
  *(_BYTE *)(v20 + 16) = HIBYTE(v49[4]);
  v24 = calloc(3u, 1u);
  *(_DWORD *)(v4 + 7) = v24;
  if ( !v24 )
  {
    v47 = 0;
    strcpy(v51, "Decode Chip Die OOM\n");
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      429,
      100,
      v52);
    v24 = *(_WORD **)(v4 + 7);
  }
  *v24 = v49[5];
  v25 = calloc(0xEu, 1u);
  *(_DWORD *)(v4 + 11) = v25;
  if ( !v25 )
  {
    v47 = 0;
    strcpy(v51, "Decode Chip Marking OOM\n");
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      438,
      100,
      v52);
    v25 = *(_DWORD **)(v4 + 11);
  }
  v26 = *(_DWORD *)((char *)&v49[7] + 2);
  v27 = *(_DWORD *)((char *)&v49[6] + 2);
  *v25 = *(_DWORD *)((char *)&v49[5] + 2);
  v25[2] = v26;
  v25[1] = v27;
  *((_BYTE *)v25 + 12) = BYTE2(v49[8]);
  v28 = *(unsigned __int8 *)(v4 + 2) - 1;
  v29 = *(_BYTE *)(v4 + 2) != 1;
  *(_BYTE *)(v4 + 15) = HIBYTE(v49[8]);
  if ( v28 != 1 && v29 )
  {
    v30 = calloc(0xAu, 1u);
    *(_DWORD *)(v4 + 16) = v30;
    if ( !v30 )
    {
      v47 = 0;
      strcpy(v51, "Decode Chip FT Program Version OOM\n");
      V_LOCK();
      logfmt_raw(v52, 0x1000u, 0, v51);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        464,
        100,
        v52);
      v30 = *(_DWORD **)(v4 + 16);
    }
    v31 = v49[10];
    *v30 = v49[9];
    v30[1] = v31;
    *((_BYTE *)v30 + 8) = v49[11];
  }
  else
  {
    memset(dest, 0, 16);
    v41 = (char *)calloc(0xFu, 1u);
    v42 = v41;
    *(_DWORD *)(v4 + 16) = v41;
    if ( !v41 )
    {
      v47 = 0;
      strcpy(v51, "Decode Chip FT Program Version OOM\n");
      V_LOCK();
      logfmt_raw(v52, 0x1000u, 0, v51);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        453,
        100,
        v52);
      v42 = *(char **)(v4 + 16);
    }
    dest[0] = v49[9];
    dest[1] = v49[10];
    LOBYTE(dest[2]) = v49[11];
    snprintf(v42, 0xFu, "F%dV%02dB%dC%d", LOBYTE(v49[9]), BYTE1(v49[9]), BYTE2(v49[9]), HIBYTE(v49[9]));
  }
  *(_BYTE *)(v4 + 20) = *(_BYTE *)(v4 + 20) & 0x80 | BYTE1(v49[11]) & 0x7F;
  *(_BYTE *)(v4 + 20) = *(_BYTE *)(v4 + 20) & 0x7F | (BYTE1(v49[11]) >> 7 << 7);
  v32 = calloc(5u, 1u);
  *(_DWORD *)(v4 + 21) = v32;
  if ( !v32 )
  {
    v47 = 0;
    strcpy(v51, "Decode Chip FT Program Version OOM\n");
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      478,
      100,
      v52);
    v32 = *(_DWORD **)(v4 + 21);
  }
  *v32 = *(_DWORD *)((char *)&v49[11] + 2);
  *(_BYTE *)(v4 + 25) = *(_BYTE *)(v4 + 25) & 0x80 | BYTE2(v49[12]) & 0x7F;
  *(_BYTE *)(v4 + 25) = *(_BYTE *)(v4 + 25) & 0x7F | (BYTE2(v49[12]) >> 7 << 7);
  *(_BYTE *)(v4 + 26) = HIBYTE(v49[12]);
  *(_DWORD *)(v4 + 27) = v49[13];
  v33 = calloc(3u, 1u);
  *(_DWORD *)(v4 + 31) = v33;
  if ( !v33 )
  {
    v47 = 0;
    strcpy(v51, "Decode Chip Technology OOM\n");
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      502,
      100,
      v52);
    v33 = *(_WORD **)(v4 + 31);
  }
  *v33 = v49[14];
  *(_WORD *)(v4 + 35) = __rev16(HIWORD(v49[14]));
  *(_WORD *)(v4 + 37) = __rev16(LOWORD(v49[15]));
  v34 = (double)((unsigned __int16)(HIWORD(v49[15]) << 8) | HIBYTE(HIWORD(v49[15]))) / 100.0;
  *(float *)(v4 + 39) = v34;
  *(_DWORD *)(v4 + 43) = v49[16];
  v35 = calloc(9u, 1u);
  *(_DWORD *)(v4 + 47) = v35;
  if ( !v35 )
  {
    v47 = 0;
    strcpy(v51, "Decode miner_type OOM\n");
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      538,
      100,
      v52);
    v35 = *(_DWORD **)(v4 + 47);
  }
  v36 = v49[18];
  *v35 = v49[17];
  v35[1] = v36;
  *(_BYTE *)(*(_DWORD *)(v4 + 47) + 8) = 0;
  v37 = calloc(6u, 1u);
  *(_DWORD *)(v4 + 51) = v37;
  if ( !v37 )
  {
    strcpy(v51, "Decode reserved OOM\n");
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      548,
      100,
      v52);
    v43 = *(_DWORD *)(v4 + 51);
    *(_DWORD *)v43 = v49[19];
    *(_BYTE *)(v43 + 4) = v49[20];
    *(_BYTE *)(*(_DWORD *)(v4 + 51) + 5) = 0;
    *(_BYTE *)(v4 + 55) = BYTE1(v49[20]);
    goto LABEL_13;
  }
  v38 = v49[20];
  *(_DWORD *)v37 = v49[19];
  v37[4] = v38;
  *(_BYTE *)(*(_DWORD *)(v4 + 51) + 5) = 0;
  *(_BYTE *)(v4 + 55) = BYTE1(v49[20]);
  if ( !v47 )
    goto LABEL_13;
  v39 = BM_CRC5(v49, 8 * (*(unsigned __int8 *)(v4 + 1) - 1));
  v40 = *(unsigned __int8 *)(v4 + 55);
  if ( v39 != v40 )
  {
    snprintf(
      v51,
      0x800u,
      "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n",
      v40,
      *(unsigned __int8 *)(v4 + 1),
      v39);
    V_LOCK();
    logfmt_raw(v52, 0x1000u, 0, v51);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "_is_fixture_crc_pass",
      20,
      237,
      100,
      v52);
    goto LABEL_13;
  }
  *(_BYTE *)(a2 + a1 + 64) = 1;
  return 0;
}
