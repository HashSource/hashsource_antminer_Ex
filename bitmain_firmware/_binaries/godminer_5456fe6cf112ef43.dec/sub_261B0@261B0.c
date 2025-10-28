int __fastcall sub_261B0(int a1, int a2)
{
  int v3; // r9
  void *v4; // r0
  void *v5; // r0
  int v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r8
  float v12; // s22
  float v13; // s20
  float v14; // s16
  double v15; // d9
  int all_created_runtime; // r5
  char *status_from_monitor; // r0
  __int64 v18; // r6
  int v19; // r4
  int v20; // r0
  int v21; // r0
  double v22; // d0
  double v23; // d11
  double v24; // d10
  double v25; // d9
  __int64 v26; // r0
  int v27; // r0
  __int64 v28; // r0
  int v29; // r0
  int v30; // r0
  __int64 v31; // r0
  int v32; // r0
  int v33; // r0
  __int64 v34; // r0
  int v35; // r0
  int v36; // r0
  double v37; // d7
  __int64 v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  _DWORD *v43; // r3
  int v44; // r0
  int v45; // r2
  int v46; // r1
  int v47; // r0
  int v48; // r0
  int v49; // r5
  int v50; // r6
  int v51; // t1
  int v52; // r0
  int v53; // r12
  int v54; // r0
  _DWORD *v55; // r1
  int v56; // r2
  int v57; // r3
  int v58; // r0
  int v59; // r10
  int *v60; // r5
  int v61; // r11
  int v62; // r0
  int v63; // r9
  int v64; // r3
  int v65; // r8
  int v66; // r2
  int v67; // r0
  int v68; // r0
  int v69; // r2
  int v70; // r8
  int v71; // r0
  int *v72; // r8
  char *v73; // r7
  int v74; // r5
  int v75; // t1
  int v76; // r1
  int v77; // t1
  int v78; // r0
  char *v79; // r7
  _DWORD *v80; // r5
  int v81; // r6
  int v82; // t1
  int v83; // r0
  char *v84; // r7
  _DWORD *v85; // r5
  int v86; // r6
  int v87; // t1
  int v88; // r0
  char *v89; // r10
  _DWORD *v90; // r5
  int v91; // r6
  int v92; // t1
  int v93; // r0
  int v94; // r0
  _DWORD *v95; // r7
  int v96; // r6
  char *v97; // r9
  char *v98; // r8
  _DWORD *v99; // r5
  int v100; // t1
  int v101; // r0
  int v102; // r0
  int v103; // r6
  int v104; // t1
  int v105; // r0
  char *v106; // r10
  _DWORD *v107; // r6
  int v108; // r8
  __int64 v109; // kr00_8
  int v110; // t1
  unsigned int v111; // r7
  unsigned int v112; // r11
  int v113; // r0
  __int64 v114; // r0
  int v115; // r0
  _DWORD *v116; // r7
  char *v117; // r9
  char *v118; // r8
  _DWORD *v119; // r5
  int v120; // r6
  int v121; // t1
  int v122; // r0
  int v123; // r0
  int v124; // r6
  int v125; // t1
  int v126; // r0
  char *v127; // r10
  _DWORD *v128; // r7
  int v129; // r5
  int v130; // t1
  int v131; // r0
  int v132; // r0
  int v133; // r0
  int v134; // r0
  int v135; // r0
  double v137; // d0
  _DWORD *v138; // r4
  _DWORD *v139; // r6
  char *v140; // r7
  int v141; // t1
  bool v142; // cc
  int v143; // r0
  char *v144; // [sp+10h] [bp-1234h]
  int v145; // [sp+14h] [bp-1230h]
  _DWORD *v146; // [sp+18h] [bp-122Ch]
  char *ptr; // [sp+28h] [bp-121Ch]
  char *v149; // [sp+30h] [bp-1214h]
  int v150; // [sp+34h] [bp-1210h]
  int v151; // [sp+38h] [bp-120Ch]
  int v152; // [sp+3Ch] [bp-1208h]
  int v153; // [sp+48h] [bp-11FCh] BYREF
  int v154; // [sp+4Ch] [bp-11F8h] BYREF
  int v155; // [sp+50h] [bp-11F4h] BYREF
  int v156; // [sp+54h] [bp-11F0h] BYREF
  double v157; // [sp+58h] [bp-11ECh] BYREF
  char v158[12]; // [sp+64h] [bp-11E0h] BYREF
  char v159[4]; // [sp+70h] [bp-11D4h] BYREF
  int v160; // [sp+74h] [bp-11D0h]
  int v161; // [sp+78h] [bp-11CCh]
  int v162; // [sp+7Ch] [bp-11C8h]
  char s[32]; // [sp+80h] [bp-11C4h] BYREF
  char v164[32]; // [sp+A0h] [bp-11A4h] BYREF
  char v165[32]; // [sp+C0h] [bp-1184h] BYREF
  char v166[32]; // [sp+E0h] [bp-1164h] BYREF
  char v167[32]; // [sp+100h] [bp-1144h] BYREF
  char v168[4]; // [sp+120h] [bp-1124h] BYREF
  char v169[256]; // [sp+140h] [bp-1104h] BYREF
  char v170[4]; // [sp+240h] [bp-1004h] BYREF
  int v171; // [sp+244h] [bp-1000h]
  int v172; // [sp+248h] [bp-FFCh]
  float v173; // [sp+24Ch] [bp-FF8h]
  float v174; // [sp+250h] [bp-FF4h]
  float v175; // [sp+254h] [bp-FF0h]
  double v176; // [sp+258h] [bp-FECh]

  v160 = 0;
  v161 = 0;
  v162 = 0;
  v3 = a1 == 0;
  *(_DWORD *)v159 = 0;
  memset(s, 0, sizeof(s));
  v4 = memset(v169, 0, sizeof(v169));
  v153 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v4);
    v143 = logfmt_raw((int)v170, 0x1000u);
    V_UNLOCK(v143);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_stats_old",
      13,
      1188,
      100,
      v170);
    return -2147483646;
  }
  else
  {
    v5 = sub_235C8(a1, 1, 70, *(const char **)(a2 + 8));
    v150 = json_array(v5);
    v6 = json_object(v150);
    v7 = json_string("2.12");
    json_object_set_new(v6, "BMMiner", v7);
    v8 = json_string(g_miner_version);
    json_object_set_new(v6, "Miner", v8);
    v9 = json_string(g_miner_compiletime);
    json_object_set_new(v6, "CompileTime", v9);
    v10 = json_string(g_miner_type);
    json_object_set_new(v6, "Type", v10);
    json_array_append_new(v150, v6);
    read_system_status_from_monitor(v170);
    v11 = v171;
    v12 = v173;
    v13 = v174;
    v14 = v175;
    v15 = v176;
    all_created_runtime = get_all_created_runtime(&v153);
    status_from_monitor = (char *)frontend_runtime_instance();
    v149 = status_from_monitor;
    if ( v153 > 0 )
    {
      v146 = malloc(208 * v153);
      v138 = v146;
      status_from_monitor = (char *)malloc(4 * v153);
      ptr = status_from_monitor;
      if ( v153 <= 0 )
      {
        v18 = 0;
      }
      else
      {
        v139 = (_DWORD *)(all_created_runtime - 4);
        v140 = status_from_monitor - 4;
        do
        {
          v141 = v139[1];
          ++v139;
          status_from_monitor = (char *)read_status_from_monitor(v138, v141);
          ++v3;
          v138 += 52;
          v142 = v153 <= v3;
          *((_DWORD *)v140 + 1) = *(_DWORD *)(*v139 + 140) + 1;
          v140 += 4;
        }
        while ( !v142 );
        v18 = v3;
      }
    }
    else
    {
      v18 = 0;
      ptr = 0;
      v146 = 0;
    }
    v19 = json_object(status_from_monitor);
    v20 = json_integer(v18, HIDWORD(v18));
    json_object_set_new(v19, "STATS", v20);
    snprintf(v159, 0x10u, "BTM_SOC%d", v3);
    v21 = json_string(v159);
    json_object_set_new(v19, "ID", v21);
    format_hashrate_string(*((_DWORD *)v149 + 21), v164);
    format_hashrate_string(*((_DWORD *)v149 + 21), v165);
    format_hashrate_string(*((_DWORD *)v149 + 21), v166);
    format_hashrate_string(*((_DWORD *)v149 + 21), v167);
    v22 = v15;
    format_hashrate_double(*((_DWORD *)v149 + 21), &v157, v158, s);
    v23 = v12 * v15;
    v24 = v13 * v15;
    v25 = v14 * v15;
    if ( byte_164FE8 )
    {
      sub_25CE4();
      v26 = sub_12D578(LODWORD(v22), HIDWORD(v22));
    }
    else
    {
      v26 = 0;
    }
    v27 = json_integer(v26, HIDWORD(v26));
    json_object_set_new(v19, "Elapsed", v27);
    v28 = sub_12D578(COERCE_UNSIGNED_INT64(v23 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v23 * 100.0)));
    v29 = sub_12D224(v28, HIDWORD(v28));
    v30 = json_real(v29);
    json_object_set_new(v19, "GHS 5s", v30);
    v31 = sub_12D578(COERCE_UNSIGNED_INT64(v25 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v25 * 100.0)));
    v32 = sub_12D224(v31, HIDWORD(v31));
    v33 = json_real(v32);
    json_object_set_new(v19, "GHS av", v33);
    v34 = sub_12D578(COERCE_UNSIGNED_INT64(v24 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v24 * 100.0)));
    v35 = sub_12D224(v34, HIDWORD(v34));
    v36 = json_real(v35);
    json_object_set_new(v19, "rate_30m", v36);
    if ( !strcmp(*(const char **)(*(_DWORD *)all_created_runtime + 188), "dash") )
    {
      v137 = v157;
      update_rate_ideal();
      v37 = v137 * 100.0;
    }
    else
    {
      v37 = v157 * 100.0;
    }
    v38 = sub_12D578(LODWORD(v37), HIDWORD(v37));
    v39 = sub_12D224(v38, HIDWORD(v38));
    v40 = json_real(v39);
    json_object_set_new(v19, "total_rateideal", v40);
    v41 = json_integer(opt_bitmain_work_mode, opt_bitmain_work_mode >> 31);
    json_object_set_new(v19, "Mode", v41);
    v42 = json_integer(v153, v153 >> 31);
    json_object_set_new(v19, "miner_count", v42);
    if ( v153 <= 0 )
    {
      v44 = 0x7FFFFFFF;
      v46 = 0;
    }
    else
    {
      v43 = v146;
      v44 = 0x7FFFFFFF;
      do
      {
        v45 = v43[16];
        v43 += 52;
        if ( v44 >= v45 )
          v44 = v45;
      }
      while ( &v146[52 * v153] != v43 );
      v46 = v44 >> 31;
    }
    v47 = json_integer(v44, v46);
    json_object_set_new(v19, "frequency", v47);
    v48 = json_integer(v11, v11 >> 31);
    json_object_set_new(v19, "fan_num", v48);
    if ( v11 > 0 )
    {
      v49 = 0;
      v50 = v172 - 4;
      do
      {
        ++v49;
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "fan%d", v49);
        v51 = *(_DWORD *)(v50 + 4);
        v50 += 4;
        v52 = json_integer(v51, v51 >> 31);
        json_object_set_new(v19, s, v52);
      }
      while ( v49 != v11 );
    }
    if ( v153 <= 0 )
    {
      v151 = -100;
      v152 = -1;
      v54 = 0;
    }
    else
    {
      v53 = -100;
      LOBYTE(v54) = 0;
      v55 = v146;
      do
      {
        v56 = v55[4];
        v57 = v55[6];
        v55 += 52;
        if ( v53 < v56 )
          v53 = v56;
        LOBYTE(v54) = v54 + v57 + *(v55 - 45);
      }
      while ( &v146[52 * v153] != v55 );
      v54 = (unsigned __int8)v54;
      v151 = v53;
      v152 = v53 >> 31;
    }
    v58 = json_integer(v54, 0);
    json_object_set_new(v19, "temp_num", v58);
    if ( v153 > 0 )
    {
      v59 = 0;
      v60 = v146;
      v144 = ptr - 4;
      do
      {
        v61 = v60[6];
        v62 = *v60;
        v154 = 0;
        ++v59;
        v155 = 0;
        v156 = 0;
        v60 += 52;
        *(_DWORD *)v168 = 0;
        find_min_and_max_int(v62, v61, &v154, &v155);
        v63 = *(v60 - 45);
        find_min_and_max_int(*(v60 - 50), v63, &v156, v168);
        v64 = *(_DWORD *)v168;
        v65 = *((_DWORD *)v144 + 1);
        if ( *(int *)v168 < v155 )
          v64 = v155;
        v66 = *((_DWORD *)v144 + 1);
        v144 += 4;
        v145 = v64;
        sprintf(s, "temp%d", v66);
        v67 = json_integer(v145, v145 >> 31);
        json_object_set_new(v19, s, v67);
        v68 = *(v60 - 51);
        *(_DWORD *)v168 = 0;
        v156 = 0;
        v155 = 0;
        v154 = 0;
        find_min_and_max_int(v68, v61, &v154, &v155);
        find_min_and_max_int(*(v60 - 49), v63, &v156, v168);
        v69 = v65;
        v70 = v155;
        if ( *(int *)v168 >= v155 )
          v70 = *(_DWORD *)v168;
        sprintf(s, "temp2_%d", v69);
        v71 = json_integer(v70, v70 >> 31);
        json_object_set_new(v19, s, v71);
      }
      while ( v153 > v59 );
      v72 = v146;
      if ( v153 > 0 )
      {
        v73 = ptr - 4;
        v74 = 0;
        do
        {
          ++v74;
          memset(s, 0, sizeof(s));
          memset(v169, 0, sizeof(v169));
          v75 = *((_DWORD *)v73 + 1);
          v73 += 4;
          snprintf(s, 0x20u, "temp_in_pcb_%d", v75);
          v76 = v72[6];
          v77 = *v72;
          v72 += 52;
          sub_23A18(v77, v76, v169);
          v78 = json_string(v169);
          json_object_set_new(v19, s, v78);
        }
        while ( v153 > v74 );
        if ( v153 > 0 )
        {
          v79 = ptr - 4;
          v80 = v146;
          v81 = 0;
          do
          {
            ++v81;
            memset(s, 0, sizeof(s));
            v80 += 52;
            memset(v169, 0, sizeof(v169));
            v82 = *((_DWORD *)v79 + 1);
            v79 += 4;
            snprintf(s, 0x20u, "temp_out_pcb_%d", v82);
            sub_23A18(*(v80 - 50), *(v80 - 45), v169);
            v83 = json_string(v169);
            json_object_set_new(v19, s, v83);
          }
          while ( v153 > v81 );
          if ( v153 > 0 )
          {
            v84 = ptr - 4;
            v85 = v146;
            v86 = 0;
            do
            {
              ++v86;
              memset(s, 0, sizeof(s));
              v85 += 52;
              memset(v169, 0, sizeof(v169));
              v87 = *((_DWORD *)v84 + 1);
              v84 += 4;
              snprintf(s, 0x20u, "temp_in_chip_%d", v87);
              sub_23A18(*(v85 - 51), *(v85 - 46), v169);
              v88 = json_string(v169);
              json_object_set_new(v19, s, v88);
            }
            while ( v153 > v86 );
            if ( v153 > 0 )
            {
              v89 = ptr - 4;
              v90 = v146;
              v91 = 0;
              do
              {
                ++v91;
                memset(s, 0, sizeof(s));
                v90 += 52;
                memset(v169, 0, sizeof(v169));
                v92 = *((_DWORD *)v89 + 1);
                v89 += 4;
                snprintf(s, 0x20u, "temp_out_chip_%d", v92);
                sub_23A18(*(v90 - 50), *(v90 - 45), v169);
                v93 = json_string(v169);
                json_object_set_new(v19, s, v93);
              }
              while ( v153 > v91 );
            }
          }
        }
      }
    }
    v94 = json_integer(v151, v152);
    json_object_set_new(v19, "temp_max", v94);
    if ( v153 <= 0 )
      goto LABEL_74;
    v95 = v146;
    v96 = 0;
    v97 = ptr - 4;
    v98 = ptr - 4;
    v99 = v146;
    do
    {
      ++v96;
      memset(s, 0, sizeof(s));
      v100 = *((_DWORD *)v97 + 1);
      v97 += 4;
      snprintf(s, 0x20u, "chain_acn%d", v100);
      v101 = v95[14];
      v95 += 52;
      v102 = json_integer(v101, v101 >> 31);
      json_object_set_new(v19, s, v102);
    }
    while ( v153 > v96 );
    if ( v153 <= 0 )
      goto LABEL_74;
    v103 = 0;
    do
    {
      v104 = *((_DWORD *)v98 + 1);
      v98 += 4;
      ++v103;
      v99 += 52;
      sprintf(v168, "chain_acs%d", v104);
      memset(s, 0, sizeof(s));
      memset(v169, 0, sizeof(v169));
      snprintf(s, 0x20u, "chain_acs%d", v104);
      snprintf(v169, 0x100u, "%s", (const char *)*(v99 - 37));
      v105 = json_string(v169);
      json_object_set_new(v19, s, v105);
    }
    while ( v153 > v103 );
    if ( v153 <= 0 )
    {
LABEL_74:
      v114 = 0;
    }
    else
    {
      v106 = ptr - 4;
      v107 = v146;
      v108 = 0;
      v109 = 0;
      do
      {
        ++v108;
        memset(s, 0, sizeof(s));
        v110 = *((_DWORD *)v106 + 1);
        v106 += 4;
        snprintf(s, 0x20u, "chain_hw%d", v110);
        v111 = v107[18];
        v107 += 52;
        v112 = *(v107 - 33);
        v113 = json_integer(v111, v112);
        json_object_set_new(v19, s, v113);
        v109 += __PAIR64__(v112, v111);
      }
      while ( v153 > v108 );
      v114 = v109;
    }
    v115 = json_integer(v114, HIDWORD(v114));
    json_object_set_new(v19, "no_matching_work", v115);
    if ( v153 > 0 )
    {
      v116 = v146;
      v117 = ptr - 4;
      v118 = ptr - 4;
      v119 = v146;
      v120 = 0;
      do
      {
        ++v120;
        memset(s, 0, sizeof(s));
        v121 = *((_DWORD *)v117 + 1);
        v117 += 4;
        v122 = snprintf(s, 0x20u, "chain_rate%d", v121);
        v116 += 52;
        v123 = json_real(v122);
        json_object_set_new(v19, s, v123);
      }
      while ( v153 > v120 );
      if ( v153 > 0 )
      {
        v124 = 0;
        do
        {
          ++v124;
          v119 += 52;
          format_hashrate_string(*((_DWORD *)v149 + 21), v168);
          v125 = *((_DWORD *)v118 + 1);
          v118 += 4;
          snprintf(s, 0x20u, "CHAIN AVG HASHRATE%d", v125);
          v126 = json_string(v168);
          json_object_set_new(v19, s, v126);
        }
        while ( v153 > v124 );
        if ( v153 > 0 )
        {
          v127 = ptr - 4;
          v128 = v146;
          v129 = 0;
          do
          {
            ++v129;
            memset(s, 0, sizeof(s));
            v130 = *((_DWORD *)v127 + 1);
            v127 += 4;
            snprintf(s, 0x20u, "freq%d", v130);
            v131 = v128[16];
            v128 += 52;
            v132 = json_integer(v131, v131 >> 31);
            json_object_set_new(v19, s, v132);
          }
          while ( v153 > v129 );
        }
      }
    }
    v133 = json_string(g_miner_version);
    json_object_set_new(v19, "miner_version", v133);
    v134 = json_string(0);
    json_object_set_new(v19, "miner_id", v134);
    json_array_append_new(v150, v19);
    json_object_set_new(a1, "STATS", v150);
    v135 = json_integer(1, 0);
    json_object_set_new(a1, "id", v135);
    if ( v153 > 0 )
    {
      free(ptr);
      free(v146);
    }
    return 0;
  }
}
