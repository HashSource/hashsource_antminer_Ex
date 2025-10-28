int __fastcall sub_2820C(_DWORD *a1, const char **a2)
{
  float v2; // s0
  bool v5; // zf
  __int64 v6; // kr00_8
  double v7; // d7
  bool v8; // cc
  __int64 v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  int v13; // r3
  bool v14; // cc
  time_t v15; // r0
  unsigned int v16; // lr
  char *v17; // r0
  int v18; // r5
  _DWORD *v19; // r4
  _DWORD *v20; // r0
  double *v21; // r9
  char *v22; // r0
  char *v23; // r0
  int v24; // r2
  int *v25; // r3
  int v26; // r1
  char *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  char *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v38; // [sp+1Ch] [bp-1148h]
  char v40[4]; // [sp+34h] [bp-1130h] BYREF
  int v41; // [sp+38h] [bp-112Ch]
  int v42; // [sp+3Ch] [bp-1128h] BYREF
  int v43; // [sp+40h] [bp-1124h]
  int v44; // [sp+44h] [bp-1120h]
  char v45[4]; // [sp+48h] [bp-111Ch] BYREF
  int v46; // [sp+4Ch] [bp-1118h]
  int v47; // [sp+50h] [bp-1114h]
  int v48; // [sp+54h] [bp-1110h]
  int v49; // [sp+58h] [bp-110Ch]
  int v50; // [sp+5Ch] [bp-1108h]
  char s[128]; // [sp+60h] [bp-1104h] BYREF
  char v52[128]; // [sp+E0h] [bp-1084h] BYREF
  char v53[4100]; // [sp+160h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v52, 0, sizeof(v52));
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  v43 = 0;
  v44 = 0;
  v42 = 0;
  *(_DWORD *)v40 = 0;
  *(_DWORD *)v45 = 0;
  v41 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, "%s: input bad api param", "get_pools");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_pools",
      9,
      504,
      100,
      v53);
    return -2147483646;
  }
  else
  {
    sub_238AC(a1, a2);
    sub_23468(a1);
    v38 = json_array();
    get_total_nonce_rate();
    if ( total_pools > 0 )
    {
      v6 = 0;
      do
      {
        v18 = *(_DWORD *)(pools + 4 * v6);
        if ( v18 )
        {
          v19 = json_object();
          v20 = json_integer(v6);
          v21 = (double *)(v18 + 2128);
          json_object_set_new(v19, "index", v20);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v18 + 8));
          v22 = BUFX_strdup(s);
          json_object_set_new(v19, "url", v22);
          memset(v52, 0, sizeof(v52));
          snprintf(v52, 0x80u, "%s", *(const char **)(v18 + 12));
          v23 = BUFX_strdup(v52);
          json_object_set_new(v19, "user", v23);
          v24 = *(unsigned __int8 *)(v18 + 2064);
          v43 = 0;
          v42 = 0;
          v44 = 0;
          if ( v24 )
            LOWORD(v25) = -7916;
          else
            LOWORD(v25) = -9516;
          HIWORD(v25) = 18;
          v26 = v25[1];
          v42 = *v25;
          if ( v24 )
            LOBYTE(v43) = v26;
          else
            LOWORD(v43) = v26;
          v27 = BUFX_strdup((char *)&v42);
          json_object_set_new(v19, "status", v27);
          v28 = json_integer(*(int *)(v18 + 4));
          json_object_set_new(v19, "priority", v28);
          v29 = json_integer(*(unsigned int *)(v18 + 1792));
          json_object_set_new(v19, "getworks", v29);
          v30 = json_integer(*(_QWORD *)(v18 + 2088));
          json_object_set_new(v19, "accepted", v30);
          v31 = json_integer(*(_QWORD *)(v18 + 2096));
          json_object_set_new(v19, "rejected", v31);
          v32 = json_integer(*(unsigned int *)(v18 + 2104));
          json_object_set_new(v19, "discarded", v32);
          v33 = json_integer(*(unsigned int *)(v18 + 1800));
          json_object_set_new(v19, "stale", v33);
          *(_DWORD *)v40 = 0;
          v41 = 0;
          snprintf(v40, 8u, "%s", (const char *)(v18 + 2136));
          v34 = BUFX_strdup(v40);
          json_object_set_new(v19, "diff", v34);
          v35 = json_integer(*(_QWORD *)(v18 + 2152));
          json_object_set_new(v19, "diff1", v35);
          v36 = json_integer((__int64)*(double *)(v18 + 2120));
          LODWORD(v9) = json_object_set_new(v19, "diffa", v36);
          if ( opt_algo == 5 )
          {
            v7 = (double)(int)((float)(1.0 - v2) * *(double *)(v18 + 2120));
            v8 = *v21 <= v7;
            if ( *v21 <= v7 )
              v9 = 0;
            else
              v7 = *v21 - v7;
            if ( !v8 )
              v9 = (int)v7;
          }
          else
          {
            v9 = (__int64)*v21;
          }
          v10 = json_integer(v9);
          json_object_set_new(v19, "diffr", v10);
          v11 = json_integer((__int64)*(double *)(v18 + 1976));
          json_object_set_new(v19, "diffs", v11);
          v12 = json_integer((__int64)*(double *)(v18 + 1784));
          json_object_set_new(v19, "lsdiff", v12);
          v13 = *(_DWORD *)(v18 + 1776);
          *(_DWORD *)v45 = 0;
          v46 = 0;
          v14 = v13 <= 0;
          v47 = 0;
          if ( v13 <= 0 )
            LOWORD(v13) = 48;
          v48 = 0;
          v49 = 0;
          v50 = 0;
          if ( v14 )
          {
            *(_WORD *)v45 = v13;
          }
          else
          {
            v15 = time(0);
            v16 = (v15 - *(_DWORD *)(v18 + 1776)) & ~((v15 - *(_DWORD *)(v18 + 1776)) >> 31);
            snprintf(v45, 0x18u, "%d:%02d:%02d", v16 / 0xE10, v16 % 0xE10 / 0x3C, v16 % 0xE10 % 0x3C);
          }
          v17 = BUFX_strdup(v45);
          json_object_set_new(v19, "lstime", v17);
          json_array_append_new(v38, v19);
        }
        ++v6;
      }
      while ( total_pools > (int)v6 );
    }
    json_object_set_new(a1, "POOLS", v38);
    return 0;
  }
}
