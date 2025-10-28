int __fastcall sub_26160(_DWORD *a1, int a2)
{
  int v3; // r9
  _DWORD *v4; // r4
  char *v5; // r0
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  int v9; // r8
  float v10; // s22
  float v11; // s20
  float v12; // s16
  double v13; // d9
  char *all_created_runtime; // r5
  __int64 v15; // r6
  _DWORD *v16; // r4
  _DWORD *v17; // r0
  char *v18; // r0
  double v19; // d0
  double v20; // d11
  double v21; // d10
  double v22; // d9
  __int64 v23; // r0
  _DWORD *v24; // r0
  double *v25; // r0
  double *v26; // r0
  double *v27; // r0
  double v28; // d7
  double *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  int *v32; // r3
  __int64 v33; // r0
  int v34; // r2
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  int v37; // r5
  int v38; // r6
  int v39; // t1
  _DWORD *v40; // r0
  int v41; // r12
  unsigned int v42; // r0
  char *v43; // r1
  int v44; // r2
  int v45; // r3
  _DWORD *v46; // r0
  int v47; // r10
  char *v48; // r5
  int v49; // r11
  int *v50; // r0
  int v51; // r9
  int v52; // r3
  int v53; // r8
  int v54; // r2
  _DWORD *v55; // r0
  int *v56; // r0
  int v57; // r2
  int v58; // r8
  _DWORD *v59; // r0
  size_t *v60; // r8
  char *v61; // r7
  int v62; // r5
  int v63; // t1
  int v64; // r1
  size_t v65; // t1
  char *v66; // r0
  char *v67; // r7
  char *v68; // r5
  int v69; // r6
  int v70; // t1
  char *v71; // r0
  char *v72; // r7
  char *v73; // r5
  int v74; // r6
  int v75; // t1
  char *v76; // r0
  char *v77; // r10
  char *v78; // r5
  int v79; // r6
  int v80; // t1
  char *v81; // r0
  _DWORD *v82; // r0
  char *v83; // r7
  int v84; // r6
  char *v85; // r9
  char *v86; // r8
  const char **v87; // r5
  int v88; // t1
  int v89; // r0
  _DWORD *v90; // r0
  int v91; // r6
  int v92; // t1
  char *v93; // r0
  char *v94; // r10
  char *v95; // r6
  int v96; // r8
  __int64 v97; // kr00_8
  int v98; // t1
  unsigned int v99; // r7
  unsigned int v100; // r11
  _DWORD *v101; // r0
  __int64 v102; // r0
  _DWORD *v103; // r0
  char *v104; // r7
  char *v105; // r9
  char *v106; // r8
  char *v107; // r5
  int v108; // r6
  int v109; // t1
  double *v110; // r0
  int v111; // r6
  int v112; // t1
  char *v113; // r0
  char *v114; // r10
  char *v115; // r7
  int v116; // r5
  int v117; // t1
  int v118; // r0
  _DWORD *v119; // r0
  char *v120; // r0
  char *v121; // r0
  _DWORD *v122; // r0
  double v124; // d0
  char *v125; // r4
  char *v126; // r0
  char *v127; // r6
  char *v128; // r7
  int v129; // t1
  bool v130; // cc
  char *v131; // [sp+10h] [bp-1234h]
  int v132; // [sp+14h] [bp-1230h]
  int *v133; // [sp+18h] [bp-122Ch]
  char *ptr; // [sp+28h] [bp-121Ch]
  int v136; // [sp+30h] [bp-1214h]
  _DWORD *v137; // [sp+34h] [bp-1210h]
  __int64 v138; // [sp+38h] [bp-120Ch]
  int v139; // [sp+48h] [bp-11FCh] BYREF
  int v140; // [sp+4Ch] [bp-11F8h] BYREF
  int v141; // [sp+50h] [bp-11F4h] BYREF
  int v142; // [sp+54h] [bp-11F0h] BYREF
  double v143; // [sp+58h] [bp-11ECh] BYREF
  char v144[12]; // [sp+64h] [bp-11E0h] BYREF
  char v145[4]; // [sp+70h] [bp-11D4h] BYREF
  int v146; // [sp+74h] [bp-11D0h]
  int v147; // [sp+78h] [bp-11CCh]
  int v148; // [sp+7Ch] [bp-11C8h]
  char s[32]; // [sp+80h] [bp-11C4h] BYREF
  char v150[32]; // [sp+A0h] [bp-11A4h] BYREF
  char v151[32]; // [sp+C0h] [bp-1184h] BYREF
  char v152[32]; // [sp+E0h] [bp-1164h] BYREF
  char v153[32]; // [sp+100h] [bp-1144h] BYREF
  char v154[4]; // [sp+120h] [bp-1124h] BYREF
  char v155[256]; // [sp+140h] [bp-1104h] BYREF
  char v156[4]; // [sp+240h] [bp-1004h] BYREF
  int v157; // [sp+244h] [bp-1000h]
  int v158; // [sp+248h] [bp-FFCh]
  float v159; // [sp+24Ch] [bp-FF8h]
  float v160; // [sp+250h] [bp-FF4h]
  float v161; // [sp+254h] [bp-FF0h]
  double v162; // [sp+258h] [bp-FECh]

  v146 = 0;
  v147 = 0;
  v148 = 0;
  v3 = a1 == 0;
  *(_DWORD *)v145 = 0;
  memset(s, 0, sizeof(s));
  memset(v155, 0, sizeof(v155));
  v139 = 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v156, 0x1000u, 0, "%s: input bad api param", "get_stats_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_stats_old",
      13,
      1184,
      100,
      v156);
    return -2147483646;
  }
  else
  {
    sub_23578(a1, 1, 70, *(const char **)(a2 + 8));
    v137 = json_array();
    v4 = json_object();
    v5 = BUFX_strdup("2.12");
    json_object_set_new(v4, "BMMiner", v5);
    v6 = BUFX_strdup(g_miner_version);
    json_object_set_new(v4, "Miner", v6);
    v7 = BUFX_strdup(g_miner_compiletime);
    json_object_set_new(v4, "CompileTime", v7);
    v8 = BUFX_strdup(g_miner_type);
    json_object_set_new(v4, "Type", v8);
    json_array_append_new(v137, v4);
    read_system_status_from_monitor((int)v156);
    v9 = v157;
    v10 = v159;
    v11 = v160;
    v12 = v161;
    v13 = v162;
    all_created_runtime = (char *)get_all_created_runtime(&v139);
    v136 = frontend_runtime_instance();
    if ( v139 > 0 )
    {
      v133 = (int *)malloc(208 * v139);
      v125 = (char *)v133;
      v126 = (char *)malloc(4 * v139);
      ptr = v126;
      if ( v139 <= 0 )
      {
        v15 = 0;
      }
      else
      {
        v127 = all_created_runtime - 4;
        v128 = v126 - 4;
        do
        {
          v129 = *((_DWORD *)v127 + 1);
          v127 += 4;
          read_status_from_monitor(v125, v129);
          ++v3;
          v125 += 208;
          v130 = v139 <= v3;
          *((_DWORD *)v128 + 1) = *(_DWORD *)(*(_DWORD *)v127 + 140) + 1;
          v128 += 4;
        }
        while ( !v130 );
        v15 = v3;
      }
    }
    else
    {
      v15 = 0;
      ptr = 0;
      v133 = 0;
    }
    v16 = json_object();
    v17 = json_integer(v15);
    json_object_set_new(v16, "STATS", v17);
    snprintf(v145, 0x10u, "BTM_SOC%d", v3);
    v18 = BUFX_strdup(v145);
    json_object_set_new(v16, "ID", v18);
    format_hashrate_string(*(const char **)(v136 + 84), v150);
    format_hashrate_string(*(const char **)(v136 + 84), v151);
    format_hashrate_string(*(const char **)(v136 + 84), v152);
    format_hashrate_string(*(const char **)(v136 + 84), v153);
    v19 = v13;
    format_hashrate_double(*(const char **)(v136 + 84), &v143, v144);
    v20 = v10 * v13;
    v21 = v11 * v13;
    v22 = v12 * v13;
    if ( byte_164FE8 )
    {
      sub_25C98();
      v23 = (__int64)v19;
    }
    else
    {
      v23 = 0;
    }
    v24 = json_integer(v23);
    json_object_set_new(v16, "Elapsed", v24);
    sub_12D09C((__int64)(v20 * 100.0));
    v25 = json_real();
    json_object_set_new(v16, "GHS 5s", v25);
    sub_12D09C((__int64)(v22 * 100.0));
    v26 = json_real();
    json_object_set_new(v16, "GHS av", v26);
    sub_12D09C((__int64)(v21 * 100.0));
    v27 = json_real();
    json_object_set_new(v16, "rate_30m", v27);
    if ( !strcmp(*(const char **)(*(_DWORD *)all_created_runtime + 188), "dash") )
    {
      v124 = v143;
      update_rate_ideal();
      v28 = v124 * 100.0;
    }
    else
    {
      v28 = v143 * 100.0;
    }
    sub_12D09C((__int64)v28);
    v29 = json_real();
    json_object_set_new(v16, "total_rateideal", v29);
    v30 = json_integer(opt_bitmain_work_mode);
    json_object_set_new(v16, "Mode", v30);
    v31 = json_integer(v139);
    json_object_set_new(v16, "miner_count", v31);
    if ( v139 <= 0 )
    {
      v33 = 0x7FFFFFFF;
    }
    else
    {
      v32 = v133;
      LODWORD(v33) = 0x7FFFFFFF;
      do
      {
        v34 = v32[16];
        v32 += 52;
        if ( (int)v33 >= v34 )
          LODWORD(v33) = v34;
      }
      while ( &v133[52 * v139] != v32 );
      v33 = (int)v33;
    }
    v35 = json_integer(v33);
    json_object_set_new(v16, "frequency", v35);
    v36 = json_integer(v9);
    json_object_set_new(v16, "fan_num", v36);
    if ( v9 > 0 )
    {
      v37 = 0;
      v38 = v158 - 4;
      do
      {
        ++v37;
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "fan%d", v37);
        v39 = *(_DWORD *)(v38 + 4);
        v38 += 4;
        v40 = json_integer(v39);
        json_object_set_new(v16, s, v40);
      }
      while ( v37 != v9 );
    }
    if ( v139 <= 0 )
    {
      v138 = -100;
      v42 = 0;
    }
    else
    {
      v41 = -100;
      LOBYTE(v42) = 0;
      v43 = (char *)v133;
      do
      {
        v44 = *((_DWORD *)v43 + 4);
        v45 = *((_DWORD *)v43 + 6);
        v43 += 208;
        if ( v41 < v44 )
          v41 = v44;
        LOBYTE(v42) = v42 + v45 + *((_DWORD *)v43 - 45);
      }
      while ( &v133[52 * v139] != (int *)v43 );
      v42 = (unsigned __int8)v42;
      v138 = v41;
    }
    v46 = json_integer(v42);
    json_object_set_new(v16, "temp_num", v46);
    if ( v139 > 0 )
    {
      v47 = 0;
      v48 = (char *)v133;
      v131 = ptr - 4;
      do
      {
        v49 = *((_DWORD *)v48 + 6);
        v50 = *(int **)v48;
        v140 = 0;
        ++v47;
        v141 = 0;
        v142 = 0;
        v48 += 208;
        *(_DWORD *)v154 = 0;
        find_min_and_max_int(v50, v49, &v140, &v141);
        v51 = *((_DWORD *)v48 - 45);
        find_min_and_max_int(*((int **)v48 - 50), v51, &v142, v154);
        v52 = *(_DWORD *)v154;
        v53 = *((_DWORD *)v131 + 1);
        if ( *(int *)v154 < v141 )
          v52 = v141;
        v54 = *((_DWORD *)v131 + 1);
        v131 += 4;
        v132 = v52;
        sprintf(s, "temp%d", v54);
        v55 = json_integer(v132);
        json_object_set_new(v16, s, v55);
        v56 = (int *)*((_DWORD *)v48 - 51);
        *(_DWORD *)v154 = 0;
        v142 = 0;
        v141 = 0;
        v140 = 0;
        find_min_and_max_int(v56, v49, &v140, &v141);
        find_min_and_max_int(*((int **)v48 - 49), v51, &v142, v154);
        v57 = v53;
        v58 = v141;
        if ( *(int *)v154 >= v141 )
          v58 = *(_DWORD *)v154;
        sprintf(s, "temp2_%d", v57);
        v59 = json_integer(v58);
        json_object_set_new(v16, s, v59);
      }
      while ( v139 > v47 );
      v60 = (size_t *)v133;
      if ( v139 > 0 )
      {
        v61 = ptr - 4;
        v62 = 0;
        do
        {
          ++v62;
          memset(s, 0, sizeof(s));
          memset(v155, 0, sizeof(v155));
          v63 = *((_DWORD *)v61 + 1);
          v61 += 4;
          snprintf(s, 0x20u, "temp_in_pcb_%d", v63);
          v64 = v60[6];
          v65 = *v60;
          v60 += 52;
          sub_239C8(v65, v64, v155);
          v66 = BUFX_strdup(v155);
          json_object_set_new(v16, s, v66);
        }
        while ( v139 > v62 );
        if ( v139 > 0 )
        {
          v67 = ptr - 4;
          v68 = (char *)v133;
          v69 = 0;
          do
          {
            ++v69;
            memset(s, 0, sizeof(s));
            v68 += 208;
            memset(v155, 0, sizeof(v155));
            v70 = *((_DWORD *)v67 + 1);
            v67 += 4;
            snprintf(s, 0x20u, "temp_out_pcb_%d", v70);
            sub_239C8(*((_DWORD *)v68 - 50), *((_DWORD *)v68 - 45), v155);
            v71 = BUFX_strdup(v155);
            json_object_set_new(v16, s, v71);
          }
          while ( v139 > v69 );
          if ( v139 > 0 )
          {
            v72 = ptr - 4;
            v73 = (char *)v133;
            v74 = 0;
            do
            {
              ++v74;
              memset(s, 0, sizeof(s));
              v73 += 208;
              memset(v155, 0, sizeof(v155));
              v75 = *((_DWORD *)v72 + 1);
              v72 += 4;
              snprintf(s, 0x20u, "temp_in_chip_%d", v75);
              sub_239C8(*((_DWORD *)v73 - 51), *((_DWORD *)v73 - 46), v155);
              v76 = BUFX_strdup(v155);
              json_object_set_new(v16, s, v76);
            }
            while ( v139 > v74 );
            if ( v139 > 0 )
            {
              v77 = ptr - 4;
              v78 = (char *)v133;
              v79 = 0;
              do
              {
                ++v79;
                memset(s, 0, sizeof(s));
                v78 += 208;
                memset(v155, 0, sizeof(v155));
                v80 = *((_DWORD *)v77 + 1);
                v77 += 4;
                snprintf(s, 0x20u, "temp_out_chip_%d", v80);
                sub_239C8(*((_DWORD *)v78 - 50), *((_DWORD *)v78 - 45), v155);
                v81 = BUFX_strdup(v155);
                json_object_set_new(v16, s, v81);
              }
              while ( v139 > v79 );
            }
          }
        }
      }
    }
    v82 = json_integer(v138);
    json_object_set_new(v16, "temp_max", v82);
    if ( v139 <= 0 )
      goto LABEL_74;
    v83 = (char *)v133;
    v84 = 0;
    v85 = ptr - 4;
    v86 = ptr - 4;
    v87 = (const char **)v133;
    do
    {
      ++v84;
      memset(s, 0, sizeof(s));
      v88 = *((_DWORD *)v85 + 1);
      v85 += 4;
      snprintf(s, 0x20u, "chain_acn%d", v88);
      v89 = *((_DWORD *)v83 + 14);
      v83 += 208;
      v90 = json_integer(v89);
      json_object_set_new(v16, s, v90);
    }
    while ( v139 > v84 );
    if ( v139 <= 0 )
      goto LABEL_74;
    v91 = 0;
    do
    {
      v92 = *((_DWORD *)v86 + 1);
      v86 += 4;
      ++v91;
      v87 += 52;
      sprintf(v154, "chain_acs%d", v92);
      memset(s, 0, sizeof(s));
      memset(v155, 0, sizeof(v155));
      snprintf(s, 0x20u, "chain_acs%d", v92);
      snprintf(v155, 0x100u, "%s", *(v87 - 37));
      v93 = BUFX_strdup(v155);
      json_object_set_new(v16, s, v93);
    }
    while ( v139 > v91 );
    if ( v139 <= 0 )
    {
LABEL_74:
      v102 = 0;
    }
    else
    {
      v94 = ptr - 4;
      v95 = (char *)v133;
      v96 = 0;
      v97 = 0;
      do
      {
        ++v96;
        memset(s, 0, sizeof(s));
        v98 = *((_DWORD *)v94 + 1);
        v94 += 4;
        snprintf(s, 0x20u, "chain_hw%d", v98);
        v99 = *((_DWORD *)v95 + 18);
        v95 += 208;
        v100 = *((_DWORD *)v95 - 33);
        v101 = json_integer(__SPAIR64__(v100, v99));
        json_object_set_new(v16, s, v101);
        v97 += __PAIR64__(v100, v99);
      }
      while ( v139 > v96 );
      v102 = v97;
    }
    v103 = json_integer(v102);
    json_object_set_new(v16, "no_matching_work", v103);
    if ( v139 > 0 )
    {
      v104 = (char *)v133;
      v105 = ptr - 4;
      v106 = ptr - 4;
      v107 = (char *)v133;
      v108 = 0;
      do
      {
        ++v108;
        memset(s, 0, sizeof(s));
        v109 = *((_DWORD *)v105 + 1);
        v105 += 4;
        snprintf(s, 0x20u, "chain_rate%d", v109);
        v104 += 208;
        v110 = json_real();
        json_object_set_new(v16, s, v110);
      }
      while ( v139 > v108 );
      if ( v139 > 0 )
      {
        v111 = 0;
        do
        {
          ++v111;
          v107 += 208;
          format_hashrate_string(*(const char **)(v136 + 84), v154);
          v112 = *((_DWORD *)v106 + 1);
          v106 += 4;
          snprintf(s, 0x20u, "CHAIN AVG HASHRATE%d", v112);
          v113 = BUFX_strdup(v154);
          json_object_set_new(v16, s, v113);
        }
        while ( v139 > v111 );
        if ( v139 > 0 )
        {
          v114 = ptr - 4;
          v115 = (char *)v133;
          v116 = 0;
          do
          {
            ++v116;
            memset(s, 0, sizeof(s));
            v117 = *((_DWORD *)v114 + 1);
            v114 += 4;
            snprintf(s, 0x20u, "freq%d", v117);
            v118 = *((_DWORD *)v115 + 16);
            v115 += 208;
            v119 = json_integer(v118);
            json_object_set_new(v16, s, v119);
          }
          while ( v139 > v116 );
        }
      }
    }
    v120 = BUFX_strdup(g_miner_version);
    json_object_set_new(v16, "miner_version", v120);
    v121 = BUFX_strdup(0);
    json_object_set_new(v16, "miner_id", v121);
    json_array_append_new(v137, v16);
    json_object_set_new(a1, "STATS", v137);
    v122 = json_integer(1);
    json_object_set_new(a1, "id", v122);
    if ( v139 > 0 )
    {
      free(ptr);
      free(v133);
    }
    return 0;
  }
}
