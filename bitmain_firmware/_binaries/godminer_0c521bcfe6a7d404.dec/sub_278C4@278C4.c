int __fastcall sub_278C4(int a1, int a2)
{
  int v3; // r5
  void *v4; // r0
  void *v5; // r0
  __int64 v6; // r0
  int v7; // r6
  int v8; // r2
  int v9; // r3
  int v10; // r4
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r8
  float v16; // s26
  float v17; // s18
  float v18; // s16
  double v19; // d10
  int all_created_runtime; // r4
  char *status_from_monitor; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  __int64 v25; // r6
  int v26; // r4
  int v27; // r0
  int v28; // r0
  double v29; // d13
  double v30; // d0
  float v31; // s21
  __int64 v32; // r0
  int v33; // r0
  double v34; // d9
  double v35; // d8
  bool v36; // cc
  __int64 v37; // r0
  int v38; // r0
  int v39; // r0
  __int64 v40; // r0
  int v41; // r0
  int v42; // r0
  __int64 v43; // r0
  int v44; // r0
  int v45; // r0
  __int64 v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  _DWORD *v51; // r3
  int v52; // r0
  int v53; // r2
  int v54; // r1
  int v55; // r0
  int v56; // r0
  int v57; // r5
  int v58; // r6
  int v59; // t1
  int v60; // r0
  unsigned __int8 v61; // r0
  _DWORD *v62; // r2
  int v63; // r1
  int v64; // lr
  int v65; // r2
  int v66; // r0
  int v67; // r10
  int *v68; // r5
  int v69; // r11
  int v70; // r0
  int v71; // r9
  int v72; // r3
  int v73; // r8
  int v74; // r2
  int v75; // r0
  int v76; // r0
  int v77; // r2
  int v78; // r8
  int v79; // r0
  int *v80; // r8
  char *v81; // r7
  int v82; // r5
  int v83; // t1
  int v84; // r1
  int v85; // t1
  int v86; // r0
  char *v87; // r7
  _DWORD *v88; // r5
  int v89; // r6
  int v90; // t1
  int v91; // r0
  char *v92; // r7
  _DWORD *v93; // r5
  int v94; // r6
  int v95; // t1
  int v96; // r0
  char *v97; // r10
  _DWORD *v98; // r5
  int v99; // r6
  int v100; // t1
  int v101; // r0
  int v102; // r0
  _DWORD *v103; // r7
  int v104; // r6
  char *v105; // r9
  char *v106; // r8
  _DWORD *v107; // r5
  int v108; // t1
  int v109; // r0
  int v110; // r0
  int v111; // r6
  int v112; // t1
  int v113; // r0
  char *v114; // r10
  _DWORD *v115; // r6
  int v116; // r8
  __int64 v117; // kr00_8
  int v118; // t1
  unsigned int v119; // r7
  unsigned int v120; // r11
  int v121; // r0
  __int64 v122; // r0
  int v123; // r0
  _DWORD *v124; // r7
  int v125; // r6
  char *v126; // r9
  char *v127; // r8
  _DWORD *v128; // r5
  int v129; // t1
  int v130; // r0
  int v131; // r0
  int v132; // r6
  int v133; // t1
  int v134; // r0
  char *v135; // r10
  _DWORD *v136; // r7
  int v137; // r5
  int v138; // t1
  int v139; // r0
  int v140; // r0
  int v141; // r0
  int v142; // r0
  int v143; // r0
  _DWORD *v145; // r6
  _DWORD *v146; // r4
  char *v147; // r7
  int v148; // t1
  __int64 v149; // r0
  int v150; // r0
  int v151; // r0
  int v152; // r0
  char *v153; // [sp+10h] [bp-123Ch]
  int v154; // [sp+18h] [bp-1234h]
  _DWORD *v155; // [sp+1Ch] [bp-1230h]
  char *ptr; // [sp+2Ch] [bp-1220h]
  char *v158; // [sp+34h] [bp-1218h]
  int v159; // [sp+38h] [bp-1214h]
  int v160; // [sp+40h] [bp-120Ch]
  int v161; // [sp+44h] [bp-1208h]
  int v162; // [sp+50h] [bp-11FCh] BYREF
  int v163; // [sp+54h] [bp-11F8h] BYREF
  int v164; // [sp+58h] [bp-11F4h] BYREF
  int v165; // [sp+5Ch] [bp-11F0h] BYREF
  double v166; // [sp+60h] [bp-11ECh] BYREF
  char v167[12]; // [sp+6Ch] [bp-11E0h] BYREF
  char v168[4]; // [sp+78h] [bp-11D4h] BYREF
  int v169; // [sp+7Ch] [bp-11D0h]
  int v170; // [sp+80h] [bp-11CCh]
  int v171; // [sp+84h] [bp-11C8h]
  char s[32]; // [sp+88h] [bp-11C4h] BYREF
  char v173[32]; // [sp+A8h] [bp-11A4h] BYREF
  char v174[32]; // [sp+C8h] [bp-1184h] BYREF
  char v175[32]; // [sp+E8h] [bp-1164h] BYREF
  char v176[32]; // [sp+108h] [bp-1144h] BYREF
  char v177[4]; // [sp+128h] [bp-1124h] BYREF
  char v178[256]; // [sp+148h] [bp-1104h] BYREF
  char v179[4]; // [sp+248h] [bp-1004h] BYREF
  int v180; // [sp+24Ch] [bp-1000h]
  int v181; // [sp+250h] [bp-FFCh]
  float v182; // [sp+254h] [bp-FF8h]
  float v183; // [sp+258h] [bp-FF4h]
  float v184; // [sp+25Ch] [bp-FF0h]
  float v185; // [sp+260h] [bp-FECh]
  double v186; // [sp+268h] [bp-FE4h]

  v169 = 0;
  v170 = 0;
  v171 = 0;
  v3 = a1 == 0;
  *(_DWORD *)v168 = 0;
  memset(s, 0, sizeof(s));
  v4 = memset(v178, 0, sizeof(v178));
  v162 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v4);
    v152 = logfmt_raw((int)v179, 0x1000u);
    V_UNLOCK(v152);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/api_new.c",
      140,
      "get_stats_old",
      13,
      1400,
      100,
      v179);
    return -2147483646;
  }
  else
  {
    v5 = sub_23EE4(a1, 1, 70, *(const char **)(a2 + 8));
    v6 = json_array(v5);
    v7 = v6;
    v159 = v6;
    v10 = json_object(v6, HIDWORD(v6), v8, v9);
    v11 = json_string("2.12");
    json_object_set_new(v10, "BMMiner", v11);
    v12 = json_string(g_miner_version);
    json_object_set_new(v10, "Miner", v12);
    v13 = json_string(g_miner_compiletime);
    json_object_set_new(v10, "CompileTime", v13);
    v14 = json_string(g_miner_type);
    json_object_set_new(v10, "Type", v14);
    json_array_append_new(v7, v10);
    read_system_status_from_monitor(v179);
    v15 = v180;
    v16 = v182;
    v17 = v184;
    v18 = v185;
    v19 = v186;
    all_created_runtime = get_all_created_runtime(&v162);
    status_from_monitor = (char *)frontend_runtime_instance();
    v24 = v162;
    v158 = status_from_monitor;
    if ( v162 > 0 )
    {
      v155 = malloc(216 * v162);
      v145 = v155;
      status_from_monitor = (char *)malloc(4 * v162);
      v24 = v162;
      ptr = status_from_monitor;
      if ( v162 <= 0 )
      {
        v25 = 0;
      }
      else
      {
        v146 = (_DWORD *)(all_created_runtime - 4);
        v147 = status_from_monitor - 4;
        do
        {
          v148 = v146[1];
          ++v146;
          status_from_monitor = (char *)read_status_from_monitor(v145, v148);
          v23 = v162;
          ++v3;
          v145 += 54;
          v36 = v162 <= v3;
          v24 = *(_DWORD *)(*v146 + 224) + 1;
          *((_DWORD *)v147 + 1) = v24;
          v147 += 4;
        }
        while ( !v36 );
        v25 = v3;
      }
    }
    else
    {
      v25 = 0;
      ptr = 0;
      v155 = 0;
    }
    v26 = json_object(status_from_monitor, v22, v23, v24);
    v27 = json_integer(v25, HIDWORD(v25));
    json_object_set_new(v26, "STATS", v27);
    snprintf(v168, 0x10u, "BTM_SOC%d", v3);
    v28 = json_string(v168);
    json_object_set_new(v26, "ID", v28);
    v29 = v16;
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v158 + 18) + 16), v173);
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v158 + 18) + 16), v174);
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v158 + 18) + 16), v175);
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v158 + 18) + 16), v176);
    v30 = v19;
    format_hashrate_double(*(_DWORD *)(*((_DWORD *)v158 + 18) + 16), &v166, v167);
    v31 = v183;
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v32 = sub_12E980(LODWORD(v30), HIDWORD(v30));
    v33 = json_integer(v32, HIDWORD(v32));
    json_object_set_new(v26, "Elapsed", v33);
    v34 = v17 * v30;
    v35 = v18 * v30;
    v36 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v36 = (unsigned int)(opt_algo - 6) > 1;
    if ( v36 )
    {
      v149 = sub_12E980(COERCE_UNSIGNED_INT64(v29 * v30 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v29 * v30 * 100.0)));
      v150 = sub_12E62C(v149, HIDWORD(v149));
      v151 = json_real(v150);
      json_object_set_new(v26, "GHS 5s", v151);
    }
    else
    {
      v37 = sub_12E980(COERCE_UNSIGNED_INT64(v31 * v30 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v31 * v30 * 100.0)));
      v38 = sub_12E62C(v37, HIDWORD(v37));
      v39 = json_real(v38);
      json_object_set_new(v26, "GHS 5s", v39);
      v35 = *(float *)&v30 * v35;
      v34 = *(float *)&v30 * v34;
    }
    v40 = sub_12E980(COERCE_UNSIGNED_INT64(v35 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v35 * 100.0)));
    v41 = sub_12E62C(v40, HIDWORD(v40));
    v42 = json_real(v41);
    json_object_set_new(v26, "GHS av", v42);
    v43 = sub_12E980(COERCE_UNSIGNED_INT64(v34 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v34 * 100.0)));
    v44 = sub_12E62C(v43, HIDWORD(v43));
    v45 = json_real(v44);
    json_object_set_new(v26, "rate_30m", v45);
    v46 = sub_12E980(COERCE_UNSIGNED_INT64(v166 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v166 * 100.0)));
    v47 = sub_12E62C(v46, HIDWORD(v46));
    v48 = json_real(v47);
    json_object_set_new(v26, "total_rateideal", v48);
    v49 = json_integer(opt_bitmain_work_mode, opt_bitmain_work_mode >> 31);
    json_object_set_new(v26, "Mode", v49);
    v50 = json_integer(v162, v162 >> 31);
    json_object_set_new(v26, "miner_count", v50);
    if ( v162 <= 0 )
    {
      v52 = 0x7FFFFFFF;
      v54 = 0;
    }
    else
    {
      v51 = v155;
      v52 = 0x7FFFFFFF;
      do
      {
        v53 = v51[18];
        v51 += 54;
        if ( v52 >= v53 )
          v52 = v53;
      }
      while ( &v155[54 * v162] != v51 );
      v54 = v52 >> 31;
    }
    v55 = json_integer(v52, v54);
    json_object_set_new(v26, "frequency", v55);
    v56 = json_integer(v15, v15 >> 31);
    json_object_set_new(v26, "fan_num", v56);
    if ( v15 > 0 )
    {
      v57 = 0;
      v58 = v181 - 4;
      do
      {
        ++v57;
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "fan%d", v57);
        v59 = *(_DWORD *)(v58 + 4);
        v58 += 4;
        v60 = json_integer(v59, v59 >> 31);
        json_object_set_new(v26, s, v60);
      }
      while ( v57 != v15 );
    }
    if ( v162 <= 0 )
    {
      v160 = -100;
      v161 = -1;
      v65 = 0;
    }
    else
    {
      v61 = 0;
      v62 = v155;
      v63 = -100;
      do
      {
        v64 = v62[4];
        v62 += 54;
        if ( v63 < v64 )
          v63 = v64;
        v61 += *(v62 - 48) + *(v62 - 47);
      }
      while ( v62 != &v155[54 * v162] );
      v65 = v61;
      v160 = v63;
      v161 = v63 >> 31;
    }
    v66 = json_integer(v65, 0);
    json_object_set_new(v26, "temp_num", v66);
    if ( v162 > 0 )
    {
      v67 = 0;
      v68 = v155;
      v153 = ptr - 4;
      do
      {
        v69 = v68[6];
        v70 = *v68;
        v163 = 0;
        ++v67;
        v164 = 0;
        v165 = 0;
        v68 += 54;
        *(_DWORD *)v177 = 0;
        find_min_and_max_int(v70, v69, &v163, &v164);
        v71 = *(v68 - 47);
        find_min_and_max_int(*(v68 - 52), v71, &v165, v177);
        v72 = *(_DWORD *)v177;
        v73 = *((_DWORD *)v153 + 1);
        if ( *(int *)v177 < v164 )
          v72 = v164;
        v74 = *((_DWORD *)v153 + 1);
        v153 += 4;
        v154 = v72;
        sprintf(s, "temp%d", v74);
        v75 = json_integer(v154, v154 >> 31);
        json_object_set_new(v26, s, v75);
        v76 = *(v68 - 53);
        *(_DWORD *)v177 = 0;
        v165 = 0;
        v164 = 0;
        v163 = 0;
        find_min_and_max_int(v76, v69, &v163, &v164);
        find_min_and_max_int(*(v68 - 51), v71, &v165, v177);
        v77 = v73;
        v78 = v164;
        if ( *(int *)v177 >= v164 )
          v78 = *(_DWORD *)v177;
        sprintf(s, "temp2_%d", v77);
        v79 = json_integer(v78, v78 >> 31);
        json_object_set_new(v26, s, v79);
      }
      while ( v162 > v67 );
      v80 = v155;
      if ( v162 > 0 )
      {
        v81 = ptr - 4;
        v82 = 0;
        do
        {
          ++v82;
          memset(s, 0, sizeof(s));
          memset(v178, 0, sizeof(v178));
          v83 = *((_DWORD *)v81 + 1);
          v81 += 4;
          snprintf(s, 0x20u, "temp_in_pcb_%d", v83);
          v84 = v80[6];
          v85 = *v80;
          v80 += 54;
          sub_24394(v85, v84, v178);
          v86 = json_string(v178);
          json_object_set_new(v26, s, v86);
        }
        while ( v162 > v82 );
        if ( v162 > 0 )
        {
          v87 = ptr - 4;
          v88 = v155;
          v89 = 0;
          do
          {
            ++v89;
            memset(s, 0, sizeof(s));
            v88 += 54;
            memset(v178, 0, sizeof(v178));
            v90 = *((_DWORD *)v87 + 1);
            v87 += 4;
            snprintf(s, 0x20u, "temp_out_pcb_%d", v90);
            sub_24394(*(v88 - 52), *(v88 - 47), v178);
            v91 = json_string(v178);
            json_object_set_new(v26, s, v91);
          }
          while ( v162 > v89 );
          if ( v162 > 0 )
          {
            v92 = ptr - 4;
            v93 = v155;
            v94 = 0;
            do
            {
              ++v94;
              memset(s, 0, sizeof(s));
              v93 += 54;
              memset(v178, 0, sizeof(v178));
              v95 = *((_DWORD *)v92 + 1);
              v92 += 4;
              snprintf(s, 0x20u, "temp_in_chip_%d", v95);
              sub_24394(*(v93 - 53), *(v93 - 48), v178);
              v96 = json_string(v178);
              json_object_set_new(v26, s, v96);
            }
            while ( v162 > v94 );
            if ( v162 > 0 )
            {
              v97 = ptr - 4;
              v98 = v155;
              v99 = 0;
              do
              {
                ++v99;
                memset(s, 0, sizeof(s));
                v98 += 54;
                memset(v178, 0, sizeof(v178));
                v100 = *((_DWORD *)v97 + 1);
                v97 += 4;
                snprintf(s, 0x20u, "temp_out_chip_%d", v100);
                sub_24394(*(v98 - 52), *(v98 - 47), v178);
                v101 = json_string(v178);
                json_object_set_new(v26, s, v101);
              }
              while ( v162 > v99 );
            }
          }
        }
      }
    }
    v102 = json_integer(v160, v161);
    json_object_set_new(v26, "temp_max", v102);
    if ( v162 <= 0 )
      goto LABEL_75;
    v103 = v155;
    v104 = 0;
    v105 = ptr - 4;
    v106 = ptr - 4;
    v107 = v155;
    do
    {
      ++v104;
      memset(s, 0, sizeof(s));
      v108 = *((_DWORD *)v105 + 1);
      v105 += 4;
      snprintf(s, 0x20u, "chain_acn%d", v108);
      v109 = v103[16];
      v103 += 54;
      v110 = json_integer(v109, v109 >> 31);
      json_object_set_new(v26, s, v110);
    }
    while ( v162 > v104 );
    if ( v162 <= 0 )
      goto LABEL_75;
    v111 = 0;
    do
    {
      v112 = *((_DWORD *)v106 + 1);
      v106 += 4;
      ++v111;
      v107 += 54;
      sprintf(v177, "chain_acs%d", v112);
      memset(s, 0, sizeof(s));
      memset(v178, 0, sizeof(v178));
      snprintf(s, 0x20u, "chain_acs%d", v112);
      snprintf(v178, 0x100u, "%s", (const char *)*(v107 - 37));
      v113 = json_string(v178);
      json_object_set_new(v26, s, v113);
    }
    while ( v162 > v111 );
    if ( v162 <= 0 )
    {
LABEL_75:
      v117 = 0;
    }
    else
    {
      v114 = ptr - 4;
      v115 = v155;
      v116 = 0;
      v117 = 0;
      do
      {
        ++v116;
        memset(s, 0, sizeof(s));
        v118 = *((_DWORD *)v114 + 1);
        v114 += 4;
        snprintf(s, 0x20u, "chain_hw%d", v118);
        v119 = v115[20];
        v115 += 54;
        v120 = *(v115 - 33);
        v121 = json_integer(v119, v120);
        json_object_set_new(v26, s, v121);
        v117 += __PAIR64__(v120, v119);
      }
      while ( v162 > v116 );
    }
    v122 = v117;
    if ( opt_algo == 9 )
      v122 = sub_12E944(v117, HIDWORD(v117), 1000, 0);
    v123 = json_integer(v122, HIDWORD(v122));
    json_object_set_new(v26, "no_matching_work", v123);
    if ( v162 > 0 )
    {
      v124 = v155;
      v125 = 0;
      v126 = ptr - 4;
      v127 = ptr - 4;
      v128 = v155;
      do
      {
        ++v125;
        memset(s, 0, sizeof(s));
        v129 = *((_DWORD *)v126 + 1);
        v126 += 4;
        v130 = snprintf(s, 0x20u, "chain_rate%d", v129);
        v124 += 54;
        v131 = json_real(v130);
        json_object_set_new(v26, s, v131);
      }
      while ( v162 > v125 );
      if ( v162 > 0 )
      {
        v132 = 0;
        do
        {
          ++v132;
          v128 += 54;
          format_hashrate_string(*(_DWORD *)(*((_DWORD *)v158 + 18) + 16), v177);
          v133 = *((_DWORD *)v127 + 1);
          v127 += 4;
          snprintf(s, 0x20u, "CHAIN AVG HASHRATE%d", v133);
          v134 = json_string(v177);
          json_object_set_new(v26, s, v134);
        }
        while ( v162 > v132 );
        if ( v162 > 0 )
        {
          v135 = ptr - 4;
          v136 = v155;
          v137 = 0;
          do
          {
            ++v137;
            memset(s, 0, sizeof(s));
            v138 = *((_DWORD *)v135 + 1);
            v135 += 4;
            snprintf(s, 0x20u, "freq%d", v138);
            v139 = v136[18];
            v136 += 54;
            v140 = json_integer(v139, v139 >> 31);
            json_object_set_new(v26, s, v140);
          }
          while ( v162 > v137 );
        }
      }
    }
    v141 = json_string(g_miner_version);
    json_object_set_new(v26, "miner_version", v141);
    v142 = json_string(0);
    json_object_set_new(v26, "miner_id", v142);
    json_array_append_new(v159, v26);
    json_object_set_new(a1, "STATS", v159);
    v143 = json_integer(1, 0);
    json_object_set_new(a1, "id", v143);
    if ( v162 > 0 )
    {
      free(ptr);
      free(v155);
    }
    return 0;
  }
}
