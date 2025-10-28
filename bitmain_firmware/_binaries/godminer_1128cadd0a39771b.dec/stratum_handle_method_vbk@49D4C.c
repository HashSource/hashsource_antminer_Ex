unsigned int __fastcall stratum_handle_method_vbk(int a1, int *a2, int a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int command_type; // r0
  int v7; // r5
  unsigned int v8; // r5
  unsigned int v9; // r6
  int v11; // r0
  unsigned int *v12; // r3
  unsigned int v13; // r6
  _BYTE *v14; // r1
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  unsigned __int8 *v17; // r0
  _DWORD *v18; // r0
  int v19; // r0
  int v20; // r6
  void *v21; // r0
  int v22; // r0
  int v23; // r1
  int v24; // r3
  int v25; // r2
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  _DWORD *v29; // r0
  int v30; // r10
  _DWORD *v31; // r0
  int v32; // r9
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  const char *v35; // r11
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  _DWORD *v41; // r0
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  _DWORD *v44; // r0
  _DWORD *v45; // r0
  _DWORD *v46; // r0
  _DWORD *v47; // r0
  size_t v48; // r0
  bool v49; // zf
  bool v50; // zf
  int v51; // r0
  unsigned int *v52; // r3
  unsigned int v53; // r6
  bool v54; // zf
  bool v55; // zf
  _BOOL4 v56; // r2
  _BOOL4 v57; // r6
  unsigned int v58; // r9
  int v59; // r10
  unsigned int v60; // r1
  unsigned int v61; // r3
  _BYTE *v62; // r9
  _DWORD *v63; // r6
  int v64; // r4
  int v65; // r1
  int i; // r9
  char byte_from_hex; // r0
  char *v68; // r3
  int j; // r9
  char v70; // r0
  char *v71; // r3
  void *v72; // r0
  void *v73; // r0
  char *v74; // r6
  int *v75; // r12
  int v76; // r0
  int v77; // r1
  int v78; // r2
  int v79; // r3
  int v80; // r1
  int v81; // r2
  int v82; // r3
  int v83; // r0
  int v84; // r1
  char *v85; // [sp+14h] [bp-11B8h]
  char *v86; // [sp+18h] [bp-11B4h]
  int v87; // [sp+1Ch] [bp-11B0h]
  unsigned int v88; // [sp+1Ch] [bp-11B0h]
  int v89; // [sp+20h] [bp-11ACh]
  __int64 v90; // [sp+20h] [bp-11ACh]
  char *v91; // [sp+28h] [bp-11A4h]
  int v92; // [sp+2Ch] [bp-11A0h]
  char *v93; // [sp+30h] [bp-119Ch]
  size_t v94; // [sp+34h] [bp-1198h]
  int v95; // [sp+34h] [bp-1198h]
  __int16 v96; // [sp+38h] [bp-1194h]
  int v97; // [sp+3Ch] [bp-1190h]
  _DWORD v98[2]; // [sp+40h] [bp-118Ch] BYREF
  char v99; // [sp+48h] [bp-1184h]
  _DWORD v100[2]; // [sp+4Ch] [bp-1180h] BYREF
  char v101; // [sp+54h] [bp-1178h]
  _DWORD v102[3]; // [sp+58h] [bp-1174h] BYREF
  _DWORD v103[4]; // [sp+64h] [bp-1168h] BYREF
  _DWORD v104[6]; // [sp+74h] [bp-1158h] BYREF
  int v105; // [sp+8Ch] [bp-1140h] BYREF
  _BYTE v106[14]; // [sp+90h] [bp-113Ch]
  int v107; // [sp+9Eh] [bp-112Eh]
  int v108; // [sp+A2h] [bp-112Ah]
  char v109; // [sp+A6h] [bp-1126h]
  int v110; // [sp+A7h] [bp-1125h]
  int v111; // [sp+ABh] [bp-1121h]
  char v112; // [sp+AFh] [bp-111Dh]
  int v113; // [sp+B0h] [bp-111Ch]
  int v114; // [sp+B4h] [bp-1118h]
  int v115; // [sp+B8h] [bp-1114h]
  int v116; // [sp+BCh] [bp-1110h]
  char v117; // [sp+C0h] [bp-110Ch]
  char v118; // [sp+C1h] [bp-110Bh]
  char v119; // [sp+C2h] [bp-110Ah]
  char v120; // [sp+C3h] [bp-1109h]
  char v121; // [sp+C4h] [bp-1108h]
  char v122; // [sp+C5h] [bp-1107h]
  char v123; // [sp+C6h] [bp-1106h]
  char v124; // [sp+C7h] [bp-1105h]
  int v125; // [sp+C8h] [bp-1104h]
  char v126[92]; // [sp+CCh] [bp-1100h] BYREF
  char s[4100]; // [sp+1C8h] [bp-1004h] BYREF

  v4 = (_DWORD *)json_loads(a3, 0, v126);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_handle_method_vbk",
      25,
      314,
      100,
      s);
    return 0;
  }
  command_type = get_command_type(v4);
  v7 = command_type;
  if ( command_type == 7 )
  {
    v29 = (_DWORD *)json_object_get(v5, "job_id");
    v30 = json_object_get(v29, "data");
    v31 = (_DWORD *)json_object_get(v5, "block_version");
    v32 = json_object_get(v31, "data");
    v33 = (_DWORD *)json_object_get(v5, "previous_block_hash");
    v34 = (_DWORD *)json_object_get(v33, "data");
    v35 = (const char *)json_string_value(v34);
    v36 = (_DWORD *)json_object_get(v5, "second_previous_block_hash");
    v37 = (_DWORD *)json_object_get(v36, "data");
    v93 = (char *)json_string_value(v37);
    v38 = (_DWORD *)json_object_get(v5, "third_previous_block_hash");
    v39 = (_DWORD *)json_object_get(v38, "data");
    v85 = (char *)json_string_value(v39);
    v40 = (_DWORD *)json_object_get(v5, "merkle_root");
    v41 = (_DWORD *)json_object_get(v40, "data");
    v86 = (char *)json_string_value(v41);
    v42 = (_DWORD *)json_object_get(v5, "block_index");
    v87 = json_object_get(v42, "data");
    v43 = (_DWORD *)json_object_get(v5, "timestamp");
    v89 = json_object_get(v43, "data");
    v44 = (_DWORD *)json_object_get(v5, "difficulty");
    v92 = json_object_get(v44, "data");
    v45 = (_DWORD *)json_object_get(v5, "mining_target");
    v46 = (_DWORD *)json_object_get(v45, "data");
    v91 = (char *)json_string_value(v46);
    v47 = (_DWORD *)json_object_get(v5, "extra_nonce_start");
    v48 = json_object_get(v47, "data");
    v49 = v32 == 0;
    if ( v32 )
      v49 = v30 == 0;
    if ( v49 )
      goto LABEL_31;
    v50 = v93 == 0;
    if ( v93 )
      v50 = v35 == 0;
    if ( v50 )
      goto LABEL_31;
    v54 = v86 == 0;
    if ( v86 )
      v54 = v85 == 0;
    if ( v54 )
      goto LABEL_31;
    v55 = v89 == 0;
    if ( v89 )
      v55 = v87 == 0;
    if ( v55 )
      goto LABEL_31;
    v56 = v91 == 0;
    if ( !v92 )
      v56 = 1;
    v57 = !v48 || v56;
    if ( v57
      || (v94 = v48, v48 = strlen(v35), v48 <= 0x2F)
      || (v48 = strlen(v93), v48 <= 0x2F)
      || (v48 = strlen(v85), v48 <= 0x2F)
      || (v48 = strlen(v86), v48 <= 0x1F)
      || (v48 = strlen(v91), v48 <= 0x2F) )
    {
LABEL_31:
      V_LOCK(v48);
      v51 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v51);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_handle_method_vbk",
        25,
        351,
        100,
        s);
      if ( v5[1] == -1 )
        goto LABEL_35;
      v52 = v5 + 1;
      __dmb(0xBu);
      do
      {
        v53 = __ldrex(v52);
        v9 = v53 - 1;
      }
      while ( __strex(v9, v52) );
      if ( v9 )
      {
LABEL_35:
        v14 = a2 + 521;
        goto LABEL_36;
      }
      v8 = 0;
      goto LABEL_11;
    }
    v97 = v94;
    v95 = json_integer_value(v30);
    v96 = json_integer_value(v32);
    v58 = json_integer_value(v87);
    v59 = json_integer_value(v89);
    v88 = json_integer_value(v92);
    v90 = json_integer_value(v97);
    v60 = HIWORD(v58);
    HIBYTE(v105) = v58;
    v106[1] = v96;
    LOBYTE(v105) = HIBYTE(v58);
    v61 = v58 >> 8;
    v62 = v102;
    v106[0] = HIBYTE(v96);
    v63 = v5;
    v64 = 24;
    BYTE1(v105) = v60;
    BYTE2(v105) = v61;
    do
    {
      v65 = v64;
      v64 += 2;
      *v62++ = extract_byte_from_hex(v35, v65);
    }
    while ( v64 != 48 );
    v5 = v63;
    v9 = 0;
    for ( i = 15; i != 24; ++i )
    {
      byte_from_hex = extract_byte_from_hex(v93, 2 * i);
      v68 = (char *)v98 + i;
      *(v68 - 15) = byte_from_hex;
    }
    for ( j = 15; j != 24; ++j )
    {
      v70 = extract_byte_from_hex(v85, 2 * j);
      v71 = (char *)v100 + j;
      *(v71 - 15) = v70;
    }
    hex2bin((int)v103, (unsigned __int8 *)v86, 16);
    *(_DWORD *)&v106[2] = v102[0];
    *(_DWORD *)&v106[6] = v102[1];
    *(_DWORD *)&v106[10] = v102[2];
    v107 = v98[0];
    v108 = v98[1];
    v109 = v99;
    v110 = v100[0];
    v111 = v100[1];
    v112 = v101;
    v120 = v59;
    v113 = v103[0];
    v114 = v103[1];
    v115 = v103[2];
    v116 = v103[3];
    v119 = BYTE1(v59);
    v117 = HIBYTE(v59);
    v121 = HIBYTE(v88);
    v118 = BYTE2(v59);
    v125 = 0;
    v124 = v88;
    v122 = BYTE2(v88);
    v123 = BYTE1(v88);
    hex2bin((int)v104, (unsigned __int8 *)v91, 24);
    if ( a2 != (int *)-448 )
    {
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
      v72 = (void *)a2[400];
      if ( v72 )
      {
        free(v72);
        a2[400] = 0;
      }
      v73 = (void *)a2[402];
      if ( v73 )
      {
        free(v73);
        a2[402] = 0;
      }
      v74 = (char *)&v105;
      a2[423] = v95;
      sprintf(s, "%d", v95);
      a2[400] = (int)_strdup(s);
      v75 = a2 + 114;
      a2[424] = v59;
      *((_QWORD *)a2 + 213) = v90;
      do
      {
        v75 += 4;
        v76 = *(_DWORD *)v74;
        v77 = *((_DWORD *)v74 + 1);
        v78 = *((_DWORD *)v74 + 2);
        v79 = *((_DWORD *)v74 + 3);
        v74 += 16;
        *(v75 - 4) = v76;
        *(v75 - 3) = v77;
        *(v75 - 2) = v78;
        *(v75 - 1) = v79;
      }
      while ( v74 != v126 );
      v9 = 1;
      v80 = v104[1];
      v81 = v104[2];
      v82 = v104[3];
      a2[370] = v104[0];
      a2[371] = v80;
      v83 = v104[4];
      v84 = v104[5];
      a2[373] = v82;
      a2[372] = v81;
      a2[374] = v83;
      a2[375] = v84;
      *((_QWORD *)a2 + 56) = *a2;
      *((double *)a2 + 247) = (double)v88;
      *((double *)a2 + 197) = (double)v88;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
    }
  }
  else
  {
    if ( command_type != 8 )
    {
      v8 = command_type - 7;
      if ( v5[1] == -1 )
        return 0;
      v12 = v5 + 1;
      __dmb(0xBu);
      do
      {
        v13 = __ldrex(v12);
        v9 = v13 - 1;
      }
      while ( __strex(v9, v12) );
      if ( v9 )
        return 0;
LABEL_11:
      json_delete(v5);
      if ( v8 <= 1 )
        goto LABEL_12;
      return v9;
    }
    v15 = (_DWORD *)json_object_get(v5, "new_merkle_root");
    v16 = (_DWORD *)json_object_get(v15, "data");
    v17 = (unsigned __int8 *)json_string_value(v16);
    hex2bin((int)&v105, v17, 16);
    v18 = (_DWORD *)json_object_get(v5, "job_id");
    v19 = json_object_get(v18, "data");
    v20 = json_integer_value(v19);
    if ( a2 == (int *)-448 )
    {
      v9 = 0;
    }
    else
    {
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
      v21 = (void *)a2[400];
      a2[423] = v20;
      if ( v21 )
        free(v21);
      sprintf(s, "%d", v20);
      v9 = 1;
      a2[400] = (int)_strdup(s);
      v22 = v105;
      v23 = *(_DWORD *)v106;
      v24 = *(_DWORD *)&v106[8];
      a2[152] = *(_DWORD *)&v106[4];
      v25 = *a2;
      a2[153] = v24;
      a2[150] = v22;
      a2[151] = v23;
      *((_QWORD *)a2 + 56) = v25;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
    }
  }
  if ( v5[1] != -1 )
  {
    v8 = v7 - 7;
    v26 = v5 + 1;
    __dmb(0xBu);
    do
    {
      v27 = __ldrex(v26);
      v28 = v27 - 1;
    }
    while ( __strex(v28, v26) );
    if ( !v28 )
      goto LABEL_11;
  }
LABEL_12:
  v14 = a2 + 521;
  if ( v9 )
  {
    pool_tset((int)a2, v14, 1);
    return v9;
  }
LABEL_36:
  pool_tclear((int)a2, v14, 0);
  return 0;
}
