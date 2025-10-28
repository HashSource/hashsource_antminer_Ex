int __fastcall sub_28B54(int a1, const char **a2)
{
  char *v4; // r6
  int v5; // r8
  int all_created_runtime; // r0
  int v7; // r2
  int v8; // r4
  void *v9; // r0
  __int64 v10; // r0
  int v11; // r10
  int v12; // r2
  int v13; // r3
  int v14; // r5
  double v15; // d0
  float v16; // s24
  float v17; // s25
  double v18; // d11
  double v19; // d9
  __int64 v20; // r0
  int v21; // r0
  bool v22; // zf
  double v23; // d7
  __int64 v24; // r0
  double v25; // r0
  int v26; // r0
  bool v27; // zf
  double v28; // d8
  __int64 v29; // r0
  double v30; // r0
  int v31; // r0
  int v32; // r0
  __int64 v33; // r0
  double v34; // r0
  int v35; // r0
  int v36; // r0
  __int64 v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  __int64 v41; // r0
  int v42; // r8
  char **v43; // r3
  void *v44; // r2
  _UNKNOWN **v45; // r11
  int v46; // r4
  int v47; // r0
  void *v48; // t1
  _DWORD *v50; // r8
  int v51; // r4
  char *v52; // r11
  int v53; // t1
  int v54; // r1
  __int64 v55; // r0
  double v56; // r0
  int v57; // r0
  __int64 v58; // r0
  double v59; // r0
  int v60; // r0
  __int64 v61; // [sp+18h] [bp-102Ch]
  char *ptr; // [sp+24h] [bp-1020h]
  int v63; // [sp+2Ch] [bp-1018h] BYREF
  double v64; // [sp+30h] [bp-1014h] BYREF
  _DWORD v65[2]; // [sp+38h] [bp-100Ch] BYREF
  _BYTE v66[12]; // [sp+40h] [bp-1004h] BYREF
  float v67; // [sp+4Ch] [bp-FF8h]
  float v68; // [sp+50h] [bp-FF4h]
  float v69; // [sp+54h] [bp-FF0h]
  float v70; // [sp+58h] [bp-FECh]
  double v71; // [sp+60h] [bp-FE4h]
  __int64 v72; // [sp+70h] [bp-FD4h]

  v4 = (char *)v65;
  v65[0] = 0;
  v63 = 0;
  v65[1] = 0;
  v5 = frontend_runtime_instance(a1);
  all_created_runtime = get_all_created_runtime(&v63);
  if ( a2 )
  {
    v8 = all_created_runtime;
    sub_22C30(a1, a2, v7);
    v9 = sub_22D4C(a1);
    v10 = json_array(v9);
    v11 = v10;
    v14 = json_object(v10, HIDWORD(v10), v12, v13);
    read_system_status_from_monitor(v66);
    v15 = v71;
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v5 + 72) + 16), &v64, v65);
    if ( v63 <= 0 )
      v4 = 0;
    v16 = v67;
    v17 = v68;
    v61 = v72;
    v18 = v69 * v15;
    if ( v63 <= 0 )
      ptr = v4;
    v19 = v70 * v15;
    if ( v63 > 0 )
    {
      ptr = (char *)malloc(216 * v63);
      v4 = (char *)malloc(4 * v63);
      if ( v63 > 0 )
      {
        v50 = (_DWORD *)(v8 - 4);
        v51 = 0;
        v52 = ptr;
        do
        {
          v53 = v50[1];
          ++v50;
          read_status_from_monitor(v52, v53);
          v54 = v63;
          v52 += 216;
          *(_DWORD *)&v4[4 * v51++] = *(_DWORD *)(*v50 + 212);
        }
        while ( v54 > v51 );
      }
    }
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v20 = sub_122368(LODWORD(v15), HIDWORD(v15));
    v21 = json_integer(v20, HIDWORD(v20));
    json_object_set_new(v14, "elapsed", v21);
    v22 = opt_algo == 9;
    if ( opt_algo != 9 )
      v22 = opt_algo == 6;
    if ( v22 )
      v23 = v17;
    else
      v23 = v16;
    v24 = sub_122368(COERCE_UNSIGNED_INT64(v23 * v15 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v23 * v15 * 100.0)));
    v25 = sub_122014(v24, HIDWORD(v24));
    v26 = json_real(LODWORD(v25));
    json_object_set_new(v14, "rate_5s", v26);
    v27 = opt_algo == 9;
    if ( opt_algo != 9 )
      v27 = opt_algo == 6;
    if ( v27 )
    {
      v28 = *(float *)&v15;
      v29 = sub_122368(COERCE_UNSIGNED_INT64(v28 * v19 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v28 * v19 * 100.0)));
      v30 = sub_122014(v29, HIDWORD(v29));
      v31 = json_real(LODWORD(v30));
      json_object_set_new(v14, "rate_avg", v31);
      v58 = sub_122368(COERCE_UNSIGNED_INT64(v28 * v18 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v28 * v18 * 100.0)));
    }
    else
    {
      v55 = sub_122368(COERCE_UNSIGNED_INT64(v19 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v19 * 100.0)));
      v56 = sub_122014(v55, HIDWORD(v55));
      v57 = json_real(LODWORD(v56));
      json_object_set_new(v14, "rate_avg", v57);
      v58 = sub_122368(COERCE_UNSIGNED_INT64(v18 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v18 * 100.0)));
    }
    v59 = sub_122014(v58, HIDWORD(v58));
    v32 = json_real(LODWORD(v59));
    json_object_set_new(v14, "rate_30m", v32);
    v33 = sub_122368(COERCE_UNSIGNED_INT64(v64 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v64 * 100.0)));
    v34 = sub_122014(v33, HIDWORD(v33));
    v35 = json_real(LODWORD(v34));
    json_object_set_new(v14, "rate_ideal", v35);
    v36 = json_string(v65);
    json_object_set_new(v14, "rate_unit", v36);
    v37 = v61;
    if ( opt_algo == 8 )
      v37 = sub_12232C(v61, HIDWORD(v61), 1000, 0);
    v38 = json_integer(v37, HIDWORD(v37));
    json_object_set_new(v14, "hw_all", v38);
    v39 = json_integer(dword_164F00, dword_164F04);
    v40 = json_object_set_new(v14, "bestshare", v39);
    v41 = json_array(v40);
    v42 = v41;
    if ( (_DWORD)v41 )
    {
      v43 = &opt_api_description;
      v44 = off_16336C;
      if ( off_16336C )
      {
        v45 = &off_16336C;
        do
        {
          v46 = json_object(v41, HIDWORD(v41), v44, v43);
          v47 = json_string(*v45);
          json_object_set_new(v46, "type", v47);
          ((void (__fastcall *)(int, _UNKNOWN **))v45[1])(v46, v45);
          LODWORD(v41) = json_array_append_new(v42, v46);
          v48 = v45[6];
          v45 += 6;
          v44 = v48;
        }
        while ( v48 );
      }
    }
    json_object_set_new(v14, "status", v42);
    json_array_append_new(v11, v14);
    json_object_set_new(a1, "SUMMARY", v11);
    if ( v63 > 0 )
    {
      free(v4);
      free(ptr);
    }
    return 0;
  }
  else
  {
    V_LOCK(all_created_runtime);
    v60 = logfmt_raw((int)v66, 0x1000u);
    V_UNLOCK(v60);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_summary",
      11,
      504,
      100,
      v66);
    return -2147483646;
  }
}
