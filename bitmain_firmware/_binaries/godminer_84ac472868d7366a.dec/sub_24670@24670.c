int __fastcall sub_24670(int a1, const char **a2)
{
  int v2; // r4
  int all_created_runtime; // r7
  int v5; // r0
  int v6; // r5
  void *v7; // r0
  double v8; // d8
  int v9; // r0
  int v10; // r0
  int v11; // r9
  int v12; // r5
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r9
  int appended; // r0
  char *v18; // r11
  float *v19; // r8
  int v20; // r0
  int v21; // t1
  int v22; // r7
  int v23; // r0
  int v24; // r0
  int v25; // r5
  float *v26; // r10
  float v27; // s14
  __int64 v28; // r0
  int v29; // r0
  _QWORD *v31; // r6
  char *v32; // r0
  _DWORD *v33; // r7
  char *v34; // r8
  int v35; // t1
  bool v36; // cc
  unsigned __int64 v37; // r10
  double v38; // d0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // [sp+14h] [bp-1048h]
  int v44; // [sp+18h] [bp-1044h]
  int v45; // [sp+2Ch] [bp-1030h]
  _QWORD *v46; // [sp+30h] [bp-102Ch]
  char *ptr; // [sp+38h] [bp-1024h]
  int v49; // [sp+3Ch] [bp-1020h]
  int v50; // [sp+44h] [bp-1018h] BYREF
  char s[4]; // [sp+48h] [bp-1014h] BYREF
  int v52; // [sp+4Ch] [bp-1010h]
  _DWORD v53[2]; // [sp+50h] [bp-100Ch] BYREF
  double v54[512]; // [sp+58h] [bp-1004h] BYREF

  v2 = 0;
  v50 = 0;
  *(_DWORD *)s = 0;
  v53[0] = 0;
  v52 = 0;
  v53[1] = 0;
  all_created_runtime = get_all_created_runtime(&v50);
  v5 = frontend_runtime_instance();
  if ( !a2 )
  {
    V_LOCK(v5);
    v42 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v42);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_rate",
      8,
      797,
      100,
      v54);
    return -2147483646;
  }
  v6 = v5;
  sub_23984(a1, a2);
  v7 = sub_23540(a1);
  if ( v50 > 0 )
  {
    v46 = malloc(208 * v50);
    v31 = v46;
    v32 = (char *)malloc(4 * v50);
    ptr = v32;
    if ( v50 > 0 )
    {
      v33 = (_DWORD *)(all_created_runtime - 4);
      v34 = v32 - 4;
      do
      {
        v35 = v33[1];
        ++v33;
        read_status_from_monitor(v31, v35);
        ++v2;
        v31 += 26;
        v36 = v50 <= v2;
        *((_DWORD *)v34 + 1) = *(_DWORD *)(*v33 + 140);
        v34 += 4;
      }
      while ( !v36 );
    }
    v37 = v46[25];
    v38 = *((double *)v46 + 6);
    if ( v37 > 0x18 )
      LODWORD(v37) = 24;
    v43 = v37;
    v39 = format_hashrate_double(*(_DWORD *)(v6 + 84), v54, v53, v46);
    v8 = v38;
    v49 = json_array(v39);
    v45 = json_object(v49);
    if ( v50 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v49 = json_array(v7);
  v45 = json_object(v49);
  v43 = v50;
  if ( !v50 )
  {
    ptr = 0;
    v46 = 0;
LABEL_5:
    format_hashrate_double(*(_DWORD *)(v6 + 84), v54, v53, 0);
    v8 = 1.0;
LABEL_6:
    v9 = json_string(v53);
    v10 = json_object_set_new(v45, "unit", v9);
    v11 = json_array(v10);
    if ( v43 )
    {
      v12 = 15;
      do
      {
        v13 = v12;
        *(_DWORD *)s = 0;
        v12 += 15;
        v52 = 0;
        snprintf(s, 8u, "%dmin", v13);
        v14 = json_string(s);
        json_array_append_new(v11, v14);
      }
      while ( 15 * (v43 + 1) != v12 );
    }
    goto LABEL_9;
  }
  ptr = 0;
  v40 = json_string(v53);
  v46 = 0;
  v8 = 1.0;
  v41 = json_object_set_new(v45, "unit", v40);
  v43 = 0;
  v11 = json_array(v41);
LABEL_9:
  v15 = json_object_set_new(v45, "xAxis", v11);
  v44 = json_array(v15);
  if ( v50 > 0 )
  {
    v16 = 0;
    appended = 4 * v43;
    v18 = ptr - 4;
    v19 = (float *)(v46 + 12);
    do
    {
      v20 = json_object(appended);
      v21 = *((_DWORD *)v18 + 1);
      v18 += 4;
      *(_DWORD *)s = 0;
      v52 = 0;
      v22 = v20;
      snprintf(s, 8u, "chain%d", v21);
      v23 = json_string(s);
      v24 = json_object_set_new(v22, "name", v23);
      v25 = json_array(v24);
      if ( v43 )
      {
        v26 = v19;
        do
        {
          v27 = *v26++;
          v54[0] = v27 * v8;
          v28 = sub_12D6E0(LODWORD(v54[0]), HIDWORD(v54[0]));
          v29 = json_integer(v28, HIDWORD(v28));
          json_array_append_new(v25, v29);
        }
        while ( v26 != &v19[v43] );
      }
      ++v16;
      json_object_set_new(v22, "data", v25);
      appended = json_array_append_new(v44, v22);
      v19 += 52;
    }
    while ( v50 > v16 );
  }
  json_object_set_new(v45, "series", v44);
  json_array_append_new(v49, v45);
  json_object_set_new(a1, "RATE", v49);
  if ( v50 > 0 )
  {
    free(ptr);
    free(v46);
  }
  return 0;
}
