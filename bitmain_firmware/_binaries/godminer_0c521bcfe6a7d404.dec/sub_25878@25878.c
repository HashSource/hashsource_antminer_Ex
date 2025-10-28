int __fastcall sub_25878(int a1, const char **a2)
{
  int v2; // r4
  int all_created_runtime; // r7
  int v5; // r0
  int v6; // r2
  int v7; // r5
  void *v8; // r0
  double v9; // d8
  __int64 v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r0
  int v15; // r9
  int v16; // r5
  int v17; // r3
  int v18; // r0
  int v19; // r0
  const char *v20; // r2
  char *v21; // r1
  int v22; // r9
  int appended; // r0
  char *v24; // r10
  _QWORD *v25; // r3
  float *v26; // r8
  int v27; // r0
  int v28; // t1
  int v29; // r7
  int v30; // r0
  int v31; // r0
  int v32; // r5
  float *v33; // r11
  float v34; // s14
  __int64 v35; // r0
  int v36; // r0
  _QWORD *v38; // r6
  char *v39; // r0
  _DWORD *v40; // r7
  char *v41; // r8
  int v42; // t1
  bool v43; // cc
  unsigned __int64 v44; // r6
  double v45; // d0
  int v46; // r0
  int v47; // [sp+14h] [bp-1048h]
  int v48; // [sp+18h] [bp-1044h]
  int v49; // [sp+2Ch] [bp-1030h]
  _QWORD *v50; // [sp+30h] [bp-102Ch]
  char *ptr; // [sp+38h] [bp-1024h]
  int v53; // [sp+3Ch] [bp-1020h]
  int v54; // [sp+44h] [bp-1018h] BYREF
  char s[4]; // [sp+48h] [bp-1014h] BYREF
  int v56; // [sp+4Ch] [bp-1010h]
  _DWORD v57[2]; // [sp+50h] [bp-100Ch] BYREF
  double v58[512]; // [sp+58h] [bp-1004h] BYREF

  v2 = 0;
  v54 = 0;
  *(_DWORD *)s = 0;
  v57[0] = 0;
  v56 = 0;
  v57[1] = 0;
  all_created_runtime = get_all_created_runtime(&v54);
  v5 = frontend_runtime_instance();
  if ( a2 )
  {
    v7 = v5;
    sub_23CB8(a1, a2, v6);
    v8 = sub_23DD4(a1);
    if ( v54 > 0 )
    {
      v50 = malloc(216 * v54);
      v38 = v50;
      v39 = (char *)malloc(4 * v54);
      ptr = v39;
      if ( v54 > 0 )
      {
        v40 = (_DWORD *)(all_created_runtime - 4);
        v41 = v39 - 4;
        do
        {
          v42 = v40[1];
          ++v40;
          read_status_from_monitor(v38, v42);
          ++v2;
          v38 += 27;
          v43 = v54 <= v2;
          *((_DWORD *)v41 + 1) = *(_DWORD *)(*v40 + 224);
          v41 += 4;
        }
        while ( !v43 );
      }
      v44 = v50[26];
      v45 = *((double *)v50 + 6);
      if ( v44 > 0x18 )
        LODWORD(v44) = 24;
      v47 = v44;
      v8 = (void *)format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v58, v57);
      v9 = v45;
    }
    else
    {
      ptr = 0;
      v50 = 0;
      v47 = 0;
      v9 = 1.0;
    }
    v10 = json_array(v8);
    v53 = v10;
    v49 = json_object(v10, HIDWORD(v10), v11, v12);
    if ( !v54 )
    {
      format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v58, v57);
      v9 = 1.0;
    }
    v13 = json_string(v57);
    v14 = json_object_set_new(v49, "unit", v13);
    v15 = json_array(v14);
    if ( v47 )
    {
      v16 = 15;
      do
      {
        v17 = v16;
        *(_DWORD *)s = 0;
        v16 += 15;
        v56 = 0;
        snprintf(s, 8u, "%dmin", v17);
        v18 = json_string(s);
        json_array_append_new(v15, v18);
      }
      while ( v16 != 15 * (v47 + 1) );
    }
    v19 = json_object_set_new(v49, "xAxis", v15);
    v48 = json_array(v19);
    if ( v54 > 0 )
    {
      v20 = "name";
      v21 = "data";
      v22 = 0;
      appended = 4 * v47;
      v24 = ptr - 4;
      v25 = v50;
      v26 = (float *)(v50 + 13);
      do
      {
        v27 = json_object(appended, v21, v20, v25);
        v28 = *((_DWORD *)v24 + 1);
        v24 += 4;
        *(_DWORD *)s = 0;
        v56 = 0;
        v29 = v27;
        snprintf(s, 8u, "chain%d", v28);
        v30 = json_string(s);
        v31 = json_object_set_new(v29, "name", v30);
        v32 = json_array(v31);
        if ( v47 )
        {
          v33 = v26;
          do
          {
            v34 = *v33++;
            v58[0] = v34 * v9;
            v35 = sub_12E980(LODWORD(v58[0]), HIDWORD(v58[0]));
            v36 = json_integer(v35, HIDWORD(v35));
            json_array_append_new(v32, v36);
          }
          while ( &v26[v47] != v33 );
        }
        ++v22;
        json_object_set_new(v29, "data", v32);
        appended = json_array_append_new(v48, v29);
        v25 = (_QWORD *)v54;
        v26 += 54;
      }
      while ( v54 > v22 );
    }
    json_object_set_new(v49, "series", v48);
    json_array_append_new(v53, v49);
    json_object_set_new(a1, "RATE", v53);
    if ( v54 > 0 )
    {
      free(ptr);
      free(v50);
    }
    return 0;
  }
  else
  {
    V_LOCK(v5);
    v46 = logfmt_raw((int)v58, 0x1000u);
    V_UNLOCK(v46);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/api_new.c",
      140,
      "get_rate",
      8,
      966,
      100,
      v58);
    return -2147483646;
  }
}
