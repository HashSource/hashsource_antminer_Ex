int __fastcall sub_27BBC(int a1, const char **a2)
{
  int v3; // r5
  int all_created_runtime; // r8
  int v5; // r0
  int v6; // r6
  void *v7; // r0
  double v8; // d0
  int v9; // r4
  int v10; // r3
  char *status_from_monitor; // r0
  double v12; // d10
  __int64 v13; // r6
  double v14; // d12
  double v15; // d11
  double v16; // d9
  __int64 v17; // r0
  int v18; // r0
  __int64 v19; // r0
  double v20; // r0
  int v21; // r0
  __int64 v22; // r0
  double v23; // r0
  double v24; // d0
  int v25; // r0
  float v26; // s22
  __int64 v27; // r0
  double v28; // r0
  int v29; // r0
  int v30; // r0
  double v31; // d0
  double v32; // d7
  __int64 v33; // r0
  double v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r5
  int *v41; // r8
  int *v42; // r4
  int v43; // t1
  int v44; // r0
  double v45; // r0
  __int64 v46; // r4
  double v47; // d8
  int v48; // r2
  double v49; // r0
  __int64 v50; // r0
  int v51; // r0
  int v52; // r0
  int appended; // r0
  char *v54; // r4
  int v55; // r6
  int v56; // r0
  int v57; // r0
  int v58; // r0
  double v59; // d8
  double v60; // d6
  __int64 v61; // r0
  double v62; // r0
  int v63; // r0
  __int64 v64; // r0
  double v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r7
  int v71; // r5
  int *v72; // r11
  int v73; // r8
  int v74; // t1
  int v75; // r0
  int v76; // r8
  int *v77; // r10
  int *v78; // r11
  int v79; // t1
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r5
  int *v84; // r10
  int v85; // r11
  int v86; // t1
  int v87; // r0
  int *v88; // r10
  int *v89; // r11
  int v90; // t1
  int v91; // r0
  int v92; // r0
  int v93; // r5
  int v94; // r11
  int v95; // r10
  int v96; // t1
  int v97; // r0
  int v98; // r7
  int v99; // r11
  int v100; // t1
  int v101; // r0
  int v102; // r0
  int v103; // r0
  int v104; // r0
  int v105; // r0
  int v106; // r2
  int eeprom_chip_sn; // r0
  int v108; // r0
  int v111; // r0
  int v112; // r2
  char *v113; // r8
  size_t v114; // r7
  size_t v115; // r2
  bool v116; // cf
  int v117; // r3
  int v118; // t1
  bool v119; // zf
  int v120; // r0
  int v121; // r0
  char *v122; // r10
  _DWORD *v123; // r4
  char *v124; // r11
  int v125; // t1
  int v126; // r2
  int v127; // r0
  int v128; // r0
  int v129; // [sp+10h] [bp-1074h]
  char *v130; // [sp+1Ch] [bp-1068h]
  int v131; // [sp+1Ch] [bp-1068h]
  int v132; // [sp+20h] [bp-1064h]
  int v133; // [sp+24h] [bp-1060h]
  char *v135; // [sp+34h] [bp-1050h]
  char *ptr; // [sp+38h] [bp-104Ch]
  int v137; // [sp+3Ch] [bp-1048h]
  int v138; // [sp+44h] [bp-1040h] BYREF
  double v139; // [sp+48h] [bp-103Ch] BYREF
  _DWORD v140[2]; // [sp+50h] [bp-1034h] BYREF
  _DWORD v141[2]; // [sp+58h] [bp-102Ch] BYREF
  int *v142; // [sp+60h] [bp-1024h]
  float v143; // [sp+64h] [bp-1020h]
  float v144; // [sp+68h] [bp-101Ch]
  float v145; // [sp+6Ch] [bp-1018h]
  double v146; // [sp+70h] [bp-1014h]
  __int64 v147; // [sp+78h] [bp-100Ch]
  char v148[4100]; // [sp+80h] [bp-1004h] BYREF

  v138 = 0;
  v3 = a1 == 0;
  v140[0] = 0;
  v140[1] = 0;
  all_created_runtime = get_all_created_runtime(&v138);
  v5 = frontend_runtime_instance();
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v5);
    v127 = logfmt_raw((int)v148, 0x1000u);
    V_UNLOCK(v127);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_stats",
      9,
      612,
      100,
      v148);
    return -2147483646;
  }
  v6 = v5;
  sub_23BD4(a1, a2);
  v7 = sub_23790(a1);
  v137 = json_array(v7);
  read_system_status_from_monitor(v141);
  v8 = v146;
  v9 = v141[1];
  status_from_monitor = (char *)format_hashrate_double(*(_DWORD *)(v6 + 84), &v139, v140, v10);
  v12 = v8;
  v13 = v147;
  v14 = v143 * v8;
  v15 = v144 * v8;
  v16 = v145 * v8;
  if ( v138 > 0 )
  {
    v135 = (char *)malloc(208 * v138);
    v122 = v135;
    status_from_monitor = (char *)malloc(4 * v138);
    ptr = status_from_monitor;
    if ( v138 > 0 )
    {
      v131 = v9;
      v123 = (_DWORD *)(all_created_runtime - 4);
      v124 = status_from_monitor;
      do
      {
        v125 = v123[1];
        ++v123;
        status_from_monitor = (char *)read_status_from_monitor(v122, v125);
        v126 = v138;
        v122 += 208;
        *(_DWORD *)&v124[4 * v3++] = *(_DWORD *)(*v123 + 148);
      }
      while ( v126 > v3 );
      v9 = v131;
    }
  }
  else
  {
    ptr = 0;
    v135 = 0;
  }
  v132 = json_object(status_from_monitor);
  if ( byte_165FF8 )
  {
    sub_25FC4();
    v17 = sub_12E9F8(LODWORD(v8), HIDWORD(v8));
  }
  else
  {
    v17 = 0;
  }
  v18 = json_integer(v17, HIDWORD(v17));
  json_object_set_new(v132, "elapsed", v18);
  v19 = sub_12E9F8(COERCE_UNSIGNED_INT64(v14 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v14 * 100.0)));
  v20 = sub_12E6A4(v19, HIDWORD(v19));
  v21 = json_real(LODWORD(v20));
  json_object_set_new(v132, "rate_5s", v21);
  v22 = sub_12E9F8(COERCE_UNSIGNED_INT64(v15 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v15 * 100.0)));
  v23 = sub_12E6A4(v22, HIDWORD(v22));
  v24 = v23 / 100.0;
  v25 = json_real(LODWORD(v23));
  json_object_set_new(v132, "rate_30m", v25);
  get_total_nonce_rate();
  v26 = *(float *)&v24;
  if ( opt_algo == 5 )
    v16 = *(float *)&v24 * v16;
  v27 = sub_12E9F8(COERCE_UNSIGNED_INT64(v16 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v16 * 100.0)));
  v28 = sub_12E6A4(v27, HIDWORD(v27));
  v29 = json_real(LODWORD(v28));
  json_object_set_new(v132, "rate_avg", v29);
  v30 = strcmp(*(const char **)(*(_DWORD *)all_created_runtime + 196), "dash");
  v31 = v139;
  if ( v30 )
  {
    if ( opt_algo == 5 )
    {
      v32 = v26 * v139 * 100.0;
      goto LABEL_14;
    }
  }
  else
  {
    update_rate_ideal();
  }
  v32 = v31 * 100.0;
LABEL_14:
  v33 = sub_12E9F8(LODWORD(v32), HIDWORD(v32));
  v34 = sub_12E6A4(v33, HIDWORD(v33));
  v35 = json_real(LODWORD(v34));
  json_object_set_new(v132, "rate_ideal", v35);
  v36 = json_string(v140);
  json_object_set_new(v132, "rate_unit", v36);
  v37 = json_integer(v138, v138 >> 31);
  json_object_set_new(v132, "chain_num", v37);
  v38 = json_integer(v9, v9 >> 31);
  v39 = json_object_set_new(v132, "fan_num", v38);
  v40 = json_array(v39);
  if ( v9 > 0 )
  {
    v41 = v142;
    v42 = &v142[v9];
    do
    {
      v43 = *v41++;
      v44 = json_integer(v43, v43 >> 31);
      json_array_append_new(v40, v44);
    }
    while ( v42 != v41 );
  }
  LODWORD(v45) = json_object_set_new(v132, "fan", v40);
  v46 = v13 + total_diff1;
  if ( v13 + total_diff1 )
  {
    v47 = sub_12E694(v13, HIDWORD(v13), (int)v13 + (int)total_diff1);
    v49 = sub_12E694(v46, HIDWORD(v46), v48);
    v50 = sub_12E9F8(
            COERCE_UNSIGNED_INT64(v47 / v49 * 100.0 * 10000.0),
            HIDWORD(COERCE_UNSIGNED_INT64(v47 / v49 * 100.0 * 10000.0)));
    v45 = sub_12E6A4(v50, HIDWORD(v50));
  }
  v51 = json_real(LODWORD(v45));
  v52 = json_object_set_new(v132, "hwp_total", v51);
  appended = json_array(v52);
  v133 = appended;
  if ( v138 > 0 )
  {
    v54 = v135;
    v130 = ptr - 4;
    v129 = 0;
    while ( 1 )
    {
      v55 = json_object(appended);
      v56 = *((_DWORD *)v130 + 1);
      v130 += 4;
      v57 = json_integer(v56, v56 >> 31);
      json_object_set_new(v55, "index", v57);
      v58 = json_integer(*((_DWORD *)v54 + 16), *((int *)v54 + 16) >> 31);
      json_object_set_new(v55, "freq_avg", v58);
      v59 = *((float *)v54 + 9);
      v60 = v12 * *((double *)v54 + 6) * 100.0;
      v139 = v12 * *((double *)v54 + 6);
      v61 = sub_12E9F8(LODWORD(v60), HIDWORD(v60));
      v62 = sub_12E6A4(v61, HIDWORD(v61));
      v63 = json_real(LODWORD(v62));
      json_object_set_new(v55, "rate_ideal", v63);
      v64 = sub_12E9F8(COERCE_UNSIGNED_INT64(v59 * v12 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v59 * v12 * 100.0)));
      v65 = sub_12E6A4(v64, HIDWORD(v64));
      v66 = json_real(LODWORD(v65));
      json_object_set_new(v55, "rate_real", v66);
      v67 = json_integer(*((_DWORD *)v54 + 14), *((int *)v54 + 14) >> 31);
      v68 = json_object_set_new(v55, "asic_num", v67);
      if ( *((_DWORD *)v54 + 15) )
      {
        v113 = v148;
        v114 = 0;
        v115 = stpcpy(v148) - (_DWORD)v148;
        while ( 1 )
        {
          v116 = v114++ >= v115;
          if ( v116 )
            break;
          while ( 1 )
          {
            v118 = (unsigned __int8)*v113++;
            v117 = v118;
            v119 = v118 == 111;
            if ( v118 != 111 )
              v119 = v117 == 32;
            if ( v119 )
              break;
            *(v113 - 1) = 120;
            v115 = strlen(v148);
            v116 = v114++ >= v115;
            if ( v116 )
              goto LABEL_61;
          }
        }
LABEL_61:
        v120 = json_string(v148);
        v68 = json_object_set_new(v55, "asic", v120);
      }
      v69 = json_array(v68);
      v70 = *((_DWORD *)v54 + 6);
      v71 = v69;
      if ( v70 > 0 )
      {
        v72 = *(int **)v54;
        v73 = *(_DWORD *)v54 + 4 * v70;
        do
        {
          v74 = *v72++;
          v75 = json_integer(v74, v74 >> 31);
          json_array_append_new(v71, v75);
        }
        while ( (int *)v73 != v72 );
      }
      v76 = *((_DWORD *)v54 + 7);
      if ( v76 > 0 )
      {
        v77 = (int *)*((_DWORD *)v54 + 2);
        v78 = &v77[v76];
        do
        {
          v79 = *v77++;
          v80 = json_integer(v79, v79 >> 31);
          json_array_append_new(v71, v80);
        }
        while ( v78 != v77 );
      }
      v81 = json_object_set_new(v55, "temp_pic", v71);
      v82 = json_array(v81);
      v83 = v82;
      if ( v70 > 0 )
        break;
      if ( v76 > 0 )
        goto LABEL_32;
      v121 = json_object_set_new(v55, "temp_pcb", v82);
      v93 = json_array(v121);
LABEL_40:
      json_object_set_new(v55, "temp_chip", v93);
      v102 = json_integer(*((_DWORD *)v54 + 18), *((_DWORD *)v54 + 19));
      v103 = json_object_set_new(v55, "hw", v102);
      v104 = is_eeprom_loaded(v103);
      if ( v104 )
      {
        v105 = is_eeprom_loaded(v104);
        if ( v105 )
          v106 = json_true(v105);
        else
          v106 = json_false(0);
        json_object_set_new(v55, "eeprom_loaded", v106);
        if ( api_get_eeprom_chip_sn(v129) )
        {
          eeprom_chip_sn = api_get_eeprom_chip_sn(v129);
          v108 = json_string(eeprom_chip_sn);
          json_object_set_new(v55, "sn", v108);
        }
      }
      else
      {
        v111 = is_eeprom_loaded(0);
        if ( v111 )
          v112 = json_true(v111);
        else
          v112 = json_false(0);
        json_object_set_new(v55, "eeprom_loaded", v112);
      }
      appended = json_array_append_new(v133, v55);
      v54 += 208;
      if ( v138 <= ++v129 )
        goto LABEL_47;
    }
    v84 = *(int **)v54;
    v85 = *(_DWORD *)v54 + 4 * v70;
    do
    {
      v86 = *v84++;
      v87 = json_integer(v86, v86 >> 31);
      json_array_append_new(v83, v87);
    }
    while ( (int *)v85 != v84 );
    if ( v76 <= 0 )
    {
      v128 = json_object_set_new(v55, "temp_pcb", v83);
      v93 = json_array(v128);
    }
    else
    {
LABEL_32:
      v88 = (int *)*((_DWORD *)v54 + 2);
      v89 = &v88[v76];
      do
      {
        v90 = *v88++;
        v91 = json_integer(v90, v90 >> 31);
        json_array_append_new(v83, v91);
      }
      while ( v89 != v88 );
      v92 = json_object_set_new(v55, "temp_pcb", v83);
      v93 = json_array(v92);
      if ( v70 <= 0 )
      {
LABEL_38:
        v98 = 0;
        v99 = *((_DWORD *)v54 + 3) - 4;
        do
        {
          v100 = *(_DWORD *)(v99 + 4);
          v99 += 4;
          ++v98;
          v101 = json_integer(v100, v100 >> 31);
          json_array_append_new(v93, v101);
        }
        while ( v98 < v76 );
        goto LABEL_40;
      }
    }
    v94 = 0;
    v95 = *((_DWORD *)v54 + 1) - 4;
    do
    {
      v96 = *(_DWORD *)(v95 + 4);
      v95 += 4;
      ++v94;
      v97 = json_integer(v96, v96 >> 31);
      json_array_append_new(v93, v97);
    }
    while ( v94 < v70 );
    if ( v76 <= 0 )
      goto LABEL_40;
    goto LABEL_38;
  }
LABEL_47:
  json_object_set_new(v132, "chain", v133);
  json_array_append_new(v137, v132);
  json_object_set_new(a1, "STATS", v137);
  if ( v138 > 0 )
  {
    free(ptr);
    free(v135);
  }
  return 0;
}
