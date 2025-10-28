unsigned int __fastcall stratum_handle_method_vbk(int a1, pthread_mutex_t *a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  int command_type; // r0
  int v7; // r5
  unsigned int v8; // r5
  unsigned int v9; // r6
  int v11; // r3
  _DWORD *v12; // r3
  int v13; // r1
  unsigned int *v14; // r3
  unsigned int v15; // r6
  char *v16; // r1
  char *v17; // r1
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  unsigned __int8 *v20; // r0
  char *v21; // r1
  _DWORD *v22; // r0
  int v23; // r0
  unsigned int v24; // r6
  void *v25; // r0
  const char *v26; // r1
  int v27; // r0
  unsigned int v28; // r1
  int v29; // r3
  int v30; // r2
  unsigned int *v31; // r3
  unsigned int v32; // r2
  unsigned int v33; // r2
  char *v34; // r1
  _DWORD *v35; // r0
  int v36; // r0
  char *v37; // r1
  int v38; // r10
  _DWORD *v39; // r0
  int v40; // r0
  char *v41; // r1
  int v42; // r9
  _DWORD *v43; // r0
  _DWORD *v44; // r0
  const char *v45; // r0
  char *v46; // r1
  const char *v47; // r11
  _DWORD *v48; // r0
  _DWORD *v49; // r0
  char *v50; // r0
  char *v51; // r1
  char *v52; // r6
  _DWORD *v53; // r0
  _DWORD *v54; // r0
  char *v55; // r0
  char *v56; // r1
  _DWORD *v57; // r0
  _DWORD *v58; // r0
  char *v59; // r0
  char *v60; // r1
  _DWORD *v61; // r0
  int v62; // r0
  char *v63; // r1
  _DWORD *v64; // r0
  int v65; // r0
  char *v66; // r1
  _DWORD *v67; // r0
  int v68; // r0
  char *v69; // r1
  _DWORD *v70; // r0
  _DWORD *v71; // r0
  char *v72; // r0
  char *v73; // r1
  _DWORD *v74; // r0
  int v75; // r0
  bool v76; // zf
  bool v77; // zf
  int v78; // r3
  _DWORD *v79; // r3
  int v80; // r1
  unsigned int *v81; // r3
  unsigned int v82; // r6
  bool v83; // zf
  bool v84; // zf
  _BOOL4 v85; // r2
  _BOOL4 v86; // r6
  unsigned int v87; // r9
  int v88; // r10
  unsigned int v89; // r1
  unsigned int v90; // r3
  _BYTE *v91; // r9
  double *v92; // r6
  int v93; // r4
  int v94; // r1
  int i; // r9
  char byte_from_hex; // r0
  char *v97; // r3
  int j; // r9
  char v99; // r0
  char *v100; // r3
  void *nusers; // r0
  void *lock; // r0
  int *v103; // r6
  pthread_mutex_t *v104; // r12
  int v105; // r0
  int v106; // r1
  unsigned int v107; // r2
  int v108; // r3
  int v109; // r1
  int v110; // r2
  unsigned int v111; // r3
  int v112; // r0
  int v113; // r1
  char *v114; // [sp+14h] [bp-11B8h]
  char *v115; // [sp+18h] [bp-11B4h]
  int v116; // [sp+1Ch] [bp-11B0h]
  unsigned int v117; // [sp+1Ch] [bp-11B0h]
  int v118; // [sp+20h] [bp-11ACh]
  __int64 v119; // [sp+20h] [bp-11ACh]
  char *v120; // [sp+28h] [bp-11A4h]
  int v121; // [sp+2Ch] [bp-11A0h]
  char *v122; // [sp+30h] [bp-119Ch]
  int v123; // [sp+34h] [bp-1198h]
  unsigned int v124; // [sp+34h] [bp-1198h]
  __int16 v125; // [sp+38h] [bp-1194h]
  int v126; // [sp+3Ch] [bp-1190h]
  _DWORD v127[2]; // [sp+40h] [bp-118Ch] BYREF
  char v128; // [sp+48h] [bp-1184h]
  _DWORD v129[2]; // [sp+4Ch] [bp-1180h] BYREF
  char v130; // [sp+54h] [bp-1178h]
  _DWORD v131[3]; // [sp+58h] [bp-1174h] BYREF
  _DWORD v132[4]; // [sp+64h] [bp-1168h] BYREF
  _DWORD v133[6]; // [sp+74h] [bp-1158h] BYREF
  int v134; // [sp+8Ch] [bp-1140h] BYREF
  _BYTE v135[14]; // [sp+90h] [bp-113Ch]
  int v136; // [sp+9Eh] [bp-112Eh]
  int v137; // [sp+A2h] [bp-112Ah]
  char v138; // [sp+A6h] [bp-1126h]
  int v139; // [sp+A7h] [bp-1125h]
  int v140; // [sp+ABh] [bp-1121h]
  char v141; // [sp+AFh] [bp-111Dh]
  int v142; // [sp+B0h] [bp-111Ch]
  int v143; // [sp+B4h] [bp-1118h]
  int v144; // [sp+B8h] [bp-1114h]
  int v145; // [sp+BCh] [bp-1110h]
  char v146; // [sp+C0h] [bp-110Ch]
  char v147; // [sp+C1h] [bp-110Bh]
  char v148; // [sp+C2h] [bp-110Ah]
  char v149; // [sp+C3h] [bp-1109h]
  char v150; // [sp+C4h] [bp-1108h]
  char v151; // [sp+C5h] [bp-1107h]
  char v152; // [sp+C6h] [bp-1106h]
  char v153; // [sp+C7h] [bp-1105h]
  int v154; // [sp+C8h] [bp-1104h]
  _DWORD v155[23]; // [sp+CCh] [bp-1100h] BYREF
  char v156[160]; // [sp+128h] [bp-10A4h] BYREF
  char s[4100]; // [sp+1C8h] [bp-1004h] BYREF

  v4 = json_loads(a3, 0, (char *)v155);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    LOWORD(v11) = 7656;
    HIWORD(v11) = (unsigned int)" passed to valid_ascii" >> 16;
    logfmt_raw(s, 0x1000u, 0, v11, v155[0], v156);
    V_UNLOCK();
    LOWORD(v12) = -14512;
    HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v13) = 15452;
    HIWORD(v13) = (unsigned int)"invalid UTXO root parameter" >> 16;
    zlog(*v12, v13, 157, "stratum_handle_method_vbk", 25, 314, 100, s);
    return 0;
  }
  command_type = get_command_type(v4);
  v7 = command_type;
  if ( command_type == 7 )
  {
    LOWORD(v34) = 11720;
    HIWORD(v34) = (unsigned int)"parse_extranonce_dash" >> 16;
    v35 = (_DWORD *)json_object_get(v5, v34);
    v36 = json_object_get(v35, "data");
    LOWORD(v37) = 16528;
    v38 = v36;
    HIWORD(v37) = (unsigned int)"oot/tmp/release/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c" >> 16;
    v39 = (_DWORD *)json_object_get(v5, v37);
    v40 = json_object_get(v39, "data");
    LOWORD(v41) = 16544;
    v42 = v40;
    HIWORD(v41) = (unsigned int)"build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c" >> 16;
    v43 = (_DWORD *)json_object_get(v5, v41);
    v44 = (_DWORD *)json_object_get(v43, "data");
    v45 = (const char *)json_string_value(v44);
    LOWORD(v46) = 16564;
    v47 = v45;
    HIWORD(v46) = (unsigned int)"n_master/frontend/frontend_hns/frontend_hns.c" >> 16;
    v48 = (_DWORD *)json_object_get(v5, v46);
    v49 = (_DWORD *)json_object_get(v48, "data");
    v50 = (char *)json_string_value(v49);
    LOWORD(v51) = 16592;
    v122 = v50;
    HIWORD(v51) = (unsigned int)"ns/frontend_hns.c" >> 16;
    v52 = v50;
    v53 = (_DWORD *)json_object_get(v5, v51);
    v54 = (_DWORD *)json_object_get(v53, "data");
    v55 = (char *)json_string_value(v54);
    LOWORD(v56) = 16708;
    v114 = v55;
    HIWORD(v56) = (unsigned int)"nce: %08x target_diff: %d" >> 16;
    v57 = (_DWORD *)json_object_get(v5, v56);
    v58 = (_DWORD *)json_object_get(v57, "data");
    v59 = (char *)json_string_value(v58);
    LOWORD(v60) = 16620;
    v115 = v59;
    HIWORD(v60) = (unsigned int)"\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": \"%d\", \"method\": \"mining.submit\"}" >> 16;
    v61 = (_DWORD *)json_object_get(v5, v60);
    v62 = json_object_get(v61, "data");
    LOWORD(v63) = 16632;
    v116 = v62;
    HIWORD(v63) = (unsigned int)"s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": \"%d\", \"method\": \"mining.submit\"}" >> 16;
    v64 = (_DWORD *)json_object_get(v5, v63);
    v65 = json_object_get(v64, "data");
    LOWORD(v66) = 11864;
    v118 = v65;
    HIWORD(v66) = (unsigned int)"dminer-origin_master/frontend/frontend_dash/frontend_dash.c" >> 16;
    v67 = (_DWORD *)json_object_get(v5, v66);
    v68 = json_object_get(v67, "data");
    LOWORD(v69) = 16644;
    v121 = v68;
    HIWORD(v69) = (unsigned int)"s\", \"%s\", \"%s\"], \"id\": \"%d\", \"method\": \"mining.submit\"}" >> 16;
    v70 = (_DWORD *)json_object_get(v5, v69);
    v71 = (_DWORD *)json_object_get(v70, "data");
    v72 = (char *)json_string_value(v71);
    LOWORD(v73) = 16660;
    v120 = v72;
    HIWORD(v73) = (unsigned int)" \"id\": \"%d\", \"method\": \"mining.submit\"}" >> 16;
    v74 = (_DWORD *)json_object_get(v5, v73);
    v75 = json_object_get(v74, "data");
    v76 = v42 == 0;
    if ( v42 )
      v76 = v38 == 0;
    if ( v76 )
      goto LABEL_31;
    v77 = v52 == 0;
    if ( v52 )
      v77 = v47 == 0;
    if ( v77 )
      goto LABEL_31;
    v83 = v115 == 0;
    if ( v115 )
      v83 = v114 == 0;
    if ( v83 )
      goto LABEL_31;
    v84 = v118 == 0;
    if ( v118 )
      v84 = v116 == 0;
    if ( v84 )
      goto LABEL_31;
    v85 = v120 == 0;
    if ( !v121 )
      v85 = 1;
    v86 = !v75 || v85;
    if ( v86
      || (v123 = v75, strlen(v47) <= 0x2F)
      || strlen(v122) <= 0x2F
      || strlen(v114) <= 0x2F
      || strlen(v115) <= 0x1F
      || strlen(v120) <= 0x2F )
    {
LABEL_31:
      V_LOCK();
      LOWORD(v78) = 16680;
      HIWORD(v78) = (unsigned int)"\": \"mining.submit\"}" >> 16;
      logfmt_raw(s, 0x1000u, 0, v78, "stratum_handle_method_vbk");
      V_UNLOCK();
      LOWORD(v79) = -14512;
      HIWORD(v79) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v80) = 15452;
      HIWORD(v80) = (unsigned int)"invalid UTXO root parameter" >> 16;
      zlog(*v79, v80, 157, "stratum_handle_method_vbk", 25, 351, 100, s);
      if ( *((_DWORD *)v5 + 1) == -1 )
        goto LABEL_35;
      v81 = (unsigned int *)v5 + 1;
      __dmb(0xBu);
      do
      {
        v82 = __ldrex(v81);
        v9 = v82 - 1;
      }
      while ( __strex(v9, v81) );
      if ( v9 )
      {
LABEL_35:
        v16 = &a2[86].__size[12];
        goto LABEL_36;
      }
      v8 = 0;
      goto LABEL_11;
    }
    v126 = v123;
    v124 = json_integer_value(v38);
    v125 = json_integer_value(v42);
    v87 = json_integer_value(v116);
    v88 = json_integer_value(v118);
    v117 = json_integer_value(v121);
    v119 = json_integer_value(v126);
    v89 = HIWORD(v87);
    HIBYTE(v134) = v87;
    v135[1] = v125;
    LOBYTE(v134) = HIBYTE(v87);
    v90 = v87 >> 8;
    v91 = v131;
    v135[0] = HIBYTE(v125);
    v92 = v5;
    v93 = 24;
    BYTE1(v134) = v89;
    BYTE2(v134) = v90;
    do
    {
      v94 = v93;
      v93 += 2;
      *v91++ = extract_byte_from_hex(v47, v94);
    }
    while ( v93 != 48 );
    v5 = v92;
    v9 = 0;
    for ( i = 15; i != 24; ++i )
    {
      byte_from_hex = extract_byte_from_hex(v122, 2 * i);
      v97 = (char *)v127 + i;
      *(v97 - 15) = byte_from_hex;
    }
    for ( j = 15; j != 24; ++j )
    {
      v99 = extract_byte_from_hex(v114, 2 * j);
      v100 = (char *)v129 + j;
      *(v100 - 15) = v99;
    }
    hex2bin((int)v132, (unsigned __int8 *)v115, 16);
    *(_DWORD *)&v135[2] = v131[0];
    *(_DWORD *)&v135[6] = v131[1];
    *(_DWORD *)&v135[10] = v131[2];
    v136 = v127[0];
    v137 = v127[1];
    v138 = v128;
    v139 = v129[0];
    v140 = v129[1];
    v141 = v130;
    v149 = v88;
    v142 = v132[0];
    v143 = v132[1];
    v144 = v132[2];
    v145 = v132[3];
    v148 = BYTE1(v88);
    v146 = HIBYTE(v88);
    v150 = HIBYTE(v117);
    v147 = BYTE2(v88);
    v154 = 0;
    v153 = v117;
    v151 = BYTE2(v117);
    v152 = BYTE1(v117);
    hex2bin((int)v133, (unsigned __int8 *)v120, 24);
    if ( a2 != (pthread_mutex_t *)-448 )
    {
      pthread_mutex_lock(a2 + 73);
      nusers = (void *)a2[66].__nusers;
      if ( nusers )
      {
        free(nusers);
        a2[66].__nusers = 0;
      }
      lock = (void *)a2[67].__lock;
      if ( lock )
      {
        free(lock);
        a2[67].__lock = 0;
      }
      v103 = &v134;
      a2[70].__count = v124;
      sprintf(s, "%d", v124);
      a2[66].__nusers = (unsigned int)_strdup(s);
      v104 = a2 + 19;
      a2[70].__owner = v88;
      *((_QWORD *)&a2[70].__align + 2) = v119;
      do
      {
        v104 = (pthread_mutex_t *)((char *)v104 + 16);
        v105 = *v103;
        v106 = v103[1];
        v107 = v103[2];
        v108 = v103[3];
        v103 += 4;
        v104[-1].__owner = v105;
        v104[-1].__kind = v106;
        v104[-1].__nusers = v107;
        v104[-1].__spins = v108;
      }
      while ( v103 != v155 );
      v9 = 1;
      v109 = v133[1];
      v110 = v133[2];
      v111 = v133[3];
      a2[61].__nusers = v133[0];
      a2[61].__spins = v109;
      v112 = v133[4];
      v113 = v133[5];
      a2[62].__count = v111;
      a2[62].__lock = v110;
      a2[62].__owner = v112;
      a2[62].__kind = v113;
      *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
      *(double *)&a2[82].__lock = (double)v117;
      *((double *)&a2[65].__align + 2) = (double)v117;
      pthread_mutex_unlock(a2 + 73);
    }
  }
  else
  {
    if ( command_type != 8 )
    {
      v8 = command_type - 7;
      if ( *((_DWORD *)v5 + 1) == -1 )
        return 0;
      v14 = (unsigned int *)v5 + 1;
      __dmb(0xBu);
      do
      {
        v15 = __ldrex(v14);
        v9 = v15 - 1;
      }
      while ( __strex(v9, v14) );
      if ( v9 )
        return 0;
LABEL_11:
      json_delete(v5);
      if ( v8 <= 1 )
        goto LABEL_12;
      return v9;
    }
    LOWORD(v17) = 16704;
    HIWORD(v17) = (unsigned int)"t nonce: %08x target_diff: %d" >> 16;
    v18 = (_DWORD *)json_object_get(v5, v17);
    v19 = (_DWORD *)json_object_get(v18, "data");
    v20 = (unsigned __int8 *)json_string_value(v19);
    hex2bin((int)&v134, v20, 16);
    LOWORD(v21) = 11720;
    HIWORD(v21) = (unsigned int)"parse_extranonce_dash" >> 16;
    v22 = (_DWORD *)json_object_get(v5, v21);
    v23 = json_object_get(v22, "data");
    v24 = json_integer_value(v23);
    if ( a2 == (pthread_mutex_t *)-448 )
    {
      v9 = 0;
    }
    else
    {
      pthread_mutex_lock(a2 + 73);
      v25 = (void *)a2[66].__nusers;
      a2[70].__count = v24;
      if ( v25 )
        free(v25);
      LOWORD(v26) = -7616;
      HIWORD(v26) = (unsigned int)"d_time" >> 16;
      sprintf(s, v26, v24);
      v9 = 1;
      a2[66].__nusers = (unsigned int)_strdup(s);
      v27 = v134;
      v28 = *(_DWORD *)v135;
      v29 = *(_DWORD *)&v135[8];
      a2[25].__owner = *(_DWORD *)&v135[4];
      v30 = a2->__lock;
      a2[25].__kind = v29;
      a2[25].__lock = v27;
      a2[25].__count = v28;
      *((_QWORD *)&a2[18].__align + 2) = v30;
      pthread_mutex_unlock(a2 + 73);
    }
  }
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v8 = v7 - 7;
    v31 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v32 = __ldrex(v31);
      v33 = v32 - 1;
    }
    while ( __strex(v33, v31) );
    if ( !v33 )
      goto LABEL_11;
  }
LABEL_12:
  v16 = &a2[86].__size[12];
  if ( v9 )
  {
    pool_tset((int)a2, v16, 1);
    return v9;
  }
LABEL_36:
  pool_tclear((int)a2, v16, 0);
  return 0;
}
