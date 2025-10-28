int __fastcall stratum_handle_method_grin32(int a1, int a2, int a3)
{
  double v3; // d0
  double *v5; // r0
  double *v6; // r4
  _DWORD *v7; // r0
  const char *v8; // r9
  char *v9; // r1
  _DWORD *v10; // r7
  int v11; // r5
  const char *v12; // r1
  const char *v13; // r1
  _BYTE *v14; // r1
  int v15; // r0
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  int v20; // r3
  _DWORD *v21; // r3
  int v22; // r1
  char *v23; // r1
  int v24; // r0
  const char *v25; // r1
  _DWORD *v26; // r10
  const char *v27; // r1
  const char *v28; // r1
  const char *v29; // r1
  const char *v30; // r1
  const char *v31; // r1
  const char *v32; // r1
  const char *v33; // r1
  const char *v34; // r1
  _DWORD *v35; // r5
  _DWORD *v36; // r0
  int v37; // r3
  _DWORD *v38; // r3
  int v39; // r1
  _DWORD *v40; // r0
  _DWORD *v41; // r7
  unsigned int *v42; // r3
  unsigned int v43; // r2
  char *v44; // r1
  _DWORD *v45; // r0
  char *v46; // r1
  _DWORD *v47; // r0
  char *v48; // r1
  char *v49; // r8
  unsigned int *v50; // r3
  unsigned int v51; // r2
  unsigned int v52; // r2
  const char *v53; // r1
  int v54; // r11
  const char *v55; // r1
  _DWORD *v56; // r0
  _DWORD *v57; // r0
  unsigned __int8 *v58; // r0
  int v59; // r2
  unsigned int v60; // r10
  unsigned int v61; // r1
  _DWORD *v62; // r0
  _DWORD *v63; // r0
  char *v64; // r10
  _DWORD *v65; // r0
  char *v66; // r1
  _DWORD *v67; // r0
  int v68; // r3
  _DWORD *v69; // r3
  int v70; // r1
  int v71; // r0
  const char *v72; // r1
  _DWORD *v73; // r0
  const char *v74; // r1
  _DWORD *v75; // r10
  _DWORD *v76; // r0
  _DWORD *v77; // r0
  _DWORD *v78; // r0
  const char *v79; // r0
  int v80; // r3
  _DWORD *v81; // r3
  int v82; // r2
  int v83; // r1
  _DWORD *v84; // r0
  char *v85; // r8
  _DWORD *v86; // r0
  int v87; // r0
  int v88; // r7
  void *v89; // r0
  size_t v90; // r10
  void *v91; // r0
  int v92; // r3
  int v93; // r12
  _DWORD *v94; // r3
  int v95; // r2
  int v96; // r1
  _DWORD *v97; // r0
  _DWORD *v98; // r0
  unsigned __int8 *v99; // r0
  _DWORD *v100; // r0
  const char *v101; // r9
  _DWORD *v102; // r0
  int v103; // r7
  _BOOL4 v104; // r5
  size_t v105; // r0
  char *v106; // r0
  const char *v107; // r1
  char *v108; // r8
  int v109; // r3
  _DWORD *v110; // r3
  int v111; // r1
  void *v112; // r0
  int v113; // r3
  _DWORD *v114; // r3
  int v115; // r1
  _DWORD *v116; // r0
  _DWORD *v117; // r8
  unsigned int *v118; // r3
  unsigned int v119; // r2
  char *v120; // r1
  _DWORD *v121; // r0
  char *v122; // r1
  char *v123; // r0
  char *v124; // r1
  char *v125; // r7
  unsigned int *v126; // r3
  unsigned int v127; // r2
  unsigned int v128; // r2
  _DWORD *v129; // r0
  _DWORD *v130; // r0
  _DWORD *v131; // r0
  const char *v132; // r0
  int v133; // r3
  _DWORD *v134; // r0
  _DWORD *v135; // r0
  _DWORD *v136; // r0
  _DWORD *v137; // r0
  _DWORD *v138; // r3
  bool v139; // zf
  bool v140; // zf
  signed int v141; // r7
  int v142; // r3
  _DWORD *v143; // r0
  _DWORD *v144; // r7
  unsigned int *v145; // r3
  unsigned int v146; // r2
  char *v147; // r1
  int *v148; // r3
  int v149; // r0
  _DWORD *v150; // r5
  char *v151; // r0
  char *v152; // r1
  char *v153; // r0
  char *v154; // r1
  _DWORD *v155; // r0
  char *v156; // r1
  _DWORD *v157; // r0
  char *v158; // r1
  _DWORD *v159; // r0
  char *v160; // r1
  double *v161; // r0
  char *v162; // r1
  char *v163; // r0
  char *v164; // r1
  char *v165; // r0
  char *v166; // r1
  char *v167; // r1
  _DWORD *v168; // r0
  char *v169; // r1
  unsigned int *v170; // r3
  unsigned int v171; // r2
  unsigned int v172; // r2
  _DWORD *v173; // r0
  _DWORD *v174; // r0
  _DWORD *v175; // r0
  unsigned int *v176; // r3
  unsigned int v177; // r2
  char *v178; // r1
  _DWORD *v179; // r0
  char *v180; // r1
  char *v181; // r0
  char *v182; // r1
  unsigned int *v183; // r3
  unsigned int v184; // r2
  int v185; // r3
  _DWORD *v186; // r3
  int v187; // r1
  _DWORD *v188; // r0
  unsigned int *v189; // r3
  unsigned int v190; // r2
  char *v191; // r1
  _DWORD *v192; // r0
  char *v193; // r1
  char *v194; // r2
  unsigned int *v195; // r3
  unsigned int v196; // r2
  const char *v197; // r0
  char *v198; // r2
  char *v199; // r0
  _DWORD *v200; // r3
  _DWORD *v201; // r8
  _DWORD *v202; // r0
  const char *v203; // r0
  unsigned __int8 *v204; // r4
  void *v205; // r0
  int v206; // r3
  _DWORD *v207; // r3
  int v208; // r1
  char *i; // r7
  void *v210; // r0
  void *v211; // t1
  int v212; // r8
  size_t v213; // r5
  size_t v214; // r9
  void *v215; // r0
  size_t v216; // r1
  char *v217; // r0
  int v218; // r12
  const char *v219; // r0
  void *v220; // r0
  int v221; // r1
  unsigned __int8 *v222; // r2
  unsigned int v223; // r1
  bool v224; // cc
  int v225; // r3
  _DWORD *v226; // r3
  int v227; // r1
  _BOOL4 v228; // r0
  int v229; // r3
  int v230; // r5
  _DWORD *v231; // r2
  int v232; // r3
  void *v233; // r1
  int v234; // r1
  int v235; // r3
  void *v236; // r2
  char *v237; // [sp+10h] [bp-1184h]
  unsigned __int8 *v238; // [sp+10h] [bp-1184h]
  unsigned __int8 *v239; // [sp+14h] [bp-1180h]
  char *s2; // [sp+18h] [bp-117Ch]
  unsigned __int8 *v241; // [sp+1Ch] [bp-1178h]
  int v242; // [sp+20h] [bp-1174h]
  unsigned __int8 *v243; // [sp+20h] [bp-1174h]
  unsigned int v244; // [sp+24h] [bp-1170h]
  unsigned __int8 *v245; // [sp+24h] [bp-1170h]
  int v246; // [sp+28h] [bp-116Ch]
  char *v247; // [sp+2Ch] [bp-1168h]
  unsigned int v248; // [sp+30h] [bp-1164h]
  bool v249; // [sp+30h] [bp-1164h]
  _DWORD *ptr; // [sp+34h] [bp-1160h]
  _DWORD *ptra; // [sp+34h] [bp-1160h]
  char *ptrb; // [sp+34h] [bp-1160h]
  int v253; // [sp+38h] [bp-115Ch]
  double *v254; // [sp+3Ch] [bp-1158h]
  int v255; // [sp+4Ch] [bp-1148h] BYREF
  __int16 v256; // [sp+50h] [bp-1144h]
  char s1[64]; // [sp+54h] [bp-1140h] BYREF
  int v258[23]; // [sp+94h] [bp-1100h] BYREF
  char v259[160]; // [sp+F0h] [bp-10A4h] BYREF
  char s[4100]; // [sp+190h] [bp-1004h] BYREF

  v5 = json_loads(a3, 0, (char *)v258);
  v6 = v5;
  if ( !v5 )
  {
    v11 = 0;
    V_LOCK();
    LOWORD(v20) = 7656;
    HIWORD(v20) = (unsigned int)" passed to valid_ascii" >> 16;
    logfmt_raw(s, 0x1000u, 0, v20, v258[0], v259);
    V_UNLOCK();
    LOWORD(v21) = -14512;
    HIWORD(v21) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v22) = 13148;
    HIWORD(v22) = (unsigned int)"handle_method_eth" >> 16;
    zlog(*v21, v22, 163, "stratum_handle_method_grin32", 28, 739, 100, s);
    return v11;
  }
  v7 = (_DWORD *)json_object_get(v5, "method");
  v8 = (const char *)json_string_value(v7);
  if ( !v8 )
    goto LABEL_10;
  LOWORD(v9) = 7684;
  HIWORD(v9) = (unsigned int)"XLY_CORRECT" >> 16;
  v10 = (_DWORD *)json_object_get(v6, v9);
  if ( !v10 )
  {
    LOWORD(v66) = 7692;
    HIWORD(v66) = (unsigned int)"ECT" >> 16;
    v10 = (_DWORD *)json_object_get(v6, v66);
  }
  v11 = *(unsigned __int8 *)(a2 + 1816);
  if ( *(_BYTE *)(a2 + 1816) )
  {
    LOWORD(v12) = 12344;
    HIWORD(v12) = (unsigned int)"prev_hash: %s" >> 16;
    if ( !strcasecmp(v8, v12)
      || (LOWORD(v13) = 12196, HIWORD(v13) = (unsigned int)"t cb1 to cb1_bin in parse_notify" >> 16,
                               !strcasecmp(v8, v13)) )
    {
      v11 = sub_42914(v10, a2);
      v14 = (_BYTE *)(a2 + 2076);
      v15 = a2;
      if ( v11 )
      {
        pool_tset(a2, v14, 1);
        goto LABEL_11;
      }
LABEL_48:
      pool_tclear(v15, v14, 0);
      goto LABEL_11;
    }
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  LOWORD(v23) = 11724;
  HIWORD(v23) = (unsigned int)"e_extranonce_dash" >> 16;
  v24 = json_object_get(v6, v23);
  LOWORD(v25) = 7700;
  v26 = (_DWORD *)v24;
  HIWORD(v25) = (unsigned int)"                            " >> 16;
  if ( !strcasecmp(v8, v25) )
  {
    memset(s1, 0, sizeof(s1));
    get_currentalgo(s1, 0x40u);
    LOWORD(v53) = 12360;
    HIWORD(v53) = (unsigned int)"coinbase1: %s" >> 16;
    v54 = strcmp(s1, v53);
    if ( v54 )
    {
      LOWORD(v55) = 12368;
      HIWORD(v55) = (unsigned int)"1: %s" >> 16;
      v54 = strcmp(s1, v55);
      if ( v54 )
      {
        v56 = json_array_get(v10, 0);
        s2 = (char *)json_string_value(v56);
        v246 = 0;
        v57 = json_array_get(v10, 1u);
        v58 = (unsigned __int8 *)json_string_value(v57);
        v54 = 0;
        v59 = 4;
        v60 = 3;
        v61 = 2;
        v241 = v58;
        v242 = 2;
        v244 = 5;
        v239 = 0;
        goto LABEL_45;
      }
      if ( json_array_size(v10) != (_DWORD *)10 )
      {
        v97 = json_array_get(v10, 0);
        s2 = (char *)json_string_value(v97);
        v246 = 0;
        v98 = json_array_get(v10, 1u);
        v99 = (unsigned __int8 *)json_string_value(v98);
        v61 = 2;
        v241 = v99;
        v59 = 4;
        v242 = 2;
        v60 = 3;
        v244 = 5;
        v239 = 0;
        goto LABEL_45;
      }
      v173 = json_array_get(v10, 0);
      s2 = (char *)json_string_value(v173);
      v174 = json_array_get(v10, 1u);
      v241 = (unsigned __int8 *)json_string_value(v174);
LABEL_96:
      v131 = json_array_get(v10, 2u);
      v132 = (const char *)json_string_value(v131);
      v239 = (unsigned __int8 *)v132;
      if ( !v132 || strlen(v132) != 128 )
      {
        V_LOCK();
        LOWORD(v133) = 12416;
        HIWORD(v133) = (unsigned int)"" >> 16;
        logfmt_raw(s, 0x1000u, 0, v133);
        V_UNLOCK();
        LOWORD(v81) = -14512;
        HIWORD(v81) = (unsigned int)&unk_16B55C >> 16;
        v82 = 199;
        goto LABEL_59;
      }
      v61 = 3;
      v246 = 0;
      v242 = 3;
      v59 = 5;
      v244 = 6;
      v60 = 4;
      v54 = 1;
      goto LABEL_45;
    }
    v73 = json_array_size(v10);
    LOWORD(v74) = 12368;
    v75 = v73;
    HIWORD(v74) = (unsigned int)"1: %s" >> 16;
    if ( !strcmp(s1, v74) && json_array_size(v10) == (_DWORD *)10 )
    {
      v129 = json_array_get(v10, 0);
      s2 = (char *)json_string_value(v129);
      v130 = json_array_get(v10, 1u);
      v241 = (unsigned __int8 *)json_string_value(v130);
      if ( v75 != (_DWORD *)10 )
        goto LABEL_96;
      v54 = 1;
    }
    else
    {
      v76 = json_array_get(v10, 0);
      s2 = (char *)json_string_value(v76);
      v77 = json_array_get(v10, 1u);
      v241 = (unsigned __int8 *)json_string_value(v77);
      if ( v75 != (_DWORD *)10 )
      {
        v61 = 2;
        v246 = 0;
        v59 = 4;
        v239 = 0;
        v242 = 2;
        v60 = 3;
        v244 = 5;
        goto LABEL_45;
      }
    }
    v78 = json_array_get(v10, 2u);
    v79 = (const char *)json_string_value(v78);
    v239 = (unsigned __int8 *)v79;
    if ( !v79 || strlen(v79) != 64 )
    {
      V_LOCK();
      LOWORD(v80) = 12376;
      HIWORD(v80) = (unsigned int)"coinbase2: %s" >> 16;
      logfmt_raw(s, 0x1000u, 0, v80);
      V_UNLOCK();
      LOWORD(v81) = -14512;
      HIWORD(v81) = (unsigned int)&unk_16B55C >> 16;
      v82 = 192;
      goto LABEL_59;
    }
    v61 = 3;
    v244 = 6;
    v59 = 5;
    v242 = 3;
    v60 = 4;
    v246 = 1;
LABEL_45:
    v237 = (char *)v59;
    v62 = json_array_get(v10, v61);
    v247 = (char *)json_string_value(v62);
    v63 = json_array_get(v10, v60);
    v64 = (char *)json_string_value(v63);
    v65 = json_array_get(v10, (unsigned int)v237);
    if ( !v65 || *v65 != 1 )
      goto LABEL_47;
    ptr = v65;
    v253 = (int)json_array_size(v65);
    v134 = json_array_get(v10, v244);
    v238 = (unsigned __int8 *)json_string_value(v134);
    v248 = v242 + 6;
    v135 = json_array_get(v10, v242 + 4);
    v245 = (unsigned __int8 *)json_string_value(v135);
    v136 = json_array_get(v10, v242 + 5);
    v243 = (unsigned __int8 *)json_string_value(v136);
    v137 = json_array_get(v10, v248);
    v138 = ptr;
    if ( v137 )
    {
      v249 = *json_array_get(v10, v248) == 5;
      v138 = ptr;
    }
    else
    {
      v249 = 0;
    }
    v139 = v241 == 0;
    if ( v241 )
      v139 = s2 == 0;
    if ( !v139 )
    {
      v140 = v64 == 0;
      if ( v64 )
        v140 = v247 == 0;
      if ( !v140 )
      {
        if ( v238 )
          v141 = v245 == 0;
        else
          v141 = 1;
        if ( !v243 )
          v141 = 1;
        if ( !v141 )
        {
          ptra = v138;
          if ( strlen((const char *)v241) == 64
            && strlen((const char *)v238) == 8
            && strlen((const char *)v245) == 8
            && strlen((const char *)v243) == 8 )
          {
            v199 = (char *)malloc(4 * v253);
            v200 = ptra;
            ptrb = v199;
            v201 = v200;
            v254 = v6;
            while ( v253 > v141 )
            {
              v202 = json_array_get(v201, v141);
              v203 = (const char *)json_string_value(v202);
              v204 = (unsigned __int8 *)v203;
              if ( !v203 || strlen(v203) != 64 )
              {
                v6 = v254;
                for ( i = &ptrb[4 * v141]; i != ptrb; i -= 4 )
                {
                  v211 = (void *)*((_DWORD *)i - 1);
                  v210 = v211;
                  if ( v211 )
                    free(v210);
                }
                if ( i )
                  free(i);
                V_LOCK();
                LOWORD(v225) = 12460;
                HIWORD(v225) = (unsigned int)", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}" >> 16;
                logfmt_raw(s, 0x1000u, 0, v225);
                V_UNLOCK();
                LOWORD(v226) = -14512;
                HIWORD(v226) = (unsigned int)&unk_16B55C >> 16;
                LOWORD(v227) = 13148;
                HIWORD(v227) = (unsigned int)"handle_method_eth" >> 16;
                zlog(*v226, v227, 163, "stratum_notify", 14, 228, 100, s);
                goto LABEL_47;
              }
              v205 = malloc(0x20u);
              *(_DWORD *)&ptrb[4 * v141++] = v205;
              hex2bin((int)v205, v204, 32);
            }
            v212 = 0;
            v6 = v254;
            pthread_mutex_lock((pthread_mutex_t *)(a2 + 1752));
            v213 = strlen(v247) >> 1;
            v214 = strlen(v64) >> 1;
            v215 = *(void **)(a2 + 292);
            v216 = *(_DWORD *)(a2 + 72) + *(_DWORD *)(a2 + 80) + v213 + v214;
            *(_DWORD *)(a2 + 288) = v216;
            v217 = (char *)realloc(v215, v216);
            v218 = *(_DWORD *)(a2 + 72);
            *(_DWORD *)(a2 + 292) = v217;
            *(_DWORD *)(a2 + 296) = &v217[v213 + v218];
            hex2bin((int)v217, (unsigned __int8 *)v247, v213);
            memcpy((void *)(*(_DWORD *)(a2 + 292) + v213), *(const void **)(a2 + 76), *(_DWORD *)(a2 + 72));
            v219 = *(const char **)(a2 + 88);
            if ( !v219 || strcmp(v219, s2) )
              memset(*(void **)(a2 + 296), 0, *(_DWORD *)(a2 + 80));
            hex2bin(*(_DWORD *)(a2 + 296) + *(_DWORD *)(a2 + 80), (unsigned __int8 *)v64, v214);
            v220 = *(void **)(a2 + 88);
            if ( v220 )
              free(v220);
            *(_DWORD *)(a2 + 88) = _strdup(s2);
            hex2bin(a2 + 92, v241, 32);
            if ( v246 )
              hex2bin(a2 + 372, v239, 32);
            if ( v54 )
              hex2bin(a2 + 372, v239, 64);
            v221 = *(_DWORD *)(a2 + 292);
            v222 = (unsigned __int8 *)(v221 + 32);
            v223 = v221 + 160;
            while ( 1 )
            {
              v224 = 0;
              if ( *v222 != 255 )
                v224 = v223 > (unsigned int)v222;
              if ( !v224 )
                break;
              ++v222;
            }
            while ( 1 )
            {
              v228 = *v222 == 255;
              if ( v223 <= (unsigned int)v222 )
                v228 = 0;
              if ( !v228 )
                break;
              ++v222;
            }
            v229 = 0;
            if ( *(v222 - 1) == 255 && *(v222 - 2) == 255 )
            {
              v234 = v222[1];
              v229 = (unsigned __int16)(v222[2] + (v222[3] << 8));
              if ( v234 == 3 )
              {
                v229 += v222[4] << 16;
              }
              else if ( v234 == 4 )
              {
                v229 += (v222[4] + (v222[5] << 8)) << 16;
              }
            }
            *(_DWORD *)(a2 + 1804) = v229;
            v230 = 0;
            v231 = *(_DWORD **)(a2 + 320);
            v232 = *(_DWORD *)(a2 + 316);
            while ( v230 < v232 )
            {
              v233 = (void *)v231[v230++];
              if ( v233 )
              {
                free(v233);
                v231 = *(_DWORD **)(a2 + 320);
                v232 = *(_DWORD *)(a2 + 316);
              }
            }
            if ( v231 )
              free(v231);
            *(_DWORD *)(a2 + 320) = ptrb;
            v235 = v253;
            *(_DWORD *)(a2 + 316) = v253;
            while ( v212 < v235 )
            {
              v236 = *(void **)&ptrb[4 * v212++];
              if ( v236 )
              {
                free(v236);
                v235 = *(_DWORD *)(a2 + 316);
              }
            }
            if ( ptrb )
              free(ptrb);
            v11 = 1;
            hex2bin(a2 + 324, v238, 4);
            hex2bin(a2 + 336, v245, 4);
            hex2bin(a2 + 348, v243, 4);
            *(_BYTE *)(a2 + 436) = v249;
            *(_QWORD *)(a2 + 440) = *(_QWORD *)(a2 + 1968);
            pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1752));
            pool_tset(a2, (_BYTE *)(a2 + 2076), 1);
            goto LABEL_11;
          }
        }
      }
    }
    V_LOCK();
    LOWORD(v142) = 6964;
    HIWORD(v142) = (unsigned int)"miner_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.h" >> 16;
    logfmt_raw(s, 0x1000u, 0, v142);
    V_UNLOCK();
    LOWORD(v81) = -14512;
    HIWORD(v81) = (unsigned int)&unk_16B55C >> 16;
    v82 = 217;
LABEL_59:
    LOWORD(v83) = 13148;
    HIWORD(v83) = (unsigned int)"handle_method_eth" >> 16;
    zlog(*v81, v83, 163, "stratum_notify", 14, v82, 100, s);
LABEL_47:
    v15 = a2;
    v14 = (_BYTE *)(a2 + 2076);
    goto LABEL_48;
  }
  LOWORD(v27) = 12500;
  HIWORD(v27) = (unsigned int)"thod\": \"mining.submit\"}" >> 16;
  if ( !strcasecmp(v8, v27) )
  {
    V_LOCK();
    LOWORD(v68) = 12512;
    HIWORD(v68) = (unsigned int)"ng.submit\"}" >> 16;
    logfmt_raw(s, 0x1000u, v11, v68);
    V_UNLOCK();
    LOWORD(v69) = -14512;
    HIWORD(v69) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v70) = 13148;
    HIWORD(v70) = (unsigned int)"handle_method_eth" >> 16;
    zlog(*v69, v70, 163, "stratum_handle_method_grin32", 28, 775, 20, s);
    if ( v26 && *v26 != 7 )
    {
      v71 = json_integer_value((int)v26);
      LOWORD(v72) = 12524;
      HIWORD(v72) = (unsigned int)"000000800000000000000000000000000000000000000000000000000000000000000000000000000000000080020000" >> 16;
      sprintf(s, v72, v71);
      v11 = stratum_send_line((int *)a2, s);
    }
    goto LABEL_11;
  }
  LOWORD(v28) = 7716;
  HIWORD(v28) = (unsigned int)"            " >> 16;
  if ( !strcasecmp(v8, v28) )
  {
    v67 = json_array_get(v10, v11);
    json_number_value((int)v67);
    if ( v3 != 0.0 )
    {
      v11 = 1;
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1752));
      *(double *)(a2 + 1968) = v3;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1752));
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  LOWORD(v29) = 7760;
  HIWORD(v29) = (unsigned int)"\\/" >> 16;
  if ( !strcasecmp(v8, v29) )
  {
    v84 = json_array_get(v10, v11);
    v85 = (char *)json_string_value(v84);
    if ( v85 )
    {
      v86 = json_array_get(v10, 1u);
      v87 = json_integer_value((int)v86);
      v88 = v87;
      if ( v87 )
      {
        if ( (unsigned int)(v87 - 2) > 0xE )
        {
          V_LOCK();
          logfmt_raw(s, 0x1000u, v11, "Failed to get valid n2size in parse_extranonce");
          V_UNLOCK();
          LOWORD(v94) = -14512;
          v93 = 40;
          HIWORD(v94) = (unsigned int)&unk_16B55C >> 16;
          v95 = 324;
        }
        else
        {
          pthread_mutex_lock((pthread_mutex_t *)(a2 + 1752));
          v89 = *(void **)(a2 + 76);
          if ( v89 )
            free(v89);
          v90 = strlen(v85) >> 1;
          *(_DWORD *)(a2 + 72) = v90;
          v91 = calloc(1u, v90);
          *(_DWORD *)(a2 + 76) = v91;
          if ( !v91 )
          {
            V_LOCK();
            LOWORD(v206) = 6876;
            HIWORD(v206) = (unsigned int)" was not rejected in preliminary hex checks!" >> 16;
            logfmt_raw(s, 0x1000u, 0, v206);
            V_UNLOCK();
            LOWORD(v207) = -14512;
            HIWORD(v207) = (unsigned int)&unk_16B55C >> 16;
            LOWORD(v208) = 13148;
            HIWORD(v208) = (unsigned int)"handle_method_eth" >> 16;
            zlog(*v207, v208, 163, "stratum_parse_extranonce", 24, 333, 100, s);
            pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1752));
            goto LABEL_11;
          }
          hex2bin((int)v91, (unsigned __int8 *)v85, v90);
          *(_DWORD *)(a2 + 80) = v88;
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1752));
          v11 = 1;
          V_LOCK();
          LOWORD(v92) = 12564;
          HIWORD(v92) = (unsigned int)"00000000000000000000000000000000000000000000000080020000" >> 16;
          logfmt_raw(s, 0x1000u, 0, v92, v85, v88);
          V_UNLOCK();
          LOWORD(v94) = -14512;
          v93 = 20;
          HIWORD(v94) = (unsigned int)&unk_16B55C >> 16;
          v95 = 343;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(s, 0x1000u, v11, "Failed to get extranonce2_size");
        V_UNLOCK();
        LOWORD(v94) = -14512;
        v93 = 100;
        HIWORD(v94) = (unsigned int)&unk_16B55C >> 16;
        v95 = 320;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(s, 0x1000u, v11, "Failed to get extranonce1");
      V_UNLOCK();
      LOWORD(v94) = -14512;
      v93 = 100;
      HIWORD(v94) = (unsigned int)&unk_16B55C >> 16;
      v95 = 315;
    }
    LOWORD(v96) = 13148;
    HIWORD(v96) = (unsigned int)"handle_method_eth" >> 16;
    zlog(*v94, v96, 163, "stratum_parse_extranonce", 24, v95, v93, s);
  }
  else
  {
    LOWORD(v30) = 12612;
    HIWORD(v30) = (unsigned int)"80020000" >> 16;
    if ( !strcasecmp(v8, v30) )
    {
      v100 = json_array_get(v10, 0);
      v101 = (const char *)json_string_value(v100);
      v102 = json_array_get(v10, 1u);
      if ( v102 && *v102 == 2 )
      {
        v197 = (const char *)json_string_value(v102);
        v103 = strtol(v197, 0, 10);
      }
      else
      {
        v103 = json_integer_value((int)v102);
      }
      if ( v101 )
        v104 = v103 == 0;
      else
        v104 = 1;
      if ( !v104 )
      {
        v105 = strlen(v101);
        v106 = (char *)malloc(v105 + 32);
        LOWORD(v107) = 12632;
        HIWORD(v107) = (unsigned int)"parse_extranonce_dcr" >> 16;
        v108 = v106;
        sprintf(v106, v107, v101, v103);
        V_LOCK();
        LOWORD(v109) = 12652;
        HIWORD(v109) = (unsigned int)"" >> 16;
        logfmt_raw(s, 0x1000u, 0, v109, v108);
        V_UNLOCK();
        LOWORD(v110) = -14512;
        HIWORD(v110) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v111) = 13148;
        HIWORD(v111) = (unsigned int)"handle_method_eth" >> 16;
        zlog(*v110, v111, 163, "stratum_reconnect", 17, 469, 60, s);
        v112 = *(void **)(a2 + 28);
        if ( v112 )
          free(v112);
        *(_DWORD *)(a2 + 28) = v108;
        free(v108);
        v11 = 1;
        stratum_disconnect((int *)a2);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    LOWORD(v31) = 12688;
    HIWORD(v31) = (unsigned int)"r" >> 16;
    if ( strcasecmp(v8, v31) )
    {
      LOWORD(v32) = 12736;
      HIWORD(v32) = (unsigned int)"r_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_dcr/frontend_dcr.c" >> 16;
      if ( !strcasecmp(v8, v32) )
      {
        if ( !v26 || *v26 == 7 )
          goto LABEL_10;
        v143 = json_object();
        v144 = v143;
        if ( v26[1] != -1 )
        {
          v145 = v26 + 1;
          do
            v146 = __ldrex(v145);
          while ( __strex(v146 + 1, v145) );
          __dmb(0xBu);
        }
        LOWORD(v147) = 11724;
        HIWORD(v147) = (unsigned int)"e_extranonce_dash" >> 16;
        json_object_set_new(v143, v147, v26);
        if ( *(_BYTE *)(a2 + 1808) )
        {
          memset(s, 0, 0x40u);
          memset(s1, 0, 0x20u);
          get_currentalgo(s, 0x40u);
          LOWORD(v148) = 12756;
          HIWORD(v148) = (unsigned int)"ootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_dcr/frontend_dcr.c" >> 16;
          v149 = *v148;
          v256 = v148[1];
          v255 = v149;
          sprintf(s1, "GCC %d.%d.%d\n", 7, 2, 1);
          s1[31] = 0;
          v150 = json_object();
          v151 = BUFX_strdup(s);
          LOWORD(v152) = -3376;
          HIWORD(v152) = (unsigned int)"num" >> 16;
          json_object_set_new(v150, v152, v151);
          v153 = BUFX_strdup("cpu");
          LOWORD(v154) = -616;
          HIWORD(v154) = (unsigned int)"d ms" >> 16;
          json_object_set_new(v150, v154, v153);
          v155 = json_integer(0);
          LOWORD(v156) = -1348;
          HIWORD(v156) = (unsigned int)"ns/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/god-miner.c" >> 16;
          json_object_set_new(v150, v156, v155);
          v157 = json_integer(0);
          LOWORD(v158) = 12784;
          HIWORD(v158) = (unsigned int)"build/godminer-origin_master/frontend/frontend_dcr/frontend_dcr.c" >> 16;
          json_object_set_new(v150, v158, v157);
          v159 = json_integer(0);
          LOWORD(v160) = 12792;
          HIWORD(v160) = (unsigned int)"dminer-origin_master/frontend/frontend_dcr/frontend_dcr.c" >> 16;
          json_object_set_new(v150, v160, v159);
          v161 = json_real();
          LOWORD(v162) = 12800;
          HIWORD(v162) = (unsigned int)"rigin_master/frontend/frontend_dcr/frontend_dcr.c" >> 16;
          json_object_set_new(v150, v162, v161);
          v163 = BUFX_strdup((char *)&v255);
          LOWORD(v164) = 12812;
          HIWORD(v164) = (unsigned int)"/frontend/frontend_dcr/frontend_dcr.c" >> 16;
          json_object_set_new(v150, v164, v163);
          v165 = BUFX_strdup(s1);
          LOWORD(v166) = 12816;
          HIWORD(v166) = (unsigned int)"ntend/frontend_dcr/frontend_dcr.c" >> 16;
          json_object_set_new(v150, v166, v165);
          LOWORD(v167) = 7692;
          HIWORD(v167) = (unsigned int)"ECT" >> 16;
          json_object_set_new(v144, v167, v150);
          v168 = json_null();
          LOWORD(v169) = -22980;
          HIWORD(v169) = (unsigned int)&unk_13996C >> 16;
          json_object_set_new(v144, v169, v168);
        }
        else
        {
          LOWORD(v198) = 12824;
          HIWORD(v198) = (unsigned int)"ontend_dcr/frontend_dcr.c" >> 16;
          sub_42FB0(v144, (_DWORD *)1, v198);
        }
        v49 = json_dumps(v144, 0);
        v11 = stratum_send_line((int *)a2, v49);
        if ( v144 )
        {
          if ( v144[1] != -1 )
          {
            v170 = v144 + 1;
            __dmb(0xBu);
            do
            {
              v171 = __ldrex(v170);
              v172 = v171 - 1;
            }
            while ( __strex(v172, v170) );
            if ( !v172 )
              json_delete(v144);
          }
        }
        if ( !v49 )
          goto LABEL_11;
LABEL_41:
        free(v49);
        goto LABEL_11;
      }
      LOWORD(v33) = 12836;
      HIWORD(v33) = (unsigned int)"rontend_dcr.c" >> 16;
      if ( !strcasecmp(v8, v33) )
      {
        if ( !v26 || *v26 == 7 )
          goto LABEL_10;
        v175 = json_object();
        v117 = v175;
        if ( v26[1] != -1 )
        {
          v176 = v26 + 1;
          do
            v177 = __ldrex(v176);
          while ( __strex(v177 + 1, v176) );
          __dmb(0xBu);
        }
        LOWORD(v178) = 11724;
        HIWORD(v178) = (unsigned int)"e_extranonce_dash" >> 16;
        json_object_set_new(v175, v178, v26);
        v179 = json_null();
        LOWORD(v180) = -22980;
        HIWORD(v180) = (unsigned int)&unk_13996C >> 16;
        json_object_set_new(v117, v180, v179);
        v181 = BUFX_strdup("GodMiner/1.0.0");
        LOWORD(v182) = 7692;
        HIWORD(v182) = (unsigned int)"ECT" >> 16;
        json_object_set_new(v117, v182, v181);
        v125 = json_dumps(v117, 0);
        v11 = stratum_send_line((int *)a2, v125);
        if ( v117 && v117[1] != -1 )
        {
          v183 = v117 + 1;
          __dmb(0xBu);
          do
          {
            v184 = __ldrex(v183);
            v128 = v184 - 1;
          }
          while ( __strex(v128, v183) );
LABEL_90:
          if ( !v128 )
            json_delete(v117);
        }
      }
      else
      {
        LOWORD(v34) = 12856;
        HIWORD(v34) = (unsigned int)" xnonce1 into work->xnonce2 to submit" >> 16;
        if ( !strcasecmp(v8, v34) )
        {
          v35 = json_array_get(v10, 0);
          if ( v35 )
          {
            V_LOCK();
            v36 = json_string_value(v35);
            LOWORD(v37) = 12876;
            HIWORD(v37) = (unsigned int)"xnonce2 to submit" >> 16;
            logfmt_raw(s, 0x1000u, 0, v37, v36);
            V_UNLOCK();
            LOWORD(v38) = -14512;
            HIWORD(v38) = (unsigned int)&unk_16B55C >> 16;
            LOWORD(v39) = 13148;
            HIWORD(v39) = (unsigned int)"handle_method_eth" >> 16;
            zlog(*v38, v39, 163, "stratum_show_message", 20, 693, 60, s);
          }
          if ( !v26 || *v26 == 7 )
          {
            v11 = 1;
            goto LABEL_11;
          }
          v40 = json_object();
          v41 = v40;
          if ( v26[1] != -1 )
          {
            v42 = v26 + 1;
            do
              v43 = __ldrex(v42);
            while ( __strex(v43 + 1, v42) );
            __dmb(0xBu);
          }
          LOWORD(v44) = 11724;
          HIWORD(v44) = (unsigned int)"e_extranonce_dash" >> 16;
          json_object_set_new(v40, v44, v26);
          v45 = json_null();
          LOWORD(v46) = -22980;
          HIWORD(v46) = (unsigned int)&unk_13996C >> 16;
          json_object_set_new(v41, v46, v45);
          v47 = json_true();
          LOWORD(v48) = 7692;
          HIWORD(v48) = (unsigned int)"ECT" >> 16;
          json_object_set_new(v41, v48, v47);
          v49 = json_dumps(v41, 0);
          v11 = stratum_send_line((int *)a2, v49);
          if ( v41 )
          {
            if ( v41[1] != -1 )
            {
              v50 = v41 + 1;
              __dmb(0xBu);
              do
              {
                v51 = __ldrex(v50);
                v52 = v51 - 1;
              }
              while ( __strex(v52, v50) );
              if ( !v52 )
                json_delete(v41);
            }
          }
          goto LABEL_41;
        }
        V_LOCK();
        LOWORD(v185) = 7784;
        HIWORD(v185) = (unsigned int)"" >> 16;
        logfmt_raw(s, 0x1000u, 0, v185, v8);
        V_UNLOCK();
        LOWORD(v186) = -14512;
        HIWORD(v186) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v187) = 13148;
        HIWORD(v187) = (unsigned int)"handle_method_eth" >> 16;
        zlog(*v186, v187, 163, "stratum_handle_method_grin32", 28, 813, 80, s);
        if ( !v26 || *v26 == 7 )
          goto LABEL_10;
        v188 = json_object();
        v117 = v188;
        if ( v26[1] != -1 )
        {
          v189 = v26 + 1;
          do
            v190 = __ldrex(v189);
          while ( __strex(v190 + 1, v189) );
          __dmb(0xBu);
        }
        LOWORD(v191) = 11724;
        HIWORD(v191) = (unsigned int)"e_extranonce_dash" >> 16;
        json_object_set_new(v188, v191, v26);
        v192 = json_false();
        LOWORD(v193) = 7692;
        HIWORD(v193) = (unsigned int)"ECT" >> 16;
        json_object_set_new(v117, v193, v192);
        LOWORD(v194) = 12900;
        HIWORD(v194) = (unsigned int)"ed to alloc work->xnonce2" >> 16;
        sub_42FB0(v117, (_DWORD *)0x26, v194);
        v125 = json_dumps(v117, 0);
        v11 = stratum_send_line((int *)a2, v125);
        if ( v117 && v117[1] != -1 )
        {
          v195 = v117 + 1;
          __dmb(0xBu);
          do
          {
            v196 = __ldrex(v195);
            v128 = v196 - 1;
          }
          while ( __strex(v128, v195) );
          goto LABEL_90;
        }
      }
LABEL_92:
      if ( v125 )
        free(v125);
      goto LABEL_11;
    }
    V_LOCK();
    LOWORD(v113) = 12704;
    HIWORD(v113) = (unsigned int)"enkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_dcr/frontend_dcr.c" >> 16;
    logfmt_raw(s, 0x1000u, 0, v113);
    V_UNLOCK();
    LOWORD(v114) = -14512;
    HIWORD(v114) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v115) = 13148;
    HIWORD(v115) = (unsigned int)"handle_method_eth" >> 16;
    zlog(*v114, v115, 163, "stratum_handle_method_grin32", 28, 793, 60, s);
    memset(s, 0, 0x40u);
    if ( v26 && *v26 != 7 )
    {
      get_currentalgo(s, 0x40u);
      v116 = json_object();
      v117 = v116;
      if ( v26[1] != -1 )
      {
        v118 = v26 + 1;
        do
          v119 = __ldrex(v118);
        while ( __strex(v119 + 1, v118) );
        __dmb(0xBu);
      }
      LOWORD(v120) = 11724;
      HIWORD(v120) = (unsigned int)"e_extranonce_dash" >> 16;
      json_object_set_new(v116, v120, v26);
      v121 = json_null();
      LOWORD(v122) = -22980;
      HIWORD(v122) = (unsigned int)&unk_13996C >> 16;
      json_object_set_new(v117, v122, v121);
      v123 = BUFX_strdup(s);
      LOWORD(v124) = 7692;
      HIWORD(v124) = (unsigned int)"ECT" >> 16;
      json_object_set_new(v117, v124, v123);
      v125 = json_dumps(v117, 0);
      v11 = stratum_send_line((int *)a2, v125);
      if ( !v117 || v117[1] == -1 )
        goto LABEL_92;
      v126 = v117 + 1;
      __dmb(0xBu);
      do
      {
        v127 = __ldrex(v126);
        v128 = v127 - 1;
      }
      while ( __strex(v128, v126) );
      goto LABEL_90;
    }
  }
LABEL_11:
  if ( *((_DWORD *)v6 + 1) != -1 )
  {
    v16 = (unsigned int *)v6 + 1;
    __dmb(0xBu);
    do
    {
      v17 = __ldrex(v16);
      v18 = v17 - 1;
    }
    while ( __strex(v18, v16) );
    if ( !v18 )
      json_delete(v6);
  }
  return v11;
}
