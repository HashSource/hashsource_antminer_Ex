int __fastcall sub_290D4(int a1, const char **a2)
{
  int v3; // r5
  int all_created_runtime; // r8
  int v5; // r0
  int v6; // r2
  int v7; // r6
  void *v8; // r0
  double v9; // d0
  int v10; // r4
  char *status_from_monitor; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  float v15; // s25
  float v16; // s22
  __int64 v17; // r6
  double v18; // d9
  double v19; // d8
  int v20; // r8
  __int64 v21; // r0
  int v22; // r0
  bool v23; // cc
  __int64 v24; // r0
  int v25; // s14
  int v26; // r0
  __int64 v27; // r0
  int v28; // r0
  int v29; // r5
  int v30; // r2
  __int64 v31; // r0
  int v32; // r0
  int v33; // r0
  __int64 v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r5
  int *v42; // r8
  int *v43; // r4
  int v44; // t1
  int v45; // r0
  int v46; // r0
  __int64 v47; // r4
  int v48; // r0
  int v49; // r0
  __int64 v50; // r0
  char *v51; // r6
  const char *v52; // r2
  int v53; // r3
  int v54; // r8
  int v55; // r0
  int v56; // r0
  int v57; // r0
  double v58; // d8
  double v59; // d6
  __int64 v60; // r0
  int v61; // r0
  int v62; // r0
  __int64 v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  __int64 v69; // r4
  int v70; // r7
  int v71; // r10
  int v72; // r0
  int v73; // r10
  int v74; // r0
  int v75; // r0
  int v76; // r7
  int v77; // r10
  int v78; // r11
  int v79; // t1
  int v80; // r0
  int *v81; // r11
  int *v82; // r10
  int v83; // t1
  int v84; // r0
  int v85; // r0
  int v86; // r7
  int v87; // r10
  int v88; // r11
  int v89; // t1
  int v90; // r0
  int v91; // r10
  int v92; // t1
  int v93; // r0
  __int64 v94; // r0
  int v95; // r0
  int v96; // r0
  int v97; // r0
  int v98; // r0
  int v99; // r2
  int eeprom_chip_sn; // r0
  int v101; // r0
  double v103; // d8
  double v104; // r0
  __int64 v105; // r0
  int v106; // r0
  int v107; // r2
  char *v108; // r7
  size_t v109; // r5
  size_t v110; // r2
  bool v111; // cf
  int v112; // r3
  int v113; // t1
  bool v114; // zf
  int v115; // r0
  int v116; // r0
  int v117; // r0
  int v118; // r0
  char *v119; // r10
  _DWORD *v120; // r11
  _DWORD *v121; // r8
  int v122; // t1
  __int64 v123; // r0
  int v124; // r0
  int v125; // r0
  __int64 v126; // r0
  int v127; // r0
  int v128; // [sp+10h] [bp-1084h]
  char *v129; // [sp+18h] [bp-107Ch]
  int v130; // [sp+1Ch] [bp-1078h]
  int v131; // [sp+2Ch] [bp-1068h]
  char *v133; // [sp+34h] [bp-1060h]
  char *ptr; // [sp+38h] [bp-105Ch]
  int v135; // [sp+3Ch] [bp-1058h]
  int v136; // [sp+44h] [bp-1050h] BYREF
  double v137; // [sp+48h] [bp-104Ch] BYREF
  _DWORD v138[2]; // [sp+50h] [bp-1044h] BYREF
  _DWORD v139[2]; // [sp+58h] [bp-103Ch] BYREF
  int *v140; // [sp+60h] [bp-1034h]
  float v141; // [sp+64h] [bp-1030h]
  float v142; // [sp+68h] [bp-102Ch]
  float v143; // [sp+6Ch] [bp-1028h]
  float v144; // [sp+70h] [bp-1024h]
  double v145; // [sp+78h] [bp-101Ch]
  __int64 v146; // [sp+88h] [bp-100Ch]
  char v147[4100]; // [sp+90h] [bp-1004h] BYREF

  v138[0] = 0;
  v3 = a1 == 0;
  v138[1] = 0;
  v136 = 0;
  all_created_runtime = get_all_created_runtime(&v136);
  v5 = frontend_runtime_instance(all_created_runtime);
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v5);
    v127 = logfmt_raw((int)v147, 0x1000u);
    V_UNLOCK(v127);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/api_new.c",
      140,
      "get_stats",
      9,
      753,
      100,
      v147);
    return -2147483646;
  }
  else
  {
    v7 = v5;
    sub_23CB8(a1, a2, v6);
    v8 = sub_23DD4(a1);
    v135 = json_array(v8);
    read_system_status_from_monitor(v139);
    v9 = v145;
    v10 = v139[1];
    status_from_monitor = (char *)format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), &v137, v138);
    v14 = v136;
    v15 = v141;
    v16 = v142;
    v17 = v146;
    v18 = v143 * v9;
    v19 = v144 * v9;
    if ( v136 > 0 )
    {
      v133 = (char *)malloc(216 * v136);
      v119 = v133;
      status_from_monitor = (char *)malloc(4 * v136);
      v14 = v136;
      v120 = status_from_monitor;
      ptr = status_from_monitor;
      if ( v136 > 0 )
      {
        v121 = (_DWORD *)(all_created_runtime - 4);
        do
        {
          v122 = v121[1];
          ++v121;
          status_from_monitor = (char *)read_status_from_monitor(v119, v122);
          v14 = v136;
          v119 += 216;
          v13 = *(_DWORD *)(*v121 + 224);
          v120[v3++] = v13;
        }
        while ( v14 > v3 );
      }
    }
    else
    {
      ptr = 0;
      v133 = 0;
    }
    v20 = json_object(status_from_monitor, v12, v13, v14);
    v131 = v20;
    get_total_nonce_rate();
    get_total_accept_rate();
    get_miner_elapsed_time();
    v21 = sub_12E970(LODWORD(v9), HIDWORD(v9));
    v22 = json_integer(v21, HIDWORD(v21));
    json_object_set_new(v20, "elapsed", v22);
    v23 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v23 = (unsigned int)(opt_algo - 6) > 1;
    if ( v23 )
    {
      v123 = sub_12E970(COERCE_UNSIGNED_INT64(v15 * v9 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v15 * v9 * 100.0)));
      v124 = sub_12E61C(v123, HIDWORD(v123));
      v125 = json_real(v124);
      v29 = v20;
      json_object_set_new(v20, "rate_5s", v125);
      v126 = sub_12E970(COERCE_UNSIGNED_INT64(v19 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v19 * 100.0)));
      v28 = sub_12E61C(v126, HIDWORD(v126));
    }
    else
    {
      v24 = sub_12E970(COERCE_UNSIGNED_INT64(v16 * v9 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v16 * v9 * 100.0)));
      v25 = sub_12E61C(v24, HIDWORD(v24));
      v26 = json_real(v25);
      json_object_set_new(v20, "rate_5s", v26);
      v18 = *(float *)&v9 * v18;
      v27 = sub_12E970(
              COERCE_UNSIGNED_INT64(*(float *)&v9 * v19 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v9 * v19 * 100.0)));
      v28 = sub_12E61C(v27, HIDWORD(v27));
      v29 = v20;
    }
    v30 = json_real(v28);
    json_object_set_new(v29, "rate_avg", v30);
    v31 = sub_12E970(COERCE_UNSIGNED_INT64(v18 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v18 * 100.0)));
    v32 = sub_12E61C(v31, HIDWORD(v31));
    v33 = json_real(v32);
    json_object_set_new(v29, "rate_30m", v33);
    v34 = sub_12E970(COERCE_UNSIGNED_INT64(v137 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v137 * 100.0)));
    v35 = sub_12E61C(v34, HIDWORD(v34));
    v36 = json_real(v35);
    json_object_set_new(v20, "rate_ideal", v36);
    v37 = json_string(v138);
    json_object_set_new(v20, "rate_unit", v37);
    v38 = json_integer(v136, v136 >> 31);
    json_object_set_new(v20, "chain_num", v38);
    v39 = json_integer(v10, v10 >> 31);
    v40 = json_object_set_new(v20, "fan_num", v39);
    v41 = json_array(v40);
    if ( v10 > 0 )
    {
      v42 = v140;
      v43 = &v140[v10];
      do
      {
        v44 = *v42++;
        v45 = json_integer(v44, v44 >> 31);
        json_array_append_new(v41, v45);
      }
      while ( v43 != v42 );
    }
    v46 = json_object_set_new(v131, "fan", v41);
    v47 = v17 + total_diff1;
    if ( v17 + total_diff1 )
    {
      v103 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_12E60C)(v17, HIDWORD(v17)));
      v104 = sub_12E60C(v47, HIDWORD(v47));
      v105 = sub_12E970(
               COERCE_UNSIGNED_INT64(v103 / v104 * 100.0 * 10000.0),
               HIDWORD(COERCE_UNSIGNED_INT64(v103 / v104 * 100.0 * 10000.0)));
      v46 = sub_12E61C(v105, HIDWORD(v105));
    }
    v48 = json_real(v46);
    v49 = json_object_set_new(v131, "hwp_total", v48);
    v50 = json_array(v49);
    v130 = v50;
    if ( v136 > 0 )
    {
      v51 = v133;
      v52 = "freq_avg";
      v129 = ptr - 4;
      v53 = 0;
      v128 = 0;
      while ( 1 )
      {
        v54 = json_object(v50, HIDWORD(v50), v52, v53);
        v55 = *((_DWORD *)v129 + 1);
        v129 += 4;
        v56 = json_integer(v55, v55 >> 31);
        json_object_set_new(v54, "index", v56);
        v57 = json_integer(*((_DWORD *)v51 + 18), *((int *)v51 + 18) >> 31);
        json_object_set_new(v54, "freq_avg", v57);
        v58 = *((float *)v51 + 10);
        v59 = v9 * *((double *)v51 + 6) * 100.0;
        v137 = v9 * *((double *)v51 + 6);
        v60 = sub_12E970(LODWORD(v59), HIDWORD(v59));
        v61 = sub_12E61C(v60, HIDWORD(v60));
        v62 = json_real(v61);
        json_object_set_new(v54, "rate_ideal", v62);
        v63 = sub_12E970(COERCE_UNSIGNED_INT64(v58 * v9 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v58 * v9 * 100.0)));
        v64 = sub_12E61C(v63, HIDWORD(v63));
        v65 = json_real(v64);
        json_object_set_new(v54, "rate_real", v65);
        v66 = json_integer(*((_DWORD *)v51 + 16), *((int *)v51 + 16) >> 31);
        v67 = json_object_set_new(v54, "asic_num", v66);
        if ( *((_DWORD *)v51 + 17) )
        {
          v108 = v147;
          v109 = 0;
          v110 = stpcpy(v147) - (_DWORD)v147;
          while ( 1 )
          {
            v111 = v109++ >= v110;
            if ( v111 )
              break;
            while ( 1 )
            {
              v113 = (unsigned __int8)*v108++;
              v112 = v113;
              v114 = v113 == 111;
              if ( v113 != 111 )
                v114 = v112 == 32;
              if ( v114 )
                break;
              *(v108 - 1) = 120;
              v110 = strlen(v147);
              v111 = v109++ >= v110;
              if ( v111 )
                goto LABEL_58;
            }
          }
LABEL_58:
          v115 = json_string(v147);
          v67 = json_object_set_new(v54, "asic", v115);
        }
        v68 = json_array(v67);
        v69 = *((_QWORD *)v51 + 3);
        v70 = v68;
        if ( (int)v69 <= 0 )
          break;
        v71 = 0;
        do
        {
          v72 = json_integer(0, 0);
          ++v71;
          json_array_append_new(v70, v72);
        }
        while ( v71 != (_DWORD)v69 );
        if ( v69 > 0 )
          goto LABEL_22;
        v118 = json_object_set_new(v54, "temp_pic", v70);
        v76 = json_array(v118);
LABEL_25:
        v77 = 0;
        v78 = *(_DWORD *)v51 - 4;
        do
        {
          v79 = *(_DWORD *)(v78 + 4);
          v78 += 4;
          ++v77;
          v80 = json_integer(v79, v79 >> 31);
          json_array_append_new(v76, v80);
        }
        while ( v77 < (int)v69 );
        if ( v69 > 0 )
          goto LABEL_28;
LABEL_63:
        v117 = json_object_set_new(v54, "temp_pcb", v76);
        v86 = json_array(v117);
        if ( (int)v69 > 0 )
          goto LABEL_31;
LABEL_36:
        json_object_set_new(v54, "temp_chip", v86);
        v94 = *((_QWORD *)v51 + 10);
        if ( opt_algo == 9 )
          v94 = sub_12E934(v94, HIDWORD(v94), 1000, 0);
        v95 = json_integer(v94, HIDWORD(v94));
        v96 = json_object_set_new(v54, "hw", v95);
        v97 = is_eeprom_loaded(v96);
        if ( v97 )
        {
          v98 = is_eeprom_loaded(v97);
          if ( v98 )
            v99 = json_true(v98);
          else
            v99 = json_false(0);
          json_object_set_new(v54, "eeprom_loaded", v99);
          if ( api_get_eeprom_chip_sn(v128) )
          {
            eeprom_chip_sn = api_get_eeprom_chip_sn(v128);
            v101 = json_string(eeprom_chip_sn);
            json_object_set_new(v54, "sn", v101);
          }
        }
        else
        {
          v106 = is_eeprom_loaded(0);
          if ( v106 )
            v107 = json_true(v106);
          else
            v107 = json_false(0);
          json_object_set_new(v54, "eeprom_loaded", v107);
        }
        LODWORD(v50) = json_array_append_new(v130, v54);
        v51 += 216;
        v53 = v136;
        v52 = (const char *)(v128 + 1);
        v23 = v136 <= ++v128;
        if ( v23 )
          goto LABEL_45;
      }
      if ( SHIDWORD(v69) <= 0 )
      {
        v116 = json_object_set_new(v54, "temp_pic", v68);
        v76 = json_array(v116);
        goto LABEL_63;
      }
LABEL_22:
      v73 = 0;
      do
      {
        v74 = json_integer(0, 0);
        ++v73;
        json_array_append_new(v70, v74);
      }
      while ( v73 < SHIDWORD(v69) );
      v75 = json_object_set_new(v54, "temp_pic", v70);
      v76 = json_array(v75);
      if ( (int)v69 <= 0 )
      {
LABEL_28:
        v81 = (int *)*((_DWORD *)v51 + 2);
        v82 = &v81[HIDWORD(v69)];
        do
        {
          v83 = *v81++;
          v84 = json_integer(v83, v83 >> 31);
          json_array_append_new(v76, v84);
        }
        while ( v82 != v81 );
        v85 = json_object_set_new(v54, "temp_pcb", v76);
        v86 = json_array(v85);
        if ( (int)v69 > 0 )
        {
LABEL_31:
          v87 = 0;
          v88 = *((_DWORD *)v51 + 1) - 4;
          do
          {
            v89 = *(_DWORD *)(v88 + 4);
            v88 += 4;
            ++v87;
            v90 = json_integer(v89, v89 >> 31);
            json_array_append_new(v86, v90);
          }
          while ( v87 < (int)v69 );
          if ( v69 <= 0 )
            goto LABEL_36;
        }
        LODWORD(v69) = 0;
        v91 = *((_DWORD *)v51 + 3) - 4;
        do
        {
          v92 = *(_DWORD *)(v91 + 4);
          v91 += 4;
          LODWORD(v69) = v69 + 1;
          v93 = json_integer(v92, v92 >> 31);
          json_array_append_new(v86, v93);
        }
        while ( (int)v69 < SHIDWORD(v69) );
        goto LABEL_36;
      }
      goto LABEL_25;
    }
LABEL_45:
    json_object_set_new(v131, "chain", v130);
    json_array_append_new(v135, v131);
    json_object_set_new(a1, "STATS", v135);
    if ( v136 > 0 )
    {
      free(ptr);
      free(v133);
    }
    return 0;
  }
}
