int __fastcall sub_26F7C(_DWORD *a1, int a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r5
  _DWORD *v7; // r4
  float v8; // s20
  __int64 *v9; // r10
  double v10; // d8
  double v11; // d9
  float v12; // s22
  double v13; // d9
  double v14; // d10
  double v15; // d11
  int v16; // r1
  double v17; // d13
  __int64 v18; // r0
  _DWORD *v19; // r0
  double *v20; // r0
  double *v21; // r0
  double *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  double *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  double *v35; // r0
  double *v36; // r0
  double *v37; // r0
  double *v38; // r0
  double *v39; // r0
  _DWORD *v40; // r0
  double *v41; // r0
  double v42; // r0
  double *v43; // r0
  double v44; // d7
  double *v45; // r0
  double v46; // d7
  double *v47; // r0
  _DWORD *v48; // r0
  char *v49; // r0
  char *v50; // r0
  double v51; // d0
  double *v52; // r0
  _DWORD *v53; // r0
  int v55; // r1
  double v56; // d9
  double v57; // r0
  double v58; // d12
  int v59; // r1
  __int64 v60; // [sp+10h] [bp-10BCh]
  unsigned int v61; // [sp+18h] [bp-10B4h]
  void *all_created_runtime; // [sp+1Ch] [bp-10B0h]
  _DWORD *v63; // [sp+20h] [bp-10ACh]
  unsigned int v64; // [sp+24h] [bp-10A8h]
  int v65; // [sp+2Ch] [bp-10A0h] BYREF
  double v66; // [sp+30h] [bp-109Ch] BYREF
  char v67[12]; // [sp+3Ch] [bp-1090h] BYREF
  char v68[32]; // [sp+48h] [bp-1084h] BYREF
  char v69[32]; // [sp+68h] [bp-1064h] BYREF
  char v70[32]; // [sp+88h] [bp-1044h] BYREF
  char v71[32]; // [sp+A8h] [bp-1024h] BYREF
  char v72[12]; // [sp+C8h] [bp-1004h] BYREF
  float v73; // [sp+D4h] [bp-FF8h]
  float v74; // [sp+D8h] [bp-FF4h]
  float v75; // [sp+DCh] [bp-FF0h]
  double v76; // [sp+E0h] [bp-FECh]
  unsigned int v77; // [sp+E8h] [bp-FE4h]
  unsigned int v78; // [sp+ECh] [bp-FE0h]

  v65 = 0;
  all_created_runtime = get_all_created_runtime(&v65);
  v4 = frontend_runtime_instance();
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v72, 0x1000u, 0, "%s: input bad api param", "get_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_summary_old",
      15,
      950,
      100,
      v72);
    return -2147483646;
  }
  else
  {
    v6 = v4;
    sub_23578(a1, 1, 11, *(const char **)(a2 + 8));
    v63 = json_array();
    v7 = json_object();
    read_system_status_from_monitor((int)v72);
    v8 = v74;
    LOWORD(v9) = (unsigned __int16)&total_accepted;
    v10 = v76;
    v11 = v73;
    v12 = v75;
    format_hashrate_string(*(const char **)(v6 + 84), v68);
    format_hashrate_string(*(const char **)(v6 + 84), v69);
    format_hashrate_string(*(const char **)(v6 + 84), v70);
    format_hashrate_string(*(const char **)(v6 + 84), v71);
    format_hashrate_double(*(const char **)(v6 + 84), &v66, v67);
    v13 = v11 * v10;
    v64 = v77;
    v14 = v8 * v10;
    v61 = v78;
    v15 = v12 * v10;
    if ( byte_164FE8 )
    {
      HIWORD(v9) = (unsigned int)&total_accepted >> 16;
      sub_25C98();
      v58 = v10;
      LODWORD(v17) = sub_12D09C(*v9);
      HIDWORD(v17) = v59;
      v18 = (__int64)v10;
      if ( v10 == 0.0 )
        v58 = 1.0;
    }
    else
    {
      HIWORD(v9) = (unsigned int)&total_accepted >> 16;
      v58 = 1.0;
      LODWORD(v17) = sub_12D09C(*v9);
      HIDWORD(v17) = v16;
      v18 = 0;
    }
    v19 = json_integer(v18);
    json_object_set_new(v7, "Elapsed", v19);
    sub_12D09C((__int64)(v13 * 100.0));
    v20 = json_real();
    json_object_set_new(v7, "GHS 5s", v20);
    sub_12D09C((__int64)(v15 * 100.0));
    v21 = json_real();
    json_object_set_new(v7, "GHS av", v21);
    sub_12D09C((__int64)(v14 * 100.0));
    v22 = json_real();
    json_object_set_new(v7, "GHS 30m", v22);
    v23 = json_integer((unsigned int)dword_164FEC);
    json_object_set_new(v7, "Found Blocks", v23);
    v24 = json_integer(*(__int64 *)&total_getworks);
    json_object_set_new(v7, "Getwork", v24);
    v25 = json_integer(*v9);
    json_object_set_new(v7, "Accepted", v25);
    v26 = json_integer(total_rejected);
    json_object_set_new(v7, "Rejected", v26);
    v27 = json_integer(__SPAIR64__(v61, v64));
    json_object_set_new(v7, "Hardware Errors", v27);
    sub_12D09C((__int64)(v17 / v58 * 60.0 * 100.0));
    v28 = json_real();
    json_object_set_new(v7, "Utility", v28);
    v29 = json_integer(*(__int64 *)&total_discarded);
    json_object_set_new(v7, "Discarded", v29);
    v30 = json_integer(*(__int64 *)&total_stale);
    json_object_set_new(v7, "Stale", v30);
    v31 = json_integer((unsigned int)total_go);
    json_object_set_new(v7, "Get Failures", v31);
    v32 = json_integer((unsigned int)local_work);
    json_object_set_new(v7, "Local Work", v32);
    v33 = json_integer((unsigned int)total_ro);
    json_object_set_new(v7, "Remote Failures", v33);
    v34 = json_integer((unsigned int)new_blocks);
    json_object_set_new(v7, "Network Blocks", v34);
    sub_12D09C((__int64)(dbl_164FF0 * 100.0));
    v35 = json_real();
    json_object_set_new(v7, "Total MH", v35);
    v36 = json_real();
    json_object_set_new(v7, "Work Utility", v36);
    sub_12D09C((__int64)(total_diff_accepted * 100.0));
    v37 = json_real();
    json_object_set_new(v7, "Difficulty Accepted", v37);
    sub_12D09C((__int64)(total_diff_rejected * 100.0));
    v38 = json_real();
    json_object_set_new(v7, "Difficulty Rejected", v38);
    sub_12D09C((__int64)(total_diff_stale * 100.0));
    v39 = json_real();
    json_object_set_new(v7, "Difficulty Stale", v39);
    v40 = json_integer(*(__int64 *)&dword_164FF8);
    json_object_set_new(v7, "Best Share", v40);
    v60 = __PAIR64__(v61, v64) + total_diff1;
    if ( __PAIR64__(v61, v64) + total_diff1 )
    {
      LODWORD(v56) = sub_12D08C(__SPAIR64__(v61, v64));
      HIDWORD(v56) = v55;
      LODWORD(v57) = sub_12D08C(v60);
      sub_12D09C((__int64)(v56 / v57 * 100.0));
    }
    v41 = json_real();
    json_object_set_new(v7, "Device Hardware%", v41);
    if ( total_diff1 )
    {
      LODWORD(v42) = sub_12D09C(total_diff1);
      sub_12D09C((__int64)(total_diff_rejected / v42 * 100.0));
    }
    v43 = json_real();
    json_object_set_new(v7, "Device Rejected%", v43);
    v44 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v44 != 0.0 )
      sub_12D09C((__int64)(total_diff_rejected / v44 * 100.0));
    v45 = json_real();
    json_object_set_new(v7, "Pool Rejected%", v45);
    v46 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v46 != 0.0 )
      sub_12D09C((__int64)(total_diff_stale / v46 * 100.0));
    v47 = json_real();
    json_object_set_new(v7, "Pool Stale%", v47);
    v48 = json_integer(last_getwork);
    json_object_set_new(v7, "Last getwork", v48);
    v49 = BUFX_strdup(v68);
    json_object_set_new(v7, "RT HASHRATE", v49);
    v50 = BUFX_strdup(v70);
    json_object_set_new(v7, "AV HASHRATE", v50);
    if ( !strcmp(*(const char **)(*(_DWORD *)all_created_runtime + 188), "dash") )
    {
      v51 = v66;
      update_rate_ideal();
      sub_12D09C((__int64)(v51 * 100.0));
      v52 = json_real();
    }
    else
    {
      v52 = (double *)BUFX_strdup(v71);
    }
    json_object_set_new(v7, "THEORY HASHRATE", v52);
    json_array_append_new(v63, v7);
    json_object_set_new(a1, "SUMMARY", v63);
    v53 = json_integer(1);
    json_object_set_new(a1, "id", v53);
    return 0;
  }
}
