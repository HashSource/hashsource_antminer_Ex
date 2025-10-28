int __fastcall outline_mining_eth_2282(int a1)
{
  int v1; // r6
  char *v3; // r0
  char v4; // r0
  _BYTE *v5; // r6
  _BYTE *v6; // r6
  _DWORD *v7; // lr
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  unsigned __int64 v14; // r0
  _DWORD *v15; // lr
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  char *v22; // r2
  int v23; // r1
  _DWORD *v24; // lr
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r3
  unsigned int v31; // r3
  unsigned int v32; // r2
  int v33; // r7
  unsigned int v34; // r8
  unsigned int v35; // r0
  int v36; // r3
  int v37; // r3
  float v38; // r3
  float v39; // r3
  int v41; // [sp+4h] [bp-18A8h]
  int v42; // [sp+2Ch] [bp-1880h]
  int v43; // [sp+2Ch] [bp-1880h]
  _BYTE v45[36]; // [sp+48h] [bp-1864h] BYREF
  char v46[64]; // [sp+1048h] [bp-864h] BYREF
  char v47[512]; // [sp+1088h] [bp-824h] BYREF
  _DWORD v48[6]; // [sp+1288h] [bp-624h] BYREF
  _DWORD v49[6]; // [sp+12A0h] [bp-60Ch] BYREF
  _DWORD v50[6]; // [sp+12B8h] [bp-5F4h] BYREF
  _DWORD v51[6]; // [sp+12D0h] [bp-5DCh] BYREF
  _DWORD v52[6]; // [sp+12E8h] [bp-5C4h] BYREF
  char v53[172]; // [sp+1300h] [bp-5ACh] BYREF
  _BYTE v54[172]; // [sp+13ACh] [bp-500h] BYREF
  _DWORD v55[8]; // [sp+1458h] [bp-454h] BYREF
  unsigned __int64 v56; // [sp+1478h] [bp-434h] BYREF
  _DWORD v57[2]; // [sp+1480h] [bp-42Ch] BYREF
  int v58; // [sp+1488h] [bp-424h] BYREF
  int v59; // [sp+148Ch] [bp-420h]
  int v60; // [sp+1490h] [bp-41Ch]
  int v61; // [sp+1494h] [bp-418h]
  int v62; // [sp+1498h] [bp-414h]
  int v63; // [sp+149Ch] [bp-410h]
  int v64; // [sp+14A0h] [bp-40Ch]
  int v65; // [sp+14A4h] [bp-408h]
  _BYTE v66[68]; // [sp+14A8h] [bp-404h] BYREF
  _BYTE v67[20]; // [sp+14ECh] [bp-3C0h] BYREF
  _BYTE v68[20]; // [sp+1500h] [bp-3ACh] BYREF
  _BYTE s[68]; // [sp+1514h] [bp-398h] BYREF
  _DWORD v70[2]; // [sp+1558h] [bp-354h] BYREF
  __int64 v71; // [sp+1560h] [bp-34Ch]
  int v72; // [sp+1568h] [bp-344h]
  int v73; // [sp+156Ch] [bp-340h]
  int v74; // [sp+1570h] [bp-33Ch]
  int v75; // [sp+1574h] [bp-338h]
  _DWORD v76[2]; // [sp+1578h] [bp-334h] BYREF
  __int64 v77; // [sp+1580h] [bp-32Ch]
  int v78; // [sp+1588h] [bp-324h]
  int v79; // [sp+158Ch] [bp-320h]
  int v80; // [sp+1590h] [bp-31Ch]
  int v81; // [sp+1594h] [bp-318h]
  _DWORD v82[2]; // [sp+1598h] [bp-314h] BYREF
  __int64 v83; // [sp+15A0h] [bp-30Ch]
  int v84; // [sp+15A8h] [bp-304h]
  int v85; // [sp+15ACh] [bp-300h]
  int v86; // [sp+15B0h] [bp-2FCh]
  int v87; // [sp+15B4h] [bp-2F8h]
  _DWORD v88[2]; // [sp+15B8h] [bp-2F4h] BYREF
  __int64 v89; // [sp+15C0h] [bp-2ECh]
  int v90; // [sp+15C8h] [bp-2E4h]
  int v91; // [sp+15CCh] [bp-2E0h]
  int v92; // [sp+15D0h] [bp-2DCh]
  int v93; // [sp+15D4h] [bp-2D8h]
  _DWORD v94[2]; // [sp+15D8h] [bp-2D4h] BYREF
  __int64 v95; // [sp+15E0h] [bp-2CCh]
  int v96; // [sp+15E8h] [bp-2C4h]
  int v97; // [sp+15ECh] [bp-2C0h]
  int v98; // [sp+15F0h] [bp-2BCh]
  int v99; // [sp+15F4h] [bp-2B8h]
  _DWORD v100[2]; // [sp+15F8h] [bp-2B4h] BYREF
  __int64 v101; // [sp+1600h] [bp-2ACh]
  int v102; // [sp+1608h] [bp-2A4h]
  int v103; // [sp+160Ch] [bp-2A0h]
  int v104; // [sp+1610h] [bp-29Ch]
  int v105; // [sp+1614h] [bp-298h]
  _DWORD v106[2]; // [sp+1618h] [bp-294h] BYREF
  __int64 v107; // [sp+1620h] [bp-28Ch]
  int v108; // [sp+1628h] [bp-284h]
  int v109; // [sp+162Ch] [bp-280h]
  int v110; // [sp+1630h] [bp-27Ch]
  int v111; // [sp+1634h] [bp-278h]
  _DWORD v112[2]; // [sp+1638h] [bp-274h] BYREF
  __int64 v113; // [sp+1640h] [bp-26Ch]
  int v114; // [sp+1648h] [bp-264h]
  int v115; // [sp+164Ch] [bp-260h]
  int v116; // [sp+1650h] [bp-25Ch]
  int v117; // [sp+1654h] [bp-258h]
  _DWORD v118[2]; // [sp+1658h] [bp-254h] BYREF
  __int64 v119; // [sp+1660h] [bp-24Ch]
  int v120; // [sp+1668h] [bp-244h]
  int v121; // [sp+166Ch] [bp-240h]
  int v122; // [sp+1670h] [bp-23Ch]
  int v123; // [sp+1674h] [bp-238h]
  _DWORD v124[2]; // [sp+1678h] [bp-234h] BYREF
  __int64 v125; // [sp+1680h] [bp-22Ch]
  int v126; // [sp+1688h] [bp-224h]
  int v127; // [sp+168Ch] [bp-220h]
  int v128; // [sp+1690h] [bp-21Ch]
  int v129; // [sp+1694h] [bp-218h]
  _DWORD v130[2]; // [sp+1698h] [bp-214h] BYREF
  __int64 v131; // [sp+16A0h] [bp-20Ch]
  int v132; // [sp+16A8h] [bp-204h]
  int v133; // [sp+16ACh] [bp-200h]
  int v134; // [sp+16B0h] [bp-1FCh]
  int v135; // [sp+16B4h] [bp-1F8h]
  _DWORD v136[2]; // [sp+16B8h] [bp-1F4h] BYREF
  __int64 v137; // [sp+16C0h] [bp-1ECh]
  int v138; // [sp+16C8h] [bp-1E4h]
  int v139; // [sp+16CCh] [bp-1E0h]
  int v140; // [sp+16D0h] [bp-1DCh]
  int v141; // [sp+16D4h] [bp-1D8h]
  _DWORD v142[2]; // [sp+16D8h] [bp-1D4h] BYREF
  __int64 v143; // [sp+16E0h] [bp-1CCh]
  int v144; // [sp+16E8h] [bp-1C4h]
  int v145; // [sp+16ECh] [bp-1C0h]
  int v146; // [sp+16F0h] [bp-1BCh]
  int v147; // [sp+16F4h] [bp-1B8h]
  _DWORD v148[2]; // [sp+16F8h] [bp-1B4h] BYREF
  __int64 v149; // [sp+1700h] [bp-1ACh]
  int v150; // [sp+1708h] [bp-1A4h]
  int v151; // [sp+170Ch] [bp-1A0h]
  int v152; // [sp+1710h] [bp-19Ch]
  int v153; // [sp+1714h] [bp-198h]
  _DWORD v154[2]; // [sp+1718h] [bp-194h] BYREF
  __int64 v155; // [sp+1720h] [bp-18Ch]
  int v156; // [sp+1728h] [bp-184h]
  int v157; // [sp+172Ch] [bp-180h]
  int v158; // [sp+1730h] [bp-17Ch]
  int v159; // [sp+1734h] [bp-178h]
  _DWORD v160[2]; // [sp+1738h] [bp-174h] BYREF
  __int64 v161; // [sp+1740h] [bp-16Ch]
  int v162; // [sp+1748h] [bp-164h]
  int v163; // [sp+174Ch] [bp-160h]
  int v164; // [sp+1750h] [bp-15Ch]
  int v165; // [sp+1754h] [bp-158h]
  _DWORD v166[2]; // [sp+1758h] [bp-154h] BYREF
  __int64 v167; // [sp+1760h] [bp-14Ch]
  int v168; // [sp+1768h] [bp-144h]
  int v169; // [sp+176Ch] [bp-140h]
  int v170; // [sp+1770h] [bp-13Ch]
  int v171; // [sp+1774h] [bp-138h]
  _DWORD v172[2]; // [sp+1778h] [bp-134h] BYREF
  __int64 v173; // [sp+1780h] [bp-12Ch]
  int v174; // [sp+1788h] [bp-124h]
  int v175; // [sp+178Ch] [bp-120h]
  int v176; // [sp+1790h] [bp-11Ch]
  int v177; // [sp+1794h] [bp-118h]
  _DWORD v178[2]; // [sp+1798h] [bp-114h] BYREF
  __int64 v179; // [sp+17A0h] [bp-10Ch]
  int v180; // [sp+17A8h] [bp-104h]
  int v181; // [sp+17ACh] [bp-100h]
  int v182; // [sp+17B0h] [bp-FCh]
  int v183; // [sp+17B4h] [bp-F8h]
  _DWORD v184[2]; // [sp+17B8h] [bp-F4h] BYREF
  __int64 v185; // [sp+17C0h] [bp-ECh]
  int v186; // [sp+17C8h] [bp-E4h]
  int v187; // [sp+17CCh] [bp-E0h]
  int v188; // [sp+17D0h] [bp-DCh]
  int v189; // [sp+17D4h] [bp-D8h]
  _DWORD v190[2]; // [sp+17D8h] [bp-D4h] BYREF
  __int64 v191; // [sp+17E0h] [bp-CCh]
  int v192; // [sp+17E8h] [bp-C4h]
  int v193; // [sp+17ECh] [bp-C0h]
  int v194; // [sp+17F0h] [bp-BCh]
  int v195; // [sp+17F4h] [bp-B8h]
  void *v196; // [sp+17FCh] [bp-B0h]
  char v197; // [sp+1803h] [bp-A9h]
  char *v198; // [sp+1804h] [bp-A8h]
  void *ptr; // [sp+1808h] [bp-A4h]
  _DWORD *v200; // [sp+180Ch] [bp-A0h]
  _DWORD *v201; // [sp+1810h] [bp-9Ch]
  int n; // [sp+1814h] [bp-98h]
  int ii; // [sp+1818h] [bp-94h]
  int kk; // [sp+181Ch] [bp-90h]
  int jj; // [sp+1820h] [bp-8Ch]
  int v206; // [sp+1824h] [bp-88h]
  int mm; // [sp+1828h] [bp-84h]
  int i2; // [sp+182Ch] [bp-80h]
  int i1; // [sp+1830h] [bp-7Ch]
  int i8; // [sp+1834h] [bp-78h]
  int nn; // [sp+1838h] [bp-74h]
  int i3; // [sp+183Ch] [bp-70h]
  int i7; // [sp+1840h] [bp-6Ch]
  int i6; // [sp+1844h] [bp-68h]
  int i5; // [sp+1848h] [bp-64h]
  int i4; // [sp+184Ch] [bp-60h]
  void *v217; // [sp+1850h] [bp-5Ch]
  int v218; // [sp+1854h] [bp-58h]
  int v219; // [sp+1858h] [bp-54h]
  int v220; // [sp+185Ch] [bp-50h]
  int v221; // [sp+1860h] [bp-4Ch]
  unsigned __int8 v222; // [sp+1867h] [bp-45h]
  float v223; // [sp+1868h] [bp-44h]
  float v224; // [sp+186Ch] [bp-40h]
  unsigned __int8 v225; // [sp+1872h] [bp-3Ah]
  unsigned __int8 v226; // [sp+1873h] [bp-39h]
  void *v227; // [sp+1874h] [bp-38h]
  int i; // [sp+1878h] [bp-34h]
  unsigned __int8 eeprom_chip_bin; // [sp+187Fh] [bp-2Dh]
  float v230; // [sp+1880h] [bp-2Ch]
  int k; // [sp+1884h] [bp-28h]
  int j; // [sp+1888h] [bp-24h]
  int m; // [sp+188Ch] [bp-20h]

  V_LOCK();
  sub_FBD60((int)v70, *(int *)(a1 + 272));
  logfmt_raw(v45, 0x1000u, 0, v75, v70[0], v70[1], v71, v72, v73, v74, v75, "outline_mining_eth_2282...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "outline_mining_eth_2282",
    23,
    10280,
    40,
    v45);
  v217 = malloc(0x1440u);
  FT_config_for_outline_mining_eth_2282(a1);
  v218 = 0;
  v219 = 6 * *(_DWORD *)(a1 + 272);
  v220 = 720;
  if ( old_pattern )
    v220 = 516;
  v222 = 0;
  v221 = 0;
  memset(v52, 0, sizeof(v52));
  memset(v51, 0, sizeof(v51));
  memset(v50, 0, sizeof(v50));
  memset(v49, 0, sizeof(v49));
  memset(v48, 0, sizeof(v48));
  memset(v47, 0, sizeof(v47));
  memset(v46, 0, sizeof(v46));
  v223 = 0.0;
  v224 = 0.0;
  v225 = 0;
  v226 = 1;
  v227 = 0;
  for ( i = 0; i <= 5; ++i )
    v48[i] = 1137180672;
  eeprom_chip_bin = api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 272));
  v230 = 0.0;
  switch ( eeprom_chip_bin )
  {
    case 1u:
    case 2u:
      v230 = 80.0;
      break;
    case 3u:
      v230 = 75.0;
      break;
    case 4u:
    case 5u:
      v230 = 65.0;
      break;
    default:
      break;
  }
  if ( v230 == 0.0 )
  {
    v230 = 80.0;
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, "not valid BIN, set nonce_rate_threshold to 80.0f");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "outline_mining_eth_2282",
      23,
      10357,
      60,
      v45);
  }
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "BIN: %d, nonce_rate:%.2f", eeprom_chip_bin, v41, v230);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "outline_mining_eth_2282",
    23,
    10359,
    40,
    v45);
  while ( 1 )
  {
    for ( j = 0; j <= 5; ++j )
      v52[j] = 0;
    for ( k = 0; k <= 5; ++k )
      v50[k] = 0;
    for ( m = 0; m <= 5; ++m )
      v49[m] = 0;
    *(_DWORD *)(a1 + 504) = 0;
    for ( n = 0; n <= 5; ++n )
      *(_DWORD *)(a1 + 504) = (int)(float)((float)*(int *)(a1 + 504) + *(float *)&v48[n]);
    *(int *)(a1 + 504) /= 6;
    V_LOCK();
    sub_FBD60((int)v76, *(int *)(a1 + 272));
    logfmt_raw(
      v45,
      0x1000u,
      0,
      v81,
      v76[0],
      v76[1],
      v77,
      v78,
      v79,
      v80,
      v81,
      "final frequency: %d",
      *(_DWORD *)(a1 + 504));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "outline_mining_eth_2282",
      23,
      10380,
      40,
      v45);
    ptr = calloc(1u, 0x59u);
    *(_BYTE *)(a1 + 576) = 1;
    *(_DWORD *)(a1 + 532) = 1;
    v1 = *(_DWORD *)(a1 + 272);
    *((_DWORD *)&unk_5BB670 + v1) = malloc(0x58u);
    if ( !*((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272)) )
      break;
    **((_DWORD **)&unk_5BB670 + *(_DWORD *)(a1 + 272)) = *((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272));
    *(_DWORD *)(*((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272)) + 4) = *((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272));
    V_LOCK();
    sub_FBD60((int)v88, *(int *)(a1 + 272));
    logfmt_raw(v45, 0x1000u, 0, v93, v88[0], v88[1], v89, v90, v91, v92, v93, "start_pattern_test...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "outline_mining_eth_2282",
      23,
      10394,
      60,
      v45);
    *(_BYTE *)(a1 + 279) = 1;
    *(_BYTE *)(a1 + 278) = 1;
    for ( ii = 0; ii <= 5; ++ii )
    {
      if ( dword_C0F67C[ii + v219] != 1 )
      {
        sub_106BA8(a1, 4, 0);
        v206 = 0;
        check_fail_cnt[*(_DWORD *)(a1 + 272)] = 0;
        for ( jj = 0; jj < v220; ++jj )
        {
          memset(s, 0, 0x41u);
          memset(v68, 0, 0x11u);
          memset(v66, 0, 0x41u);
          memset(v54, 0, 0xA9u);
          memcpy(v54, &mining_slt_pattern_str_3[168 * jj], 0xA8u);
          memset(v53, 0, 0xA9u);
          memcpy(v53, &mining_slt_pattern_str_3[168 * jj], 0xA8u);
          v3 = strstr(v53, "nonce");
          v198 = v3 + 6;
          v4 = hex2char(v3[12], v3[13]);
          v197 = v4 - ii;
          v5 = v198 + 6;
          *v5 = char2hex((unsigned __int8)(v4 - ii) >> 4);
          v6 = v198 + 7;
          *v6 = char2hex(v197 & 0xF);
          V_LOCK();
          sub_FBD60((int)v94, *(int *)(a1 + 272));
          logfmt_raw(v45, 0x1000u, 0, v99, v94[0], v94[1], v95, v96, v97, v98, v99, "no %d work: %s", jj, v53);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "outline_mining_eth_2282",
            23,
            10422,
            20,
            v45);
          v218 = _isoc99_sscanf(v53, "header %s nonce %s mixhash %s", s, v67, v66);
          if ( v218 <= 2 )
          {
            V_LOCK();
            sub_FBD60((int)v100, *(int *)(a1 + 272));
            logfmt_raw(
              v45,
              0x1000u,
              0,
              v105,
              v100[0],
              v100[1],
              v101,
              v102,
              v103,
              v104,
              v105,
              "failed to parse slt tmp pattern string");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "outline_mining_eth_2282",
              23,
              10427,
              100,
              v45);
            exit(2);
          }
          v218 = _isoc99_sscanf(v54, "header %s nonce %s mixhash %s", s, v68, v66);
          if ( v218 <= 2 )
          {
            V_LOCK();
            sub_FBD60((int)v106, *(int *)(a1 + 272));
            logfmt_raw(
              v45,
              0x1000u,
              0,
              v111,
              v106[0],
              v106[1],
              v107,
              v108,
              v109,
              v110,
              v111,
              "failed to parse slt pattern string");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "outline_mining_eth_2282",
              23,
              10433,
              100,
              v45);
            exit(2);
          }
          str2hex((int)&v58, (int)s, 64);
          str2hex((int)v57, (int)v68, 16);
          str2hex((int)&v56, (int)v67, 16);
          str2hex((int)v55, (int)v66, 64);
          *((_QWORD *)ptr + 1) = v220 % 255;
          v7 = (char *)ptr + 16;
          v8 = v59;
          v9 = v60;
          v10 = v61;
          *((_DWORD *)ptr + 4) = v58;
          v7[1] = v8;
          v7[2] = v9;
          v7[3] = v10;
          v11 = v63;
          v12 = v64;
          v13 = v65;
          v7[4] = v62;
          v7[5] = v11;
          v7[6] = v12;
          v7[7] = v13;
          v14 = sub_10F6C8(&v56);
          *((_QWORD *)ptr + 10) = v14;
          *((_QWORD *)ptr + 10) += 100LL;
          v196 = malloc(0x58u);
          if ( !v196 )
          {
            V_LOCK();
            sub_FBD60((int)v112, *(int *)(a1 + 272));
            logfmt_raw(
              v45,
              0x1000u,
              0,
              v117,
              v112[0],
              v112[1],
              v113,
              v114,
              v115,
              v116,
              v117,
              "%s, malloc works struct error!",
              "outline_mining_eth_2282");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "outline_mining_eth_2282",
              23,
              10450,
              100,
              v45);
            return 13;
          }
          memset(v196, 0, 0x58u);
          v15 = (char *)v196 + 12;
          v16 = v59;
          v17 = v60;
          v18 = v61;
          *((_DWORD *)v196 + 3) = v58;
          v15[1] = v16;
          v15[2] = v17;
          v15[3] = v18;
          v19 = v63;
          v20 = v64;
          v21 = v65;
          v15[4] = v62;
          v15[5] = v19;
          v15[6] = v20;
          v15[7] = v21;
          v22 = (char *)v196 + 44;
          v23 = v57[1];
          *((_DWORD *)v196 + 11) = v57[0];
          *((_DWORD *)v22 + 1) = v23;
          v24 = (char *)v196 + 52;
          v25 = v55[1];
          v26 = v55[2];
          v27 = v55[3];
          *((_DWORD *)v196 + 13) = v55[0];
          v24[1] = v25;
          v24[2] = v26;
          v24[3] = v27;
          v28 = v55[5];
          v29 = v55[6];
          v30 = v55[7];
          v24[4] = v55[4];
          v24[5] = v28;
          v24[6] = v29;
          v24[7] = v30;
          sub_FBEF0(v196, *((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272)));
          *((_BYTE *)v196 + 84) = 0;
          *((_DWORD *)v196 + 2) = *((_DWORD *)ptr + 2);
          push_work_base(a1, (int)ptr);
          while ( !*((_BYTE *)v196 + 84) )
          {
            v31 = v222++;
            if ( v31 > 0xA )
              break;
            usleep(0x1388u);
          }
          v222 = 0;
          if ( *((_BYTE *)v196 + 84) )
          {
            ++v206;
          }
          else
          {
            V_LOCK();
            sub_FBD60((int)v118, *(int *)(a1 + 272));
            logfmt_raw(
              v45,
              0x1000u,
              0,
              v123,
              v118[0],
              v118[1],
              v119,
              v120,
              v121,
              v122,
              v123,
              "chip_id %d, work id %d, core no %d",
              ii,
              jj,
              jj / 10);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "outline_mining_eth_2282",
              23,
              10475,
              20,
              v45);
          }
        }
        v52[ii] = v206;
        v32 = v52[ii];
        if ( v32 < v51[ii] )
          v32 = v51[ii];
        v51[ii] = v32;
        *(float *)&v50[ii] = (float)((float)(unsigned int)v52[ii] / (float)v220) * 100.0;
        *(float *)&v49[ii] = *(float *)&v50[ii] * *(float *)&v48[ii];
        V_LOCK();
        sub_FBD60((int)v124, *(int *)(a1 + 272));
        logfmt_raw(
          v45,
          0x1000u,
          0,
          v129,
          v124[0],
          v124[1],
          v125,
          v126,
          v127,
          v128,
          v129,
          "chip id: %d, pattern_pass: %d, pass_rate: %.4f%\n",
          ii,
          v206,
          v42,
          (float)((float)((float)v206 / (float)v220) * 100.0));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "outline_mining_eth_2282",
          23,
          10484,
          40,
          v45);
        sub_1062CC(a1, 4, v217);
        V_LOCK();
        sub_FBD60((int)v130, *(int *)(a1 + 272));
        v33 = *((unsigned __int8 *)v217 + 12 * ii + 4);
        v34 = sub_FC76C(*((_DWORD *)v217 + 3 * ii));
        v35 = sub_FC76C(*((_DWORD *)v217 + 3 * ii));
        logfmt_raw(
          v45,
          0x1000u,
          0,
          v135,
          v130[0],
          v130[1],
          v131,
          v132,
          v133,
          v134,
          v135,
          "chip id: %d, tickcnt: %d, pass_rate: %.4f%, nonce_cnt: %d\n",
          v33,
          v34,
          v43,
          (float)((float)((float)v35 / (float)v220) * 100.0),
          check_fail_cnt[*(_DWORD *)(a1 + 272)]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "outline_mining_eth_2282",
          23,
          10488,
          40,
          v45);
      }
    }
    for ( kk = 0; kk <= 5; ++kk )
    {
      sprintf(v46, "%d ", v52[kk]);
      strcat(v47, v46);
    }
    V_LOCK();
    sub_FBD60((int)v136, *(int *)(a1 + 272));
    logfmt_raw(v45, 0x1000u, 0, v141, v136[0], v136[1], v137, v138, v139, v140, v141, "nonce cnt dump: %s", v47);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "outline_mining_eth_2282",
      23,
      10500,
      40,
      v45);
    printf("chain-%d nonce cnt dump: %s\n", *(_DWORD *)(a1 + 272), v47);
    memset(v47, 0, sizeof(v47));
    memset(v46, 0, sizeof(v46));
    for ( mm = 0; mm <= 5; ++mm )
    {
      sprintf(v46, "%.4f ", *(float *)&v50[mm]);
      strcat(v47, v46);
    }
    V_LOCK();
    sub_FBD60((int)v142, *(int *)(a1 + 272));
    logfmt_raw(v45, 0x1000u, 0, v147, v142[0], v142[1], v143, v144, v145, v146, v147, "nonce rr dump: %s", v47);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "outline_mining_eth_2282",
      23,
      10509,
      40,
      v45);
    printf("chain-%d nonce rr dump: %s\n", *(_DWORD *)(a1 + 272), v47);
    memset(v47, 0, sizeof(v47));
    memset(v46, 0, sizeof(v46));
    for ( nn = 0; nn <= 5; ++nn )
    {
      printf(v46, "%.4f ", *(float *)&v49[nn]);
      strcat(v47, v46);
    }
    V_LOCK();
    sub_FBD60((int)v148, *(int *)(a1 + 272));
    logfmt_raw(
      v45,
      0x1000u,
      0,
      v153,
      v148[0],
      v148[1],
      v149,
      v150,
      v151,
      v152,
      v153,
      "noncerate_multi_freq_1 dump: %s",
      v47);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "outline_mining_eth_2282",
      23,
      10518,
      20,
      v45);
    printf("chain-%d noncerate_multi_freq_1 dump: %s\n", *(_DWORD *)(a1 + 272), v47);
    memset(v47, 0, sizeof(v47));
    memset(v46, 0, sizeof(v46));
    *(_BYTE *)(a1 + 278) = 0;
    usleep(0xC350u);
    if ( ptr )
      free(ptr);
    v201 = (_DWORD *)**((_DWORD **)&unk_5BB670 + *(_DWORD *)(a1 + 272));
    v200 = (_DWORD *)*v201;
    while ( v201 != *((_DWORD **)&unk_5BB670 + *(_DWORD *)(a1 + 272)) )
    {
      v227 = v201;
      sub_FBF64((int)v201);
      if ( v227 )
        free(v227);
      v201 = v200;
      v200 = (_DWORD *)*v200;
    }
    sub_FBFB4(*((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272)));
    if ( *((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272)) )
      free(*((void **)&unk_5BB670 + *(_DWORD *)(a1 + 272)));
    V_LOCK();
    sub_FBD60((int)v154, *(int *)(a1 + 272));
    logfmt_raw(
      v45,
      0x1000u,
      0,
      v159,
      v154[0],
      v154[1],
      v155,
      v156,
      v157,
      v158,
      v159,
      "slt test end for %d times",
      v226 + 1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "outline_mining_eth_2282",
      23,
      10552,
      40,
      v45);
    printf("chain-%d slt test end for %d times\n", *(_DWORD *)(a1 + 272), v226 + 1);
    putchar(10);
    if ( v226 )
    {
      *(_DWORD *)(a1 + 504) = 0;
      for ( i1 = 0; i1 <= 5; ++i1 )
      {
        if ( v230 > *(float *)&v50[i1]
          || dword_C0F67C[i1 + v219] == 1
          || *(float *)&v49[i1] <= noncerate_multi_freq_0[i1 + v219] )
        {
          dword_C0F67C[i1 + v219] = 1;
          noncerate_multi_freq_0[i1 + v219] = *(float *)&v49[i1];
          ++v225;
          if ( sweep_freq_f[i1 + v219] > 500.0 )
            v38 = 500.0;
          else
            v38 = sweep_freq_f[i1];
          v223 = v38;
          if ( sweep_freq_f[i1 + v219] > 700.0 )
            v39 = 700.0;
          else
            v39 = sweep_freq_f[i1 + v219];
          v224 = v39;
          set_single_chip_frequency_eth_2282(a1, 0, i1);
          usleep(0x64u);
          set_single_chip_frequency_eth_2282(a1, 1, i1);
          usleep(0x64u);
          sub_106D34(a1, 15, 3);
          sub_106D34(a1, 2, 254);
          usleep(0x64u);
          sub_106D34(a1, 2, 255);
          usleep(0x64u);
          sub_106D34(a1, 15, 3);
          *(_DWORD *)(a1 + 504) = (int)(float)((float)*(int *)(a1 + 504) + v224);
          if ( v225 == 6 )
          {
            V_LOCK();
            sub_FBD60((int)v160, *(int *)(a1 + 272));
            logfmt_raw(
              v45,
              0x1000u,
              0,
              v165,
              v160[0],
              v160[1],
              v161,
              v162,
              v163,
              v164,
              v165,
              "sweep end for failed_cnt=%d",
              v225);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "outline_mining_eth_2282",
              23,
              10622,
              40,
              v45);
            printf("chain-%d sweep end for failed_cnt=%d\n", *(_DWORD *)(a1 + 264), v225);
LABEL_117:
            *(_DWORD *)(a1 + 504) = sub_344EB8(*(_DWORD *)(a1 + 504), *(_DWORD *)(a1 + 372));
            V_LOCK();
            logfmt_raw(
              v45,
              0x1000u,
              0,
              "chain-%d sweep end, avg freq: %d!",
              *(_DWORD *)(a1 + 264),
              *(_DWORD *)(a1 + 504));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "outline_mining_eth_2282",
              23,
              10698,
              40,
              v45);
            if ( v217 )
              free(v217);
            return 0;
          }
        }
        else
        {
          noncerate_multi_freq_0[i1 + v219] = *(float *)&v49[i1];
          ++sweep_freq_0[i1 + v219];
          sweep_freq_f[i1 + v219] = *(float *)&v48[i1];
          *(float *)&v48[i1] = *(float *)&v48[i1] + 12.5;
          if ( *(float *)&v48[i1] > 500.0 )
            v36 = 1140457472;
          else
            v36 = v48[i1];
          v223 = *(float *)&v36;
          if ( *(float *)&v48[i1] > 700.0 )
            *(float *)&v37 = 700.0;
          else
            v37 = v48[i1];
          v224 = *(float *)&v37;
          set_single_chip_frequency_eth_2282(a1, 0, i1);
          usleep(0x64u);
          set_single_chip_frequency_eth_2282(a1, 1, i1);
          usleep(0x64u);
          sub_106D34(a1, 15, 3);
          sub_106D34(a1, 2, 254);
          usleep(0x64u);
          sub_106D34(a1, 2, 255);
          usleep(0x64u);
          sub_106D34(a1, 15, 3);
          *(_DWORD *)(a1 + 504) = (int)(float)((float)*(int *)(a1 + 504) + v224);
        }
      }
      v225 = 0;
      for ( i2 = 0; i2 <= 5; ++i2 )
      {
        sprintf(v46, "%f ", *(float *)&v48[i2]);
        strcat(v47, v46);
      }
      V_LOCK();
      sub_FBD60((int)v166, *(int *)(a1 + 272));
      logfmt_raw(v45, 0x1000u, 0, v171, v166[0], v166[1], v167, v168, v169, v170, v171, "sweep_freq_1 dump: %s", v47);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "outline_mining_eth_2282",
        23,
        10634,
        40,
        v45);
      printf("chain-%d sweep_freq_1: %s\n", *(_DWORD *)(a1 + 264), v47);
      memset(v47, 0, sizeof(v47));
      memset(v46, 0, sizeof(v46));
      for ( i3 = 0; i3 <= 5; ++i3 )
      {
        sprintf(v46, "%f ", sweep_freq_f[i3 + v219]);
        strcat(v47, v46);
      }
      V_LOCK();
      sub_FBD60((int)v172, *(int *)(a1 + 272));
      logfmt_raw(v45, 0x1000u, 0, v177, v172[0], v172[1], v173, v174, v175, v176, v177, "sweep_freq_f dump: %s", v47);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "outline_mining_eth_2282",
        23,
        10643,
        40,
        v45);
      printf("chain-%d sweep_freq_f: %s\n", *(_DWORD *)(a1 + 272), v47);
      memset(v47, 0, sizeof(v47));
      memset(v46, 0, sizeof(v46));
      for ( i4 = 0; i4 <= 5; ++i4 )
      {
        sprintf(v46, "%u ", sweep_freq_0[i4 + v219]);
        strcat(v47, v46);
      }
      V_LOCK();
      sub_FBD60((int)v178, *(int *)(a1 + 272));
      logfmt_raw(v45, 0x1000u, 0, v183, v178[0], v178[1], v179, v180, v181, v182, v183, "sweep_freq_0 dump: %s", v47);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "outline_mining_eth_2282",
        23,
        10652,
        40,
        v45);
      printf("chain-%d sweep_freq_0: %s\n", *(_DWORD *)(a1 + 272), v47);
      memset(v47, 0, sizeof(v47));
      memset(v46, 0, sizeof(v46));
      for ( i5 = 0; i5 <= 5; ++i5 )
      {
        sprintf(v46, "%.4f ", noncerate_multi_freq_0[i5 + v219]);
        strcat(v47, v46);
      }
      memset(v47, 0, sizeof(v47));
      memset(v46, 0, sizeof(v46));
      for ( i6 = 0; i6 <= 5; ++i6 )
      {
        if ( *(float *)&v48[i6] > 700.0 )
        {
          V_LOCK();
          sub_FBD60((int)v184, *(int *)(a1 + 272));
          logfmt_raw(
            v45,
            0x1000u,
            0,
            v189,
            v184[0],
            v184[1],
            v185,
            v186,
            v187,
            v188,
            v189,
            "sweep end for freq limit high!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "outline_mining_eth_2282",
            23,
            10668,
            40,
            v45);
          printf("chain-%d sweep end for freq limit high!\n", *(_DWORD *)(a1 + 264));
          goto LABEL_117;
        }
      }
      for ( i7 = 0; i7 <= 5; ++i7 )
      {
        if ( sweep_freq_f[i7 + v219] == 0.0 )
        {
          V_LOCK();
          sub_FBD60((int)v190, *(int *)(a1 + 272));
          logfmt_raw(
            v45,
            0x1000u,
            0,
            v195,
            v190[0],
            v190[1],
            v191,
            v192,
            v193,
            v194,
            v195,
            "sweep end for freq limit low!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "outline_mining_eth_2282",
            23,
            10676,
            40,
            v45);
          printf("chain-%d sweep end for freq limit low!\n", *(_DWORD *)(a1 + 264));
        }
      }
      printf("chain-%d sweep retry\n", *(_DWORD *)(a1 + 264));
      *(_DWORD *)(a1 + 504) = sub_344EB8(*(_DWORD *)(a1 + 504), *(_DWORD *)(a1 + 372));
      printf("chain-%d frequency: %d", *(_DWORD *)(a1 + 264), *(_DWORD *)(a1 + 504));
      puts("\n\n");
    }
    else
    {
      v226 = 1;
      for ( i8 = 0; i8 <= 5; ++i8 )
      {
        v52[i8] = 0;
        v50[i8] = 0;
        v49[i8] = 0;
      }
    }
  }
  V_LOCK();
  sub_FBD60((int)v82, *(int *)(a1 + 272));
  logfmt_raw(
    v45,
    0x1000u,
    0,
    v87,
    v82[0],
    v82[1],
    v83,
    v84,
    v85,
    v86,
    v87,
    "%s, malloc works struct for chain-%d error!",
    "outline_mining_eth_2282",
    *(_DWORD *)(a1 + 272));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "outline_mining_eth_2282",
    23,
    10388,
    100,
    v45);
  return 13;
}
