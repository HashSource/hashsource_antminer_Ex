int __fastcall eeprom_rewrite_one_chain(unsigned int a1, int a2, int a3, int a4)
{
  int v6; // r10
  int v7; // r8
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r8
  int v12; // r0
  unsigned __int8 *v13; // r5
  int v14; // r0
  int v15; // r0
  unsigned __int8 v16; // r3
  unsigned __int8 v17; // lr
  unsigned __int8 v18; // r2
  __int16 v19; // r1
  int v20; // r1
  const void *v21; // r10
  const void *v22; // r8
  const void *v23; // r8
  const void *v24; // r8
  const void *v25; // r8
  int v26; // r12
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r3
  const void *v31; // r8
  int v32; // r1
  int v33; // r2
  int v34; // r3
  const void *v35; // r8
  int v36; // r8
  size_t v37; // r8
  int v38; // r3
  int v39; // r1
  bool v40; // zf
  char v41; // r12
  int v42; // r10
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r2
  int v47; // r1
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r2
  int v66; // r0
  int v67; // r0
  int v69; // [sp+10h] [bp-1C1Ch]
  int v70; // [sp+14h] [bp-1C18h]
  char v71; // [sp+14h] [bp-1C18h]
  __int16 src; // [sp+22h] [bp-1C0Ah] BYREF
  __int16 v75; // [sp+24h] [bp-1C08h] BYREF
  __int16 v76; // [sp+26h] [bp-1C06h] BYREF
  unsigned __int8 s[256]; // [sp+28h] [bp-1C04h] BYREF
  unsigned __int8 v78[256]; // [sp+128h] [bp-1B04h] BYREF
  _WORD v79[128]; // [sp+228h] [bp-1A04h] BYREF
  _BYTE dest[256]; // [sp+328h] [bp-1904h] BYREF
  char v81[2040]; // [sp+428h] [bp-1804h] BYREF
  _DWORD v82[1025]; // [sp+C28h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v78, 0, sizeof(v78));
  memset(v79, 0, sizeof(v79));
  v70 = *(_DWORD *)(a2 + 4 * a1);
  v6 = 3;
  while ( 1 )
  {
    v7 = eeprom_read(a1, 0, (int)s, 256);
    if ( v7 )
    {
      v52 = snprintf(v81, 0x800u, "Read configuration fail for chain %d.", a1);
      V_LOCK(v52);
      v53 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v53);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_rewrite_one_chain",
        24,
        874,
        100,
        v82);
      return v7;
    }
    if ( !eeprom_decode_fixture_info_0(s, v78) )
      break;
    v8 = snprintf(v81, 0x800u, "Data decode fail for chain %d.", a1);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v82, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "eeprom_rewrite_one_chain",
      24,
      888,
      100,
      v82);
    usleep(0x7A120u);
    if ( !--v6 )
      goto LABEL_6;
  }
  v13 = (unsigned __int8 *)v70;
  if ( !sub_AF61C(v78, v70) || !sub_AE560((int)v78, (unsigned __int8 *)v70) )
  {
LABEL_6:
    *(_BYTE *)(a2 + a1 + 64) = 0;
    v10 = snprintf(v81, 0x800u, "Data load fail for chain %d.", a1);
    V_LOCK(v10);
    v11 = -1;
    v12 = logfmt_raw((int)v82, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "eeprom_rewrite_one_chain",
      24,
      905,
      100,
      v82);
    return v11;
  }
  v69 = a2 + a1;
  *(_BYTE *)(v69 + 64) = 1;
  v14 = snprintf(
          v81,
          0x800u,
          "chain[%d], modify voltage from %d to %d, freq from %d to %d",
          a1,
          *(unsigned __int16 *)(v70 + 35),
          *(unsigned __int16 *)(v70 + 35) + a3,
          *(unsigned __int16 *)(v70 + 37),
          *(unsigned __int16 *)(v70 + 37) + a4);
  V_LOCK(v14);
  v15 = logfmt_raw((int)v82, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    173,
    "eeprom_rewrite_one_chain",
    24,
    911,
    100,
    v82);
  v16 = *(_BYTE *)v70;
  v17 = *(_BYTE *)(v70 + 2);
  v18 = *(_BYTE *)(v70 + 1);
  v19 = *(_WORD *)(v70 + 37) + a4;
  *(_WORD *)(v70 + 35) += a3;
  *(_WORD *)(v70 + 37) = v19;
  v78[2] = v17;
  v78[0] = v16;
  v20 = *(unsigned __int8 *)(v70 + 2);
  v78[1] = v18;
  if ( init_eeprom_fmt_info(dest, v20) )
  {
    v21 = *(const void **)(v70 + 3);
    if ( !v21 )
    {
      strcpy(v81, "encode serial_number OOM");
      V_LOCK(*(_DWORD *)"mber OOM");
      v57 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v57);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_layout_to_buf",
        20,
        693,
        100,
        v82);
      v21 = *(const void **)(v70 + 3);
    }
    memcpy(&v78[dest[3]], v21, dest[36]);
    v22 = *(const void **)(v70 + 7);
    if ( !v22 )
    {
      strcpy(v81, "encode chip_die OOM");
      V_LOCK(*(_DWORD *)"encode chip_die OOM");
      v61 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v61);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_layout_to_buf",
        20,
        700,
        100,
        v82);
      v22 = *(const void **)(v70 + 7);
    }
    memcpy(&v78[dest[4]], v22, dest[37]);
    v23 = *(const void **)(v70 + 11);
    if ( !v23 )
    {
      strcpy(v81, "encode chip_marking OOM");
      V_LOCK(*(_DWORD *)"ing OOM");
      v60 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v60);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_layout_to_buf",
        20,
        707,
        100,
        v82);
      v23 = *(const void **)(v70 + 11);
    }
    memcpy(&v78[dest[5]], v23, dest[38]);
    v78[dest[6]] = *(_BYTE *)(v70 + 15);
    v24 = *(const void **)(v70 + 16);
    if ( !v24 )
    {
      strcpy(v81, "encode Chip FT Program Version OOM");
      V_LOCK(*(_DWORD *)"rogram Version OOM");
      v59 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v59);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_layout_to_buf",
        20,
        717,
        100,
        v82);
      v24 = *(const void **)(v70 + 16);
    }
    if ( (unsigned int)*(unsigned __int8 *)(v70 + 2) - 1 <= 1 )
    {
      memset(v82, 0, 16);
      _isoc99_sscanf(v24, "F%dV%02dB%dC%d", v82, (char *)v82 + 1, (char *)v82 + 2, (char *)v82 + 3);
      memcpy(&v78[dest[7]], v82, dest[40]);
    }
    else
    {
      memcpy(&v78[dest[7]], v24, dest[40]);
    }
    v78[dest[8]] = *(_BYTE *)(v70 + 20);
    v25 = *(const void **)(v70 + 21);
    if ( !v25 )
    {
      strcpy(v81, "Decode asic_sensor_addr OOM");
      V_LOCK(*(_DWORD *)"or_addr OOM");
      v56 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v56);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_layout_to_buf",
        20,
        737,
        100,
        v82);
      v25 = *(const void **)(v70 + 21);
    }
    memcpy(&v78[dest[9]], v25, dest[42]);
    v26 = dest[11];
    v27 = dest[12];
    v78[dest[10]] = *(_BYTE *)(v70 + 25);
    v28 = dest[13];
    v29 = dest[14];
    v78[v26] = *(_BYTE *)(v70 + 26);
    v78[v27] = *(_BYTE *)(v70 + 27);
    v30 = dest[15];
    v78[v28] = *(_BYTE *)(v70 + 28);
    v78[v29] = *(_BYTE *)(v70 + 29);
    v78[v30] = *(_BYTE *)(v70 + 30);
    v31 = *(const void **)(v70 + 31);
    if ( !v31 )
    {
      strcpy(v81, "Decode Chip Technology OOM");
      V_LOCK(*(_DWORD *)"nology OOM");
      v55 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v55);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_layout_to_buf",
        20,
        759,
        100,
        v82);
      v31 = *(const void **)(v70 + 31);
    }
    memcpy(&v78[dest[16]], v31, dest[49]);
    src = HIBYTE(*(_WORD *)(v70 + 35)) | (*(_WORD *)(v70 + 35) << 8);
    memcpy(&v78[dest[17]], &src, dest[50]);
    v75 = HIBYTE(*(_WORD *)(v70 + 37)) | (*(_WORD *)(v70 + 37) << 8);
    memcpy(&v78[dest[18]], &v75, dest[51]);
    v76 = (unsigned int)(float)(*(float *)(v70 + 39) * 100.0);
    memcpy(&v78[dest[19]], &v76, dest[52]);
    v32 = dest[21];
    v33 = dest[22];
    v78[dest[20]] = *(_BYTE *)(v70 + 43);
    v34 = dest[23];
    v78[v32] = *(_BYTE *)(v70 + 44);
    v78[v33] = *(_BYTE *)(v70 + 45);
    v78[v34] = *(_BYTE *)(v70 + 46);
    v35 = *(const void **)(v70 + 47);
    if ( !v35 )
    {
      strcpy(v81, "Decode miner_type OOM");
      V_LOCK(*(_DWORD *)"e OOM");
      v58 = logfmt_raw((int)v82, 0x1000u);
      V_UNLOCK(v58);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_layout_to_buf",
        20,
        791,
        100,
        v82);
      v35 = *(const void **)(v70 + 47);
    }
    memcpy(&v78[dest[24]], v35, dest[57]);
    v36 = dest[27];
    v78[dest[25]] = *(_BYTE *)(v70 + 51);
    v78[v36] = BM_CRC5(v78, 8 * (*(unsigned __int8 *)(v70 + 1) - 1));
  }
  memset(dest, 0, sizeof(dest));
  v37 = v78[1] - 2;
  v38 = v78[0] & 0xF;
  v39 = v78[0] >> 4;
  if ( (unsigned __int8)(v78[1] - 2) > 0xFDu )
  {
    v66 = snprintf(
            v81,
            0x800u,
            "EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d",
            v78[1],
            v78[1] - 2,
            v78[1]);
    V_LOCK(v66);
    v11 = -1;
    v67 = logfmt_raw((int)v82, 0x1000u);
    V_UNLOCK(v67);
    v64 = g_zc;
    v65 = 320;
    goto LABEL_49;
  }
  v40 = v39 == 1;
  if ( v39 == 1 )
    v40 = v38 == 1;
  v41 = !v40;
  if ( v40 )
  {
    v71 = v41;
    memcpy(dest, &v78[2], v78[1] - 2);
    data_enc(dest, v37, 1);
    v42 = 3;
    v79[0] = *(_WORD *)v78;
    memcpy(&v79[1], dest, v37);
    while ( 1 )
    {
      eeprom_write(a1, 0, (unsigned __int8 *)v79, v13[1]);
      memset(s, 0, sizeof(s));
      v11 = eeprom_read(a1, 0, (int)s, 256);
      if ( v11 )
      {
        v48 = snprintf(v81, 0x800u, "Read configuration fail for chain %d.", a1);
        V_LOCK(v48);
        v49 = logfmt_raw((int)v82, 0x1000u);
        V_UNLOCK(v49);
        v45 = g_zc;
        v46 = 929;
        LOWORD(v47) = 21380;
      }
      else
      {
        if ( eeprom_decode_fixture_info_0(s, v78) )
        {
          v50 = snprintf(v81, 0x800u, "Data decode fail for chain %d.", a1);
          V_LOCK(v50);
          v51 = logfmt_raw((int)v82, 0x1000u);
          V_UNLOCK(v51);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
            173,
            "eeprom_rewrite_one_chain",
            24,
            943,
            100,
            v82);
          usleep(0x7A120u);
          goto LABEL_43;
        }
        if ( sub_AF61C(v78, (int)v13) && sub_AE560((int)v78, v13) )
        {
          *(_BYTE *)(v69 + 64) = 1;
          return v11;
        }
        v11 = -1;
        *(_BYTE *)(v69 + 64) = v71;
        v43 = snprintf(v81, 0x800u, "Data load fail for chain %d.", a1);
        V_LOCK(v43);
        v44 = logfmt_raw((int)v82, 0x1000u);
        V_UNLOCK(v44);
        v45 = g_zc;
        v46 = 958;
        LOWORD(v47) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildr"
                                        "oot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c";
      }
      HIWORD(v47) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tm"
                                  "p/release/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
      zlog(v45, v47, 173, "eeprom_rewrite_one_chain", 24, v46, 100, v82);
LABEL_43:
      if ( !--v42 )
        return v11;
    }
  }
  v62 = snprintf(
          v81,
          0x800u,
          "EEPROM eeprom_key_version or eeprom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d",
          v38,
          v78[0] >> 4);
  V_LOCK(v62);
  v11 = -1;
  v63 = logfmt_raw((int)v82, 0x1000u);
  V_UNLOCK(v63);
  v64 = g_zc;
  v65 = 326;
LABEL_49:
  zlog(
    v64,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    173,
    "encode_eeprom_fixture_info",
    26,
    v65,
    100,
    v82);
  return v11;
}
