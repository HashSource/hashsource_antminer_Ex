int __fastcall sub_24598(_DWORD *a1, const char **a2)
{
  int v2; // r4
  char *all_created_runtime; // r7
  int v5; // r0
  int v6; // r5
  double v7; // d8
  char *v8; // r0
  _DWORD *v9; // r9
  int v10; // r5
  int v11; // r3
  char *v12; // r0
  int v13; // r9
  char *v14; // r11
  float *v15; // r8
  _DWORD *v16; // r0
  int v17; // t1
  _DWORD *v18; // r7
  char *v19; // r0
  _DWORD *v20; // r5
  float *v21; // r10
  float v22; // s14
  _DWORD *v23; // r0
  char *v25; // r6
  char *v26; // r0
  char *v27; // r7
  char *v28; // r8
  int v29; // t1
  bool v30; // cc
  unsigned __int64 v31; // r10
  double v32; // d0
  char *v33; // r0
  int v34; // [sp+14h] [bp-1048h]
  _DWORD *v35; // [sp+18h] [bp-1044h]
  _DWORD *v36; // [sp+2Ch] [bp-1030h]
  _QWORD *v37; // [sp+30h] [bp-102Ch]
  char *ptr; // [sp+38h] [bp-1024h]
  _DWORD *v40; // [sp+3Ch] [bp-1020h]
  int v41; // [sp+44h] [bp-1018h] BYREF
  char s[4]; // [sp+48h] [bp-1014h] BYREF
  int v43; // [sp+4Ch] [bp-1010h]
  _DWORD v44[2]; // [sp+50h] [bp-100Ch] BYREF
  double v45[512]; // [sp+58h] [bp-1004h] BYREF

  v2 = 0;
  v41 = 0;
  *(_DWORD *)s = 0;
  v44[0] = 0;
  v43 = 0;
  v44[1] = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v41);
  v5 = frontend_runtime_instance();
  if ( !a2 )
  {
    V_LOCK();
    logfmt_raw((char *)v45, 0x1000u, 0, "%s: input bad api param", "get_rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_rate",
      8,
      793,
      100,
      v45);
    return -2147483646;
  }
  v6 = v5;
  sub_238AC(a1, a2);
  sub_23468(a1);
  if ( v41 > 0 )
  {
    v37 = malloc(208 * v41);
    v25 = (char *)v37;
    v26 = (char *)malloc(4 * v41);
    ptr = v26;
    if ( v41 > 0 )
    {
      v27 = all_created_runtime - 4;
      v28 = v26 - 4;
      do
      {
        v29 = *((_DWORD *)v27 + 1);
        v27 += 4;
        read_status_from_monitor(v25, v29);
        ++v2;
        v25 += 208;
        v30 = v41 <= v2;
        *((_DWORD *)v28 + 1) = *(_DWORD *)(*(_DWORD *)v27 + 140);
        v28 += 4;
      }
      while ( !v30 );
    }
    v31 = v37[25];
    v32 = *((double *)v37 + 6);
    if ( v31 > 0x18 )
      LODWORD(v31) = 24;
    v34 = v31;
    format_hashrate_double(*(const char **)(v6 + 84), v45, (char *)v44);
    v7 = v32;
    v40 = json_array();
    v36 = json_object();
    if ( v41 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v40 = json_array();
  v36 = json_object();
  v34 = v41;
  if ( !v41 )
  {
    ptr = 0;
    v37 = 0;
LABEL_5:
    format_hashrate_double(*(const char **)(v6 + 84), v45, (char *)v44);
    v7 = 1.0;
LABEL_6:
    v8 = BUFX_strdup((char *)v44);
    json_object_set_new(v36, "unit", v8);
    v9 = json_array();
    if ( v34 )
    {
      v10 = 15;
      do
      {
        v11 = v10;
        *(_DWORD *)s = 0;
        v10 += 15;
        v43 = 0;
        snprintf(s, 8u, "%dmin", v11);
        v12 = BUFX_strdup(s);
        json_array_append_new(v9, v12);
      }
      while ( 15 * (v34 + 1) != v10 );
    }
    goto LABEL_9;
  }
  ptr = 0;
  v33 = BUFX_strdup((char *)v44);
  v37 = 0;
  v7 = 1.0;
  json_object_set_new(v36, "unit", v33);
  v34 = 0;
  v9 = json_array();
LABEL_9:
  json_object_set_new(v36, "xAxis", v9);
  v35 = json_array();
  if ( v41 > 0 )
  {
    v13 = 0;
    v14 = ptr - 4;
    v15 = (float *)(v37 + 12);
    do
    {
      v16 = json_object();
      v17 = *((_DWORD *)v14 + 1);
      v14 += 4;
      *(_DWORD *)s = 0;
      v43 = 0;
      v18 = v16;
      snprintf(s, 8u, "chain%d", v17);
      v19 = BUFX_strdup(s);
      json_object_set_new(v18, "name", v19);
      v20 = json_array();
      if ( v34 )
      {
        v21 = v15;
        do
        {
          v22 = *v21++;
          v45[0] = v22 * v7;
          v23 = json_integer((__int64)v45[0]);
          json_array_append_new(v20, v23);
        }
        while ( v21 != &v15[v34] );
      }
      ++v13;
      json_object_set_new(v18, "data", v20);
      json_array_append_new(v35, v18);
      v15 += 52;
    }
    while ( v41 > v13 );
  }
  json_object_set_new(v36, "series", v35);
  json_array_append_new(v40, v36);
  json_object_set_new(a1, "RATE", v40);
  if ( v41 > 0 )
  {
    free(ptr);
    free(v37);
  }
  return 0;
}
