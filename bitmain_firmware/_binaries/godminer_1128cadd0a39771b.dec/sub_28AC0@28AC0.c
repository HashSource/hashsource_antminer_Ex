int __fastcall sub_28AC0(int a1, const char **a2)
{
  int v2; // r4
  char *v5; // r7
  int all_created_runtime; // r0
  int v7; // r10
  void *v8; // r0
  int v9; // r9
  int v10; // r5
  double v11; // d0
  int v12; // r3
  double v13; // d11
  double v14; // d10
  double v15; // d9
  __int64 v16; // r0
  int v17; // r0
  __int64 v18; // r0
  double v19; // r0
  int v20; // r0
  __int64 v21; // r0
  double v22; // r0
  double v23; // d0
  int v24; // r0
  float v25; // s18
  double v26; // d7
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
  int appended; // r0
  int v41; // r6
  _UNKNOWN **v42; // r11
  int v43; // r4
  int v44; // r0
  void *v45; // t1
  char *v47; // r6
  _DWORD *v48; // r11
  int v49; // t1
  int v50; // r3
  int v51; // r0
  int v52; // [sp+10h] [bp-102Ch]
  int v53; // [sp+14h] [bp-1028h]
  char *ptr; // [sp+1Ch] [bp-1020h]
  int v55; // [sp+24h] [bp-1018h] BYREF
  double v56; // [sp+28h] [bp-1014h] BYREF
  _DWORD v57[2]; // [sp+30h] [bp-100Ch] BYREF
  _BYTE v58[12]; // [sp+38h] [bp-1004h] BYREF
  float v59; // [sp+44h] [bp-FF8h]
  float v60; // [sp+48h] [bp-FF4h]
  float v61; // [sp+4Ch] [bp-FF0h]
  double v62; // [sp+50h] [bp-FECh]
  int v63; // [sp+58h] [bp-FE4h]
  int v64; // [sp+5Ch] [bp-FE0h]

  v2 = 0;
  v57[0] = 0;
  v55 = 0;
  v57[1] = 0;
  v5 = (char *)frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v55);
  if ( !a2 )
  {
    V_LOCK(all_created_runtime);
    v51 = logfmt_raw((int)v58, 0x1000u);
    V_UNLOCK(v51);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_summary",
      11,
      427,
      100,
      v58);
    return -2147483646;
  }
  v7 = all_created_runtime;
  sub_23BD4(a1, a2);
  v8 = sub_23790(a1);
  v9 = json_array(v8);
  v10 = json_object(v9);
  read_system_status_from_monitor(v58);
  v11 = v62;
  format_hashrate_double(*((_DWORD *)v5 + 21), &v56, v57, v12);
  if ( v55 <= 0 )
    v5 = 0;
  v13 = v61 * v11;
  if ( v55 <= 0 )
    ptr = v5;
  v52 = v63;
  v53 = v64;
  v14 = v59 * v11;
  v15 = v60 * v11;
  if ( v55 > 0 )
  {
    ptr = (char *)malloc(208 * v55);
    v47 = ptr;
    v5 = (char *)malloc(4 * v55);
    if ( v55 > 0 )
    {
      v48 = (_DWORD *)(v7 - 4);
      do
      {
        v49 = v48[1];
        ++v48;
        read_status_from_monitor(v47, v49);
        v50 = v55;
        v47 += 208;
        *(_DWORD *)&v5[4 * v2++] = *(_DWORD *)(*v48 + 148);
      }
      while ( v50 > v2 );
    }
  }
  if ( byte_165FF8 )
  {
    sub_25FC4();
    v16 = sub_12E9F8(LODWORD(v11), HIDWORD(v11));
  }
  else
  {
    v16 = 0;
  }
  v17 = json_integer(v16, HIDWORD(v16));
  json_object_set_new(v10, "elapsed", v17);
  v18 = sub_12E9F8(COERCE_UNSIGNED_INT64(v14 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v14 * 100.0)));
  v19 = sub_12E6A4(v18, HIDWORD(v18));
  v20 = json_real(LODWORD(v19));
  json_object_set_new(v10, "rate_5s", v20);
  v21 = sub_12E9F8(COERCE_UNSIGNED_INT64(v15 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v15 * 100.0)));
  v22 = sub_12E6A4(v21, HIDWORD(v21));
  v23 = v22 / 100.0;
  v24 = json_real(LODWORD(v22));
  json_object_set_new(v10, "rate_30m", v24);
  get_total_nonce_rate();
  v25 = *(float *)&v23;
  if ( opt_algo == 5 )
    v26 = *(float *)&v23;
  else
    v26 = v13 * 100.0;
  if ( opt_algo == 5 )
    v26 = v26 * v13 * 100.0;
  v27 = sub_12E9F8(LODWORD(v26), HIDWORD(v26));
  v28 = sub_12E6A4(v27, HIDWORD(v27));
  v29 = json_real(LODWORD(v28));
  json_object_set_new(v10, "rate_avg", v29);
  v30 = strcmp(*(const char **)(*(_DWORD *)v7 + 196), "dash");
  v31 = v56;
  if ( !v30 )
  {
    update_rate_ideal();
    goto LABEL_18;
  }
  if ( opt_algo != 5 )
  {
LABEL_18:
    v32 = v31 * 100.0;
    goto LABEL_19;
  }
  v32 = v25 * v56 * 100.0;
LABEL_19:
  v33 = sub_12E9F8(LODWORD(v32), HIDWORD(v32));
  v34 = sub_12E6A4(v33, HIDWORD(v33));
  v35 = json_real(LODWORD(v34));
  json_object_set_new(v10, "rate_ideal", v35);
  v36 = json_string(v57);
  json_object_set_new(v10, "rate_unit", v36);
  v37 = json_integer(v52, v53);
  json_object_set_new(v10, "hw_all", v37);
  v38 = json_integer(dword_166008, dword_16600C);
  v39 = json_object_set_new(v10, "bestshare", v38);
  appended = json_array(v39);
  v41 = appended;
  if ( appended && off_164320 )
  {
    v42 = &off_164320;
    do
    {
      v43 = json_object(appended);
      v44 = json_string(*v42);
      json_object_set_new(v43, "type", v44);
      ((void (__fastcall *)(int, _UNKNOWN **))v42[1])(v43, v42);
      appended = json_array_append_new(v41, v43);
      v45 = v42[6];
      v42 += 6;
    }
    while ( v45 );
  }
  json_object_set_new(v10, "status", v41);
  json_array_append_new(v9, v10);
  json_object_set_new(a1, "SUMMARY", v9);
  if ( v55 > 0 )
  {
    free(v5);
    free(ptr);
  }
  return 0;
}
