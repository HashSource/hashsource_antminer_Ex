int __fastcall eeprom_rewrite_one_chain(unsigned int a1, int a2, int a3, int a4)
{
  int v6; // r8
  int v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  unsigned __int8 v15; // r3
  unsigned __int8 v16; // lr
  unsigned __int8 v17; // r12
  __int16 v18; // r2
  int v19; // r1
  const void *v20; // r8
  const void *v21; // r7
  const void *v22; // r7
  const void *v23; // r7
  const void *v24; // r7
  int v25; // r0
  int v26; // r12
  int v27; // r1
  int v28; // r2
  int v29; // r3
  const void *v30; // r7
  int v31; // r1
  int v32; // r2
  int v33; // r3
  const void *v34; // r7
  int v35; // r7
  size_t v36; // r7
  int v37; // r3
  int v38; // r1
  bool v39; // zf
  char v40; // r10
  int v41; // r8
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r2
  int v46; // r1
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r2
  int v65; // r0
  int v66; // r0
  int v68; // [sp+10h] [bp-1C24h]
  int v69; // [sp+14h] [bp-1C20h]
  __int16 src; // [sp+2Ah] [bp-1C0Ah] BYREF
  __int16 v73; // [sp+2Ch] [bp-1C08h] BYREF
  __int16 v74; // [sp+2Eh] [bp-1C06h] BYREF
  unsigned __int8 s[256]; // [sp+30h] [bp-1C04h] BYREF
  unsigned __int8 v76[256]; // [sp+130h] [bp-1B04h] BYREF
  _WORD v77[128]; // [sp+230h] [bp-1A04h] BYREF
  _BYTE dest[256]; // [sp+330h] [bp-1904h] BYREF
  char v79[2048]; // [sp+430h] [bp-1804h] BYREF
  _DWORD v80[1025]; // [sp+C30h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v76, 0, sizeof(v76));
  memset(v77, 0, sizeof(v77));
  v6 = 3;
  v69 = *(_DWORD *)(a2 + 4 * a1);
  while ( 1 )
  {
    v7 = eeprom_read(a1, 0, (int)s, 256);
    if ( v7 )
    {
      v51 = snprintf(v79, 0x800u, "Read configuration fail for chain %d.", a1);
      V_LOCK(v51);
      v52 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v52);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_rewrite_one_chain",
        24,
        833,
        100,
        v80);
      return v7;
    }
    if ( !sub_A3040(s, v76) )
      break;
    v8 = snprintf(v79, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_rewrite_one_chain",
      24,
      847,
      100,
      v80);
    usleep(0x7A120u);
    if ( !--v6 )
      goto LABEL_6;
  }
  if ( !sub_A3318(v76, v69) || !sub_A404C((int)v76, (unsigned __int8 *)(v69 + 1), (unsigned __int8 *)(v69 + 56)) )
  {
LABEL_6:
    v10 = -1;
    *(_BYTE *)(a2 + a1 + 64) = 0;
    v11 = snprintf(v79, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK(v11);
    v12 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_rewrite_one_chain",
      24,
      864,
      100,
      v80);
    return v10;
  }
  v68 = a2 + a1;
  *(_BYTE *)(v68 + 64) = 1;
  v13 = snprintf(
          v79,
          0x800u,
          "chain[%d], modify voltage from %d to %d, freq from %d to %d",
          a1,
          *(unsigned __int16 *)(v69 + 35),
          *(unsigned __int16 *)(v69 + 35) + a3,
          *(unsigned __int16 *)(v69 + 37),
          *(unsigned __int16 *)(v69 + 37) + a4);
  V_LOCK(v13);
  v14 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "eeprom_rewrite_one_chain",
    24,
    870,
    100,
    v80);
  v15 = *(_BYTE *)v69;
  v16 = *(_BYTE *)(v69 + 2);
  v17 = *(_BYTE *)(v69 + 1);
  v18 = *(_WORD *)(v69 + 37) + a4;
  *(_WORD *)(v69 + 35) += a3;
  v76[2] = v16;
  *(_WORD *)(v69 + 37) = v18;
  v19 = *(unsigned __int8 *)(v69 + 2);
  v76[0] = v15;
  v76[1] = v17;
  if ( sub_A31B4((int)dest, v19) )
  {
    v20 = *(const void **)(v69 + 3);
    if ( !v20 )
    {
      strcpy(v79, "encode serial_number OOM");
      V_LOCK(*(_DWORD *)"mber OOM");
      v56 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v56);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        652,
        100,
        v80);
      v20 = *(const void **)(v69 + 3);
    }
    memcpy(&v76[dest[3]], v20, dest[31]);
    v21 = *(const void **)(v69 + 7);
    if ( !v21 )
    {
      strcpy(v79, "encode chip_die OOM");
      V_LOCK(*(_DWORD *)"encode chip_die OOM");
      v60 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v60);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        659,
        100,
        v80);
      v21 = *(const void **)(v69 + 7);
    }
    memcpy(&v76[dest[4]], v21, dest[32]);
    v22 = *(const void **)(v69 + 11);
    if ( !v22 )
    {
      strcpy(v79, "encode chip_marking OOM");
      V_LOCK(*(_DWORD *)"ing OOM");
      v59 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v59);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        666,
        100,
        v80);
      v22 = *(const void **)(v69 + 11);
    }
    memcpy(&v76[dest[5]], v22, dest[33]);
    v76[dest[6]] = *(_BYTE *)(v69 + 15);
    v23 = *(const void **)(v69 + 16);
    if ( !v23 )
    {
      strcpy(v79, "encode Chip FT Program Version OOM");
      V_LOCK(*(_DWORD *)"rogram Version OOM");
      v58 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v58);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        676,
        100,
        v80);
      v23 = *(const void **)(v69 + 16);
    }
    if ( (unsigned int)*(unsigned __int8 *)(v69 + 2) - 1 <= 1 )
    {
      memset(v80, 0, 16);
      _isoc99_sscanf(v23, "F%dV%02dB%dC%d", v80, (char *)v80 + 1, (char *)v80 + 2, (char *)v80 + 3);
      memcpy(&v76[dest[7]], v80, dest[35]);
    }
    else
    {
      memcpy(&v76[dest[7]], v23, dest[35]);
    }
    v76[dest[8]] = *(_BYTE *)(v69 + 20);
    v24 = *(const void **)(v69 + 21);
    if ( !v24 )
    {
      strcpy(v79, "Decode asic_sensor_addr OOM");
      V_LOCK(*(_DWORD *)"or_addr OOM");
      v55 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v55);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        696,
        100,
        v80);
      v24 = *(const void **)(v69 + 21);
    }
    memcpy(&v76[dest[9]], v24, dest[37]);
    v25 = dest[11];
    v26 = dest[12];
    v76[dest[10]] = *(_BYTE *)(v69 + 25);
    v27 = dest[13];
    v28 = dest[14];
    v76[v25] = *(_BYTE *)(v69 + 26);
    v76[v26] = *(_BYTE *)(v69 + 27);
    v29 = dest[15];
    v76[v27] = *(_BYTE *)(v69 + 28);
    v76[v28] = *(_BYTE *)(v69 + 29);
    v76[v29] = *(_BYTE *)(v69 + 30);
    v30 = *(const void **)(v69 + 31);
    if ( !v30 )
    {
      strcpy(v79, "Decode Chip Technology OOM");
      V_LOCK(*(_DWORD *)"nology OOM");
      v54 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v54);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        718,
        100,
        v80);
      v30 = *(const void **)(v69 + 31);
    }
    memcpy(&v76[dest[16]], v30, dest[44]);
    src = HIBYTE(*(_WORD *)(v69 + 35)) | (*(_WORD *)(v69 + 35) << 8);
    memcpy(&v76[dest[17]], &src, dest[45]);
    v73 = HIBYTE(*(_WORD *)(v69 + 37)) | (*(_WORD *)(v69 + 37) << 8);
    memcpy(&v76[dest[18]], &v73, dest[46]);
    v74 = (unsigned int)(float)(*(float *)(v69 + 39) * 100.0);
    memcpy(&v76[dest[19]], &v74, dest[47]);
    v31 = dest[21];
    v32 = dest[22];
    v76[dest[20]] = *(_BYTE *)(v69 + 43);
    v33 = dest[23];
    v76[v31] = *(_BYTE *)(v69 + 44);
    v76[v32] = *(_BYTE *)(v69 + 45);
    v76[v33] = *(_BYTE *)(v69 + 46);
    v34 = *(const void **)(v69 + 47);
    if ( !v34 )
    {
      strcpy(v79, "Decode miner_type OOM");
      V_LOCK(*(_DWORD *)"e OOM");
      v57 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v57);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_layout_to_buf",
        20,
        750,
        100,
        v80);
      v34 = *(const void **)(v69 + 47);
    }
    memcpy(&v76[dest[24]], v34, dest[52]);
    v35 = dest[27];
    v76[dest[25]] = *(_BYTE *)(v69 + 51);
    v76[v35] = BM_CRC5(v76, 8 * (*(unsigned __int8 *)(v69 + 1) - 1));
  }
  memset(dest, 0, sizeof(dest));
  v36 = v76[1] - 2;
  v37 = v76[0] & 0xF;
  v38 = v76[0] >> 4;
  if ( (unsigned __int8)(v76[1] - 2) > 0xFDu )
  {
    v10 = -1;
    v65 = snprintf(
            v79,
            0x800u,
            "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
            v76[1],
            v76[1] - 2,
            v76[1]);
    V_LOCK(v65);
    v66 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v66);
    v63 = g_zc;
    v64 = 307;
    goto LABEL_49;
  }
  v39 = v38 == 1;
  if ( v38 == 1 )
    v39 = v37 == 1;
  v40 = !v39;
  if ( v39 )
  {
    memcpy(dest, &v76[2], v76[1] - 2);
    data_enc(dest, v36, 1);
    v41 = 3;
    v77[0] = *(_WORD *)v76;
    memcpy(&v77[1], dest, v36);
    while ( 1 )
    {
      eeprom_write(a1, 0, (unsigned __int8 *)v77, *(unsigned __int8 *)(v69 + 1));
      memset(s, 0, sizeof(s));
      v10 = eeprom_read(a1, 0, (int)s, 256);
      if ( v10 )
      {
        v47 = snprintf(v79, 0x800u, "Read configuration fail for chain %d.", a1);
        V_LOCK(v47);
        v48 = logfmt_raw((int)v80, 0x1000u);
        V_UNLOCK(v48);
        v44 = g_zc;
        v45 = 888;
        LOWORD(v46) = 29884;
      }
      else
      {
        if ( sub_A3040(s, v76) )
        {
          v49 = snprintf(v79, 0x800u, "Data decode fail for chain %d.", a1);
          V_LOCK(v49);
          v50 = logfmt_raw((int)v80, 0x1000u);
          V_UNLOCK(v50);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
            169,
            "eeprom_rewrite_one_chain",
            24,
            902,
            100,
            v80);
          usleep(0x7A120u);
          goto LABEL_43;
        }
        if ( sub_A3318(v76, v69) && sub_A404C((int)v76, (unsigned __int8 *)(v69 + 1), (unsigned __int8 *)(v69 + 56)) )
        {
          *(_BYTE *)(v68 + 64) = 1;
          return v10;
        }
        v10 = -1;
        *(_BYTE *)(v68 + 64) = v40;
        v42 = snprintf(v79, 0x800u, "Data load fail for chain %d.", a1);
        V_LOCK(v42);
        v43 = logfmt_raw((int)v80, 0x1000u);
        V_UNLOCK(v43);
        v44 = g_zc;
        v45 = 917;
        LOWORD(v46) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroo"
                                        "t/tmp/debug/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c";
      }
      HIWORD(v46) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/"
                                  "debug/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
      zlog(v44, v46, 169, "eeprom_rewrite_one_chain", 24, v45, 100, v80);
LABEL_43:
      if ( !--v41 )
        return v10;
    }
  }
  v10 = -1;
  v61 = snprintf(
          v79,
          0x800u,
          "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
          v37,
          v76[0] >> 4);
  V_LOCK(v61);
  v62 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v62);
  v63 = g_zc;
  v64 = 313;
LABEL_49:
  zlog(
    v63,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    169,
    "encode_eeprom_fixture_info",
    26,
    v64,
    100,
    v80);
  return v10;
}
