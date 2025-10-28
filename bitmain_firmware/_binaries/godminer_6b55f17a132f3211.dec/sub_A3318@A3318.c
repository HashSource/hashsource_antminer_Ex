int __fastcall sub_A3318(_BYTE *a1, int a2)
{
  char v4; // r3
  int v5; // r1
  int v6; // r7
  size_t v8; // r8
  void *v9; // r6
  size_t v10; // r8
  void *v11; // r6
  size_t v12; // r8
  void *v13; // r6
  int v14; // r3
  bool v15; // cf
  size_t v16; // r9
  void *v17; // r8
  int v18; // r3
  size_t v19; // r10
  char v20; // r2
  size_t v21; // r0
  void *v22; // r8
  int v23; // r3
  int v24; // r12
  size_t v25; // r10
  char v26; // r2
  int v27; // r0
  char v28; // r2
  int v29; // r3
  int v30; // r2
  int v31; // r3
  void *v32; // r8
  size_t v33; // r2
  _BYTE *v34; // r1
  size_t v35; // r2
  _BYTE *v36; // r1
  int v37; // r6
  int v38; // lr
  int v39; // r12
  int v40; // r2
  size_t v41; // r8
  size_t v42; // r0
  float v43; // s12
  void *v44; // r6
  int v45; // r3
  size_t v46; // r11
  size_t v47; // r10
  char *v48; // r0
  char *v49; // r8
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  unsigned __int16 v58; // [sp+14h] [bp-1850h] BYREF
  unsigned __int16 v59; // [sp+16h] [bp-184Eh] BYREF
  _WORD v60[8]; // [sp+18h] [bp-184Ch] BYREF
  _BYTE v61[7]; // [sp+28h] [bp-183Ch] BYREF
  unsigned __int8 v62; // [sp+2Fh] [bp-1835h]
  unsigned __int8 v63; // [sp+30h] [bp-1834h]
  unsigned __int8 v64; // [sp+31h] [bp-1833h]
  unsigned __int8 v65; // [sp+32h] [bp-1832h]
  unsigned __int8 v66; // [sp+33h] [bp-1831h]
  unsigned __int8 v67; // [sp+34h] [bp-1830h]
  unsigned __int8 v68; // [sp+35h] [bp-182Fh]
  unsigned __int8 v69; // [sp+36h] [bp-182Eh]
  unsigned __int8 v70; // [sp+37h] [bp-182Dh]
  unsigned __int8 v71; // [sp+38h] [bp-182Ch]
  unsigned __int8 v72; // [sp+39h] [bp-182Bh]
  unsigned __int8 v73; // [sp+3Ah] [bp-182Ah]
  unsigned __int8 v74; // [sp+3Bh] [bp-1829h]
  unsigned __int8 v75; // [sp+3Ch] [bp-1828h]
  unsigned __int8 v76; // [sp+3Dh] [bp-1827h]
  unsigned __int8 v77; // [sp+3Eh] [bp-1826h]
  unsigned __int8 v78; // [sp+3Fh] [bp-1825h]
  unsigned __int8 v79; // [sp+40h] [bp-1824h]
  unsigned __int8 v80; // [sp+41h] [bp-1823h]
  unsigned __int8 v81; // [sp+43h] [bp-1821h]
  unsigned __int8 v82; // [sp+47h] [bp-181Dh]
  unsigned __int8 v83; // [sp+48h] [bp-181Ch]
  unsigned __int8 v84; // [sp+49h] [bp-181Bh]
  unsigned __int8 v85; // [sp+4Bh] [bp-1819h]
  unsigned __int8 v86; // [sp+4Dh] [bp-1817h]
  unsigned __int8 v87; // [sp+54h] [bp-1810h]
  unsigned __int8 n; // [sp+55h] [bp-180Fh]
  unsigned __int8 n_1; // [sp+56h] [bp-180Eh]
  unsigned __int8 n_2; // [sp+57h] [bp-180Dh]
  unsigned __int8 v91; // [sp+5Ch] [bp-1808h]
  char v92[2048]; // [sp+60h] [bp-1804h] BYREF
  _BYTE v93[4100]; // [sp+860h] [bp-1004h] BYREF

  v4 = *(_BYTE *)a2 & 0xF | (16 * (*a1 >> 4));
  *(_BYTE *)a2 = v4;
  *(_BYTE *)a2 = v4 & 0xF0 | *a1 & 0xF;
  *(_BYTE *)(a2 + 1) = a1[1];
  v5 = (unsigned __int8)a1[2];
  *(_BYTE *)(a2 + 2) = v5;
  v6 = sub_A31B4((int)v61, v5);
  if ( !v6 )
    return 0;
  v8 = v82;
  v9 = calloc(v82 + 1, 1u);
  *(_DWORD *)(a2 + 3) = v9;
  if ( !v9 )
  {
    v6 = 0;
    strcpy(v92, "Decode SN OOM");
    V_LOCK(*(_DWORD *)"Decode SN OOM");
    v52 = logfmt_raw((int)v93, 0x1000u);
    V_UNLOCK(v52);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      495,
      100,
      v93);
    v9 = *(void **)(a2 + 3);
    v8 = v82;
  }
  memcpy(v9, &a1[v61[3]], v8);
  v10 = v83;
  v11 = calloc(v83 + 1, 1u);
  *(_DWORD *)(a2 + 7) = v11;
  if ( !v11 )
  {
    v6 = 0;
    strcpy(v92, "Decode Chip Die OOM");
    V_LOCK(*(_DWORD *)"Decode Chip Die OOM");
    v51 = logfmt_raw((int)v93, 0x1000u);
    V_UNLOCK(v51);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      504,
      100,
      v93);
    v11 = *(void **)(a2 + 7);
    v10 = v83;
  }
  memcpy(v11, &a1[v61[4]], v10);
  v12 = v84;
  v13 = calloc(v84 + 1, 1u);
  *(_DWORD *)(a2 + 11) = v13;
  if ( !v13 )
  {
    v6 = 0;
    strcpy(v92, "Decode Chip Marking OOM");
    V_LOCK(*(_DWORD *)"ing OOM");
    v50 = logfmt_raw((int)v93, 0x1000u);
    V_UNLOCK(v50);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      513,
      100,
      v93);
    v13 = *(void **)(a2 + 11);
    v12 = v84;
  }
  memcpy(v13, &a1[v61[5]], v12);
  v14 = *(unsigned __int8 *)(a2 + 2) - 1;
  v15 = *(_BYTE *)(a2 + 2) != 1;
  *(_BYTE *)(a2 + 15) = a1[v61[6]];
  if ( v14 != 1 && v15 )
  {
    v16 = v85;
    v17 = calloc(v85 + 1, 1u);
    *(_DWORD *)(a2 + 16) = v17;
    if ( !v17 )
    {
      v6 = 0;
      strcpy(v92, "Decode Chip FT Program Version OOM");
      V_LOCK(*(_DWORD *)"rogram Version OOM");
      v56 = logfmt_raw((int)v93, 0x1000u);
      V_UNLOCK(v56);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_buf_to_layout",
        20,
        539,
        100,
        v93);
      v17 = *(void **)(a2 + 16);
      v16 = v85;
    }
    memcpy(v17, &a1[v62], v16);
  }
  else
  {
    v46 = v85;
    v47 = v85 + 6;
    memset(v60, 0, sizeof(v60));
    v48 = (char *)calloc(v47, 1u);
    v49 = v48;
    *(_DWORD *)(a2 + 16) = v48;
    if ( !v48 )
    {
      v6 = 0;
      strcpy(v92, "Decode Chip FT Program Version OOM");
      V_LOCK(*(_DWORD *)"rogram Version OOM");
      v57 = logfmt_raw((int)v93, 0x1000u);
      V_UNLOCK(v57);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        169,
        "eeprom_buf_to_layout",
        20,
        528,
        100,
        v93);
      v46 = v85;
      v49 = *(char **)(a2 + 16);
      v47 = v85 + 6;
    }
    memcpy(v60, &a1[v62], v46);
    snprintf(v49, v47, "F%dV%02dB%dC%d", LOBYTE(v60[0]), HIBYTE(v60[0]), LOBYTE(v60[1]), HIBYTE(v60[1]));
  }
  v18 = v63;
  v19 = v86;
  v20 = *(_BYTE *)(a2 + 20) & 0x80 | a1[v63] & 0x7F;
  v21 = v86 + 1;
  *(_BYTE *)(a2 + 20) = v20;
  *(_BYTE *)(a2 + 20) = v20 & 0x7F | (a1[v18] >> 7 << 7);
  v22 = calloc(v21, 1u);
  *(_DWORD *)(a2 + 21) = v22;
  if ( !v22 )
  {
    v6 = 0;
    strcpy(v92, "Decode Chip FT Program Version OOM");
    V_LOCK(*(_DWORD *)"rogram Version OOM");
    v55 = logfmt_raw((int)v93, 0x1000u);
    V_UNLOCK(v55);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      553,
      100,
      v93);
    v22 = *(void **)(a2 + 21);
    v19 = v86;
  }
  memcpy(v22, &a1[v64], v19);
  v23 = v65;
  v24 = v66;
  v25 = v87;
  v26 = *(_BYTE *)(a2 + 25) & 0x80 | a1[v65] & 0x7F;
  v27 = v67;
  *(_BYTE *)(a2 + 25) = v26;
  v28 = v26 & 0x7F | (a1[v23] >> 7 << 7);
  v29 = v68;
  *(_BYTE *)(a2 + 25) = v28;
  *(_BYTE *)(a2 + 26) = a1[v24];
  v30 = v69;
  *(_BYTE *)(a2 + 27) = a1[v27];
  LOBYTE(v27) = a1[v29];
  v31 = v70;
  *(_BYTE *)(a2 + 28) = v27;
  *(_BYTE *)(a2 + 29) = a1[v30];
  *(_BYTE *)(a2 + 30) = a1[v31];
  v32 = calloc(v25 + 1, 1u);
  *(_DWORD *)(a2 + 31) = v32;
  if ( !v32 )
  {
    v6 = 0;
    strcpy(v92, "Decode Chip Technology OOM");
    V_LOCK(*(_DWORD *)"nology OOM");
    v54 = logfmt_raw((int)v93, 0x1000u);
    V_UNLOCK(v54);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      577,
      100,
      v93);
    v32 = *(void **)(a2 + 31);
    v25 = v87;
  }
  memcpy(v32, &a1[v71], v25);
  memcpy(&v58, &a1[v72], n);
  v33 = n_1;
  v34 = &a1[v73];
  *(_WORD *)(a2 + 35) = HIBYTE(v58) | (v58 << 8);
  memcpy(&v59, v34, v33);
  v35 = n_2;
  v36 = &a1[v74];
  *(_WORD *)(a2 + 37) = HIBYTE(v59) | (v59 << 8);
  memcpy(v60, v36, v35);
  v37 = v75;
  v38 = v76;
  v39 = v77;
  v40 = v78;
  v41 = v91;
  v42 = v91 + 1;
  v43 = (double)(unsigned __int16)__rev16(v60[0]) / 100.0;
  *(float *)(a2 + 39) = v43;
  *(_BYTE *)(a2 + 43) = a1[v37];
  *(_BYTE *)(a2 + 44) = a1[v38];
  *(_BYTE *)(a2 + 45) = a1[v39];
  *(_BYTE *)(a2 + 46) = a1[v40];
  v44 = calloc(v42, 1u);
  *(_DWORD *)(a2 + 47) = v44;
  if ( !v44 )
  {
    v6 = 0;
    strcpy(v92, "Decode miner_type OOM");
    V_LOCK(*(_DWORD *)"e OOM");
    v53 = logfmt_raw((int)v93, 0x1000u);
    V_UNLOCK(v53);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      169,
      "eeprom_buf_to_layout",
      20,
      613,
      100,
      v93);
    v44 = *(void **)(a2 + 47);
    v41 = v91;
  }
  memcpy(v44, &a1[v79], v41);
  v45 = v81;
  *(_BYTE *)(a2 + 51) = a1[v80];
  *(_BYTE *)(a2 + 56) = a1[v45];
  return v6;
}
