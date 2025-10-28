int __fastcall sub_2E084(json_t *a1, int a2)
{
  double v3; // d0
  double v4; // r0
  double v5; // d7
  double v6; // d7
  json_t *v7; // r0
  double v8; // r0
  json_t *v9; // r0
  double v10; // d7
  double v11; // d7
  double v12; // r0
  json_t *v13; // r0
  double v14; // r0
  json_t *v15; // r0
  double v16; // r0
  json_t *v17; // r0
  double v18; // r0
  json_t *v19; // r0
  double v20; // r0
  json_t *v21; // r0
  json_t *v22; // r0
  json_t *v23; // r0
  json_t *v24; // r0
  json_t *v25; // r0
  json_t *v26; // r0
  double v27; // r0
  json_t *v28; // r0
  json_t *v29; // r0
  json_t *v30; // r0
  json_t *v31; // r0
  json_t *v32; // r0
  json_t *v33; // r0
  json_t *v34; // r0
  double v35; // r0
  json_t *v36; // r0
  double v37; // r0
  json_t *v38; // r0
  double v39; // r0
  json_t *v40; // r0
  double v41; // r0
  json_t *v42; // r0
  double v43; // r0
  json_t *v44; // r0
  json_t *v45; // r0
  int v46; // r1
  double v47; // d8
  double v48; // r0
  double v49; // d7
  double v50; // r0
  json_t *v51; // r0
  double v52; // d8
  double v53; // r0
  double v54; // d7
  double v55; // r0
  json_t *v56; // r0
  double v57; // d7
  double v58; // d7
  double v59; // r0
  json_t *v60; // r0
  double v61; // d7
  double v62; // r0
  json_t *v63; // r0
  json_t *v64; // r0
  json_t *v65; // r0
  double v66; // d7
  json_t *v67; // r0
  json_t *v68; // r0
  json_t *v69; // r0
  json_t *v70; // r0
  _BYTE v73[48]; // [sp+24h] [bp-11B0h] BYREF
  int v74; // [sp+1024h] [bp-1B0h] BYREF
  double v75; // [sp+1028h] [bp-1ACh] BYREF
  char v76[32]; // [sp+1034h] [bp-1A0h] BYREF
  char v77[32]; // [sp+1054h] [bp-180h] BYREF
  char v78[32]; // [sp+1074h] [bp-160h] BYREF
  char v79[32]; // [sp+1094h] [bp-140h] BYREF
  char v80[32]; // [sp+10B4h] [bp-120h] BYREF
  char v81[12]; // [sp+10D4h] [bp-100h] BYREF
  _BYTE v82[12]; // [sp+10E0h] [bp-F4h] BYREF
  float v83; // [sp+10ECh] [bp-E8h]
  float v84; // [sp+10F0h] [bp-E4h]
  float v85; // [sp+10F4h] [bp-E0h]
  float v86; // [sp+10F8h] [bp-DCh]
  double v87; // [sp+1100h] [bp-D4h]
  __int64 v88; // [sp+1110h] [bp-C4h]
  double v89; // [sp+1118h] [bp-BCh]
  double v90; // [sp+1120h] [bp-B4h]
  double v91; // [sp+1128h] [bp-ACh]
  double v92; // [sp+1130h] [bp-A4h]
  double v93; // [sp+1138h] [bp-9Ch]
  double v94; // [sp+1140h] [bp-94h]
  float v95; // [sp+114Ch] [bp-88h]
  double v96; // [sp+1150h] [bp-84h]
  double v97; // [sp+1158h] [bp-7Ch]
  double v98; // [sp+1160h] [bp-74h]
  __int64 v99; // [sp+1168h] [bp-6Ch]
  double v100; // [sp+1170h] [bp-64h]
  double v101; // [sp+1178h] [bp-5Ch]
  double v102; // [sp+1180h] [bp-54h]
  double v103; // [sp+1188h] [bp-4Ch]
  int v104; // [sp+1190h] [bp-44h]
  void *all_created_runtime; // [sp+1194h] [bp-40h]
  int v106; // [sp+1198h] [bp-3Ch]
  json_t *v107; // [sp+119Ch] [bp-38h]
  json_t *v108; // [sp+11A0h] [bp-34h]
  int v109; // [sp+11A4h] [bp-30h]
  double v110; // [sp+11A8h] [bp-2Ch]
  double v111; // [sp+11B0h] [bp-24h]

  v109 = 0;
  v108 = 0;
  v107 = 0;
  v106 = a2;
  v74 = 0;
  all_created_runtime = get_all_created_runtime(&v74);
  v104 = frontend_runtime_instance();
  if ( v106 && a1 )
  {
    sub_2DE54(a1, 1, 11, *(const char **)(v106 + 8));
    v108 = (json_t *)json_array();
    v107 = (json_t *)json_object();
    read_system_status_from_monitor((int)v82);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v104 + 72) + 16), v80);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v104 + 72) + 16), v79);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v104 + 72) + 16), v78);
    v3 = v86;
    format_hashrate_string(*(const char **)(*(_DWORD *)(v104 + 72) + 16), v77);
    if ( opt_algo == 7 )
    {
      sub_29B6C();
      format_hashrate_string(*(const char **)(*(_DWORD *)(v104 + 72) + 16), v76);
      sub_29B6C();
    }
    else
    {
      format_hashrate_string(*(const char **)(*(_DWORD *)(v104 + 72) + 16), v76);
      v3 = v87;
    }
    format_hashrate_double(*(const char **)(*(_DWORD *)(v104 + 72) + 16), &v75, v81);
    v111 = v3;
    v103 = v3 * v83;
    v102 = v3 * v84;
    v101 = v3 * v85;
    v100 = v3 * v86;
    v99 = v88;
    get_miner_elapsed_time();
    v98 = v3;
    LODWORD(v4) = sub_345484(total_accepted);
    if ( v98 == 0.0 )
      v5 = 1.0;
    else
      v5 = v98;
    v97 = v4 / v5 * 60.0;
    if ( v98 == 0.0 )
      v6 = 1.0;
    else
      v6 = v98;
    v96 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v6 * 60.0;
    get_total_nonce_rate();
    v95 = *(float *)&v3;
    get_total_accept_rate();
    total_accept_rate = *(float *)&v3;
    v7 = (json_t *)json_integer((__int64)v98, (unsigned __int64)(__int64)v98 >> 32);
    json_object_set_new(v107, "Elapsed", v7);
    if ( opt_algo == 6 )
    {
      LODWORD(v8) = sub_345484((__int64)(v102 * 100.0));
      v9 = json_real(v8);
      json_object_set_new(v107, "GHS 5s", v9);
      if ( v95 <= total_accept_rate )
        v10 = total_accept_rate * v100;
      else
        v10 = v95 * v100;
      v94 = v10;
      if ( v95 <= total_accept_rate )
        v11 = total_accept_rate * v101;
      else
        v11 = v95 * v101;
      v93 = v11;
      LODWORD(v12) = sub_345484((__int64)(v94 * 100.0));
      v13 = json_real(v12);
      json_object_set_new(v107, "GHS av", v13);
      LODWORD(v14) = sub_345484((__int64)(v93 * 100.0));
      v15 = json_real(v14);
      json_object_set_new(v107, "GHS 30m", v15);
    }
    else
    {
      LODWORD(v16) = sub_345484((__int64)(v103 * 100.0));
      v17 = json_real(v16);
      json_object_set_new(v107, "GHS 5s", v17);
      LODWORD(v18) = sub_345484((__int64)(v100 * 100.0));
      v19 = json_real(v18);
      json_object_set_new(v107, "GHS av", v19);
      LODWORD(v20) = sub_345484((__int64)(v101 * 100.0));
      v21 = json_real(v20);
      json_object_set_new(v107, "GHS 30m", v21);
    }
    v22 = (json_t *)json_integer(dword_5AC220, 0);
    json_object_set_new(v107, "Found Blocks", v22);
    v23 = (json_t *)json_integer(total_getworks, dword_C26AC4);
    json_object_set_new(v107, "Getwork", v23);
    v24 = (json_t *)json_integer(total_accepted, HIDWORD(total_accepted));
    json_object_set_new(v107, "Accepted", v24);
    v25 = (json_t *)json_integer(total_rejected, HIDWORD(total_rejected));
    json_object_set_new(v107, "Rejected", v25);
    v26 = (json_t *)json_integer(v99, HIDWORD(v99));
    json_object_set_new(v107, "Hardware Errors", v26);
    LODWORD(v27) = sub_345484((__int64)(v97 * 100.0));
    v28 = json_real(v27);
    json_object_set_new(v107, "Utility", v28);
    v29 = (json_t *)json_integer(total_discarded, dword_C26A94);
    json_object_set_new(v107, "Discarded", v29);
    v30 = (json_t *)json_integer(total_stale, dword_C26A84);
    json_object_set_new(v107, "Stale", v30);
    v31 = (json_t *)json_integer(total_go, 0);
    json_object_set_new(v107, "Get Failures", v31);
    v32 = (json_t *)json_integer(local_work, 0);
    json_object_set_new(v107, "Local Work", v32);
    v33 = (json_t *)json_integer(total_ro, 0);
    json_object_set_new(v107, "Remote Failures", v33);
    v34 = (json_t *)json_integer(new_blocks, 0);
    json_object_set_new(v107, "Network Blocks", v34);
    LODWORD(v35) = sub_345484((__int64)(dbl_5AC228 * 100.0));
    v36 = json_real(v35);
    LODWORD(v37) = json_object_set_new(v107, "Total MH", v36);
    v38 = json_real(v37);
    json_object_set_new(v107, "Work Utility", v38);
    LODWORD(v39) = sub_345484((__int64)(total_diff_accepted * 100.0));
    v40 = json_real(v39);
    json_object_set_new(v107, "Difficulty Accepted", v40);
    LODWORD(v41) = sub_345484((__int64)(total_diff_rejected * 100.0));
    v42 = json_real(v41);
    json_object_set_new(v107, "Difficulty Rejected", v42);
    LODWORD(v43) = sub_345484((__int64)(total_diff_stale * 100.0));
    v44 = json_real(v43);
    json_object_set_new(v107, "Difficulty Stale", v44);
    v45 = (json_t *)json_integer(dword_5AC238, dword_5AC23C);
    json_object_set_new(v107, "Best Share", v45);
    if ( total_diff1 + v99 )
    {
      LODWORD(v47) = sub_345474(v99);
      HIDWORD(v47) = v46;
      LODWORD(v48) = sub_345474(total_diff1 + v99);
      v49 = v47 / v48;
    }
    else
    {
      v49 = 0.0;
    }
    v92 = v49;
    LODWORD(v50) = sub_345484((__int64)(v49 * 100.0));
    v51 = json_real(v50);
    json_object_set_new(v107, "Device Hardware%", v51);
    if ( total_diff1 )
    {
      v52 = total_diff_rejected;
      LODWORD(v53) = sub_345484(total_diff1);
      v54 = v52 / v53;
    }
    else
    {
      v54 = 0.0;
    }
    v91 = v54;
    LODWORD(v55) = sub_345484((__int64)(v54 * 100.0));
    v56 = json_real(v55);
    json_object_set_new(v107, "Device Rejected%", v56);
    if ( total_diff_accepted + total_diff_rejected + total_diff_stale == 0.0 )
      v57 = 0.0;
    else
      v57 = total_diff_rejected / (total_diff_accepted + total_diff_rejected + total_diff_stale);
    v110 = v57;
    if ( opt_algo == 6 || opt_algo == 9 )
    {
      if ( v110 <= (float)(1.0 - total_accept_rate) )
        v58 = v110;
      else
        v58 = v110 - (float)(1.0 - total_accept_rate);
      v110 = v58;
    }
    LODWORD(v59) = sub_345484((__int64)(v110 * 100.0));
    v60 = json_real(v59);
    json_object_set_new(v107, "Pool Rejected%", v60);
    if ( total_diff_accepted + total_diff_rejected + total_diff_stale == 0.0 )
      v61 = 0.0;
    else
      v61 = total_diff_stale / (total_diff_accepted + total_diff_rejected + total_diff_stale);
    v90 = v61;
    LODWORD(v62) = sub_345484((__int64)(v61 * 100.0));
    v63 = json_real(v62);
    json_object_set_new(v107, "Pool Stale%", v63);
    v64 = (json_t *)json_integer(last_getwork, last_getwork >> 31);
    json_object_set_new(v107, "Last getwork", v64);
    if ( opt_algo == 6 )
      v65 = (json_t *)json_string(v79);
    else
      v65 = (json_t *)json_string(v80);
    json_object_set_new(v107, "RT HASHRATE", v65);
    if ( opt_algo == 6 )
    {
      if ( v95 <= total_accept_rate )
        v66 = total_accept_rate * v100;
      else
        v66 = v95 * v100;
      v89 = v66;
      format_hashrate_string(*(const char **)(*(_DWORD *)(v104 + 72) + 16), v77);
      v67 = (json_t *)json_string(v77);
      json_object_set_new(v107, "AV HASHRATE", v67);
    }
    else
    {
      v68 = (json_t *)json_string(v77);
      json_object_set_new(v107, "AV HASHRATE", v68);
    }
    v69 = (json_t *)json_string(v76);
    json_object_set_new(v107, "THEORY HASHRATE", v69);
    json_array_append_new(v108, v107);
    json_object_set_new(a1, "SUMMARY", v108);
    v70 = (json_t *)json_integer(1, 0);
    json_object_set_new(a1, "id", v70);
    return v109;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v73, 0x1000u, 0, "%s: input bad api param", "get_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_summary_old",
      15,
      1523,
      100,
      v73);
    return -2147483646;
  }
}
