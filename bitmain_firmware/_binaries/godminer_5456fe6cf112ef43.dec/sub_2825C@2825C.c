int __fastcall sub_2825C(int a1, const char **a2)
{
  float v2; // s0
  void *v5; // r0
  bool v6; // zf
  void *v7; // r0
  int appended; // r0
  __int64 v9; // kr00_8
  double v10; // d6
  double v11; // d7
  bool v12; // cc
  __int64 v13; // r0
  int v14; // r0
  __int64 v15; // r0
  int v16; // r0
  __int64 v17; // r0
  int v18; // r0
  int v19; // r3
  bool v20; // cc
  time_t v21; // r0
  unsigned int v22; // lr
  int v23; // r0
  int v24; // r5
  int v25; // r4
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r2
  int *v30; // r3
  int v31; // r1
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  __int64 v41; // r0
  int v42; // r0
  int v44; // r0
  int v45; // [sp+14h] [bp-1148h]
  char v47[4]; // [sp+2Ch] [bp-1130h] BYREF
  int v48; // [sp+30h] [bp-112Ch]
  int v49; // [sp+34h] [bp-1128h] BYREF
  int v50; // [sp+38h] [bp-1124h]
  int v51; // [sp+3Ch] [bp-1120h]
  char v52[4]; // [sp+40h] [bp-111Ch] BYREF
  int v53; // [sp+44h] [bp-1118h]
  int v54; // [sp+48h] [bp-1114h]
  int v55; // [sp+4Ch] [bp-1110h]
  int v56; // [sp+50h] [bp-110Ch]
  int v57; // [sp+54h] [bp-1108h]
  char s[128]; // [sp+58h] [bp-1104h] BYREF
  char v59[128]; // [sp+D8h] [bp-1084h] BYREF
  _BYTE v60[4100]; // [sp+158h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v5 = memset(v59, 0, sizeof(v59));
  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  v50 = 0;
  v51 = 0;
  v49 = 0;
  *(_DWORD *)v47 = 0;
  *(_DWORD *)v52 = 0;
  v48 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  if ( v6 )
  {
    V_LOCK(v5);
    v44 = logfmt_raw((int)v60, 0x1000u);
    V_UNLOCK(v44);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_pools",
      9,
      508,
      100,
      v60);
    return -2147483646;
  }
  else
  {
    sub_238FC(a1, a2);
    v7 = sub_234B8(a1);
    v45 = json_array(v7);
    get_total_nonce_rate();
    if ( total_pools > 0 )
    {
      appended = -2004318071;
      v9 = 0;
      do
      {
        v24 = *(_DWORD *)(pools + 4 * v9);
        if ( v24 )
        {
          v25 = json_object(appended);
          v26 = json_integer(v9, HIDWORD(v9));
          json_object_set_new(v25, "index", v26);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v24 + 8));
          v27 = json_string(s);
          json_object_set_new(v25, "url", v27);
          memset(v59, 0, sizeof(v59));
          snprintf(v59, 0x80u, "%s", *(const char **)(v24 + 12));
          v28 = json_string(v59);
          json_object_set_new(v25, "user", v28);
          v29 = *(unsigned __int8 *)(v24 + 2072);
          v50 = 0;
          v49 = 0;
          v51 = 0;
          if ( v29 )
            LOWORD(v30) = -7524;
          else
            LOWORD(v30) = -9124;
          HIWORD(v30) = 18;
          v31 = v30[1];
          v49 = *v30;
          if ( v29 )
            LOBYTE(v50) = v31;
          else
            LOWORD(v50) = v31;
          v32 = json_string(&v49);
          json_object_set_new(v25, "status", v32);
          v33 = json_integer(*(_DWORD *)(v24 + 4), *(int *)(v24 + 4) >> 31);
          json_object_set_new(v25, "priority", v33);
          v34 = json_integer(*(_DWORD *)(v24 + 1800), 0);
          json_object_set_new(v25, "getworks", v34);
          v35 = json_integer(*(_DWORD *)(v24 + 2096), *(_DWORD *)(v24 + 2100));
          json_object_set_new(v25, "accepted", v35);
          v36 = json_integer(*(_DWORD *)(v24 + 2104), *(_DWORD *)(v24 + 2108));
          json_object_set_new(v25, "rejected", v36);
          v37 = json_integer(*(_DWORD *)(v24 + 2112), 0);
          json_object_set_new(v25, "discarded", v37);
          v38 = json_integer(*(_DWORD *)(v24 + 1808), 0);
          json_object_set_new(v25, "stale", v38);
          *(_DWORD *)v47 = 0;
          v48 = 0;
          snprintf(v47, 8u, "%s", (const char *)(v24 + 2144));
          v39 = json_string(v47);
          json_object_set_new(v25, "diff", v39);
          v40 = json_integer(*(_DWORD *)(v24 + 2160), *(_DWORD *)(v24 + 2164));
          json_object_set_new(v25, "diff1", v40);
          v41 = sub_12D578(*(_DWORD *)(v24 + 2128), *(_DWORD *)(v24 + 2132));
          v42 = json_integer(v41, HIDWORD(v41));
          LODWORD(v13) = json_object_set_new(v25, "diffa", v42);
          if ( opt_algo == 5 )
          {
            v10 = *(double *)(v24 + 2136);
            v11 = (double)(int)((float)(1.0 - v2) * *(double *)(v24 + 2128));
            v12 = v10 <= v11;
            if ( v10 <= v11 )
              v13 = 0;
            else
              v11 = v10 - v11;
            if ( !v12 )
              v13 = (int)v11;
          }
          else
          {
            v13 = sub_12D578(*(_DWORD *)(v24 + 2136), *(_DWORD *)(v24 + 2140));
          }
          v14 = json_integer(v13, HIDWORD(v13));
          json_object_set_new(v25, "diffr", v14);
          v15 = sub_12D578(*(_DWORD *)(v24 + 1984), *(_DWORD *)(v24 + 1988));
          v16 = json_integer(v15, HIDWORD(v15));
          json_object_set_new(v25, "diffs", v16);
          v17 = sub_12D578(*(_DWORD *)(v24 + 1792), *(_DWORD *)(v24 + 1796));
          v18 = json_integer(v17, HIDWORD(v17));
          json_object_set_new(v25, "lsdiff", v18);
          v19 = *(_DWORD *)(v24 + 1784);
          *(_DWORD *)v52 = 0;
          v53 = 0;
          v20 = v19 <= 0;
          v54 = 0;
          if ( v19 <= 0 )
            LOWORD(v19) = 48;
          v55 = 0;
          v56 = 0;
          v57 = 0;
          if ( v20 )
          {
            *(_WORD *)v52 = v19;
          }
          else
          {
            v21 = time(0);
            v22 = (v21 - *(_DWORD *)(v24 + 1784)) & ~((v21 - *(_DWORD *)(v24 + 1784)) >> 31);
            snprintf(v52, 0x18u, "%d:%02d:%02d", v22 / 0xE10, v22 % 0xE10 / 0x3C, v22 % 0xE10 % 0x3C);
          }
          v23 = json_string(v52);
          json_object_set_new(v25, "lstime", v23);
          appended = json_array_append_new(v45, v25);
        }
        ++v9;
      }
      while ( total_pools > (int)v9 );
    }
    json_object_set_new(a1, "POOLS", v45);
    return 0;
  }
}
