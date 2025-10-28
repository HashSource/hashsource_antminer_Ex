int __fastcall sub_27054(int a1, int a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r5
  void *v7; // r0
  int v8; // r4
  float v9; // s20
  _DWORD *v10; // r10
  double v11; // d8
  double v12; // d9
  float v13; // s22
  double v14; // d9
  double v15; // d10
  double v16; // d11
  double v17; // d13
  __int64 v18; // r0
  int v19; // r0
  __int64 v20; // r0
  int v21; // r0
  int v22; // r0
  __int64 v23; // r0
  int v24; // r0
  int v25; // r0
  __int64 v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  __int64 v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  __int64 v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  __int64 v48; // r0
  int v49; // r0
  int v50; // r0
  __int64 v51; // r0
  int v52; // r0
  int v53; // r0
  __int64 v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  double v58; // r0
  int v59; // r0
  double v60; // r0
  double v61; // r0
  __int64 v62; // r0
  int v63; // r0
  double v64; // r0
  double v65; // d7
  __int64 v66; // r0
  int v67; // r0
  double v68; // r0
  double v69; // d7
  __int64 v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r0
  int v74; // r0
  double v75; // d0
  __int64 v76; // r0
  double v77; // r0
  int v78; // r0
  int v79; // r0
  double v81; // d9
  int v82; // r2
  double v83; // r0
  __int64 v84; // r0
  double v85; // d12
  int v86; // r0
  unsigned __int64 v87; // [sp+10h] [bp-10BCh]
  unsigned int v88; // [sp+18h] [bp-10B4h]
  int all_created_runtime; // [sp+1Ch] [bp-10B0h]
  int v90; // [sp+20h] [bp-10ACh]
  unsigned int v91; // [sp+24h] [bp-10A8h]
  int v92; // [sp+2Ch] [bp-10A0h] BYREF
  double v93; // [sp+30h] [bp-109Ch] BYREF
  _BYTE v94[12]; // [sp+3Ch] [bp-1090h] BYREF
  _BYTE v95[32]; // [sp+48h] [bp-1084h] BYREF
  _BYTE v96[32]; // [sp+68h] [bp-1064h] BYREF
  _BYTE v97[32]; // [sp+88h] [bp-1044h] BYREF
  _BYTE v98[32]; // [sp+A8h] [bp-1024h] BYREF
  _BYTE v99[12]; // [sp+C8h] [bp-1004h] BYREF
  float v100; // [sp+D4h] [bp-FF8h]
  float v101; // [sp+D8h] [bp-FF4h]
  float v102; // [sp+DCh] [bp-FF0h]
  double v103; // [sp+E0h] [bp-FECh]
  unsigned int v104; // [sp+E8h] [bp-FE4h]
  unsigned int v105; // [sp+ECh] [bp-FE0h]

  v92 = 0;
  all_created_runtime = get_all_created_runtime(&v92);
  v4 = frontend_runtime_instance();
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  if ( v5 )
  {
    V_LOCK(v4);
    v86 = logfmt_raw((int)v99, 0x1000u);
    V_UNLOCK(v86);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_summary_old",
      15,
      954,
      100,
      v99);
    return -2147483646;
  }
  else
  {
    v6 = v4;
    v7 = sub_23650(a1, 1, 11, *(const char **)(a2 + 8));
    v90 = json_array(v7);
    v8 = json_object(v90);
    read_system_status_from_monitor(v99);
    v9 = v101;
    LOWORD(v10) = (unsigned __int16)&total_accepted;
    v11 = v103;
    v12 = v100;
    v13 = v102;
    format_hashrate_string(*(_DWORD *)(v6 + 84), v95);
    format_hashrate_string(*(_DWORD *)(v6 + 84), v96);
    format_hashrate_string(*(_DWORD *)(v6 + 84), v97);
    format_hashrate_string(*(_DWORD *)(v6 + 84), v98);
    format_hashrate_double(*(_DWORD *)(v6 + 84), &v93, v94, v95);
    v14 = v12 * v11;
    v91 = v104;
    v15 = v9 * v11;
    v88 = v105;
    v16 = v13 * v11;
    if ( byte_164FE8 )
    {
      HIWORD(v10) = (unsigned int)&total_accepted >> 16;
      sub_25D6C();
      v85 = v11;
      v17 = sub_12D38C(*v10, v10[1]);
      v18 = sub_12D6E0(LODWORD(v11), HIDWORD(v11));
      if ( v11 == 0.0 )
        v85 = 1.0;
    }
    else
    {
      HIWORD(v10) = (unsigned int)&total_accepted >> 16;
      v85 = 1.0;
      v17 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_12D38C)(*v10, v10[1]));
      v18 = 0;
    }
    v19 = json_integer(v18, HIDWORD(v18));
    json_object_set_new(v8, "Elapsed", v19);
    v20 = sub_12D6E0(COERCE_UNSIGNED_INT64(v14 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v14 * 100.0)));
    v21 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_12D38C)(v20, HIDWORD(v20));
    v22 = json_real(v21);
    json_object_set_new(v8, "GHS 5s", v22);
    v23 = sub_12D6E0(COERCE_UNSIGNED_INT64(v16 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v16 * 100.0)));
    v24 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_12D38C)(v23, HIDWORD(v23));
    v25 = json_real(v24);
    json_object_set_new(v8, "GHS av", v25);
    v26 = sub_12D6E0(COERCE_UNSIGNED_INT64(v15 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v15 * 100.0)));
    v27 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_12D38C)(v26, HIDWORD(v26));
    v28 = json_real(v27);
    json_object_set_new(v8, "GHS 30m", v28);
    v29 = json_integer(dword_164FEC, 0);
    json_object_set_new(v8, "Found Blocks", v29);
    v30 = json_integer(total_getworks, dword_16C88C);
    json_object_set_new(v8, "Getwork", v30);
    v31 = json_integer(*v10, v10[1]);
    json_object_set_new(v8, "Accepted", v31);
    v32 = json_integer(total_rejected, dword_16C8A4);
    json_object_set_new(v8, "Rejected", v32);
    v33 = json_integer(v91, v88);
    json_object_set_new(v8, "Hardware Errors", v33);
    v34 = sub_12D6E0(
            COERCE_UNSIGNED_INT64(v17 / v85 * 60.0 * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(v17 / v85 * 60.0 * 100.0)));
    v35 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_12D38C)(v34, HIDWORD(v34));
    v36 = json_real(v35);
    json_object_set_new(v8, "Utility", v36);
    v37 = json_integer(total_discarded, dword_16C864);
    json_object_set_new(v8, "Discarded", v37);
    v38 = json_integer(total_stale, dword_16C854);
    json_object_set_new(v8, "Stale", v38);
    v39 = json_integer(total_go, 0);
    json_object_set_new(v8, "Get Failures", v39);
    v40 = json_integer(local_work, 0);
    json_object_set_new(v8, "Local Work", v40);
    v41 = json_integer(total_ro, 0);
    json_object_set_new(v8, "Remote Failures", v41);
    v42 = json_integer(new_blocks, 0);
    json_object_set_new(v8, "Network Blocks", v42);
    v43 = sub_12D6E0(COERCE_UNSIGNED_INT64(dbl_164FF0 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_164FF0 * 100.0)));
    v44 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_12D38C)(v43, HIDWORD(v43));
    v45 = json_real(v44);
    v46 = json_object_set_new(v8, "Total MH", v45);
    v47 = json_real(v46);
    json_object_set_new(v8, "Work Utility", v47);
    v48 = sub_12D6E0(
            COERCE_UNSIGNED_INT64(total_diff_accepted * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_accepted * 100.0)));
    v49 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_12D38C)(v48, HIDWORD(v48));
    v50 = json_real(v49);
    json_object_set_new(v8, "Difficulty Accepted", v50);
    v51 = sub_12D6E0(
            COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected * 100.0)));
    v52 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_12D38C)(v51, HIDWORD(v51));
    v53 = json_real(v52);
    json_object_set_new(v8, "Difficulty Rejected", v53);
    v54 = sub_12D6E0(
            COERCE_UNSIGNED_INT64(total_diff_stale * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(total_diff_stale * 100.0)));
    v55 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_12D38C)(v54, HIDWORD(v54));
    v56 = json_real(v55);
    json_object_set_new(v8, "Difficulty Stale", v56);
    v57 = json_integer(dword_164FF8, dword_164FFC);
    json_object_set_new(v8, "Best Share", v57);
    v87 = __PAIR64__(v88, v91) + total_diff1;
    LODWORD(v58) = v91 + total_diff1;
    if ( __PAIR64__(v88, v91) + total_diff1 )
    {
      v81 = COERCE_DOUBLE(
              ((__int64 (__fastcall *)(unsigned int, unsigned int, _DWORD))sub_12D37C)(
                v91,
                v88,
                (v91 + total_diff1) | ((__PAIR64__(v88, v91) + total_diff1) >> 32)));
      v83 = sub_12D37C(v87, HIDWORD(v87), v82);
      v84 = sub_12D6E0(COERCE_UNSIGNED_INT64(v81 / v83 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v81 / v83 * 100.0)));
      v58 = sub_12D38C(v84, HIDWORD(v84));
    }
    v59 = json_real(LODWORD(v58));
    json_object_set_new(v8, "Device Hardware%", v59);
    LODWORD(v60) = total_diff1;
    if ( total_diff1 )
    {
      v61 = sub_12D38C(total_diff1, HIDWORD(total_diff1));
      v62 = sub_12D6E0(
              COERCE_UNSIGNED_INT64(total_diff_rejected / v61 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected / v61 * 100.0)));
      v60 = sub_12D38C(v62, HIDWORD(v62));
    }
    v63 = json_real(LODWORD(v60));
    LODWORD(v64) = json_object_set_new(v8, "Device Rejected%", v63);
    v65 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v65 != 0.0 )
    {
      v66 = sub_12D6E0(
              COERCE_UNSIGNED_INT64(total_diff_rejected / v65 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(total_diff_rejected / v65 * 100.0)));
      v64 = sub_12D38C(v66, HIDWORD(v66));
    }
    v67 = json_real(LODWORD(v64));
    LODWORD(v68) = json_object_set_new(v8, "Pool Rejected%", v67);
    v69 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v69 != 0.0 )
    {
      v70 = sub_12D6E0(
              COERCE_UNSIGNED_INT64(total_diff_stale / v69 * 100.0),
              HIDWORD(COERCE_UNSIGNED_INT64(total_diff_stale / v69 * 100.0)));
      v68 = sub_12D38C(v70, HIDWORD(v70));
    }
    v71 = json_real(LODWORD(v68));
    json_object_set_new(v8, "Pool Stale%", v71);
    v72 = json_integer(last_getwork, last_getwork >> 31);
    json_object_set_new(v8, "Last getwork", v72);
    v73 = json_string(v95);
    json_object_set_new(v8, "RT HASHRATE", v73);
    v74 = json_string(v97);
    json_object_set_new(v8, "AV HASHRATE", v74);
    if ( !strcmp(*(const char **)(*(_DWORD *)all_created_runtime + 188), "dash") )
    {
      v75 = v93;
      update_rate_ideal();
      v76 = sub_12D6E0(COERCE_UNSIGNED_INT64(v75 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v75 * 100.0)));
      v77 = sub_12D38C(v76, HIDWORD(v76));
      v78 = json_real(LODWORD(v77));
    }
    else
    {
      v78 = json_string(v98);
    }
    json_object_set_new(v8, "THEORY HASHRATE", v78);
    json_array_append_new(v90, v8);
    json_object_set_new(a1, "SUMMARY", v90);
    v79 = json_integer(1, 0);
    json_object_set_new(a1, "id", v79);
    return 0;
  }
}
