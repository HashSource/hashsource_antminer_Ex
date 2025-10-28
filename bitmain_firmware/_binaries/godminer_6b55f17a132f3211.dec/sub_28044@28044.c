int __fastcall sub_28044(int a1, const char **a2)
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
  float v15; // s22
  float v16; // s23
  __int64 v17; // r6
  double v18; // d9
  double v19; // d8
  int v20; // r8
  __int64 v21; // r0
  int v22; // r0
  bool v23; // zf
  __int64 v24; // r0
  double v25; // r0
  int v26; // r0
  int v27; // r5
  __int64 v28; // r0
  double v29; // r0
  int v30; // r2
  __int64 v31; // r0
  double v32; // r0
  int v33; // r0
  __int64 v34; // r0
  double v35; // r0
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
  double v46; // r0
  __int64 v47; // r4
  __int64 v48; // r2
  double v49; // d8
  int v50; // r2
  int v51; // r3
  double v52; // r0
  __int64 v53; // r0
  int v54; // r0
  int v55; // r0
  __int64 v56; // r0
  int v57; // r2
  char *v58; // r7
  int v59; // r3
  int v60; // r6
  int v61; // r0
  int v62; // r0
  int v63; // r0
  double v64; // d8
  double v65; // d6
  __int64 v66; // r0
  double v67; // r0
  int v68; // r0
  __int64 v69; // r0
  double v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r0
  int v74; // r0
  __int64 v75; // r4
  int v76; // r8
  int v77; // r11
  int v78; // r0
  int v79; // r11
  int v80; // r0
  int v81; // r0
  int v82; // r8
  int v83; // r11
  int v84; // r10
  int v85; // t1
  int v86; // r0
  int *v87; // r10
  int *v88; // r11
  int v89; // t1
  int v90; // r0
  int v91; // r0
  int v92; // r8
  int v93; // r11
  int v94; // r10
  int v95; // t1
  int v96; // r0
  int v97; // r11
  int v98; // t1
  int v99; // r0
  __int64 v100; // r0
  int v101; // r0
  int v102; // r0
  int v103; // r0
  int v104; // r0
  int v105; // r2
  int eeprom_chip_sn; // r0
  int v107; // r0
  int eeprom_voltage; // r0
  int v109; // r0
  int eeprom_freq; // r0
  int v111; // r0
  unsigned __int8 eeprom_chip_bin; // r0
  int v113; // r0
  int eeprom_chip_ft; // r0
  int v115; // r0
  unsigned __int8 eeprom_test_standard_code; // r0
  int v117; // r0
  __int64 v120; // r0
  double v121; // r0
  int v122; // r0
  __int64 v123; // r0
  int v124; // r0
  int v125; // r2
  char *v126; // r8
  size_t v127; // r5
  size_t v128; // r2
  bool v129; // cf
  int v130; // r3
  int v131; // t1
  bool v132; // zf
  int v133; // r0
  int v134; // r0
  int v135; // r0
  int v136; // r0
  int v137; // r0
  char *v138; // r10
  _DWORD *v139; // r11
  _DWORD *v140; // r8
  int v141; // t1
  int v142; // r0
  int v143; // [sp+10h] [bp-1084h]
  char *v144; // [sp+1Ch] [bp-1078h]
  int v145; // [sp+20h] [bp-1074h]
  int v146; // [sp+2Ch] [bp-1068h]
  char *v148; // [sp+34h] [bp-1060h]
  char *ptr; // [sp+38h] [bp-105Ch]
  int v150; // [sp+3Ch] [bp-1058h]
  int v151; // [sp+40h] [bp-1054h] BYREF
  float v152; // [sp+44h] [bp-1050h] BYREF
  double v153; // [sp+48h] [bp-104Ch] BYREF
  _DWORD v154[2]; // [sp+50h] [bp-1044h] BYREF
  _DWORD v155[2]; // [sp+58h] [bp-103Ch] BYREF
  int *v156; // [sp+60h] [bp-1034h]
  float v157; // [sp+64h] [bp-1030h]
  float v158; // [sp+68h] [bp-102Ch]
  float v159; // [sp+6Ch] [bp-1028h]
  float v160; // [sp+70h] [bp-1024h]
  double v161; // [sp+78h] [bp-101Ch]
  __int64 v162; // [sp+88h] [bp-100Ch]
  char v163[4100]; // [sp+90h] [bp-1004h] BYREF

  v154[0] = 0;
  v3 = a1 == 0;
  v154[1] = 0;
  v151 = 0;
  all_created_runtime = get_all_created_runtime(&v151);
  v5 = frontend_runtime_instance(all_created_runtime);
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(v5);
    v142 = logfmt_raw((int)v163, 0x1000u);
    V_UNLOCK(v142);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_stats",
      9,
      741,
      100,
      v163);
    return -2147483646;
  }
  else
  {
    v7 = v5;
    sub_22C30(a1, a2, v6);
    v8 = sub_22D4C(a1);
    v150 = json_array(v8);
    read_system_status_from_monitor(v155);
    v9 = v161;
    v10 = v155[1];
    status_from_monitor = (char *)format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), &v153, v154);
    v14 = v151;
    v15 = v157;
    v16 = v158;
    v17 = v162;
    v18 = v159 * v9;
    v19 = v160 * v9;
    if ( v151 > 0 )
    {
      v148 = (char *)malloc(216 * v151);
      v138 = v148;
      status_from_monitor = (char *)malloc(4 * v151);
      v14 = v151;
      v139 = status_from_monitor;
      ptr = status_from_monitor;
      if ( v151 > 0 )
      {
        v140 = (_DWORD *)(all_created_runtime - 4);
        do
        {
          v141 = v140[1];
          ++v140;
          status_from_monitor = (char *)read_status_from_monitor(v138, v141);
          v14 = v151;
          v138 += 216;
          v13 = *(_DWORD *)(*v140 + 212);
          v139[v3++] = v13;
        }
        while ( v14 > v3 );
      }
    }
    else
    {
      ptr = 0;
      v148 = 0;
    }
    v20 = json_object(status_from_monitor, v12, v13, v14);
    v146 = v20;
    get_total_nonce_rate();
    get_total_accept_rate();
    get_miner_elapsed_time();
    v21 = sub_122368(LODWORD(v9), HIDWORD(v9));
    v22 = json_integer(v21, HIDWORD(v21));
    json_object_set_new(v20, "elapsed", v22);
    v23 = opt_algo == 9;
    if ( opt_algo != 9 )
      v23 = opt_algo == 6;
    if ( v23 )
    {
      v120 = sub_122368(COERCE_UNSIGNED_INT64(v16 * v9 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v16 * v9 * 100.0)));
      v121 = sub_122014(v120, HIDWORD(v120));
      v122 = json_real(LODWORD(v121));
      json_object_set_new(v20, "rate_5s", v122);
      v18 = *(float *)&v9 * v18;
      v123 = sub_122368(
               COERCE_UNSIGNED_INT64(*(float *)&v9 * v19 * 100.0),
               HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v9 * v19 * 100.0)));
      v29 = sub_122014(v123, HIDWORD(v123));
      v27 = v20;
    }
    else
    {
      v24 = sub_122368(COERCE_UNSIGNED_INT64(v15 * v9 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v15 * v9 * 100.0)));
      v25 = sub_122014(v24, HIDWORD(v24));
      v26 = json_real(LODWORD(v25));
      v27 = v20;
      json_object_set_new(v20, "rate_5s", v26);
      v28 = sub_122368(COERCE_UNSIGNED_INT64(v19 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v19 * 100.0)));
      v29 = sub_122014(v28, HIDWORD(v28));
    }
    v30 = json_real(LODWORD(v29));
    json_object_set_new(v27, "rate_avg", v30);
    v31 = sub_122368(COERCE_UNSIGNED_INT64(v18 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v18 * 100.0)));
    v32 = sub_122014(v31, HIDWORD(v31));
    v33 = json_real(LODWORD(v32));
    json_object_set_new(v27, "rate_30m", v33);
    v34 = sub_122368(COERCE_UNSIGNED_INT64(v153 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v153 * 100.0)));
    v35 = sub_122014(v34, HIDWORD(v34));
    v36 = json_real(LODWORD(v35));
    json_object_set_new(v20, "rate_ideal", v36);
    v37 = json_string(v154);
    json_object_set_new(v20, "rate_unit", v37);
    v38 = json_integer(v151, v151 >> 31);
    json_object_set_new(v20, "chain_num", v38);
    v39 = json_integer(v10, v10 >> 31);
    v40 = json_object_set_new(v20, "fan_num", v39);
    v41 = json_array(v40);
    if ( v10 > 0 )
    {
      v42 = v156;
      v43 = &v156[v10];
      do
      {
        v44 = *v42++;
        v45 = json_integer(v44, v44 >> 31);
        json_array_append_new(v41, v45);
      }
      while ( v43 != v42 );
    }
    LODWORD(v46) = json_object_set_new(v146, "fan", v41);
    v47 = v17 + total_diff1;
    v48 = v17 + total_diff1;
    HIDWORD(v48) |= v48;
    if ( HIDWORD(v48) )
    {
      v49 = sub_122004(v17, HIDWORD(v17), v48, HIDWORD(v48));
      v52 = sub_122004(v47, HIDWORD(v47), v50, v51);
      v53 = sub_122368(
              COERCE_UNSIGNED_INT64(v49 / v52 * 100.0 * 10000.0),
              HIDWORD(COERCE_UNSIGNED_INT64(v49 / v52 * 100.0 * 10000.0)));
      v46 = sub_122014(v53, HIDWORD(v53));
    }
    v54 = json_real(LODWORD(v46));
    v55 = json_object_set_new(v146, "hwp_total", v54);
    v56 = json_array(v55);
    v145 = v56;
    if ( v151 > 0 )
    {
      v58 = v148;
      v144 = ptr - 4;
      v59 = 0;
      v143 = 0;
      while ( 1 )
      {
        v60 = json_object(v56, HIDWORD(v56), v57, v59);
        v61 = *((_DWORD *)v144 + 1);
        v144 += 4;
        v62 = json_integer(v61, v61 >> 31);
        json_object_set_new(v60, "index", v62);
        v63 = json_integer(*((_DWORD *)v58 + 18), *((int *)v58 + 18) >> 31);
        json_object_set_new(v60, "freq_avg", v63);
        v64 = *((float *)v58 + 10);
        v65 = v9 * *((double *)v58 + 6) * 100.0;
        v153 = v9 * *((double *)v58 + 6);
        v66 = sub_122368(LODWORD(v65), HIDWORD(v65));
        v67 = sub_122014(v66, HIDWORD(v66));
        v68 = json_real(LODWORD(v67));
        json_object_set_new(v60, "rate_ideal", v68);
        v69 = sub_122368(COERCE_UNSIGNED_INT64(v64 * v9 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v64 * v9 * 100.0)));
        v70 = sub_122014(v69, HIDWORD(v69));
        v71 = json_real(LODWORD(v70));
        json_object_set_new(v60, "rate_real", v71);
        v72 = json_integer(*((_DWORD *)v58 + 16), *((int *)v58 + 16) >> 31);
        v73 = json_object_set_new(v60, "asic_num", v72);
        if ( *((_DWORD *)v58 + 17) )
        {
          v126 = v163;
          v127 = 0;
          v128 = stpcpy(v163) - (_DWORD)v163;
          while ( 1 )
          {
            v129 = v127++ >= v128;
            if ( v129 )
              break;
            while ( 1 )
            {
              v131 = (unsigned __int8)*v126++;
              v130 = v131;
              v132 = v131 == 111;
              if ( v131 != 111 )
                v132 = v130 == 32;
              if ( v132 )
                break;
              *(v126 - 1) = 120;
              v128 = strlen(v163);
              v129 = v127++ >= v128;
              if ( v129 )
                goto LABEL_63;
            }
          }
LABEL_63:
          v133 = json_string(v163);
          v73 = json_object_set_new(v60, "asic", v133);
        }
        v74 = json_array(v73);
        v75 = *((_QWORD *)v58 + 3);
        v76 = v74;
        if ( (int)v75 <= 0 )
          break;
        v77 = 0;
        do
        {
          v78 = json_integer(0, 0);
          ++v77;
          json_array_append_new(v76, v78);
        }
        while ( v77 != (_DWORD)v75 );
        if ( v75 > 0 )
          goto LABEL_22;
        v137 = json_object_set_new(v60, "temp_pic", v76);
        v82 = json_array(v137);
LABEL_25:
        v83 = 0;
        v84 = *(_DWORD *)v58 - 4;
        do
        {
          v85 = *(_DWORD *)(v84 + 4);
          v84 += 4;
          ++v83;
          v86 = json_integer(v85, v85 >> 31);
          json_array_append_new(v82, v86);
        }
        while ( v83 < (int)v75 );
        if ( v75 > 0 )
          goto LABEL_28;
LABEL_68:
        v136 = json_object_set_new(v60, "temp_pcb", v82);
        v92 = json_array(v136);
        if ( (int)v75 > 0 )
          goto LABEL_31;
LABEL_36:
        json_object_set_new(v60, "temp_chip", v92);
        v100 = *((_QWORD *)v58 + 10);
        if ( opt_algo == 8 )
          v100 = sub_12232C(v100, HIDWORD(v100), 1000, 0);
        v101 = json_integer(v100, HIDWORD(v100));
        v102 = json_object_set_new(v60, "hw", v101);
        v103 = is_eeprom_loaded(v102);
        if ( v103 )
        {
          v104 = is_eeprom_loaded(v103);
          if ( v104 )
            v105 = json_true(v104);
          else
            v105 = json_false(0);
          json_object_set_new(v60, "eeprom_loaded", v105);
          if ( api_get_eeprom_chip_sn(v143) )
          {
            eeprom_chip_sn = api_get_eeprom_chip_sn(v143);
            v107 = json_string(eeprom_chip_sn);
            json_object_set_new(v60, "sn", v107);
          }
          eeprom_voltage = api_get_eeprom_voltage(v143);
          v109 = json_integer(eeprom_voltage, eeprom_voltage >> 31);
          json_object_set_new(v60, "eeprom_vol", v109);
          eeprom_freq = api_get_eeprom_freq(v143);
          v111 = json_integer(eeprom_freq, eeprom_freq >> 31);
          json_object_set_new(v60, "eeprom_freq", v111);
          eeprom_chip_bin = api_get_eeprom_chip_bin(v143);
          v113 = json_integer(eeprom_chip_bin, 0);
          json_object_set_new(v60, "eeprom_bin", v113);
          if ( api_get_eeprom_chip_ft(v143) )
          {
            eeprom_chip_ft = api_get_eeprom_chip_ft(v143);
            v115 = json_string(eeprom_chip_ft);
            json_object_set_new(v60, "eeprom_ft", v115);
          }
          eeprom_test_standard_code = api_get_eeprom_test_standard_code(v143);
          v117 = json_integer(eeprom_test_standard_code, 0);
          json_object_set_new(v60, "eeprom_code", v117);
          v152 = 0.0;
          if ( !api_get_eeprom_nonce_response_rate(v143, &v152) )
          {
            v134 = json_sprintf("%0.2f", v152);
            json_object_set_new(v60, "eeprom_nonce_rate", v134);
          }
        }
        else
        {
          v124 = is_eeprom_loaded(0);
          if ( v124 )
            v125 = json_true(v124);
          else
            v125 = json_false(0);
          json_object_set_new(v60, "eeprom_loaded", v125);
        }
        LODWORD(v56) = json_array_append_new(v145, v60);
        v58 += 216;
        v59 = v151;
        v57 = v143 + 1;
        if ( v151 <= ++v143 )
          goto LABEL_49;
      }
      if ( SHIDWORD(v75) <= 0 )
      {
        v135 = json_object_set_new(v60, "temp_pic", v74);
        v82 = json_array(v135);
        goto LABEL_68;
      }
LABEL_22:
      v79 = 0;
      do
      {
        v80 = json_integer(0, 0);
        ++v79;
        json_array_append_new(v76, v80);
      }
      while ( v79 < SHIDWORD(v75) );
      v81 = json_object_set_new(v60, "temp_pic", v76);
      v82 = json_array(v81);
      if ( (int)v75 <= 0 )
      {
LABEL_28:
        v87 = (int *)*((_DWORD *)v58 + 2);
        v88 = &v87[HIDWORD(v75)];
        do
        {
          v89 = *v87++;
          v90 = json_integer(v89, v89 >> 31);
          json_array_append_new(v82, v90);
        }
        while ( v88 != v87 );
        v91 = json_object_set_new(v60, "temp_pcb", v82);
        v92 = json_array(v91);
        if ( (int)v75 > 0 )
        {
LABEL_31:
          v93 = 0;
          v94 = *((_DWORD *)v58 + 1) - 4;
          do
          {
            v95 = *(_DWORD *)(v94 + 4);
            v94 += 4;
            ++v93;
            v96 = json_integer(v95, v95 >> 31);
            json_array_append_new(v92, v96);
          }
          while ( v93 < (int)v75 );
          if ( v75 <= 0 )
            goto LABEL_36;
        }
        LODWORD(v75) = 0;
        v97 = *((_DWORD *)v58 + 3) - 4;
        do
        {
          v98 = *(_DWORD *)(v97 + 4);
          v97 += 4;
          LODWORD(v75) = v75 + 1;
          v99 = json_integer(v98, v98 >> 31);
          json_array_append_new(v92, v99);
        }
        while ( (int)v75 < SHIDWORD(v75) );
        goto LABEL_36;
      }
      goto LABEL_25;
    }
LABEL_49:
    json_object_set_new(v146, "chain", v145);
    json_array_append_new(v150, v146);
    json_object_set_new(a1, "STATS", v150);
    if ( v151 > 0 )
    {
      free(ptr);
      free(v148);
    }
    return 0;
  }
}
