int __fastcall eeprom_load_one_chain(unsigned int a1, int a2)
{
  int v4; // r5
  int v5; // r8
  int v6; // r7
  size_t v7; // r1
  int v8; // r3
  int v9; // r2
  bool v10; // zf
  size_t v11; // r6
  char v12; // r7
  char v13; // r3
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r0
  _DWORD *v19; // r0
  int v20; // r3
  _DWORD *v21; // r8
  int v22; // lr
  int v23; // r12
  int v24; // r2
  _WORD *v25; // r8
  _DWORD *v26; // r8
  int v27; // r2
  int v28; // r1
  int v29; // r3
  bool v30; // cf
  _DWORD *v31; // r8
  int v32; // r1
  _DWORD *v33; // r8
  _WORD *v34; // r8
  float v35; // s12
  _DWORD *v36; // r8
  int v37; // r1
  _BYTE *v38; // r0
  char v39; // r1
  int v40; // r0
  int v41; // r3
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  char *v47; // r0
  char *v48; // r8
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r3
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r2
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v67; // [sp+1Ch] [bp-1B08h]
  _WORD s[128]; // [sp+20h] [bp-1B04h] BYREF
  _DWORD v69[64]; // [sp+120h] [bp-1A04h] BYREF
  _DWORD dest[64]; // [sp+220h] [bp-1904h] BYREF
  char v71[2048]; // [sp+320h] [bp-1804h] BYREF
  _BYTE v72[4100]; // [sp+B20h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v69, 0, sizeof(v69));
  v4 = *(_DWORD *)(a2 + 4 * a1);
  v5 = 3;
  while ( 1 )
  {
    v6 = eeprom_read(a1, 0, (int)s, 256);
    if ( v6 )
    {
      v45 = snprintf(v71, 0x800u, "Read configuration fail for chain %d.\n", a1);
      V_LOCK(v45);
      v46 = logfmt_raw((int)v72, 0x1000u);
      V_UNLOCK(v46);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_load_one_chain",
        21,
        578,
        100,
        v72);
      return v6;
    }
    memset(dest, 0, sizeof(dest));
    v7 = HIBYTE(s[0]) - 2;
    v8 = s[0] & 0xF;
    v9 = LOBYTE(s[0]) >> 4;
    if ( (unsigned __int8)(HIBYTE(s[0]) - 2) > 0xFDu )
    {
      v63 = snprintf(
              v71,
              0x800u,
              "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
              HIBYTE(s[0]),
              v7,
              HIBYTE(s[0]));
      V_LOCK(v63);
      v64 = logfmt_raw((int)v72, 0x1000u);
      V_UNLOCK(v64);
      v59 = g_zc;
      v60 = 265;
      goto LABEL_41;
    }
    v10 = v9 == 1;
    if ( v9 == 1 )
      v10 = v8 == 1;
    if ( v10 )
      break;
    v57 = snprintf(
            v71,
            0x800u,
            "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
            v8,
            v9);
    V_LOCK(v57);
    v58 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v58);
    v59 = g_zc;
    v60 = 271;
LABEL_41:
    zlog(
      v59,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "decode_eeprom_fixture_info",
      26,
      v60,
      100,
      v72);
    v61 = snprintf(v71, 0x800u, "Data decode fail for chain %d.\n", a1);
    V_LOCK(v61);
    v62 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v62);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_load_one_chain",
      21,
      592,
      100,
      v72);
    usleep(0x7A120u);
    if ( !--v5 )
      goto LABEL_10;
  }
  v11 = HIBYTE(s[0]) - 2;
  memcpy(dest, &s[1], v7);
  data_dec(dest, v11, 1);
  LOWORD(v69[0]) = s[0];
  v12 = LOBYTE(s[0]) >> 4;
  memcpy((char *)v69 + 2, dest, v11);
  v13 = *(_BYTE *)v4 & 0xF | (16 * (v12 & 0xF));
  *(_BYTE *)v4 = v13;
  *(_BYTE *)v4 = v13 & 0xF0 | v69[0] & 0xF;
  *(_BYTE *)(v4 + 1) = BYTE1(v69[0]);
  v14 = BYTE2(v69[0]);
  *(_BYTE *)(v4 + 2) = BYTE2(v69[0]);
  if ( v14 != 3 )
  {
    strcpy(v71, "This FMT is not supported\n");
    V_LOCK(*(_DWORD *)"supported\n");
    v15 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "init_eeprom_fmt_info",
      20,
      359,
      100,
      v72);
LABEL_10:
    *(_BYTE *)(a2 + a1 + 64) = 0;
    v16 = snprintf(v71, 0x800u, "Data load fail for chain %d.\n", a1);
    V_LOCK(v16);
    v17 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_load_one_chain",
      21,
      609,
      100,
      v72);
    return -1;
  }
  v19 = calloc(0x12u, 1u);
  v21 = v19;
  if ( v19 )
    v20 = 1;
  *(_DWORD *)(v4 + 3) = v19;
  if ( v19 )
  {
    v67 = v20;
  }
  else
  {
    v67 = 0;
    strcpy(v71, "Decode SN OOM\n");
    V_LOCK(*(_DWORD *)"Decode SN OOM\n");
    v44 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v44);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      420,
      100,
      v72);
    v21 = *(_DWORD **)(v4 + 3);
  }
  v22 = *(_DWORD *)((char *)&v69[1] + 3);
  v23 = *(_DWORD *)((char *)&v69[2] + 3);
  v24 = *(_DWORD *)((char *)&v69[3] + 3);
  *v21 = *(_DWORD *)((char *)v69 + 3);
  v21[1] = v22;
  v21[2] = v23;
  v21[3] = v24;
  *((_BYTE *)v21 + 16) = HIBYTE(v69[4]);
  v25 = calloc(3u, 1u);
  *(_DWORD *)(v4 + 7) = v25;
  if ( !v25 )
  {
    v67 = 0;
    strcpy(v71, "Decode Chip Die OOM\n");
    V_LOCK(*(_DWORD *)"OOM\n");
    v51 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v51);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      429,
      100,
      v72);
    v25 = *(_WORD **)(v4 + 7);
  }
  *v25 = v69[5];
  v26 = calloc(0xEu, 1u);
  *(_DWORD *)(v4 + 11) = v26;
  if ( !v26 )
  {
    v67 = 0;
    strcpy(v71, "Decode Chip Marking OOM\n");
    V_LOCK(*(_DWORD *)"ing OOM\n");
    v49 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v49);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      438,
      100,
      v72);
    v26 = *(_DWORD **)(v4 + 11);
  }
  v27 = *(_DWORD *)((char *)&v69[7] + 2);
  v28 = *(_DWORD *)((char *)&v69[6] + 2);
  *v26 = *(_DWORD *)((char *)&v69[5] + 2);
  v26[2] = v27;
  v26[1] = v28;
  *((_BYTE *)v26 + 12) = BYTE2(v69[8]);
  v29 = *(unsigned __int8 *)(v4 + 2) - 1;
  v30 = *(_BYTE *)(v4 + 2) != 1;
  *(_BYTE *)(v4 + 15) = HIBYTE(v69[8]);
  if ( v29 != 1 && v30 )
  {
    v31 = calloc(0xAu, 1u);
    *(_DWORD *)(v4 + 16) = v31;
    if ( !v31 )
    {
      v67 = 0;
      strcpy(v71, "Decode Chip FT Program Version OOM\n");
      V_LOCK(*(_DWORD *)"rogram Version OOM\n");
      v56 = logfmt_raw((int)v72, 0x1000u);
      V_UNLOCK(v56);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        464,
        100,
        v72);
      v31 = *(_DWORD **)(v4 + 16);
    }
    v32 = v69[10];
    *v31 = v69[9];
    v31[1] = v32;
    *((_BYTE *)v31 + 8) = v69[11];
  }
  else
  {
    memset(dest, 0, 16);
    v47 = (char *)calloc(0xFu, 1u);
    v48 = v47;
    *(_DWORD *)(v4 + 16) = v47;
    if ( !v47 )
    {
      v67 = 0;
      strcpy(v71, "Decode Chip FT Program Version OOM\n");
      V_LOCK(*(_DWORD *)"rogram Version OOM\n");
      v65 = logfmt_raw((int)v72, 0x1000u);
      V_UNLOCK(v65);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        453,
        100,
        v72);
      v48 = *(char **)(v4 + 16);
    }
    dest[0] = v69[9];
    dest[1] = v69[10];
    LOBYTE(dest[2]) = v69[11];
    snprintf(v48, 0xFu, "F%dV%02dB%dC%d", LOBYTE(v69[9]), BYTE1(v69[9]), BYTE2(v69[9]), HIBYTE(v69[9]));
  }
  *(_BYTE *)(v4 + 20) = *(_BYTE *)(v4 + 20) & 0x80 | BYTE1(v69[11]) & 0x7F;
  *(_BYTE *)(v4 + 20) = *(_BYTE *)(v4 + 20) & 0x7F | (BYTE1(v69[11]) >> 7 << 7);
  v33 = calloc(5u, 1u);
  *(_DWORD *)(v4 + 21) = v33;
  if ( !v33 )
  {
    v67 = 0;
    strcpy(v71, "Decode Chip FT Program Version OOM\n");
    V_LOCK(*(_DWORD *)"rogram Version OOM\n");
    v50 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v50);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      478,
      100,
      v72);
    v33 = *(_DWORD **)(v4 + 21);
  }
  *v33 = *(_DWORD *)((char *)&v69[11] + 2);
  *(_BYTE *)(v4 + 25) = *(_BYTE *)(v4 + 25) & 0x80 | BYTE2(v69[12]) & 0x7F;
  *(_BYTE *)(v4 + 25) = *(_BYTE *)(v4 + 25) & 0x7F | (BYTE2(v69[12]) >> 7 << 7);
  *(_BYTE *)(v4 + 26) = HIBYTE(v69[12]);
  *(_DWORD *)(v4 + 27) = v69[13];
  v34 = calloc(3u, 1u);
  *(_DWORD *)(v4 + 31) = v34;
  if ( !v34 )
  {
    v67 = 0;
    strcpy(v71, "Decode Chip Technology OOM\n");
    V_LOCK(*(_DWORD *)"nology OOM\n");
    v55 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v55);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      502,
      100,
      v72);
    v34 = *(_WORD **)(v4 + 31);
  }
  *v34 = v69[14];
  *(_WORD *)(v4 + 35) = __rev16(HIWORD(v69[14]));
  *(_WORD *)(v4 + 37) = __rev16(LOWORD(v69[15]));
  v35 = (double)((unsigned __int16)(HIWORD(v69[15]) << 8) | HIBYTE(HIWORD(v69[15]))) / 100.0;
  *(float *)(v4 + 39) = v35;
  *(_DWORD *)(v4 + 43) = v69[16];
  v36 = calloc(9u, 1u);
  *(_DWORD *)(v4 + 47) = v36;
  if ( !v36 )
  {
    v67 = 0;
    strcpy(v71, "Decode miner_type OOM\n");
    V_LOCK(*(_DWORD *)"e OOM\n");
    v54 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v54);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      538,
      100,
      v72);
    v36 = *(_DWORD **)(v4 + 47);
  }
  v37 = v69[18];
  *v36 = v69[17];
  v36[1] = v37;
  *(_BYTE *)(*(_DWORD *)(v4 + 47) + 8) = 0;
  v38 = calloc(6u, 1u);
  *(_DWORD *)(v4 + 51) = v38;
  if ( !v38 )
  {
    strcpy(v71, "Decode reserved OOM\n");
    V_LOCK(*(_DWORD *)"OOM\n");
    v52 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v52);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_buf_to_layout",
      20,
      548,
      100,
      v72);
    v53 = *(_DWORD *)(v4 + 51);
    *(_DWORD *)v53 = v69[19];
    *(_BYTE *)(v53 + 4) = v69[20];
    *(_BYTE *)(*(_DWORD *)(v4 + 51) + 5) = 0;
    *(_BYTE *)(v4 + 55) = BYTE1(v69[20]);
    goto LABEL_10;
  }
  v39 = v69[20];
  *(_DWORD *)v38 = v69[19];
  v38[4] = v39;
  *(_BYTE *)(*(_DWORD *)(v4 + 51) + 5) = 0;
  *(_BYTE *)(v4 + 55) = BYTE1(v69[20]);
  if ( !v67 )
    goto LABEL_10;
  v40 = BM_CRC5(v69, 8 * (*(unsigned __int8 *)(v4 + 1) - 1));
  v41 = *(unsigned __int8 *)(v4 + 55);
  if ( v40 != v41 )
  {
    v42 = snprintf(
            v71,
            0x800u,
            "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n",
            v41,
            *(unsigned __int8 *)(v4 + 1),
            v40);
    V_LOCK(v42);
    v43 = logfmt_raw((int)v72, 0x1000u);
    V_UNLOCK(v43);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "_is_fixture_crc_pass",
      20,
      237,
      100,
      v72);
    goto LABEL_10;
  }
  *(_BYTE *)(a2 + a1 + 64) = 1;
  return 0;
}
