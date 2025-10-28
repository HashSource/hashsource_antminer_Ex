int __fastcall sub_26204(int a1, const char **a2)
{
  float v2; // s0
  void *v5; // r0
  bool v6; // zf
  void *v7; // r0
  const char *v8; // r2
  int v9; // r1
  int appended; // r0
  __int64 v11; // kr00_8
  double v12; // d7
  double v13; // d6
  bool v14; // cc
  __int64 v15; // r0
  int v16; // r0
  __int64 v17; // r0
  int v18; // r0
  __int64 v19; // r0
  int v20; // r0
  int v21; // r3
  bool v22; // cc
  unsigned int v23; // lr
  int v24; // r0
  int v25; // r5
  int v26; // r4
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r2
  int *v31; // r3
  int v32; // r1
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  bool v44; // zf
  int v46; // r0
  int v47; // [sp+1Ch] [bp-1150h]
  int v49; // [sp+34h] [bp-1138h] BYREF
  int v50; // [sp+38h] [bp-1134h]
  int v51; // [sp+3Ch] [bp-1130h]
  char v52[4]; // [sp+40h] [bp-112Ch] BYREF
  int v53; // [sp+44h] [bp-1128h]
  int v54; // [sp+48h] [bp-1124h]
  int v55; // [sp+4Ch] [bp-1120h]
  char v56[4]; // [sp+50h] [bp-111Ch] BYREF
  int v57; // [sp+54h] [bp-1118h]
  int v58; // [sp+58h] [bp-1114h]
  int v59; // [sp+5Ch] [bp-1110h]
  int v60; // [sp+60h] [bp-110Ch]
  int v61; // [sp+64h] [bp-1108h]
  _DWORD s[32]; // [sp+68h] [bp-1104h] BYREF
  char v63[128]; // [sp+E8h] [bp-1084h] BYREF
  _BYTE v64[4100]; // [sp+168h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v5 = memset(v63, 0, sizeof(v63));
  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  v50 = 0;
  v51 = 0;
  v49 = 0;
  *(_DWORD *)v52 = 0;
  *(_DWORD *)v56 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  if ( v6 )
  {
    V_LOCK(v5);
    v46 = logfmt_raw((int)v64, 0x1000u);
    V_UNLOCK(v46);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_pools",
      9,
      600,
      100,
      v64);
    return -2147483646;
  }
  else
  {
    sub_22C30(a1, a2, (int)v52);
    v7 = sub_22D4C(a1);
    v47 = json_array(v7);
    get_total_nonce_rate();
    if ( total_pools > 0 )
    {
      v8 = "index";
      v9 = -1851608123;
      appended = -2004318071;
      v11 = 0;
      do
      {
        v25 = *(_DWORD *)(pools + 4 * v11);
        if ( v25 )
        {
          v26 = json_object(appended, v9, v8, pools);
          v27 = json_integer(v11, HIDWORD(v11));
          json_object_set_new(v26, "index", v27);
          memset(&s[1], 0, 0x7Cu);
          strcpy((char *)s, "TEST");
          v28 = json_string(s);
          json_object_set_new(v26, "url", v28);
          memset(&v63[4], 0, 0x7Cu);
          strcpy(v63, "TEST");
          v29 = json_string(v63);
          json_object_set_new(v26, "user", v29);
          v30 = *(unsigned __int8 *)(v25 + 1896);
          v50 = 0;
          v49 = 0;
          v51 = 0;
          if ( v30 )
            LOWORD(v31) = 12064;
          else
            LOWORD(v31) = 11252;
          HIWORD(v31) = 18;
          v32 = v31[1];
          v49 = *v31;
          if ( v30 )
            LOBYTE(v50) = v32;
          else
            LOWORD(v50) = v32;
          v33 = json_string(&v49);
          json_object_set_new(v26, "status", v33);
          v34 = json_integer(*(_DWORD *)(v25 + 4), *(int *)(v25 + 4) >> 31);
          json_object_set_new(v26, "priority", v34);
          v35 = json_integer(*(_DWORD *)(v25 + 1624), 0);
          json_object_set_new(v26, "getworks", v35);
          v36 = json_integer(*(_DWORD *)(v25 + 1920), *(_DWORD *)(v25 + 1924));
          json_object_set_new(v26, "accepted", v36);
          v37 = json_integer(*(_DWORD *)(v25 + 1928), *(_DWORD *)(v25 + 1932));
          json_object_set_new(v26, "rejected", v37);
          v38 = json_integer(*(_DWORD *)(v25 + 1936), 0);
          json_object_set_new(v26, "discarded", v38);
          v39 = json_integer(*(_DWORD *)(v25 + 1632), 0);
          json_object_set_new(v26, "stale", v39);
          *(_DWORD *)v52 = 0;
          v53 = 0;
          v54 = 0;
          v55 = 0;
          snprintf(v52, 0x10u, "%s", (const char *)(v25 + 1968));
          v40 = json_string(v52);
          json_object_set_new(v26, "diff", v40);
          v41 = json_integer(*(_DWORD *)(v25 + 1984), *(_DWORD *)(v25 + 1988));
          v42 = json_object_set_new(v26, "diff1", v41);
          v43 = json_real(v42);
          LODWORD(v15) = json_object_set_new(v26, "diffa", v43);
          v44 = opt_algo == 9;
          if ( opt_algo != 9 )
            v44 = opt_algo == 6;
          if ( v44 )
          {
            v12 = *(double *)(v25 + 1960);
            v13 = (double)(int)((v12 + *(double *)(v25 + 1952)) * (float)(1.0 - v2));
            v14 = v12 <= v13;
            if ( v12 <= v13 )
              v15 = 0;
            else
              v12 = v12 - v13;
            if ( !v14 )
              v15 = (int)v12;
          }
          else
          {
            v15 = sub_122368(*(_DWORD *)(v25 + 1960), *(_DWORD *)(v25 + 1964));
          }
          v16 = json_integer(v15, HIDWORD(v15));
          json_object_set_new(v26, "diffr", v16);
          v17 = sub_122368(*(_DWORD *)(v25 + 1808), *(_DWORD *)(v25 + 1812));
          v18 = json_integer(v17, HIDWORD(v17));
          json_object_set_new(v26, "diffs", v18);
          v19 = sub_122368(*(_DWORD *)(v25 + 1616), *(_DWORD *)(v25 + 1620));
          v20 = json_integer(v19, HIDWORD(v19));
          json_object_set_new(v26, "lsdiff", v20);
          v21 = *(_DWORD *)(v25 + 1608);
          *(_DWORD *)v56 = 0;
          v57 = 0;
          v22 = v21 <= 0;
          v58 = 0;
          if ( v21 <= 0 )
            LOWORD(v21) = 48;
          v59 = 0;
          v60 = 0;
          v61 = 0;
          if ( v22 )
          {
            *(_WORD *)v56 = v21;
          }
          else
          {
            v23 = time(0) - *(_DWORD *)(v25 + 1608);
            snprintf(v56, 0x18u, "%d:%d:%d", v23 / 0xE10, v23 % 0xE10 / 0x3C, v23 % 0xE10 % 0x3C);
          }
          v24 = json_string(v56);
          json_object_set_new(v26, "lstime", v24);
          appended = json_array_append_new(v47, v26);
        }
        ++v11;
      }
      while ( total_pools > (int)v11 );
    }
    json_object_set_new(a1, "POOLS", v47);
    return 0;
  }
}
