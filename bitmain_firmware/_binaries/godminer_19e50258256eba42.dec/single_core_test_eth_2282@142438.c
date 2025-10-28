int __fastcall single_core_test_eth_2282(int a1)
{
  __int16 v1; // r3
  int v2; // r6
  char *v4; // r0
  char v5; // r0
  _BYTE *v6; // r6
  _BYTE *v7; // r6
  _DWORD *v8; // lr
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  unsigned __int64 v15; // r0
  _DWORD *v16; // lr
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  char *v23; // r2
  int v24; // r1
  _DWORD *v25; // lr
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  unsigned int v32; // r3
  int v34; // [sp+4h] [bp-1698h]
  _BYTE v36[4672]; // [sp+38h] [bp-1664h] BYREF
  int v37; // [sp+1278h] [bp-424h]
  int v38; // [sp+127Ch] [bp-420h]
  int v39; // [sp+1280h] [bp-41Ch]
  int v40; // [sp+1284h] [bp-418h]
  int v41; // [sp+1288h] [bp-414h]
  int v42; // [sp+128Ch] [bp-410h]
  int v43; // [sp+1290h] [bp-40Ch]
  int v44; // [sp+1294h] [bp-408h]
  int v45; // [sp+1298h] [bp-404h]
  int v46; // [sp+129Ch] [bp-400h]
  int v47; // [sp+12A0h] [bp-3FCh]
  int v48; // [sp+12A4h] [bp-3F8h]
  int v49; // [sp+12A8h] [bp-3F4h]
  int v50; // [sp+12ACh] [bp-3F0h]
  int v51; // [sp+12B0h] [bp-3ECh]
  int v52; // [sp+12B4h] [bp-3E8h]
  int v53; // [sp+12B8h] [bp-3E4h]
  int v54; // [sp+12BCh] [bp-3E0h]
  int v55; // [sp+12C0h] [bp-3DCh]
  int v56; // [sp+12C4h] [bp-3D8h]
  int v57; // [sp+12C8h] [bp-3D4h]
  int v58; // [sp+12CCh] [bp-3D0h]
  int v59; // [sp+12D0h] [bp-3CCh]
  int v60; // [sp+12D4h] [bp-3C8h]
  char haystack[172]; // [sp+12D8h] [bp-3C4h] BYREF
  _BYTE dest[172]; // [sp+1384h] [bp-318h] BYREF
  _DWORD v63[8]; // [sp+1430h] [bp-26Ch] BYREF
  unsigned __int64 v64; // [sp+1450h] [bp-24Ch] BYREF
  _DWORD v65[2]; // [sp+1458h] [bp-244h] BYREF
  int v66; // [sp+1460h] [bp-23Ch] BYREF
  int v67; // [sp+1464h] [bp-238h]
  int v68; // [sp+1468h] [bp-234h]
  int v69; // [sp+146Ch] [bp-230h]
  int v70; // [sp+1470h] [bp-22Ch]
  int v71; // [sp+1474h] [bp-228h]
  int v72; // [sp+1478h] [bp-224h]
  int v73; // [sp+147Ch] [bp-220h]
  _BYTE v74[68]; // [sp+1480h] [bp-21Ch] BYREF
  _BYTE v75[20]; // [sp+14C4h] [bp-1D8h] BYREF
  _BYTE v76[20]; // [sp+14D8h] [bp-1C4h] BYREF
  _BYTE s[68]; // [sp+14ECh] [bp-1B0h] BYREF
  _QWORD v78[2]; // [sp+1530h] [bp-16Ch] BYREF
  int v79; // [sp+1540h] [bp-15Ch]
  int v80; // [sp+1544h] [bp-158h]
  int v81; // [sp+1548h] [bp-154h]
  int v82; // [sp+154Ch] [bp-150h]
  _QWORD v83[2]; // [sp+1550h] [bp-14Ch] BYREF
  int v84; // [sp+1560h] [bp-13Ch]
  int v85; // [sp+1564h] [bp-138h]
  int v86; // [sp+1568h] [bp-134h]
  int v87; // [sp+156Ch] [bp-130h]
  _QWORD v88[2]; // [sp+1570h] [bp-12Ch] BYREF
  int v89; // [sp+1580h] [bp-11Ch]
  int v90; // [sp+1584h] [bp-118h]
  int v91; // [sp+1588h] [bp-114h]
  int v92; // [sp+158Ch] [bp-110h]
  _QWORD v93[2]; // [sp+1590h] [bp-10Ch] BYREF
  int v94; // [sp+15A0h] [bp-FCh]
  int v95; // [sp+15A4h] [bp-F8h]
  int v96; // [sp+15A8h] [bp-F4h]
  int v97; // [sp+15ACh] [bp-F0h]
  _QWORD v98[2]; // [sp+15B0h] [bp-ECh] BYREF
  int v99; // [sp+15C0h] [bp-DCh]
  int v100; // [sp+15C4h] [bp-D8h]
  int v101; // [sp+15C8h] [bp-D4h]
  int v102; // [sp+15CCh] [bp-D0h]
  _QWORD v103[2]; // [sp+15D0h] [bp-CCh] BYREF
  int v104; // [sp+15E0h] [bp-BCh]
  int v105; // [sp+15E4h] [bp-B8h]
  int v106; // [sp+15E8h] [bp-B4h]
  int v107; // [sp+15ECh] [bp-B0h]
  _QWORD v108[2]; // [sp+15F0h] [bp-ACh] BYREF
  int v109; // [sp+1600h] [bp-9Ch]
  int v110; // [sp+1604h] [bp-98h]
  int v111; // [sp+1608h] [bp-94h]
  int v112; // [sp+160Ch] [bp-90h]
  _QWORD v113[2]; // [sp+1610h] [bp-8Ch] BYREF
  int v114; // [sp+1620h] [bp-7Ch]
  int v115; // [sp+1624h] [bp-78h]
  int v116; // [sp+1628h] [bp-74h]
  int v117; // [sp+162Ch] [bp-70h]
  void *v118; // [sp+1634h] [bp-68h]
  char v119; // [sp+163Bh] [bp-61h]
  char *v120; // [sp+163Ch] [bp-60h]
  void *ptr; // [sp+1640h] [bp-5Ch]
  void *v122; // [sp+1644h] [bp-58h]
  char v123; // [sp+164Ah] [bp-52h]
  char v124; // [sp+164Bh] [bp-51h]
  int v125; // [sp+164Ch] [bp-50h]
  int v126; // [sp+1650h] [bp-4Ch]
  int v127; // [sp+1654h] [bp-48h]
  int v128; // [sp+1658h] [bp-44h]
  _DWORD *v129; // [sp+165Ch] [bp-40h]
  _DWORD *v130; // [sp+1660h] [bp-3Ch]
  float i; // [sp+1664h] [bp-38h]
  float v132; // [sp+1668h] [bp-34h]
  float v133; // [sp+166Ch] [bp-30h]
  unsigned __int8 v134; // [sp+1673h] [bp-29h]
  int j; // [sp+1674h] [bp-28h]
  int v136; // [sp+1678h] [bp-24h]
  int v137; // [sp+167Ch] [bp-20h]
  int k; // [sp+1680h] [bp-1Ch]
  void *v139; // [sp+1684h] [bp-18h]

  V_LOCK();
  sub_FBD60((int)v78, *(int *)(a1 + 272));
  logfmt_raw(v36, 0x1000u, 0, v82, v78[0], v78[1], v79, v80, v81, v82, "single_core_test_eth_2282...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "single_core_test_eth_2282",
    25,
    10710,
    40,
    v36);
  v139 = malloc(0x1440u);
  sub_106D34(a1, 0, 0);
  sub_106D34(a1, 28, 0);
  sub_106D34(a1, 15, 3);
  sub_106D34(a1, 9, 458780);
  sub_106D34(a1, 26, 32);
  sub_106D34(a1, 27, 30277627);
  sub_106D34(a1, 192, 3874);
  v128 = 0;
  v127 = 6 * *(_DWORD *)(a1 + 272);
  v126 = 720;
  v134 = 0;
  v125 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  memset(&v36[4096], 0, 576);
  v133 = 0.0;
  v132 = 0.0;
  v124 = 0;
  v123 = 0;
  v122 = 0;
  v1 = asic_select_1;
  if ( (unsigned __int16)asic_select_1 >= 0x1F4u )
    v1 = 500;
  asic_select_0 = v1;
  v132 = (float)(unsigned __int16)asic_select_1;
  v133 = v132;
  for ( i = (float)(unsigned __int16)freq_select; i < (float)(unsigned __int16)asic_select_1; i = i + 6.25 )
  {
    (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
    usleep(0x64u);
    (*(void (__fastcall **)(int, int))(a1 + 204))(a1, 1);
    usleep(0x64u);
    (*(void (__fastcall **)(int))(a1 + 4))(a1);
    *(_DWORD *)(a1 + 504) = (int)i;
    sleep(1u);
  }
  while ( 1 )
  {
    *(_DWORD *)(a1 + 504) = 0;
    ptr = calloc(1u, 0x59u);
    *(_BYTE *)(a1 + 576) = 1;
    *(_DWORD *)(a1 + 532) = 1;
    v2 = *(_DWORD *)(a1 + 272);
    *((_DWORD *)&unk_5BB670 + v2) = malloc(0x58u);
    if ( !*((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272)) )
    {
      V_LOCK();
      sub_FBD60((int)v83, *(int *)(a1 + 272));
      logfmt_raw(
        v36,
        0x1000u,
        0,
        v87,
        v83[0],
        v83[1],
        v84,
        v85,
        v86,
        v87,
        "%s, malloc works struct for chain-%d error!",
        "single_core_test_eth_2282",
        *(_DWORD *)(a1 + 272));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "single_core_test_eth_2282",
        25,
        10768,
        100,
        v36);
      return 13;
    }
    **((_DWORD **)&unk_5BB670 + *(_DWORD *)(a1 + 272)) = *((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272));
    *(_DWORD *)(*((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272)) + 4) = *((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272));
    V_LOCK();
    sub_FBD60((int)v88, *(int *)(a1 + 272));
    logfmt_raw(v36, 0x1000u, 0, v92, v88[0], v88[1], v89, v90, v91, v92, "start_pattern_test...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "single_core_test_eth_2282",
      25,
      10774,
      60,
      v36);
    *(_BYTE *)(a1 + 279) = 1;
    *(_BYTE *)(a1 + 278) = 1;
    for ( j = 0; j <= 5; ++j )
    {
      v136 = 0;
      v137 = 0;
      sub_106BA8(a1, 4, 0);
      for ( k = 0; k < v126; ++k )
      {
        if ( !(k % 10) )
        {
          printf("chain-%d chip-%d core-%d test begin...\n", *(_DWORD *)(a1 + 272), j, k / 10);
          sub_106D34(a1, 9, 458780);
          sub_1070C8(a1, k / 10, 9, 458781);
        }
        memset(s, 0, 0x41u);
        memset(v76, 0, 0x11u);
        memset(v74, 0, 0x41u);
        memset(dest, 0, 0xA9u);
        memcpy(dest, &mining_slt_pattern_str_3[168 * k], 0xA8u);
        memset(haystack, 0, 0xA9u);
        memcpy(haystack, &mining_slt_pattern_str_3[168 * k], 0xA8u);
        v4 = strstr(haystack, "nonce");
        v120 = v4 + 6;
        v5 = hex2char(v4[12], v4[13]);
        v119 = v5 - j;
        v6 = v120 + 6;
        *v6 = char2hex((unsigned __int8)(v5 - j) >> 4);
        v7 = v120 + 7;
        *v7 = char2hex(v119 & 0xF);
        V_LOCK();
        sub_FBD60((int)v93, *(int *)(a1 + 272));
        logfmt_raw(v36, 0x1000u, 0, v97, v93[0], v93[1], v94, v95, v96, v97, "no %d work: %s", k, haystack);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "single_core_test_eth_2282",
          25,
          10805,
          20,
          v36);
        v128 = _isoc99_sscanf(haystack, "header %s nonce %s mixhash %s", s, v75, v74);
        if ( v128 <= 2 )
        {
          V_LOCK();
          sub_FBD60((int)v98, *(int *)(a1 + 272));
          logfmt_raw(
            v36,
            0x1000u,
            0,
            v102,
            v98[0],
            v98[1],
            v99,
            v100,
            v101,
            v102,
            "failed to parse slt tmp pattern string");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "single_core_test_eth_2282",
            25,
            10810,
            100,
            v36);
          exit(2);
        }
        v128 = _isoc99_sscanf(dest, "header %s nonce %s mixhash %s", s, v76, v74);
        if ( v128 <= 2 )
        {
          V_LOCK();
          sub_FBD60((int)v103, *(int *)(a1 + 272));
          logfmt_raw(
            v36,
            0x1000u,
            0,
            v107,
            v103[0],
            v103[1],
            v104,
            v105,
            v106,
            v107,
            "failed to parse slt pattern string");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "single_core_test_eth_2282",
            25,
            10816,
            100,
            v36);
          exit(2);
        }
        str2hex((int)&v66, (int)s, 64);
        str2hex((int)v65, (int)v76, 16);
        str2hex((int)&v64, (int)v75, 16);
        str2hex((int)v63, (int)v74, 64);
        *((_QWORD *)ptr + 1) = v126 % 255;
        v8 = (char *)ptr + 16;
        v9 = v67;
        v10 = v68;
        v11 = v69;
        *((_DWORD *)ptr + 4) = v66;
        v8[1] = v9;
        v8[2] = v10;
        v8[3] = v11;
        v12 = v71;
        v13 = v72;
        v14 = v73;
        v8[4] = v70;
        v8[5] = v12;
        v8[6] = v13;
        v8[7] = v14;
        v15 = sub_10F6C8(&v64);
        *((_QWORD *)ptr + 10) = v15;
        *((_QWORD *)ptr + 10) += 100LL;
        v118 = malloc(0x58u);
        if ( !v118 )
        {
          V_LOCK();
          sub_FBD60((int)v108, *(int *)(a1 + 272));
          logfmt_raw(
            v36,
            0x1000u,
            0,
            v112,
            v108[0],
            v108[1],
            v109,
            v110,
            v111,
            v112,
            "%s, malloc works struct error!",
            "single_core_test_eth_2282");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "single_core_test_eth_2282",
            25,
            10833,
            100,
            v36);
          return 13;
        }
        memset(v118, 0, 0x58u);
        v16 = (char *)v118 + 12;
        v17 = v67;
        v18 = v68;
        v19 = v69;
        *((_DWORD *)v118 + 3) = v66;
        v16[1] = v17;
        v16[2] = v18;
        v16[3] = v19;
        v20 = v71;
        v21 = v72;
        v22 = v73;
        v16[4] = v70;
        v16[5] = v20;
        v16[6] = v21;
        v16[7] = v22;
        v23 = (char *)v118 + 44;
        v24 = v65[1];
        *((_DWORD *)v118 + 11) = v65[0];
        *((_DWORD *)v23 + 1) = v24;
        v25 = (char *)v118 + 52;
        v26 = v63[1];
        v27 = v63[2];
        v28 = v63[3];
        *((_DWORD *)v118 + 13) = v63[0];
        v25[1] = v26;
        v25[2] = v27;
        v25[3] = v28;
        v29 = v63[5];
        v30 = v63[6];
        v31 = v63[7];
        v25[4] = v63[4];
        v25[5] = v29;
        v25[6] = v30;
        v25[7] = v31;
        sub_FBEF0(v118, *((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272)));
        *((_BYTE *)v118 + 84) = 0;
        *((_DWORD *)v118 + 2) = *((_DWORD *)ptr + 2);
        push_work_base(a1, (int)ptr);
        while ( !*((_BYTE *)v118 + 84) )
        {
          v32 = v134++;
          if ( v32 > 0xA )
            break;
          usleep(0x1388u);
        }
        v134 = 0;
        if ( *((_BYTE *)v118 + 84) )
        {
          ++v136;
          ++v137;
        }
        if ( k % 10 == 9 )
        {
          printf("chain-%d chip id: %d, core_id: %d, passed_cnt: %d\n", *(_DWORD *)(a1 + 272), j, k / 10, v137);
          v137 = 0;
          sub_106D34(a1, 15, 3);
          sub_106D34(a1, 2, 254);
          usleep(0x12Cu);
          sub_106D34(a1, 2, 255);
          usleep(0x12Cu);
          sub_106D34(a1, 15, 3);
        }
      }
      V_LOCK();
      sub_FBD60((int)v113, *(int *)(a1 + 272));
      logfmt_raw(
        v36,
        0x1000u,
        0,
        v117,
        v113[0],
        v113[1],
        v114,
        v115,
        v116,
        v117,
        "chip id: %d, pattern_pass: %d",
        j,
        v136);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "single_core_test_eth_2282",
        25,
        10864,
        40,
        v36);
      printf(
        "chain-%d chip id: %d, pattern_pass: %d, pass_rate: %.4f%\n",
        *(_DWORD *)(a1 + 272),
        j,
        v136,
        (float)((float)((float)v136 / (float)v126) * 100.0));
    }
    *(_BYTE *)(a1 + 278) = 0;
    usleep(0xC350u);
    if ( ptr )
      free(ptr);
    v130 = (_DWORD *)**((_DWORD **)&unk_5BB670 + *(_DWORD *)(a1 + 272));
    v129 = (_DWORD *)*v130;
    while ( v130 != *((_DWORD **)&unk_5BB670 + *(_DWORD *)(a1 + 272)) )
    {
      v122 = v130;
      sub_FBF64((int)v130);
      if ( v122 )
        free(v122);
      v130 = v129;
      v129 = (_DWORD *)*v129;
    }
    sub_FBFB4(*((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272)));
    if ( *((_DWORD *)&unk_5BB670 + *(_DWORD *)(a1 + 272)) )
      free(*((void **)&unk_5BB670 + *(_DWORD *)(a1 + 272)));
    if ( v132 > 700.0 )
      break;
    v133 = v133 + 12.5;
    v132 = v132 + 12.5;
    (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
    usleep(0x64u);
    (*(void (__fastcall **)(int, int))(a1 + 204))(a1, 1);
    usleep(0x64u);
    (*(void (__fastcall **)(int))(a1 + 4))(a1);
    *(_DWORD *)(a1 + 504) = (int)v132;
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "chain-%d freq: %.2f!\n", *(_DWORD *)(a1 + 264), v34, v132);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "single_core_test_eth_2282",
      25,
      10897,
      40,
      v36);
  }
  if ( v139 )
    free(v139);
  return 0;
}
