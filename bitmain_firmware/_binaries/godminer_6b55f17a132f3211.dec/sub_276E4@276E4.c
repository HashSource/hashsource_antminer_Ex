int __fastcall sub_276E4(int a1, int a2)
{
  int all_created_runtime; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r5
  void *v8; // r0
  __int64 v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r4
  float v13; // s20
  double v14; // d11
  float v15; // s26
  float v16; // s16
  double v17; // d10
  double v18; // d13
  double v19; // d8
  double v20; // r0
  double v21; // d15
  double v22; // d13
  double v23; // d8
  double v24; // d15
  __int64 v25; // r0
  int v26; // r0
  bool v27; // zf
  __int64 v28; // r0
  int v29; // r0
  int v30; // r0
  __int64 v31; // r0
  int v32; // r0
  int v33; // r0
  __int64 v34; // r0
  double v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  __int64 v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  __int64 v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  __int64 v56; // r0
  int v57; // r0
  int v58; // r0
  __int64 v59; // r0
  int v60; // r0
  int v61; // r0
  __int64 v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  double v67; // d10
  int v68; // r2
  int v69; // r3
  double v70; // r0
  __int64 v71; // r0
  int v72; // r0
  double v73; // r0
  double v74; // r0
  __int64 v75; // r0
  int v76; // r0
  double v77; // d7
  double v78; // d6
  bool v79; // cc
  double v80; // d7
  __int64 v81; // r0
  double v82; // r0
  int v83; // r0
  double v84; // r0
  double v85; // d7
  __int64 v86; // r0
  int v87; // r0
  int v88; // r0
  bool v89; // zf
  _BYTE *v90; // r0
  int v91; // r0
  bool v92; // zf
  int v93; // r0
  int v94; // r0
  int v95; // r0
  __int64 v97; // r0
  double v98; // r0
  int v99; // r0
  __int64 v100; // r0
  double v101; // r0
  int v102; // r0
  __int64 v103; // r0
  int v104; // r0
  __int64 v105; // [sp+10h] [bp-10E4h]
  __int64 v106; // [sp+18h] [bp-10DCh]
  int v107; // [sp+20h] [bp-10D4h]
  double v108; // [sp+28h] [bp-10CCh]
  int v109; // [sp+34h] [bp-10C0h] BYREF
  _BYTE v110[12]; // [sp+38h] [bp-10BCh] BYREF
  _BYTE v111[12]; // [sp+44h] [bp-10B0h] BYREF
  _BYTE v112[32]; // [sp+50h] [bp-10A4h] BYREF
  _BYTE v113[32]; // [sp+70h] [bp-1084h] BYREF
  _BYTE v114[32]; // [sp+90h] [bp-1064h] BYREF
  _BYTE v115[32]; // [sp+B0h] [bp-1044h] BYREF
  _BYTE v116[32]; // [sp+D0h] [bp-1024h] BYREF
  _BYTE v117[12]; // [sp+F0h] [bp-1004h] BYREF
  float v118; // [sp+FCh] [bp-FF8h]
  float v119; // [sp+100h] [bp-FF4h]
  float v120; // [sp+104h] [bp-FF0h]
  float v121; // [sp+108h] [bp-FECh]
  double v122; // [sp+110h] [bp-FE4h]
  __int64 v123; // [sp+120h] [bp-FD4h]

  v109 = 0;
  all_created_runtime = get_all_created_runtime(&v109);
  v5 = frontend_runtime_instance(all_created_runtime);
  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  if ( v6 )
  {
    V_LOCK(v5);
    v104 = logfmt_raw((int)v117, 0x1000u);
    V_UNLOCK(v104);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_summary_old",
      15,
      1110,
      100,
      v117);
    return -2147483646;
  }
  else
  {
    v7 = v5;
    v8 = sub_22E5C(a1, 1, 11, *(const char **)(a2 + 8));
    v9 = json_array(v8);
    v107 = v9;
    v12 = json_object(v9, HIDWORD(v9), v10, v11);
    read_system_status_from_monitor(v117);
    v13 = v119;
    v14 = v122;
    v15 = v120;
    v108 = v118;
    v16 = v121;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v112);
    v17 = v13;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v113);
    v18 = v15;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v114);
    v19 = v16;
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v115);
    format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v116);
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v110, v111);
    v106 = v123;
    get_miner_elapsed_time();
    v20 = COERCE_DOUBLE(((__int64 (__fastcall *)(int, int))sub_122014)(total_accepted, dword_177F6C));
    v21 = v20;
    if ( v14 != 0.0 )
      v21 = v20 / v14;
    v22 = v18 * v14;
    v23 = v19 * v14;
    v24 = v21 * 60.0;
    get_total_nonce_rate();
    get_total_accept_rate();
    v25 = sub_122368(LODWORD(v14), HIDWORD(v14));
    v26 = json_integer(v25, HIDWORD(v25));
    json_object_set_new(v12, "Elapsed", v26);
    v27 = opt_algo == 9;
    if ( opt_algo != 9 )
      v27 = opt_algo == 6;
    if ( v27 )
    {
      v97 = sub_122368(COERCE_UNSIGNED_INT64(v17 * v14 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v17 * v14 * 100.0)));
      v98 = sub_122014(v97, HIDWORD(v97));
      v99 = json_real(LODWORD(v98));
      json_object_set_new(v12, "GHS 5s", v99);
      v100 = sub_122368(
               COERCE_UNSIGNED_INT64(*(float *)&v14 * v23 * 100.0),
               HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v14 * v23 * 100.0)));
      v101 = sub_122014(v100, HIDWORD(v100));
      v102 = json_real(LODWORD(v101));
      json_object_set_new(v12, "GHS av", v102);
      v103 = sub_122368(
               COERCE_UNSIGNED_INT64(*(float *)&v14 * v22 * 100.0),
               HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v14 * v22 * 100.0)));
      v35 = sub_122014(v103, HIDWORD(v103));
    }
    else
    {
      v28 = sub_122368(COERCE_UNSIGNED_INT64(v108 * v14 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v108 * v14 * 100.0)));
      v29 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_122014)(v28, HIDWORD(v28));
      v30 = json_real(v29);
      json_object_set_new(v12, "GHS 5s", v30);
      v31 = sub_122368(COERCE_UNSIGNED_INT64(v23 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v23 * 100.0)));
      v32 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_122014)(v31, HIDWORD(v31));
      v33 = json_real(v32);
      json_object_set_new(v12, "GHS av", v33);
      v34 = sub_122368(COERCE_UNSIGNED_INT64(v22 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v22 * 100.0)));
      LODWORD(v35) = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_122014)(v34, HIDWORD(v34));
    }
    v36 = json_real(LODWORD(v35));
    json_object_set_new(v12, "GHS 30m", v36);
    v37 = json_integer(dword_164EF0, 0);
    json_object_set_new(v12, "Found Blocks", v37);
    v38 = json_integer(total_getworks, dword_177F74);
    json_object_set_new(v12, "Getwork", v38);
    v39 = json_integer(total_accepted, dword_177F6C);
    json_object_set_new(v12, "Accepted", v39);
    v40 = json_integer(total_rejected, dword_177F8C);
    json_object_set_new(v12, "Rejected", v40);
    v41 = json_integer(v106, HIDWORD(v106));
    json_object_set_new(v12, "Hardware Errors", v41);
    v42 = sub_122368(COERCE_UNSIGNED_INT64(v24 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v24 * 100.0)));
    v43 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_122014)(v42, HIDWORD(v42));
    v44 = json_real(v43);
    json_object_set_new(v12, "Utility", v44);
    v45 = json_integer(total_discarded, dword_177F4C);
    json_object_set_new(v12, "Discarded", v45);
    v46 = json_integer(total_stale, dword_177F3C);
    json_object_set_new(v12, "Stale", v46);
    v47 = json_integer(total_go, 0);
    json_object_set_new(v12, "Get Failures", v47);
    v48 = json_integer(local_work, 0);
    json_object_set_new(v12, "Local Work", v48);
    v49 = json_integer(total_ro, 0);
    json_object_set_new(v12, "Remote Failures", v49);
    v50 = json_integer(new_blocks, 0);
    json_object_set_new(v12, "Network Blocks", v50);
    v51 = sub_122368(COERCE_UNSIGNED_INT64(dbl_164EF8 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_164EF8 * 100.0)));
    v52 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_122014)(v51, HIDWORD(v51));
    v53 = json_real(v52);
    v54 = json_object_set_new(v12, "Total MH", v53);
    v55 = json_real(v54);
    json_object_set_new(v12, "Work Utility", v55);
    v56 = sub_122368(
            COERCE_UNSIGNED_INT64(total_diff_accepted * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_accepted * 100.0)));
    v57 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_122014)(v56, HIDWORD(v56));
    v58 = json_real(v57);
    json_object_set_new(v12, "Difficulty Accepted", v58);
    v59 = sub_122368(
            COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0)));
    v60 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_122014)(v59, HIDWORD(v59));
    v61 = json_real(v60);
    json_object_set_new(v12, "Difficulty Rejected", v61);
    v62 = sub_122368(
            COERCE_UNSIGNED_INT64(total_diff_stale * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_stale * 100.0)));
    v63 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_122014)(v62, HIDWORD(v62));
    v64 = json_real(v63);
    json_object_set_new(v12, "Difficulty Stale", v64);
    v65 = json_integer(dword_164F00, dword_164F04);
    json_object_set_new(v12, "Best Share", v65);
    v66 = v106;
    v105 = v106 + total_diff1;
    if ( v106 + total_diff1 )
    {
      v67 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(_DWORD, _DWORD, int, _DWORD))sub_122004)(
                v106,
                HIDWORD(v106),
                (int)v106 + (int)total_diff1,
                (v106 + total_diff1) | ((unsigned __int64)(v106 + total_diff1) >> 32)));
      v70 = sub_122004(v105, HIDWORD(v105), v68, v69);
      v71 = sub_122368(COERCE_UNSIGNED_INT64(v67 / v70 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v67 / v70 * 100.0)));
      v66 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_122014)(v71, HIDWORD(v71));
    }
    v72 = json_real(v66);
    json_object_set_new(v12, "Device Hardware%", v72);
    LODWORD(v73) = total_diff1;
    if ( total_diff1 )
    {
      v74 = sub_122014(total_diff1, HIDWORD(total_diff1));
      v75 = sub_122368(
              COERCE_UNSIGNED_INT64(total_diff_rejected / v74 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected / v74 * 100.0)));
      v73 = sub_122014(v75, HIDWORD(v75));
    }
    v76 = json_real(LODWORD(v73));
    json_object_set_new(v12, "Device Rejected%", v76);
    v77 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v77 == 0.0 )
      v78 = 0.0;
    else
      v78 = total_diff_rejected / v77;
    v79 = (unsigned int)opt_algo > 6;
    if ( opt_algo != 6 )
      v79 = (unsigned int)(opt_algo - 8) > 1;
    if ( !v79 )
    {
      v80 = (float)(1.0 - *(float *)&v14);
      if ( v80 < v78 )
        v78 = v78 - v80;
    }
    v81 = sub_122368(COERCE_UNSIGNED_INT64(v78 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v78 * 100.0)));
    v82 = sub_122014(v81, HIDWORD(v81));
    v83 = json_real(LODWORD(v82));
    LODWORD(v84) = json_object_set_new(v12, "Pool Rejected%", v83);
    v85 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v85 != 0.0 )
    {
      v86 = sub_122368(
              COERCE_UNSIGNED_INT64(total_diff_stale / v85 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(total_diff_stale / v85 * 100.0)));
      v84 = sub_122014(v86, HIDWORD(v86));
    }
    v87 = json_real(LODWORD(v84));
    json_object_set_new(v12, "Pool Stale%", v87);
    v88 = json_integer(last_getwork, last_getwork >> 31);
    json_object_set_new(v12, "Last getwork", v88);
    v89 = opt_algo == 9;
    if ( opt_algo != 9 )
      v89 = opt_algo == 6;
    if ( v89 )
      v90 = v113;
    else
      v90 = v112;
    v91 = json_string(v90);
    json_object_set_new(v12, "RT HASHRATE", v91);
    v92 = opt_algo == 9;
    if ( opt_algo != 9 )
      v92 = opt_algo == 6;
    if ( v92 )
      format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v115);
    v93 = json_string(v115);
    json_object_set_new(v12, "AV HASHRATE", v93);
    v94 = json_string(v116);
    json_object_set_new(v12, "THEORY HASHRATE", v94);
    json_array_append_new(v107, v12);
    json_object_set_new(a1, "SUMMARY", v107);
    v95 = json_integer(1, 0);
    json_object_set_new(a1, "id", v95);
    return 0;
  }
}
