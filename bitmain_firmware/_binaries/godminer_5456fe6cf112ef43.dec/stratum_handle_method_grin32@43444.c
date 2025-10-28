unsigned int __fastcall stratum_handle_method_grin32(int a1, int a2, int a3)
{
  double v3; // d0
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _DWORD *v7; // r0
  const char *v8; // r9
  _DWORD *v9; // r7
  unsigned int v10; // r5
  _BYTE *v11; // r1
  int v12; // r0
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v17; // r0
  _DWORD *v18; // r10
  int v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r5
  int v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r7
  unsigned int *v25; // r3
  unsigned int v26; // r2
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  char *v29; // r8
  unsigned int *v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r2
  int v33; // r11
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  char *v36; // r0
  int v37; // r2
  unsigned int v38; // r10
  unsigned int v39; // r1
  _DWORD *v40; // r0
  _DWORD *v41; // r0
  char *v42; // r10
  _DWORD *v43; // r0
  double v44; // r0
  int v45; // r0
  int v46; // r0
  _DWORD *v47; // r10
  _DWORD *v48; // r0
  _DWORD *v49; // r0
  _DWORD *v50; // r0
  const char *v51; // r0
  int v52; // r0
  int v53; // r2
  _DWORD *v54; // r0
  char *v55; // r8
  _DWORD *v56; // r0
  int v57; // r0
  int v58; // r7
  void *v59; // r0
  size_t v60; // r9
  void *v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r12
  int v65; // r2
  _DWORD *v66; // r0
  _DWORD *v67; // r0
  char *v68; // r0
  _DWORD *v69; // r0
  const char *v70; // r9
  _DWORD *v71; // r0
  int v72; // r7
  _BOOL4 v73; // r5
  size_t v74; // r0
  char *v75; // r8
  int v76; // r0
  int v77; // r0
  void *v78; // r0
  int v79; // r0
  _DWORD *v80; // r0
  _DWORD *v81; // r8
  unsigned int *v82; // r3
  unsigned int v83; // r2
  _DWORD *v84; // r0
  char *v85; // r0
  char *v86; // r7
  unsigned int *v87; // r3
  unsigned int v88; // r2
  unsigned int v89; // r2
  _DWORD *v90; // r0
  _DWORD *v91; // r0
  _DWORD *v92; // r0
  const char *v93; // r0
  int v94; // r0
  _DWORD *v95; // r0
  _DWORD *v96; // r0
  _DWORD *v97; // r0
  _DWORD *v98; // r0
  _DWORD *v99; // r3
  bool v100; // zf
  bool v101; // zf
  signed int v102; // r7
  int v103; // r0
  _DWORD *v104; // r0
  _DWORD *v105; // r7
  unsigned int *v106; // r3
  unsigned int v107; // r2
  _DWORD *v108; // r5
  char *v109; // r0
  char *v110; // r0
  _QWORD *v111; // r0
  _QWORD *v112; // r0
  _QWORD *v113; // r0
  double *v114; // r0
  char *v115; // r0
  char *v116; // r0
  _DWORD *v117; // r0
  unsigned int *v118; // r3
  unsigned int v119; // r2
  unsigned int v120; // r2
  int v121; // r0
  _DWORD *v122; // r0
  _DWORD *v123; // r0
  int v124; // r0
  int v125; // r0
  _DWORD *v126; // r0
  unsigned int *v127; // r3
  unsigned int v128; // r2
  _DWORD *v129; // r0
  char *v130; // r0
  unsigned int *v131; // r3
  unsigned int v132; // r2
  int v133; // r0
  _DWORD *v134; // r0
  unsigned int *v135; // r3
  unsigned int v136; // r2
  _DWORD *v137; // r0
  unsigned int *v138; // r3
  unsigned int v139; // r2
  const char *v140; // r0
  char *v141; // r0
  _DWORD *v142; // r3
  _DWORD *v143; // r8
  _DWORD *v144; // r0
  int v145; // r0
  unsigned __int8 *v146; // r4
  void *v147; // r0
  int v148; // r0
  char *i; // r7
  int v150; // t1
  int v151; // r8
  size_t v152; // r5
  size_t v153; // r9
  void *v154; // r0
  size_t v155; // r1
  char *v156; // r0
  int v157; // r12
  const char *v158; // r0
  void *v159; // r0
  int v160; // r1
  unsigned __int8 *v161; // r2
  unsigned int v162; // r1
  bool v163; // cc
  int v164; // r0
  _BOOL4 v165; // r0
  int v166; // r3
  int v167; // r5
  _DWORD *v168; // r2
  int v169; // r3
  void *v170; // r1
  int v171; // r1
  int v172; // r3
  void *v173; // r2
  char *v174; // [sp+10h] [bp-1184h]
  char *v175; // [sp+10h] [bp-1184h]
  unsigned __int8 *v176; // [sp+14h] [bp-1180h]
  char *s2; // [sp+18h] [bp-117Ch]
  char *v178; // [sp+1Ch] [bp-1178h]
  int v179; // [sp+20h] [bp-1174h]
  char *v180; // [sp+20h] [bp-1174h]
  unsigned int v181; // [sp+24h] [bp-1170h]
  char *v182; // [sp+24h] [bp-1170h]
  int v183; // [sp+28h] [bp-116Ch]
  char *v184; // [sp+2Ch] [bp-1168h]
  unsigned int v185; // [sp+30h] [bp-1164h]
  bool v186; // [sp+30h] [bp-1164h]
  _DWORD *ptr; // [sp+34h] [bp-1160h]
  _DWORD *ptra; // [sp+34h] [bp-1160h]
  char *ptrb; // [sp+34h] [bp-1160h]
  int v190; // [sp+38h] [bp-115Ch]
  _DWORD *v191; // [sp+3Ch] [bp-1158h]
  char v192[8]; // [sp+4Ch] [bp-1148h] BYREF
  char s1[64]; // [sp+54h] [bp-1140h] BYREF
  char v194[92]; // [sp+94h] [bp-1100h] BYREF
  char s[4100]; // [sp+190h] [bp-1004h] BYREF

  v5 = (_DWORD *)json_loads(a3, 0, v194);
  v6 = v5;
  if ( !v5 )
  {
    v10 = 0;
    V_LOCK(0);
    v17 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_handle_method_grin32",
      28,
      739,
      100,
      s);
    return v10;
  }
  v7 = (_DWORD *)json_object_get(v5, "method");
  v8 = (const char *)json_string_value(v7);
  if ( !v8 )
    goto LABEL_10;
  v9 = (_DWORD *)json_object_get(v6, "params");
  if ( !v9 )
    v9 = (_DWORD *)json_object_get(v6, "result");
  v10 = *(unsigned __int8 *)(a2 + 1824);
  if ( *(_BYTE *)(a2 + 1824) )
  {
    if ( !strcasecmp(v8, "getjobtemplate") || !strcasecmp(v8, "job") )
    {
      v10 = sub_429EC(v9, a2);
      v11 = (_BYTE *)(a2 + 2084);
      v12 = a2;
      if ( v10 )
      {
        pool_tset(a2, v11, 1);
        goto LABEL_11;
      }
LABEL_48:
      pool_tclear(v12, v11, 0);
      goto LABEL_11;
    }
LABEL_10:
    v10 = 0;
    goto LABEL_11;
  }
  v18 = (_DWORD *)json_object_get(v6, "id");
  if ( !strcasecmp(v8, "mining.notify") )
  {
    memset(s1, 0, sizeof(s1));
    get_currentalgo(s1, 0x40u);
    v33 = strcmp(s1, "lbry");
    if ( v33 )
    {
      v33 = strcmp(s1, "phi2");
      if ( v33 )
      {
        v34 = json_array_get(v9, 0);
        s2 = (char *)json_string_value(v34);
        v183 = 0;
        v35 = json_array_get(v9, 1u);
        v36 = (char *)json_string_value(v35);
        v33 = 0;
        v37 = 4;
        v38 = 3;
        v39 = 2;
        v178 = v36;
        v179 = 2;
        v181 = 5;
        v176 = 0;
        goto LABEL_45;
      }
      if ( json_array_size(v9) != (_DWORD *)10 )
      {
        v66 = json_array_get(v9, 0);
        s2 = (char *)json_string_value(v66);
        v183 = 0;
        v67 = json_array_get(v9, 1u);
        v68 = (char *)json_string_value(v67);
        v39 = 2;
        v178 = v68;
        v37 = 4;
        v179 = 2;
        v38 = 3;
        v181 = 5;
        v176 = 0;
        goto LABEL_45;
      }
      v122 = json_array_get(v9, 0);
      s2 = (char *)json_string_value(v122);
      v123 = json_array_get(v9, 1u);
      v178 = (char *)json_string_value(v123);
LABEL_96:
      v92 = json_array_get(v9, 2u);
      v93 = (const char *)json_string_value(v92);
      v176 = (unsigned __int8 *)v93;
      if ( !v93 || (v93 = (const char *)strlen(v93), v93 != (const char *)128) )
      {
        V_LOCK(v93);
        v94 = logfmt_raw((int)s, 0x1000u);
        V_UNLOCK(v94);
        v53 = 199;
        goto LABEL_59;
      }
      v39 = 3;
      v183 = 0;
      v179 = 3;
      v37 = 5;
      v181 = 6;
      v38 = 4;
      v33 = 1;
      goto LABEL_45;
    }
    v47 = json_array_size(v9);
    if ( !strcmp(s1, "phi2") && json_array_size(v9) == (_DWORD *)10 )
    {
      v90 = json_array_get(v9, 0);
      s2 = (char *)json_string_value(v90);
      v91 = json_array_get(v9, 1u);
      v178 = (char *)json_string_value(v91);
      if ( v47 != (_DWORD *)10 )
        goto LABEL_96;
      v33 = 1;
    }
    else
    {
      v48 = json_array_get(v9, 0);
      s2 = (char *)json_string_value(v48);
      v49 = json_array_get(v9, 1u);
      v178 = (char *)json_string_value(v49);
      if ( v47 != (_DWORD *)10 )
      {
        v39 = 2;
        v183 = 0;
        v37 = 4;
        v176 = 0;
        v179 = 2;
        v38 = 3;
        v181 = 5;
        goto LABEL_45;
      }
    }
    v50 = json_array_get(v9, 2u);
    v51 = (const char *)json_string_value(v50);
    v176 = (unsigned __int8 *)v51;
    if ( !v51 || (v51 = (const char *)strlen(v51), v51 != (const char *)64) )
    {
      V_LOCK(v51);
      v52 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v52);
      v53 = 192;
      goto LABEL_59;
    }
    v39 = 3;
    v181 = 6;
    v37 = 5;
    v179 = 3;
    v38 = 4;
    v183 = 1;
LABEL_45:
    v174 = (char *)v37;
    v40 = json_array_get(v9, v39);
    v184 = (char *)json_string_value(v40);
    v41 = json_array_get(v9, v38);
    v42 = (char *)json_string_value(v41);
    v43 = json_array_get(v9, (unsigned int)v174);
    if ( !v43 || *v43 != 1 )
      goto LABEL_47;
    ptr = v43;
    v190 = (int)json_array_size(v43);
    v95 = json_array_get(v9, v181);
    v175 = (char *)json_string_value(v95);
    v185 = v179 + 6;
    v96 = json_array_get(v9, v179 + 4);
    v182 = (char *)json_string_value(v96);
    v97 = json_array_get(v9, v179 + 5);
    v180 = (char *)json_string_value(v97);
    v98 = json_array_get(v9, v185);
    v99 = ptr;
    if ( v98 )
    {
      v98 = json_array_get(v9, v185);
      v186 = *v98 == 5;
      v99 = ptr;
    }
    else
    {
      v186 = 0;
    }
    v100 = v178 == 0;
    if ( v178 )
      v100 = s2 == 0;
    if ( !v100 )
    {
      v101 = v42 == 0;
      if ( v42 )
        v101 = v184 == 0;
      if ( !v101 )
      {
        if ( v175 )
          v102 = v182 == 0;
        else
          v102 = 1;
        if ( !v180 )
          v102 = 1;
        if ( !v102 )
        {
          ptra = v99;
          v98 = (_DWORD *)strlen(v178);
          if ( v98 == (_DWORD *)64 )
          {
            v98 = (_DWORD *)strlen(v175);
            if ( v98 == (_DWORD *)8 )
            {
              v98 = (_DWORD *)strlen(v182);
              if ( v98 == (_DWORD *)8 )
              {
                v98 = (_DWORD *)strlen(v180);
                if ( v98 == (_DWORD *)8 )
                {
                  v141 = (char *)malloc(4 * v190);
                  v142 = ptra;
                  ptrb = v141;
                  v143 = v142;
                  v191 = v6;
                  while ( v190 > v102 )
                  {
                    v144 = json_array_get(v143, v102);
                    v145 = (int)json_string_value(v144);
                    v146 = (unsigned __int8 *)v145;
                    if ( !v145 || (v100 = strlen((const char *)v145) == 64, v145 = 32, !v100) )
                    {
                      v6 = v191;
                      for ( i = &ptrb[4 * v102]; i != ptrb; i -= 4 )
                      {
                        v150 = *((_DWORD *)i - 1);
                        v145 = v150;
                        if ( v150 )
                          free((void *)v145);
                      }
                      if ( i )
                        free(i);
                      V_LOCK(v145);
                      v164 = logfmt_raw((int)s, 0x1000u);
                      V_UNLOCK(v164);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/frontend/frontend_grin32/frontend_grin32.c",
                        163,
                        "stratum_notify",
                        14,
                        228,
                        100,
                        s);
                      goto LABEL_47;
                    }
                    v147 = malloc(0x20u);
                    *(_DWORD *)&ptrb[4 * v102++] = v147;
                    hex2bin((int)v147, v146, 32);
                  }
                  v151 = 0;
                  v6 = v191;
                  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
                  v152 = strlen(v184) >> 1;
                  v153 = strlen(v42) >> 1;
                  v154 = *(void **)(a2 + 292);
                  v155 = *(_DWORD *)(a2 + 72) + *(_DWORD *)(a2 + 80) + v152 + v153;
                  *(_DWORD *)(a2 + 288) = v155;
                  v156 = (char *)realloc(v154, v155);
                  v157 = *(_DWORD *)(a2 + 72);
                  *(_DWORD *)(a2 + 292) = v156;
                  *(_DWORD *)(a2 + 296) = &v156[v152 + v157];
                  hex2bin((int)v156, (unsigned __int8 *)v184, v152);
                  memcpy((void *)(*(_DWORD *)(a2 + 292) + v152), *(const void **)(a2 + 76), *(_DWORD *)(a2 + 72));
                  v158 = *(const char **)(a2 + 88);
                  if ( !v158 || strcmp(v158, s2) )
                    memset(*(void **)(a2 + 296), 0, *(_DWORD *)(a2 + 80));
                  hex2bin(*(_DWORD *)(a2 + 296) + *(_DWORD *)(a2 + 80), (unsigned __int8 *)v42, v153);
                  v159 = *(void **)(a2 + 88);
                  if ( v159 )
                    free(v159);
                  *(_DWORD *)(a2 + 88) = _strdup(s2);
                  hex2bin(a2 + 92, (unsigned __int8 *)v178, 32);
                  if ( v183 )
                    hex2bin(a2 + 372, v176, 32);
                  if ( v33 )
                    hex2bin(a2 + 372, v176, 64);
                  v160 = *(_DWORD *)(a2 + 292);
                  v161 = (unsigned __int8 *)(v160 + 32);
                  v162 = v160 + 160;
                  while ( 1 )
                  {
                    v163 = 0;
                    if ( *v161 != 255 )
                      v163 = v162 > (unsigned int)v161;
                    if ( !v163 )
                      break;
                    ++v161;
                  }
                  while ( 1 )
                  {
                    v165 = *v161 == 255;
                    if ( v162 <= (unsigned int)v161 )
                      v165 = 0;
                    if ( !v165 )
                      break;
                    ++v161;
                  }
                  v166 = 0;
                  if ( *(v161 - 1) == 255 && *(v161 - 2) == 255 )
                  {
                    v171 = v161[1];
                    v166 = (unsigned __int16)(v161[2] + (v161[3] << 8));
                    if ( v171 == 3 )
                    {
                      v166 += v161[4] << 16;
                    }
                    else if ( v171 == 4 )
                    {
                      v166 += (v161[4] + (v161[5] << 8)) << 16;
                    }
                  }
                  *(_DWORD *)(a2 + 1812) = v166;
                  v167 = 0;
                  v168 = *(_DWORD **)(a2 + 320);
                  v169 = *(_DWORD *)(a2 + 316);
                  while ( v167 < v169 )
                  {
                    v170 = (void *)v168[v167++];
                    if ( v170 )
                    {
                      free(v170);
                      v168 = *(_DWORD **)(a2 + 320);
                      v169 = *(_DWORD *)(a2 + 316);
                    }
                  }
                  if ( v168 )
                    free(v168);
                  *(_DWORD *)(a2 + 320) = ptrb;
                  v172 = v190;
                  *(_DWORD *)(a2 + 316) = v190;
                  while ( v151 < v172 )
                  {
                    v173 = *(void **)&ptrb[4 * v151++];
                    if ( v173 )
                    {
                      free(v173);
                      v172 = *(_DWORD *)(a2 + 316);
                    }
                  }
                  if ( ptrb )
                    free(ptrb);
                  v10 = 1;
                  hex2bin(a2 + 324, (unsigned __int8 *)v175, 4);
                  hex2bin(a2 + 336, (unsigned __int8 *)v182, 4);
                  hex2bin(a2 + 348, (unsigned __int8 *)v180, 4);
                  *(_BYTE *)(a2 + 436) = v186;
                  *(_QWORD *)(a2 + 440) = *(_QWORD *)(a2 + 1976);
                  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
                  pool_tset(a2, (_BYTE *)(a2 + 2084), 1);
                  goto LABEL_11;
                }
              }
            }
          }
        }
      }
    }
    V_LOCK(v98);
    v103 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v103);
    v53 = 217;
LABEL_59:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_notify",
      14,
      v53,
      100,
      s);
LABEL_47:
    v12 = a2;
    v11 = (_BYTE *)(a2 + 2084);
    goto LABEL_48;
  }
  if ( !strcasecmp(v8, "mining.ping") )
  {
    V_LOCK(0);
    v45 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v45);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_handle_method_grin32",
      28,
      775,
      20,
      s);
    if ( v18 && *v18 != 7 )
    {
      v46 = json_integer_value((int)v18);
      sprintf(s, "{\"id\":%d,\"result\":\"pong\",\"error\":null}", v46);
      v10 = stratum_send_line(a2, s);
    }
    goto LABEL_11;
  }
  if ( !strcasecmp(v8, "mining.set_difficulty") )
  {
    LODWORD(v44) = json_array_get(v9, v10);
    json_number_value(v44);
    if ( v3 != 0.0 )
    {
      v10 = 1;
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
      *(double *)(a2 + 1976) = v3;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( !strcasecmp(v8, "mining.set_extranonce") )
  {
    v54 = json_array_get(v9, v10);
    v55 = (char *)json_string_value(v54);
    if ( v55 )
    {
      v56 = json_array_get(v9, 1u);
      v57 = json_integer_value((int)v56);
      v58 = v57;
      if ( v57 )
      {
        if ( (unsigned int)(v57 - 2) > 0xE )
        {
          V_LOCK(v57);
          v124 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v124);
          v64 = 40;
          v65 = 324;
        }
        else
        {
          pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
          v59 = *(void **)(a2 + 76);
          if ( v59 )
            free(v59);
          v60 = strlen(v55) >> 1;
          *(_DWORD *)(a2 + 72) = v60;
          v61 = calloc(1u, v60);
          *(_DWORD *)(a2 + 76) = v61;
          if ( !v61 )
          {
            V_LOCK(0);
            v148 = logfmt_raw((int)s, 0x1000u);
            V_UNLOCK(v148);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_grin32/frontend_grin32.c",
              163,
              "stratum_parse_extranonce",
              24,
              333,
              100,
              s);
            pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
            goto LABEL_11;
          }
          hex2bin((int)v61, (unsigned __int8 *)v55, v60);
          *(_DWORD *)(a2 + 80) = v58;
          v62 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
          v10 = 1;
          V_LOCK(v62);
          v63 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v63);
          v64 = 20;
          v65 = 343;
        }
      }
      else
      {
        V_LOCK(0);
        v125 = logfmt_raw((int)s, 0x1000u);
        V_UNLOCK(v125);
        v64 = 100;
        v65 = 320;
      }
    }
    else
    {
      V_LOCK(0);
      v121 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v121);
      v64 = 100;
      v65 = 315;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_parse_extranonce",
      24,
      v65,
      v64,
      s);
  }
  else
  {
    if ( !strcasecmp(v8, "client.reconnect") )
    {
      v69 = json_array_get(v9, 0);
      v70 = (const char *)json_string_value(v69);
      v71 = json_array_get(v9, 1u);
      if ( v71 && *v71 == 2 )
      {
        v140 = (const char *)json_string_value(v71);
        v72 = strtol(v140, 0, 10);
      }
      else
      {
        v72 = json_integer_value((int)v71);
      }
      if ( v70 )
        v73 = v72 == 0;
      else
        v73 = 1;
      if ( !v73 )
      {
        v74 = strlen(v70);
        v75 = (char *)malloc(v74 + 32);
        v76 = sprintf(v75, "stratum+tcp://%s:%d", v70, v72);
        V_LOCK(v76);
        v77 = logfmt_raw((int)s, 0x1000u);
        V_UNLOCK(v77);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_grin32/frontend_grin32.c",
          163,
          "stratum_reconnect",
          17,
          469,
          60,
          s);
        v78 = *(void **)(a2 + 28);
        if ( v78 )
          free(v78);
        *(_DWORD *)(a2 + 28) = v75;
        free(v75);
        v10 = 1;
        stratum_disconnect(a2);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( strcasecmp(v8, "client.get_algo") )
    {
      if ( !strcasecmp(v8, "client.get_stats") )
      {
        if ( !v18 || *v18 == 7 )
          goto LABEL_10;
        v104 = json_object();
        v105 = v104;
        if ( v18[1] != -1 )
        {
          v106 = v18 + 1;
          do
            v107 = __ldrex(v106);
          while ( __strex(v107 + 1, v106) );
          __dmb(0xBu);
        }
        json_object_set_new(v104, "id", v18);
        if ( *(_BYTE *)(a2 + 1816) )
        {
          memset(s, 0, 0x40u);
          memset(s1, 0, 0x20u);
          get_currentalgo(s, 0x40u);
          strcpy(v192, "linux");
          sprintf(s1, "GCC %d.%d.%d\n", 7, 2, 1);
          s1[31] = 0;
          v108 = json_object();
          v109 = (char *)json_string(s);
          json_object_set_new(v108, "algo", v109);
          v110 = (char *)json_string("cpu");
          json_object_set_new(v108, "type", v110);
          v111 = json_integer(0);
          json_object_set_new(v108, "freq", v111);
          v112 = json_integer(0);
          json_object_set_new(v108, "memf", v112);
          v113 = json_integer(0);
          json_object_set_new(v108, "power", v113);
          v114 = json_real();
          json_object_set_new(v108, "intensity", v114);
          v115 = (char *)json_string(v192);
          json_object_set_new(v108, "os", v115);
          v116 = (char *)json_string(s1);
          json_object_set_new(v108, "driver", v116);
          json_object_set_new(v105, "result", v108);
          v117 = json_null();
          json_object_set_new(v105, "error", v117);
        }
        else
        {
          sub_43084(v105, (_DWORD *)1, "disabled");
        }
        v29 = (char *)json_dumps(v105, 0);
        v10 = stratum_send_line(a2, v29);
        if ( v105 )
        {
          if ( v105[1] != -1 )
          {
            v118 = v105 + 1;
            __dmb(0xBu);
            do
            {
              v119 = __ldrex(v118);
              v120 = v119 - 1;
            }
            while ( __strex(v120, v118) );
            if ( !v120 )
              json_delete(v105);
          }
        }
        if ( !v29 )
          goto LABEL_11;
LABEL_41:
        free(v29);
        goto LABEL_11;
      }
      if ( !strcasecmp(v8, "client.get_version") )
      {
        if ( !v18 || *v18 == 7 )
          goto LABEL_10;
        v126 = json_object();
        v81 = v126;
        if ( v18[1] != -1 )
        {
          v127 = v18 + 1;
          do
            v128 = __ldrex(v127);
          while ( __strex(v128 + 1, v127) );
          __dmb(0xBu);
        }
        json_object_set_new(v126, "id", v18);
        v129 = json_null();
        json_object_set_new(v81, "error", v129);
        v130 = (char *)json_string("GodMiner/1.0.0");
        json_object_set_new(v81, "result", v130);
        v86 = (char *)json_dumps(v81, 0);
        v10 = stratum_send_line(a2, v86);
        if ( v81 && v81[1] != -1 )
        {
          v131 = v81 + 1;
          __dmb(0xBu);
          do
          {
            v132 = __ldrex(v131);
            v89 = v132 - 1;
          }
          while ( __strex(v89, v131) );
LABEL_90:
          if ( !v89 )
            json_delete(v81);
        }
      }
      else
      {
        v19 = strcasecmp(v8, "client.show_message");
        if ( !v19 )
        {
          v20 = json_array_get(v9, 0);
          v21 = v20;
          if ( v20 )
          {
            V_LOCK(v20);
            json_string_value(v21);
            v22 = logfmt_raw((int)s, 0x1000u);
            V_UNLOCK(v22);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_grin32/frontend_grin32.c",
              163,
              "stratum_show_message",
              20,
              693,
              60,
              s);
          }
          if ( !v18 || *v18 == 7 )
          {
            v10 = 1;
            goto LABEL_11;
          }
          v23 = json_object();
          v24 = v23;
          if ( v18[1] != -1 )
          {
            v25 = v18 + 1;
            do
              v26 = __ldrex(v25);
            while ( __strex(v26 + 1, v25) );
            __dmb(0xBu);
          }
          json_object_set_new(v23, "id", v18);
          v27 = json_null();
          json_object_set_new(v24, "error", v27);
          v28 = json_true();
          json_object_set_new(v24, "result", v28);
          v29 = (char *)json_dumps(v24, 0);
          v10 = stratum_send_line(a2, v29);
          if ( v24 )
          {
            if ( v24[1] != -1 )
            {
              v30 = v24 + 1;
              __dmb(0xBu);
              do
              {
                v31 = __ldrex(v30);
                v32 = v31 - 1;
              }
              while ( __strex(v32, v30) );
              if ( !v32 )
                json_delete(v24);
            }
          }
          goto LABEL_41;
        }
        V_LOCK(v19);
        v133 = logfmt_raw((int)s, 0x1000u);
        V_UNLOCK(v133);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_grin32/frontend_grin32.c",
          163,
          "stratum_handle_method_grin32",
          28,
          813,
          80,
          s);
        if ( !v18 || *v18 == 7 )
          goto LABEL_10;
        v134 = json_object();
        v81 = v134;
        if ( v18[1] != -1 )
        {
          v135 = v18 + 1;
          do
            v136 = __ldrex(v135);
          while ( __strex(v136 + 1, v135) );
          __dmb(0xBu);
        }
        json_object_set_new(v134, "id", v18);
        v137 = json_false();
        json_object_set_new(v81, "result", v137);
        sub_43084(v81, (_DWORD *)0x26, "unknown method");
        v86 = (char *)json_dumps(v81, 0);
        v10 = stratum_send_line(a2, v86);
        if ( v81 && v81[1] != -1 )
        {
          v138 = v81 + 1;
          __dmb(0xBu);
          do
          {
            v139 = __ldrex(v138);
            v89 = v139 - 1;
          }
          while ( __strex(v89, v138) );
          goto LABEL_90;
        }
      }
LABEL_92:
      if ( v86 )
        free(v86);
      goto LABEL_11;
    }
    V_LOCK(0);
    v79 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v79);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_handle_method_grin32",
      28,
      793,
      60,
      s);
    memset(s, 0, 0x40u);
    if ( v18 && *v18 != 7 )
    {
      get_currentalgo(s, 0x40u);
      v80 = json_object();
      v81 = v80;
      if ( v18[1] != -1 )
      {
        v82 = v18 + 1;
        do
          v83 = __ldrex(v82);
        while ( __strex(v83 + 1, v82) );
        __dmb(0xBu);
      }
      json_object_set_new(v80, "id", v18);
      v84 = json_null();
      json_object_set_new(v81, "error", v84);
      v85 = (char *)json_string(s);
      json_object_set_new(v81, "result", v85);
      v86 = (char *)json_dumps(v81, 0);
      v10 = stratum_send_line(a2, v86);
      if ( !v81 || v81[1] == -1 )
        goto LABEL_92;
      v87 = v81 + 1;
      __dmb(0xBu);
      do
      {
        v88 = __ldrex(v87);
        v89 = v88 - 1;
      }
      while ( __strex(v89, v87) );
      goto LABEL_90;
    }
  }
LABEL_11:
  if ( v6[1] != -1 )
  {
    v13 = v6 + 1;
    __dmb(0xBu);
    do
    {
      v14 = __ldrex(v13);
      v15 = v14 - 1;
    }
    while ( __strex(v15, v13) );
    if ( !v15 )
      json_delete(v6);
  }
  return v10;
}
