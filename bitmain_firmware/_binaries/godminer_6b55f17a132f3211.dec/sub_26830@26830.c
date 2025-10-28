int __fastcall sub_26830(int a1, int a2)
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
  float v16; // s16
  float v17; // s20
  float v18; // s18
  double v19; // d11
  int all_created_runtime; // r4
  char *status_from_monitor; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  __int64 v25; // r6
  int v26; // r4
  int v27; // r0
  int v28; // r0
  double v29; // d8
  float v30; // s24
  __int64 v31; // r0
  int v32; // r0
  double v33; // d10
  double v34; // d9
  bool v35; // zf
  __int64 v36; // r0
  int v37; // r0
  int v38; // r0
  __int64 v39; // r0
  int v40; // r0
  int v41; // r0
  __int64 v42; // r0
  int v43; // r0
  int v44; // r0
  __int64 v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  _DWORD *v50; // r3
  int v51; // r0
  int v52; // r2
  int v53; // r1
  int v54; // r0
  int v55; // r0
  int v56; // r5
  int v57; // r6
  int v58; // t1
  int v59; // r0
  int v60; // r12
  int v61; // r0
  _DWORD *v62; // r1
  int v63; // r2
  int v64; // r3
  int v65; // r0
  int v66; // r10
  int *v67; // r5
  int v68; // r11
  int v69; // r0
  int v70; // r9
  int v71; // r3
  int v72; // r8
  int v73; // r2
  int v74; // r0
  int v75; // r0
  int v76; // r2
  int v77; // r8
  int v78; // r0
  int *v79; // r8
  char *v80; // r7
  int v81; // r5
  int v82; // t1
  int v83; // r1
  int v84; // t1
  int v85; // r0
  char *v86; // r7
  _DWORD *v87; // r5
  int v88; // r6
  int v89; // t1
  int v90; // r0
  char *v91; // r7
  _DWORD *v92; // r5
  int v93; // r6
  int v94; // t1
  int v95; // r0
  char *v96; // r10
  _DWORD *v97; // r5
  int v98; // r6
  int v99; // t1
  int v100; // r0
  int v101; // r0
  _DWORD *v102; // r7
  int v103; // r6
  char *v104; // r9
  char *v105; // r8
  _DWORD *v106; // r5
  int v107; // t1
  int v108; // r0
  int v109; // r0
  int v110; // r6
  int v111; // t1
  int v112; // r0
  char *v113; // r10
  _DWORD *v114; // r6
  int v115; // r8
  __int64 v116; // kr00_8
  int v117; // t1
  unsigned int v118; // r7
  unsigned int v119; // r11
  int v120; // r0
  __int64 v121; // r0
  int v122; // r0
  _DWORD *v123; // r7
  int v124; // r6
  char *v125; // r9
  char *v126; // r8
  _DWORD *v127; // r5
  int v128; // t1
  int v129; // r0
  int v130; // r0
  int v131; // r6
  int v132; // t1
  int v133; // r0
  char *v134; // r10
  _DWORD *v135; // r7
  int v136; // r5
  int v137; // t1
  int v138; // r0
  int v139; // r0
  int v140; // r0
  int v141; // r0
  int v142; // r0
  __int64 v144; // r0
  int v145; // r0
  int v146; // r0
  double v147; // d13
  __int64 v148; // r0
  int v149; // r0
  int v150; // r0
  _DWORD *v151; // r6
  _DWORD *v152; // r4
  char *v153; // r7
  int v154; // t1
  bool v155; // cc
  int v156; // r0
  char *v157; // [sp+10h] [bp-123Ch]
  int v158; // [sp+1Ch] [bp-1230h]
  _DWORD *v159; // [sp+20h] [bp-122Ch]
  char *ptr; // [sp+30h] [bp-121Ch]
  char *v162; // [sp+38h] [bp-1214h]
  int v163; // [sp+3Ch] [bp-1210h]
  int v164; // [sp+40h] [bp-120Ch]
  int v165; // [sp+44h] [bp-1208h]
  int v166; // [sp+50h] [bp-11FCh] BYREF
  int v167; // [sp+54h] [bp-11F8h] BYREF
  int v168; // [sp+58h] [bp-11F4h] BYREF
  int v169; // [sp+5Ch] [bp-11F0h] BYREF
  double v170; // [sp+60h] [bp-11ECh] BYREF
  char v171[12]; // [sp+6Ch] [bp-11E0h] BYREF
  char v172[4]; // [sp+78h] [bp-11D4h] BYREF
  int v173; // [sp+7Ch] [bp-11D0h]
  int v174; // [sp+80h] [bp-11CCh]
  int v175; // [sp+84h] [bp-11C8h]
  char s[32]; // [sp+88h] [bp-11C4h] BYREF
  char v177[32]; // [sp+A8h] [bp-11A4h] BYREF
  char v178[32]; // [sp+C8h] [bp-1184h] BYREF
  char v179[32]; // [sp+E8h] [bp-1164h] BYREF
  char v180[32]; // [sp+108h] [bp-1144h] BYREF
  char v181[4]; // [sp+128h] [bp-1124h] BYREF
  char v182[256]; // [sp+148h] [bp-1104h] BYREF
  char v183[4]; // [sp+248h] [bp-1004h] BYREF
  int v184; // [sp+24Ch] [bp-1000h]
  int v185; // [sp+250h] [bp-FFCh]
  float v186; // [sp+254h] [bp-FF8h]
  float v187; // [sp+258h] [bp-FF4h]
  float v188; // [sp+25Ch] [bp-FF0h]
  float v189; // [sp+260h] [bp-FECh]
  double v190; // [sp+268h] [bp-FE4h]

  v173 = 0;
  v174 = 0;
  v175 = 0;
  v3 = a1 == 0;
  *(_DWORD *)v172 = 0;
  memset(s, 0, sizeof(s));
  v4 = memset(v182, 0, sizeof(v182));
  v166 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v4);
    v156 = logfmt_raw((int)v183, 0x1000u);
    V_UNLOCK(v156);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_stats_old",
      13,
      1374,
      100,
      v183);
    return -2147483646;
  }
  else
  {
    v5 = sub_22E5C(a1, 1, 70, *(const char **)(a2 + 8));
    v6 = json_array(v5);
    v7 = v6;
    v163 = v6;
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
    read_system_status_from_monitor(v183);
    v15 = v184;
    v16 = v186;
    v17 = v188;
    v18 = v189;
    v19 = v190;
    all_created_runtime = get_all_created_runtime(&v166);
    status_from_monitor = (char *)frontend_runtime_instance();
    v24 = v166;
    v162 = status_from_monitor;
    if ( v166 > 0 )
    {
      v159 = malloc(216 * v166);
      v151 = v159;
      status_from_monitor = (char *)malloc(4 * v166);
      v24 = v166;
      ptr = status_from_monitor;
      if ( v166 <= 0 )
      {
        v25 = 0;
      }
      else
      {
        v152 = (_DWORD *)(all_created_runtime - 4);
        v153 = status_from_monitor - 4;
        do
        {
          v154 = v152[1];
          ++v152;
          status_from_monitor = (char *)read_status_from_monitor(v151, v154);
          v23 = v166;
          ++v3;
          v151 += 54;
          v155 = v166 <= v3;
          v24 = *(_DWORD *)(*v152 + 212) + 1;
          *((_DWORD *)v153 + 1) = v24;
          v153 += 4;
        }
        while ( !v155 );
        v25 = v3;
      }
    }
    else
    {
      v25 = 0;
      ptr = 0;
      v159 = 0;
    }
    v26 = json_object(status_from_monitor, v22, v23, v24);
    v27 = json_integer(v25, HIDWORD(v25));
    json_object_set_new(v26, "STATS", v27);
    snprintf(v172, 0x10u, "BTM_SOC%d", v3);
    v28 = json_string(v172);
    json_object_set_new(v26, "ID", v28);
    v29 = v16;
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), v177);
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), v178);
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), v179);
    format_hashrate_string(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), v180);
    format_hashrate_double(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), &v170, v171);
    v30 = v187;
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v31 = sub_122368(LODWORD(v19), HIDWORD(v19));
    v32 = json_integer(v31, HIDWORD(v31));
    json_object_set_new(v26, "Elapsed", v32);
    v33 = v17 * v19;
    v34 = v18 * v19;
    v35 = opt_algo == 9;
    if ( opt_algo != 9 )
      v35 = opt_algo == 6;
    if ( v35 )
    {
      v144 = sub_122368(COERCE_UNSIGNED_INT64(v30 * v19 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v30 * v19 * 100.0)));
      v145 = sub_122014(v144, HIDWORD(v144));
      v146 = json_real(v145);
      json_object_set_new(v26, "GHS 5s", v146);
      v147 = *(float *)&v19;
      v148 = sub_122368(COERCE_UNSIGNED_INT64(v147 * v34 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v147 * v34 * 100.0)));
      v149 = sub_122014(v148, HIDWORD(v148));
      v150 = json_real(v149);
      json_object_set_new(v26, "GHS av", v150);
      v42 = sub_122368(COERCE_UNSIGNED_INT64(v147 * v33 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v147 * v33 * 100.0)));
    }
    else
    {
      v36 = sub_122368(COERCE_UNSIGNED_INT64(v29 * v19 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v29 * v19 * 100.0)));
      v37 = sub_122014(v36, HIDWORD(v36));
      v38 = json_real(v37);
      json_object_set_new(v26, "GHS 5s", v38);
      v39 = sub_122368(COERCE_UNSIGNED_INT64(v34 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v34 * 100.0)));
      v40 = sub_122014(v39, HIDWORD(v39));
      v41 = json_real(v40);
      json_object_set_new(v26, "GHS av", v41);
      v42 = sub_122368(COERCE_UNSIGNED_INT64(v33 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v33 * 100.0)));
    }
    v43 = sub_122014(v42, HIDWORD(v42));
    v44 = json_real(v43);
    json_object_set_new(v26, "rate_30m", v44);
    v45 = sub_122368(COERCE_UNSIGNED_INT64(v170 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v170 * 100.0)));
    v46 = sub_122014(v45, HIDWORD(v45));
    v47 = json_real(v46);
    json_object_set_new(v26, "total_rateideal", v47);
    v48 = json_integer(opt_bitmain_work_mode, opt_bitmain_work_mode >> 31);
    json_object_set_new(v26, "Mode", v48);
    v49 = json_integer(v166, v166 >> 31);
    json_object_set_new(v26, "miner_count", v49);
    if ( v166 <= 0 )
    {
      v51 = 0x7FFFFFFF;
      v53 = 0;
    }
    else
    {
      v50 = v159;
      v51 = 0x7FFFFFFF;
      do
      {
        v52 = v50[18];
        v50 += 54;
        if ( v51 >= v52 )
          v51 = v52;
      }
      while ( &v159[54 * v166] != v50 );
      v53 = v51 >> 31;
    }
    v54 = json_integer(v51, v53);
    json_object_set_new(v26, "frequency", v54);
    v55 = json_integer(v15, v15 >> 31);
    json_object_set_new(v26, "fan_num", v55);
    if ( v15 > 0 )
    {
      v56 = 0;
      v57 = v185 - 4;
      do
      {
        ++v56;
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "fan%d", v56);
        v58 = *(_DWORD *)(v57 + 4);
        v57 += 4;
        v59 = json_integer(v58, v58 >> 31);
        json_object_set_new(v26, s, v59);
      }
      while ( v56 != v15 );
    }
    if ( v166 <= 0 )
    {
      v164 = -100;
      v165 = -1;
      v61 = 0;
    }
    else
    {
      v60 = -100;
      LOBYTE(v61) = 0;
      v62 = v159;
      do
      {
        v63 = v62[4];
        v64 = v62[6];
        v62 += 54;
        if ( v60 < v63 )
          v60 = v63;
        LOBYTE(v61) = v61 + v64 + *(v62 - 47);
      }
      while ( v62 != &v159[54 * v166] );
      v61 = (unsigned __int8)v61;
      v164 = v60;
      v165 = v60 >> 31;
    }
    v65 = json_integer(v61, 0);
    json_object_set_new(v26, "temp_num", v65);
    if ( v166 > 0 )
    {
      v66 = 0;
      v67 = v159;
      v157 = ptr - 4;
      do
      {
        v68 = v67[6];
        v69 = *v67;
        v167 = 0;
        ++v66;
        v168 = 0;
        v169 = 0;
        v67 += 54;
        *(_DWORD *)v181 = 0;
        find_min_and_max_int(v69, v68, &v167, &v168);
        v70 = *(v67 - 47);
        find_min_and_max_int(*(v67 - 52), v70, &v169, v181);
        v71 = *(_DWORD *)v181;
        v72 = *((_DWORD *)v157 + 1);
        if ( *(int *)v181 < v168 )
          v71 = v168;
        v73 = *((_DWORD *)v157 + 1);
        v157 += 4;
        v158 = v71;
        sprintf(s, "temp%d", v73);
        v74 = json_integer(v158, v158 >> 31);
        json_object_set_new(v26, s, v74);
        v75 = *(v67 - 53);
        *(_DWORD *)v181 = 0;
        v169 = 0;
        v168 = 0;
        v167 = 0;
        find_min_and_max_int(v75, v68, &v167, &v168);
        find_min_and_max_int(*(v67 - 51), v70, &v169, v181);
        v76 = v72;
        v77 = v168;
        if ( *(int *)v181 >= v168 )
          v77 = *(_DWORD *)v181;
        sprintf(s, "temp2_%d", v76);
        v78 = json_integer(v77, v77 >> 31);
        json_object_set_new(v26, s, v78);
      }
      while ( v166 > v66 );
      v79 = v159;
      if ( v166 > 0 )
      {
        v80 = ptr - 4;
        v81 = 0;
        do
        {
          ++v81;
          memset(s, 0, sizeof(s));
          memset(v182, 0, sizeof(v182));
          v82 = *((_DWORD *)v80 + 1);
          v80 += 4;
          snprintf(s, 0x20u, "temp_in_pcb_%d", v82);
          v83 = v79[6];
          v84 = *v79;
          v79 += 54;
          sub_2330C(v84, v83, v182);
          v85 = json_string(v182);
          json_object_set_new(v26, s, v85);
        }
        while ( v166 > v81 );
        if ( v166 > 0 )
        {
          v86 = ptr - 4;
          v87 = v159;
          v88 = 0;
          do
          {
            ++v88;
            memset(s, 0, sizeof(s));
            v87 += 54;
            memset(v182, 0, sizeof(v182));
            v89 = *((_DWORD *)v86 + 1);
            v86 += 4;
            snprintf(s, 0x20u, "temp_out_pcb_%d", v89);
            sub_2330C(*(v87 - 52), *(v87 - 47), v182);
            v90 = json_string(v182);
            json_object_set_new(v26, s, v90);
          }
          while ( v166 > v88 );
          if ( v166 > 0 )
          {
            v91 = ptr - 4;
            v92 = v159;
            v93 = 0;
            do
            {
              ++v93;
              memset(s, 0, sizeof(s));
              v92 += 54;
              memset(v182, 0, sizeof(v182));
              v94 = *((_DWORD *)v91 + 1);
              v91 += 4;
              snprintf(s, 0x20u, "temp_in_chip_%d", v94);
              sub_2330C(*(v92 - 53), *(v92 - 48), v182);
              v95 = json_string(v182);
              json_object_set_new(v26, s, v95);
            }
            while ( v166 > v93 );
            if ( v166 > 0 )
            {
              v96 = ptr - 4;
              v97 = v159;
              v98 = 0;
              do
              {
                ++v98;
                memset(s, 0, sizeof(s));
                v97 += 54;
                memset(v182, 0, sizeof(v182));
                v99 = *((_DWORD *)v96 + 1);
                v96 += 4;
                snprintf(s, 0x20u, "temp_out_chip_%d", v99);
                sub_2330C(*(v97 - 52), *(v97 - 47), v182);
                v100 = json_string(v182);
                json_object_set_new(v26, s, v100);
              }
              while ( v166 > v98 );
            }
          }
        }
      }
    }
    v101 = json_integer(v164, v165);
    json_object_set_new(v26, "temp_max", v101);
    if ( v166 <= 0 )
      goto LABEL_73;
    v102 = v159;
    v103 = 0;
    v104 = ptr - 4;
    v105 = ptr - 4;
    v106 = v159;
    do
    {
      ++v103;
      memset(s, 0, sizeof(s));
      v107 = *((_DWORD *)v104 + 1);
      v104 += 4;
      snprintf(s, 0x20u, "chain_acn%d", v107);
      v108 = v102[16];
      v102 += 54;
      v109 = json_integer(v108, v108 >> 31);
      json_object_set_new(v26, s, v109);
    }
    while ( v166 > v103 );
    if ( v166 <= 0 )
      goto LABEL_73;
    v110 = 0;
    do
    {
      v111 = *((_DWORD *)v105 + 1);
      v105 += 4;
      ++v110;
      v106 += 54;
      sprintf(v181, "chain_acs%d", v111);
      memset(s, 0, sizeof(s));
      memset(v182, 0, sizeof(v182));
      snprintf(s, 0x20u, "chain_acs%d", v111);
      snprintf(v182, 0x100u, "%s", (const char *)*(v106 - 37));
      v112 = json_string(v182);
      json_object_set_new(v26, s, v112);
    }
    while ( v166 > v110 );
    if ( v166 <= 0 )
    {
LABEL_73:
      v121 = 0;
    }
    else
    {
      v113 = ptr - 4;
      v114 = v159;
      v115 = 0;
      v116 = 0;
      do
      {
        ++v115;
        memset(s, 0, sizeof(s));
        v117 = *((_DWORD *)v113 + 1);
        v113 += 4;
        snprintf(s, 0x20u, "chain_hw%d", v117);
        v118 = v114[20];
        v114 += 54;
        v119 = *(v114 - 33);
        v120 = json_integer(v118, v119);
        json_object_set_new(v26, s, v120);
        v116 += __PAIR64__(v119, v118);
      }
      while ( v166 > v115 );
      v121 = v116;
    }
    v122 = json_integer(v121, HIDWORD(v121));
    json_object_set_new(v26, "no_matching_work", v122);
    if ( v166 > 0 )
    {
      v123 = v159;
      v124 = 0;
      v125 = ptr - 4;
      v126 = ptr - 4;
      v127 = v159;
      do
      {
        ++v124;
        memset(s, 0, sizeof(s));
        v128 = *((_DWORD *)v125 + 1);
        v125 += 4;
        v129 = snprintf(s, 0x20u, "chain_rate%d", v128);
        v123 += 54;
        v130 = json_real(v129);
        json_object_set_new(v26, s, v130);
      }
      while ( v166 > v124 );
      if ( v166 > 0 )
      {
        v131 = 0;
        do
        {
          ++v131;
          v127 += 54;
          format_hashrate_string(*(_DWORD *)(*((_DWORD *)v162 + 18) + 16), v181);
          v132 = *((_DWORD *)v126 + 1);
          v126 += 4;
          snprintf(s, 0x20u, "CHAIN AVG HASHRATE%d", v132);
          v133 = json_string(v181);
          json_object_set_new(v26, s, v133);
        }
        while ( v166 > v131 );
        if ( v166 > 0 )
        {
          v134 = ptr - 4;
          v135 = v159;
          v136 = 0;
          do
          {
            ++v136;
            memset(s, 0, sizeof(s));
            v137 = *((_DWORD *)v134 + 1);
            v134 += 4;
            snprintf(s, 0x20u, "freq%d", v137);
            v138 = v135[18];
            v135 += 54;
            v139 = json_integer(v138, v138 >> 31);
            json_object_set_new(v26, s, v139);
          }
          while ( v166 > v136 );
        }
      }
    }
    v140 = json_string(g_miner_version);
    json_object_set_new(v26, "miner_version", v140);
    v141 = json_string(0);
    json_object_set_new(v26, "miner_id", v141);
    json_array_append_new(v163, v26);
    json_object_set_new(a1, "STATS", v163);
    v142 = json_integer(1, 0);
    json_object_set_new(a1, "id", v142);
    if ( v166 > 0 )
    {
      free(ptr);
      free(v159);
    }
    return 0;
  }
}
