int __fastcall sub_AF60C(_BYTE *a1, int a2)
{
  char v4; // r3
  int v5; // r1
  int inited; // r6
  size_t v8; // r8
  void *v9; // r7
  size_t v10; // r8
  void *v11; // r7
  size_t v12; // r8
  void *v13; // r7
  size_t v14; // r9
  int v15; // r3
  bool v16; // cf
  void *v17; // r7
  int v18; // r3
  size_t v19; // r9
  char v20; // r2
  size_t v21; // r0
  void *v22; // r7
  int v23; // r3
  int v24; // r12
  size_t v25; // r9
  char v26; // r2
  int v27; // r0
  char v28; // r2
  int v29; // r3
  int v30; // r2
  int v31; // r3
  void *v32; // r7
  size_t v33; // r2
  _BYTE *v34; // r1
  size_t v35; // r2
  _BYTE *v36; // r1
  int v37; // r7
  int v38; // lr
  int v39; // r12
  int v40; // r2
  size_t v41; // r8
  size_t v42; // r0
  float v43; // s12
  void *v44; // r7
  int v45; // r3
  int v46; // r1
  size_t v47; // r10
  char *v48; // r0
  char *v49; // r7
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  unsigned __int16 dest; // [sp+14h] [bp-1854h] BYREF
  unsigned __int16 v59; // [sp+16h] [bp-1852h] BYREF
  _DWORD v60[4]; // [sp+18h] [bp-1850h] BYREF
  _BYTE v61[7]; // [sp+28h] [bp-1840h] BYREF
  unsigned __int8 v62; // [sp+2Fh] [bp-1839h]
  unsigned __int8 v63; // [sp+30h] [bp-1838h]
  unsigned __int8 v64; // [sp+31h] [bp-1837h]
  unsigned __int8 v65; // [sp+32h] [bp-1836h]
  unsigned __int8 v66; // [sp+33h] [bp-1835h]
  unsigned __int8 v67; // [sp+34h] [bp-1834h]
  unsigned __int8 v68; // [sp+35h] [bp-1833h]
  unsigned __int8 v69; // [sp+36h] [bp-1832h]
  unsigned __int8 v70; // [sp+37h] [bp-1831h]
  unsigned __int8 v71; // [sp+38h] [bp-1830h]
  unsigned __int8 v72; // [sp+39h] [bp-182Fh]
  unsigned __int8 v73; // [sp+3Ah] [bp-182Eh]
  unsigned __int8 v74; // [sp+3Bh] [bp-182Dh]
  unsigned __int8 v75; // [sp+3Ch] [bp-182Ch]
  unsigned __int8 v76; // [sp+3Dh] [bp-182Bh]
  unsigned __int8 v77; // [sp+3Eh] [bp-182Ah]
  unsigned __int8 v78; // [sp+3Fh] [bp-1829h]
  unsigned __int8 v79; // [sp+40h] [bp-1828h]
  unsigned __int8 v80; // [sp+41h] [bp-1827h]
  unsigned __int8 v81; // [sp+43h] [bp-1825h]
  unsigned __int8 v82; // [sp+44h] [bp-1824h]
  unsigned __int8 v83; // [sp+45h] [bp-1823h]
  unsigned __int8 v84; // [sp+46h] [bp-1822h]
  unsigned __int8 v85; // [sp+48h] [bp-1820h]
  unsigned __int8 v86; // [sp+4Ch] [bp-181Ch]
  unsigned __int8 v87; // [sp+4Dh] [bp-181Bh]
  unsigned __int8 v88; // [sp+4Eh] [bp-181Ah]
  unsigned __int8 v89; // [sp+50h] [bp-1818h]
  unsigned __int8 v90; // [sp+52h] [bp-1816h]
  unsigned __int8 v91; // [sp+59h] [bp-180Fh]
  unsigned __int8 n; // [sp+5Ah] [bp-180Eh]
  unsigned __int8 n_1; // [sp+5Bh] [bp-180Dh]
  unsigned __int8 n_2; // [sp+5Ch] [bp-180Ch]
  unsigned __int8 v95; // [sp+61h] [bp-1807h]
  unsigned __int8 v96; // [sp+63h] [bp-1805h]
  unsigned __int8 v97; // [sp+64h] [bp-1804h]
  unsigned __int8 v98; // [sp+65h] [bp-1803h]
  char v99[2040]; // [sp+68h] [bp-1800h] BYREF
  _BYTE v100[4096]; // [sp+868h] [bp-1000h] BYREF

  v4 = *(_BYTE *)a2 & 0xF | (16 * (*a1 >> 4));
  *(_BYTE *)a2 = v4;
  *(_BYTE *)a2 = v4 & 0xF0 | *a1 & 0xF;
  *(_BYTE *)(a2 + 1) = a1[1];
  v5 = (unsigned __int8)a1[2];
  *(_BYTE *)(a2 + 2) = v5;
  inited = init_eeprom_fmt_info(v61, v5);
  if ( inited )
  {
    v8 = v86;
    v9 = calloc(v86 + 1, 1u);
    *(_DWORD *)(a2 + 3) = v9;
    if ( !v9 )
    {
      inited = 0;
      strcpy(v99, "Decode SN OOM");
      V_LOCK(*(_DWORD *)"Decode SN OOM");
      v55 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v55);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_buf_to_layout",
        20,
        523,
        100,
        v100);
      v9 = *(void **)(a2 + 3);
      v8 = v86;
    }
    memcpy(v9, &a1[v61[3]], v8);
    v10 = v87;
    v11 = calloc(v87 + 1, 1u);
    *(_DWORD *)(a2 + 7) = v11;
    if ( !v11 )
    {
      inited = 0;
      strcpy(v99, "Decode Chip Die OOM");
      V_LOCK(*(_DWORD *)"Decode Chip Die OOM");
      v54 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v54);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_buf_to_layout",
        20,
        532,
        100,
        v100);
      v11 = *(void **)(a2 + 7);
      v10 = v87;
    }
    memcpy(v11, &a1[v61[4]], v10);
    v12 = v88;
    v13 = calloc(v88 + 1, 1u);
    *(_DWORD *)(a2 + 11) = v13;
    if ( !v13 )
    {
      inited = 0;
      strcpy(v99, "Decode Chip Marking OOM");
      V_LOCK(*(_DWORD *)"ing OOM");
      v53 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v53);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_buf_to_layout",
        20,
        541,
        100,
        v100);
      v13 = *(void **)(a2 + 11);
      v12 = v88;
    }
    memcpy(v13, &a1[v61[5]], v12);
    v14 = v89;
    v15 = *(unsigned __int8 *)(a2 + 2) - 1;
    v16 = *(_BYTE *)(a2 + 2) != 1;
    *(_BYTE *)(a2 + 15) = a1[v61[6]];
    if ( v15 != 1 && v16 )
    {
      v17 = calloc(v14 + 1, 1u);
      *(_DWORD *)(a2 + 16) = v17;
      if ( !v17 )
      {
        inited = 0;
        strcpy(v99, "Decode Chip FT Program Version OOM");
        V_LOCK(*(_DWORD *)"rogram Version OOM");
        v56 = logfmt_raw((int)v100, 0x1000u);
        V_UNLOCK(v56);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          173,
          "eeprom_buf_to_layout",
          20,
          567,
          100,
          v100);
        v17 = *(void **)(a2 + 16);
        v14 = v89;
      }
      memcpy(v17, &a1[v62], v14);
    }
    else
    {
      v47 = v14 + 6;
      memset(v60, 0, sizeof(v60));
      v48 = (char *)calloc(v14 + 6, 1u);
      v49 = v48;
      *(_DWORD *)(a2 + 16) = v48;
      if ( !v48 )
      {
        inited = 0;
        strcpy(v99, "Decode Chip FT Program Version OOM");
        V_LOCK(*(_DWORD *)"rogram Version OOM");
        v57 = logfmt_raw((int)v100, 0x1000u);
        V_UNLOCK(v57);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          173,
          "eeprom_buf_to_layout",
          20,
          556,
          100,
          v100);
        v14 = v89;
        v49 = *(char **)(a2 + 16);
        v47 = v89 + 6;
      }
      memcpy(v60, &a1[v62], v14);
      snprintf(v49, v47, "F%dV%02dB%dC%d", LOBYTE(v60[0]), BYTE1(v60[0]), BYTE2(v60[0]), HIBYTE(v60[0]));
    }
    v18 = v63;
    v19 = v90;
    v20 = *(_BYTE *)(a2 + 20) & 0x80 | a1[v63] & 0x7F;
    v21 = v90 + 1;
    *(_BYTE *)(a2 + 20) = v20;
    *(_BYTE *)(a2 + 20) = v20 & 0x7F | (a1[v18] >> 7 << 7);
    v22 = calloc(v21, 1u);
    *(_DWORD *)(a2 + 21) = v22;
    if ( !v22 )
    {
      inited = 0;
      strcpy(v99, "Decode Chip FT Program Version OOM");
      V_LOCK(*(_DWORD *)"rogram Version OOM");
      v52 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v52);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_buf_to_layout",
        20,
        581,
        100,
        v100);
      v22 = *(void **)(a2 + 21);
      v19 = v90;
    }
    memcpy(v22, &a1[v64], v19);
    v23 = v65;
    v24 = v66;
    v25 = v91;
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
      inited = 0;
      strcpy(v99, "Decode Chip Technology OOM");
      V_LOCK(*(_DWORD *)"nology OOM");
      v51 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v51);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_buf_to_layout",
        20,
        605,
        100,
        v100);
      v32 = *(void **)(a2 + 31);
      v25 = v91;
    }
    memcpy(v32, &a1[v71], v25);
    memcpy(&dest, &a1[v72], n);
    v33 = n_1;
    v34 = &a1[v73];
    *(_WORD *)(a2 + 35) = HIBYTE(dest) | (dest << 8);
    memcpy(&v59, v34, v33);
    v35 = n_2;
    v36 = &a1[v74];
    *(_WORD *)(a2 + 37) = HIBYTE(v59) | (v59 << 8);
    memcpy(v60, v36, v35);
    v37 = v75;
    v38 = v76;
    v39 = v77;
    v40 = v78;
    v41 = v95;
    v42 = v95 + 1;
    v43 = (double)(unsigned __int16)__rev16(LOWORD(v60[0])) / 100.0;
    *(float *)(a2 + 39) = v43;
    *(_BYTE *)(a2 + 43) = a1[v37];
    *(_BYTE *)(a2 + 44) = a1[v38];
    *(_BYTE *)(a2 + 45) = a1[v39];
    *(_BYTE *)(a2 + 46) = a1[v40];
    v44 = calloc(v42, 1u);
    *(_DWORD *)(a2 + 47) = v44;
    if ( !v44 )
    {
      inited = 0;
      strcpy(v99, "Decode miner_type OOM");
      V_LOCK(*(_DWORD *)"e OOM");
      v50 = logfmt_raw((int)v100, 0x1000u);
      V_UNLOCK(v50);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_buf_to_layout",
        20,
        641,
        100,
        v100);
      v44 = *(void **)(a2 + 47);
      v41 = v95;
    }
    memcpy(v44, &a1[v79], v41);
    v45 = v81;
    v46 = *(unsigned __int8 *)(a2 + 2);
    *(_BYTE *)(a2 + 51) = a1[v80];
    *(_BYTE *)(a2 + 56) = a1[v45];
    if ( v46 == 4 )
    {
      memcpy((void *)(a2 + 57), &a1[v82], v96);
      memcpy((void *)(a2 + 59), &a1[v83], v97);
      memcpy((void *)(a2 + 187), &a1[v84], v98);
      *(_BYTE *)(a2 + 192) = a1[v85];
    }
  }
  return inited;
}
