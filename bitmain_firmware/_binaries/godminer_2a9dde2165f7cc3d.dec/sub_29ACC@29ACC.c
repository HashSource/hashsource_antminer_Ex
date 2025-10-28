int __fastcall sub_29ACC(int a1, const char **a2)
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
  double v17; // d10
  double v18; // d9
  double v19; // d8
  float v20; // s25
  __int64 v21; // r0
  int v22; // r0
  bool v23; // cc
  double v24; // d7
  __int64 v25; // r0
  double v26; // r0
  double v27; // d0
  int v28; // r0
  bool v29; // cc
  bool v30; // cc
  __int64 v31; // r0
  int v32; // r0
  int v33; // r0
  __int64 v34; // r0
  int v35; // r0
  int v36; // r0
  __int64 v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  __int64 v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  __int64 v45; // r0
  int v46; // r8
  char **v47; // r3
  void *v48; // r2
  _UNKNOWN **v49; // r11
  int v50; // r4
  int v51; // r0
  void *v52; // t1
  _DWORD *v54; // r8
  int v55; // r4
  char *v56; // r11
  int v57; // t1
  int v58; // r1
  int v59; // r0
  __int64 v60; // [sp+18h] [bp-102Ch]
  char *ptr; // [sp+24h] [bp-1020h]
  int v62; // [sp+2Ch] [bp-1018h] BYREF
  double v63; // [sp+30h] [bp-1014h] BYREF
  _DWORD v64[2]; // [sp+38h] [bp-100Ch] BYREF
  _BYTE v65[12]; // [sp+40h] [bp-1004h] BYREF
  float v66; // [sp+4Ch] [bp-FF8h]
  float v67; // [sp+50h] [bp-FF4h]
  float v68; // [sp+54h] [bp-FF0h]
  float v69; // [sp+58h] [bp-FECh]
  double v70; // [sp+60h] [bp-FE4h]
  __int64 v71; // [sp+70h] [bp-FD4h]

  v4 = (char *)v64;
  v64[0] = 0;
  v62 = 0;
  v64[1] = 0;
  v5 = frontend_runtime_instance(a1);
  all_created_runtime = get_all_created_runtime(&v62);
  if ( a2 )
  {
    v8 = all_created_runtime;
    sub_23CB8(a1, a2, v7);
    v9 = sub_23DD4(a1);
    v10 = json_array(v9);
    v11 = v10;
    v14 = json_object(v10, HIDWORD(v10), v12, v13);
    read_system_status_from_monitor(v65);
    v15 = v70;
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v5 + 72) + 16), &v63, v64);
    if ( v62 <= 0 )
      v4 = 0;
    v16 = v66;
    *((float *)&v17 + 1) = v67;
    v60 = v71;
    v18 = v68 * v15;
    if ( v62 <= 0 )
      ptr = v4;
    v19 = v69 * v15;
    if ( v62 > 0 )
    {
      ptr = (char *)malloc(216 * v62);
      v4 = (char *)malloc(4 * v62);
      if ( v62 > 0 )
      {
        v54 = (_DWORD *)(v8 - 4);
        v55 = 0;
        v56 = ptr;
        do
        {
          v57 = v54[1];
          ++v54;
          read_status_from_monitor(v56, v57);
          v58 = v62;
          v56 += 216;
          *(_DWORD *)&v4[4 * v55++] = *(_DWORD *)(*v54 + 224);
        }
        while ( v58 > v55 );
      }
    }
    get_miner_elapsed_time();
    get_total_nonce_rate();
    v20 = *(float *)&v15;
    get_total_accept_rate();
    LODWORD(v17) = LODWORD(v15);
    v21 = sub_12E970(LODWORD(v15), HIDWORD(v15));
    v22 = json_integer(v21, HIDWORD(v21));
    json_object_set_new(v14, "elapsed", v22);
    v23 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v23 = (unsigned int)(opt_algo - 6) > 1;
    if ( v23 )
      v24 = v16;
    else
      v24 = *((float *)&v17 + 1);
    v25 = sub_12E970(COERCE_UNSIGNED_INT64(v24 * v15 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v24 * v15 * 100.0)));
    v26 = COERCE_DOUBLE(sub_12E61C(v25, HIDWORD(v25)));
    v27 = v26 / 100.0;
    v28 = json_real(LODWORD(v26));
    json_object_set_new(v14, "rate_5s", v28);
    v29 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v29 = (unsigned int)(opt_algo - 6) > 1;
    if ( !v29 )
    {
      v30 = v20 <= *(float *)&v17;
      if ( v20 <= *(float *)&v17 )
        v17 = *(float *)&v17;
      else
        v27 = v20;
      if ( v30 )
      {
        v19 = v17 * v19;
        v18 = v17 * v18;
      }
      else
      {
        v19 = v27 * v19;
        v18 = v27 * v18;
      }
    }
    v31 = sub_12E970(COERCE_UNSIGNED_INT64(v19 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v19 * 100.0)));
    v32 = sub_12E61C(v31, HIDWORD(v31));
    v33 = json_real(v32);
    json_object_set_new(v14, "rate_avg", v33);
    v34 = sub_12E970(COERCE_UNSIGNED_INT64(v18 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v18 * 100.0)));
    v35 = sub_12E61C(v34, HIDWORD(v34));
    v36 = json_real(v35);
    json_object_set_new(v14, "rate_30m", v36);
    v37 = sub_12E970(COERCE_UNSIGNED_INT64(v63 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v63 * 100.0)));
    v38 = sub_12E61C(v37, HIDWORD(v37));
    v39 = json_real(v38);
    json_object_set_new(v14, "rate_ideal", v39);
    v40 = json_string(v64);
    json_object_set_new(v14, "rate_unit", v40);
    v41 = v60;
    if ( opt_algo == 9 )
      v41 = sub_12E934(v60, HIDWORD(v60), 1000, 0);
    v42 = json_integer(v41, HIDWORD(v41));
    json_object_set_new(v14, "hw_all", v42);
    v43 = json_integer(dword_1731C8, dword_1731CC);
    v44 = json_object_set_new(v14, "bestshare", v43);
    v45 = json_array(v44);
    v46 = v45;
    if ( (_DWORD)v45 )
    {
      v47 = &opt_api_description;
      v48 = off_171374;
      if ( off_171374 )
      {
        v49 = &off_171374;
        do
        {
          v50 = json_object(v45, HIDWORD(v45), v48, v47);
          v51 = json_string(*v49);
          json_object_set_new(v50, "type", v51);
          ((void (__fastcall *)(int, _UNKNOWN **))v49[1])(v50, v49);
          LODWORD(v45) = json_array_append_new(v46, v50);
          v52 = v49[6];
          v49 += 6;
          v48 = v52;
        }
        while ( v52 );
      }
    }
    json_object_set_new(v14, "status", v46);
    json_array_append_new(v11, v14);
    json_object_set_new(a1, "SUMMARY", v11);
    if ( v62 > 0 )
    {
      free(v4);
      free(ptr);
    }
    return 0;
  }
  else
  {
    V_LOCK(all_created_runtime);
    v59 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v59);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/api_new.c",
      140,
      "get_summary",
      11,
      504,
      100,
      v65);
    return -2147483646;
  }
}
