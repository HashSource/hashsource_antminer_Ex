int __fastcall sub_2788C(_DWORD *a1, const char **a2)
{
  int v3; // r5
  char *all_created_runtime; // r8
  int v5; // r0
  int v6; // r6
  double v7; // d0
  int v8; // r4
  double v9; // d10
  __int64 v10; // r6
  double v11; // d12
  double v12; // d11
  double v13; // d9
  __int64 v14; // r0
  _DWORD *v15; // r0
  double *v16; // r0
  double v17; // r0
  double v18; // d0
  double *v19; // r0
  float v20; // s22
  double *v21; // r0
  int v22; // r0
  double v23; // d0
  double v24; // d7
  double *v25; // r0
  char *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r5
  int *v30; // r8
  int *v31; // r4
  int v32; // t1
  _DWORD *v33; // r0
  __int64 v34; // r4
  int v35; // r1
  double v36; // d8
  double v37; // r0
  double *v38; // r0
  char *v39; // r4
  _DWORD *v40; // r6
  int v41; // r0
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  double v44; // d8
  double v45; // d6
  double *v46; // r0
  double *v47; // r0
  _DWORD *v48; // r0
  int v49; // r1
  _DWORD *v50; // r0
  int v51; // r7
  _DWORD *v52; // r5
  int *v53; // r11
  int v54; // r8
  int v55; // t1
  _DWORD *v56; // r0
  int v57; // r8
  int *v58; // r10
  int *v59; // r11
  int v60; // t1
  _DWORD *v61; // r0
  _DWORD *v62; // r0
  _DWORD *v63; // r5
  int *v64; // r10
  int v65; // r11
  int v66; // t1
  _DWORD *v67; // r0
  int *v68; // r10
  int *v69; // r11
  int v70; // t1
  _DWORD *v71; // r0
  _DWORD *v72; // r5
  int v73; // r11
  int v74; // r10
  int v75; // t1
  _DWORD *v76; // r0
  int v77; // r7
  int v78; // r11
  int v79; // t1
  _DWORD *v80; // r0
  _DWORD *v81; // r0
  _DWORD *v82; // r2
  char *eeprom_chip_sn; // r0
  char *v84; // r0
  _DWORD *v87; // r2
  char *v88; // r8
  size_t v89; // r7
  size_t v90; // r2
  bool v91; // cf
  int v92; // r3
  int v93; // t1
  bool v94; // zf
  char *v95; // r0
  char *v96; // r10
  char *v97; // r0
  char *v98; // r4
  char *v99; // r11
  int v100; // t1
  int v101; // r2
  int v102; // [sp+10h] [bp-1074h]
  char *v103; // [sp+1Ch] [bp-1068h]
  int v104; // [sp+1Ch] [bp-1068h]
  _DWORD *v105; // [sp+20h] [bp-1064h]
  _DWORD *v106; // [sp+24h] [bp-1060h]
  char *v108; // [sp+34h] [bp-1050h]
  char *ptr; // [sp+38h] [bp-104Ch]
  _DWORD *v110; // [sp+3Ch] [bp-1048h]
  int v111; // [sp+44h] [bp-1040h] BYREF
  double v112; // [sp+48h] [bp-103Ch] BYREF
  _DWORD v113[2]; // [sp+50h] [bp-1034h] BYREF
  _DWORD v114[2]; // [sp+58h] [bp-102Ch] BYREF
  int *v115; // [sp+60h] [bp-1024h]
  float v116; // [sp+64h] [bp-1020h]
  float v117; // [sp+68h] [bp-101Ch]
  float v118; // [sp+6Ch] [bp-1018h]
  double v119; // [sp+70h] [bp-1014h]
  __int64 v120; // [sp+78h] [bp-100Ch]
  char v121[4100]; // [sp+80h] [bp-1004h] BYREF

  v111 = 0;
  v3 = a1 == 0;
  v113[0] = 0;
  v113[1] = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v111);
  v5 = frontend_runtime_instance();
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v121, 0x1000u, 0, "%s: input bad api param", "get_stats");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_stats",
      9,
      608,
      100,
      v121);
    return -2147483646;
  }
  v6 = v5;
  sub_238AC(a1, a2);
  sub_23468(a1);
  v110 = json_array();
  read_system_status_from_monitor((int)v114);
  v7 = v119;
  v8 = v114[1];
  format_hashrate_double(*(const char **)(v6 + 84), &v112, (char *)v113);
  v9 = v7;
  v10 = v120;
  v11 = v116 * v7;
  v12 = v117 * v7;
  v13 = v118 * v7;
  if ( v111 > 0 )
  {
    v108 = (char *)malloc(208 * v111);
    v96 = v108;
    v97 = (char *)malloc(4 * v111);
    ptr = v97;
    if ( v111 > 0 )
    {
      v104 = v8;
      v98 = all_created_runtime - 4;
      v99 = v97;
      do
      {
        v100 = *((_DWORD *)v98 + 1);
        v98 += 4;
        read_status_from_monitor(v96, v100);
        v101 = v111;
        v96 += 208;
        *(_DWORD *)&v99[4 * v3++] = *(_DWORD *)(*(_DWORD *)v98 + 140);
      }
      while ( v101 > v3 );
      v8 = v104;
    }
  }
  else
  {
    ptr = 0;
    v108 = 0;
  }
  v105 = json_object();
  if ( byte_164FE8 )
  {
    sub_25C98();
    v14 = (__int64)v7;
  }
  else
  {
    v14 = 0;
  }
  v15 = json_integer(v14);
  json_object_set_new(v105, "elapsed", v15);
  sub_12D09C((__int64)(v11 * 100.0));
  v16 = json_real();
  json_object_set_new(v105, "rate_5s", v16);
  LODWORD(v17) = sub_12D09C((__int64)(v12 * 100.0));
  v18 = v17 / 100.0;
  v19 = json_real();
  json_object_set_new(v105, "rate_30m", v19);
  get_total_nonce_rate();
  v20 = *(float *)&v18;
  if ( opt_algo == 5 )
    v13 = *(float *)&v18 * v13;
  sub_12D09C((__int64)(v13 * 100.0));
  v21 = json_real();
  json_object_set_new(v105, "rate_avg", v21);
  v22 = strcmp(*(const char **)(*(_DWORD *)all_created_runtime + 188), "dash");
  v23 = v112;
  if ( v22 )
  {
    if ( opt_algo == 5 )
    {
      v24 = v20 * v112 * 100.0;
      goto LABEL_14;
    }
  }
  else
  {
    update_rate_ideal();
  }
  v24 = v23 * 100.0;
LABEL_14:
  sub_12D09C((__int64)v24);
  v25 = json_real();
  json_object_set_new(v105, "rate_ideal", v25);
  v26 = BUFX_strdup((char *)v113);
  json_object_set_new(v105, "rate_unit", v26);
  v27 = json_integer(v111);
  json_object_set_new(v105, "chain_num", v27);
  v28 = json_integer(v8);
  json_object_set_new(v105, "fan_num", v28);
  v29 = json_array();
  if ( v8 > 0 )
  {
    v30 = v115;
    v31 = &v115[v8];
    do
    {
      v32 = *v30++;
      v33 = json_integer(v32);
      json_array_append_new(v29, v33);
    }
    while ( v31 != v30 );
  }
  json_object_set_new(v105, "fan", v29);
  v34 = v10 + total_diff1;
  if ( v10 + total_diff1 )
  {
    LODWORD(v36) = sub_12D08C(v10);
    HIDWORD(v36) = v35;
    LODWORD(v37) = sub_12D08C(v34);
    sub_12D09C((__int64)(v36 / v37 * 100.0 * 10000.0));
  }
  v38 = json_real();
  json_object_set_new(v105, "hwp_total", v38);
  v106 = json_array();
  if ( v111 > 0 )
  {
    v39 = v108;
    v103 = ptr - 4;
    v102 = 0;
    while ( 1 )
    {
      v40 = json_object();
      v41 = *((_DWORD *)v103 + 1);
      v103 += 4;
      v42 = json_integer(v41);
      json_object_set_new(v40, "index", v42);
      v43 = json_integer(*((int *)v39 + 16));
      json_object_set_new(v40, "freq_avg", v43);
      v44 = *((float *)v39 + 9);
      v45 = v9 * *((double *)v39 + 6) * 100.0;
      v112 = v9 * *((double *)v39 + 6);
      sub_12D09C((__int64)v45);
      v46 = json_real();
      json_object_set_new(v40, "rate_ideal", v46);
      sub_12D09C((__int64)(v44 * v9 * 100.0));
      v47 = json_real();
      json_object_set_new(v40, "rate_real", v47);
      v48 = json_integer(*((int *)v39 + 14));
      json_object_set_new(v40, "asic_num", v48);
      v49 = *((_DWORD *)v39 + 15);
      if ( v49 )
      {
        v88 = v121;
        v89 = 0;
        v90 = stpcpy(v121, v49) - (_DWORD)v121;
        while ( 1 )
        {
          v91 = v89++ >= v90;
          if ( v91 )
            break;
          while ( 1 )
          {
            v93 = (unsigned __int8)*v88++;
            v92 = v93;
            v94 = v93 == 111;
            if ( v93 != 111 )
              v94 = v92 == 32;
            if ( v94 )
              break;
            *(v88 - 1) = 120;
            v90 = strlen(v121);
            v91 = v89++ >= v90;
            if ( v91 )
              goto LABEL_61;
          }
        }
LABEL_61:
        v95 = BUFX_strdup(v121);
        json_object_set_new(v40, "asic", v95);
      }
      v50 = json_array();
      v51 = *((_DWORD *)v39 + 6);
      v52 = v50;
      if ( v51 > 0 )
      {
        v53 = *(int **)v39;
        v54 = *(_DWORD *)v39 + 4 * v51;
        do
        {
          v55 = *v53++;
          v56 = json_integer(v55);
          json_array_append_new(v52, v56);
        }
        while ( (int *)v54 != v53 );
      }
      v57 = *((_DWORD *)v39 + 7);
      if ( v57 > 0 )
      {
        v58 = (int *)*((_DWORD *)v39 + 2);
        v59 = &v58[v57];
        do
        {
          v60 = *v58++;
          v61 = json_integer(v60);
          json_array_append_new(v52, v61);
        }
        while ( v59 != v58 );
      }
      json_object_set_new(v40, "temp_pic", v52);
      v62 = json_array();
      v63 = v62;
      if ( v51 > 0 )
        break;
      if ( v57 > 0 )
        goto LABEL_32;
      json_object_set_new(v40, "temp_pcb", v62);
      v72 = json_array();
LABEL_40:
      json_object_set_new(v40, "temp_chip", v72);
      v81 = json_integer(*((_QWORD *)v39 + 9));
      json_object_set_new(v40, "hw", v81);
      if ( is_eeprom_loaded() )
      {
        if ( is_eeprom_loaded() )
          v82 = json_true();
        else
          v82 = json_false();
        json_object_set_new(v40, "eeprom_loaded", v82);
        if ( api_get_eeprom_chip_sn(v102) )
        {
          eeprom_chip_sn = (char *)api_get_eeprom_chip_sn(v102);
          v84 = BUFX_strdup(eeprom_chip_sn);
          json_object_set_new(v40, "sn", v84);
        }
      }
      else
      {
        if ( is_eeprom_loaded() )
          v87 = json_true();
        else
          v87 = json_false();
        json_object_set_new(v40, "eeprom_loaded", v87);
      }
      json_array_append_new(v106, v40);
      v39 += 208;
      if ( v111 <= ++v102 )
        goto LABEL_47;
    }
    v64 = *(int **)v39;
    v65 = *(_DWORD *)v39 + 4 * v51;
    do
    {
      v66 = *v64++;
      v67 = json_integer(v66);
      json_array_append_new(v63, v67);
    }
    while ( (int *)v65 != v64 );
    if ( v57 <= 0 )
    {
      json_object_set_new(v40, "temp_pcb", v63);
      v72 = json_array();
    }
    else
    {
LABEL_32:
      v68 = (int *)*((_DWORD *)v39 + 2);
      v69 = &v68[v57];
      do
      {
        v70 = *v68++;
        v71 = json_integer(v70);
        json_array_append_new(v63, v71);
      }
      while ( v69 != v68 );
      json_object_set_new(v40, "temp_pcb", v63);
      v72 = json_array();
      if ( v51 <= 0 )
      {
LABEL_38:
        v77 = 0;
        v78 = *((_DWORD *)v39 + 3) - 4;
        do
        {
          v79 = *(_DWORD *)(v78 + 4);
          v78 += 4;
          ++v77;
          v80 = json_integer(v79);
          json_array_append_new(v72, v80);
        }
        while ( v77 < v57 );
        goto LABEL_40;
      }
    }
    v73 = 0;
    v74 = *((_DWORD *)v39 + 1) - 4;
    do
    {
      v75 = *(_DWORD *)(v74 + 4);
      v74 += 4;
      ++v73;
      v76 = json_integer(v75);
      json_array_append_new(v72, v76);
    }
    while ( v73 < v51 );
    if ( v57 <= 0 )
      goto LABEL_40;
    goto LABEL_38;
  }
LABEL_47:
  json_object_set_new(v105, "chain", v106);
  json_array_append_new(v110, v105);
  json_object_set_new(a1, "STATS", v110);
  if ( v111 > 0 )
  {
    free(ptr);
    free(v108);
  }
  return 0;
}
