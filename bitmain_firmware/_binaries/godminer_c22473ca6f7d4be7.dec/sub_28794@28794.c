int __fastcall sub_28794(_DWORD *a1, const char **a2)
{
  int v2; // r4
  const char **v5; // r7
  char *all_created_runtime; // r0
  char *v7; // r10
  _DWORD *v8; // r9
  _DWORD *v9; // r5
  double v10; // d0
  double v11; // d11
  double v12; // d10
  double v13; // d9
  __int64 v14; // r0
  _DWORD *v15; // r0
  double *v16; // r0
  double v17; // r0
  double v18; // d0
  double *v19; // r0
  float v20; // s18
  double v21; // d7
  double *v22; // r0
  int v23; // r0
  double v24; // d0
  double v25; // d7
  double *v26; // r0
  char *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r6
  char **v31; // r11
  _DWORD *v32; // r4
  char *v33; // r0
  char *v34; // t1
  char *v36; // r6
  char *v37; // r11
  int v38; // t1
  int v39; // r3
  __int64 v40; // [sp+10h] [bp-102Ch]
  char *ptr; // [sp+1Ch] [bp-1020h]
  int v42; // [sp+24h] [bp-1018h] BYREF
  double v43; // [sp+28h] [bp-1014h] BYREF
  _DWORD v44[2]; // [sp+30h] [bp-100Ch] BYREF
  char v45[12]; // [sp+38h] [bp-1004h] BYREF
  float v46; // [sp+44h] [bp-FF8h]
  float v47; // [sp+48h] [bp-FF4h]
  float v48; // [sp+4Ch] [bp-FF0h]
  double v49; // [sp+50h] [bp-FECh]
  __int64 v50; // [sp+58h] [bp-FE4h]

  v2 = 0;
  v44[0] = 0;
  v42 = 0;
  v44[1] = 0;
  v5 = (const char **)frontend_runtime_instance();
  all_created_runtime = (char *)get_all_created_runtime(&v42);
  if ( !a2 )
  {
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, "%s: input bad api param", "get_summary");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_summary",
      11,
      423,
      100,
      v45);
    return -2147483646;
  }
  v7 = all_created_runtime;
  sub_238AC(a1, a2);
  sub_23468(a1);
  v8 = json_array();
  v9 = json_object();
  read_system_status_from_monitor((int)v45);
  v10 = v49;
  format_hashrate_double(v5[21], &v43, (char *)v44);
  if ( v42 <= 0 )
    v5 = 0;
  v11 = v48 * v10;
  if ( v42 <= 0 )
    ptr = (char *)v5;
  v40 = v50;
  v12 = v46 * v10;
  v13 = v47 * v10;
  if ( v42 > 0 )
  {
    ptr = (char *)malloc(208 * v42);
    v36 = ptr;
    v5 = (const char **)malloc(4 * v42);
    if ( v42 > 0 )
    {
      v37 = v7 - 4;
      do
      {
        v38 = *((_DWORD *)v37 + 1);
        v37 += 4;
        read_status_from_monitor(v36, v38);
        v39 = v42;
        v36 += 208;
        v5[v2++] = *(const char **)(*(_DWORD *)v37 + 140);
      }
      while ( v39 > v2 );
    }
  }
  if ( byte_164FE8 )
  {
    sub_25C98();
    v14 = (__int64)v10;
  }
  else
  {
    v14 = 0;
  }
  v15 = json_integer(v14);
  json_object_set_new(v9, "elapsed", v15);
  sub_12D09C((__int64)(v12 * 100.0));
  v16 = json_real();
  json_object_set_new(v9, "rate_5s", v16);
  LODWORD(v17) = sub_12D09C((__int64)(v13 * 100.0));
  v18 = v17 / 100.0;
  v19 = json_real();
  json_object_set_new(v9, "rate_30m", v19);
  get_total_nonce_rate();
  v20 = *(float *)&v18;
  if ( opt_algo == 5 )
    v21 = *(float *)&v18;
  else
    v21 = v11 * 100.0;
  if ( opt_algo == 5 )
    v21 = v21 * v11 * 100.0;
  sub_12D09C((__int64)v21);
  v22 = json_real();
  json_object_set_new(v9, "rate_avg", v22);
  v23 = strcmp(*(const char **)(*(_DWORD *)v7 + 188), "dash");
  v24 = v43;
  if ( !v23 )
  {
    update_rate_ideal();
    goto LABEL_18;
  }
  if ( opt_algo != 5 )
  {
LABEL_18:
    v25 = v24 * 100.0;
    goto LABEL_19;
  }
  v25 = v20 * v43 * 100.0;
LABEL_19:
  sub_12D09C((__int64)v25);
  v26 = json_real();
  json_object_set_new(v9, "rate_ideal", v26);
  v27 = BUFX_strdup((char *)v44);
  json_object_set_new(v9, "rate_unit", v27);
  v28 = json_integer(v40);
  json_object_set_new(v9, "hw_all", v28);
  v29 = json_integer(*(__int64 *)&dword_164FF8);
  json_object_set_new(v9, "bestshare", v29);
  v30 = json_array();
  if ( v30 && off_163320 )
  {
    v31 = (char **)&off_163320;
    do
    {
      v32 = json_object();
      v33 = BUFX_strdup(*v31);
      json_object_set_new(v32, "type", v33);
      ((void (__fastcall *)(_DWORD *, char **))v31[1])(v32, v31);
      json_array_append_new(v30, v32);
      v34 = v31[6];
      v31 += 6;
    }
    while ( v34 );
  }
  json_object_set_new(v9, "status", v30);
  json_array_append_new(v8, v9);
  json_object_set_new(a1, "SUMMARY", v8);
  if ( v42 > 0 )
  {
    free(v5);
    free(ptr);
  }
  return 0;
}
