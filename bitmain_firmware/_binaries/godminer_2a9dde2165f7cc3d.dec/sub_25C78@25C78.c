int __fastcall sub_25C78(int a1, int a2)
{
  void *v4; // r0
  bool v5; // zf
  int v6; // r5
  void *v7; // r0
  int appended; // r0
  char *v9; // r2
  int v10; // r1
  __int64 v11; // kr00_8
  int v12; // r2
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  double v21; // d7
  __int64 v22; // r0
  int v23; // r0
  int v24; // r0
  double v25; // d5
  double v26; // d7
  __int64 v27; // r0
  int v28; // r0
  int v29; // r5
  int v30; // r4
  int v31; // r0
  int v32; // r0
  int v33; // r2
  int *v34; // r3
  int v35; // r1
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r3
  bool v49; // cc
  unsigned int v50; // r0
  int v51; // r0
  double *v52; // r8
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  __int64 v57; // r0
  int v58; // r0
  int v59; // r0
  __int64 v60; // r0
  int v61; // r0
  int v62; // r0
  __int64 v63; // r0
  int v64; // r0
  int v65; // r0
  __int64 v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v72; // r0
  int v73; // [sp+1Ch] [bp-1140h]
  int v75; // [sp+34h] [bp-1128h] BYREF
  int v76; // [sp+38h] [bp-1124h]
  int v77; // [sp+3Ch] [bp-1120h]
  char v78[4]; // [sp+40h] [bp-111Ch] BYREF
  int v79; // [sp+44h] [bp-1118h]
  int v80; // [sp+48h] [bp-1114h]
  int v81; // [sp+4Ch] [bp-1110h]
  int v82; // [sp+50h] [bp-110Ch]
  int v83; // [sp+54h] [bp-1108h]
  char s[128]; // [sp+58h] [bp-1104h] BYREF
  char v85[128]; // [sp+D8h] [bp-1084h] BYREF
  _BYTE v86[4100]; // [sp+158h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = memset(v85, 0, sizeof(v85));
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  v76 = 0;
  v77 = 0;
  v75 = 0;
  *(_DWORD *)v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  if ( v5 )
  {
    v6 = -2147483646;
    V_LOCK(v4);
    v72 = logfmt_raw((int)v86, 0x1000u);
    V_UNLOCK(v72);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/api_new.c",
      140,
      "get_pools_old",
      13,
      1250,
      100,
      v86);
  }
  else
  {
    v6 = total_pools;
    if ( total_pools )
    {
      v7 = sub_23EE4(a1, 1, 7, *(const char **)(a2 + 8));
      appended = json_array(v7);
      v73 = appended;
      if ( total_pools > 0 )
      {
        v9 = "%s";
        v10 = -1851608123;
        v11 = 0;
        do
        {
          v29 = *(_DWORD *)(pools + 4 * v11);
          v30 = json_object(appended, v10, v9, pools);
          v31 = json_integer(v11, HIDWORD(v11));
          json_object_set_new(v30, "POOL", v31);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(_DWORD *)(v29 + 12));
          v32 = json_string(s);
          json_object_set_new(v30, "URL", v32);
          v33 = *(unsigned __int8 *)(v29 + 1904);
          v75 = 0;
          v76 = 0;
          v77 = 0;
          if ( v33 )
            LOWORD(v34) = -3600;
          else
            LOWORD(v34) = -3592;
          HIWORD(v34) = 18;
          v35 = v34[1];
          v75 = *v34;
          if ( v33 )
            LOBYTE(v76) = v35;
          else
            LOWORD(v76) = v35;
          v36 = json_string(&v75);
          json_object_set_new(v30, "Status", v36);
          v37 = json_integer(*(_DWORD *)(v29 + 4), *(int *)(v29 + 4) >> 31);
          json_object_set_new(v30, "Priority", v37);
          v38 = json_integer(*(_DWORD *)(v29 + 1636), *(int *)(v29 + 1636) >> 31);
          json_object_set_new(v30, "Quota", v38);
          v39 = json_string("N");
          json_object_set_new(v30, "Long Poll", v39);
          v40 = json_integer(*(_DWORD *)(v29 + 1632), 0);
          json_object_set_new(v30, "Getworks", v40);
          v41 = json_integer(*(_DWORD *)(v29 + 1928), *(_DWORD *)(v29 + 1932));
          json_object_set_new(v30, "Accepted", v41);
          v42 = json_integer(*(_DWORD *)(v29 + 1936), *(_DWORD *)(v29 + 1940));
          json_object_set_new(v30, "Rejected", v42);
          v43 = json_integer(*(_DWORD *)(v29 + 1944), 0);
          json_object_set_new(v30, "Discarded", v43);
          v44 = json_integer(*(_DWORD *)(v29 + 1640), 0);
          json_object_set_new(v30, "Stale", v44);
          v45 = json_integer(*(_DWORD *)(v29 + 1948), 0);
          json_object_set_new(v30, "Get Failures", v45);
          v46 = json_integer(*(_DWORD *)(v29 + 1952), 0);
          json_object_set_new(v30, "Remote Failures", v46);
          memset(v85, 0, sizeof(v85));
          snprintf(v85, 0x80u, "%s", *(_DWORD *)(v29 + 16));
          v47 = json_string(v85);
          json_object_set_new(v30, "User", v47);
          v48 = *(_DWORD *)(v29 + 1616);
          *(_DWORD *)v78 = 0;
          v79 = 0;
          v49 = v48 <= 0;
          v80 = 0;
          if ( v48 <= 0 )
            LOWORD(v48) = 48;
          v81 = 0;
          v82 = 0;
          v83 = 0;
          if ( v49 )
          {
            *(_WORD *)v78 = v48;
          }
          else
          {
            v50 = time(0) - *(_DWORD *)(v29 + 1616);
            snprintf(v78, 0x18u, "%d:%d:%d", v50 / 0xE10, v50 % 0xE10 / 0x3C, v50 % 0xE10 % 0x3C);
          }
          v51 = json_string(v78);
          json_object_set_new(v30, "Last Share Time", v51);
          sprintf((char *)(v29 + 1976), "%8.4f", *(double *)(v29 + 1808));
          v52 = (double *)(v29 + 1968);
          v53 = json_string(v29 + 1976);
          json_object_set_new(v30, "Diff", v53);
          v54 = json_integer(*(_DWORD *)(v29 + 1992), *(_DWORD *)(v29 + 1996));
          json_object_set_new(v30, "Diff1 Shares", v54);
          v55 = json_string("");
          json_object_set_new(v30, "Proxy Type", v55);
          v56 = json_string("");
          json_object_set_new(v30, "Proxy", v56);
          v57 = sub_12E970(
                  COERCE_UNSIGNED_INT64(*(double *)(v29 + 1960) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v29 + 1960) * 100.0)));
          v58 = sub_12E61C(v57, HIDWORD(v57));
          v59 = json_real(v58);
          json_object_set_new(v30, "Difficulty Accepted", v59);
          v60 = sub_12E970(COERCE_UNSIGNED_INT64(*v52 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v52 * 100.0)));
          v61 = sub_12E61C(v60, HIDWORD(v60));
          v62 = json_real(v61);
          json_object_set_new(v30, "Difficulty Rejected", v62);
          v63 = sub_12E970(
                  COERCE_UNSIGNED_INT64(*(double *)(v29 + 1816) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v29 + 1816) * 100.0)));
          v64 = sub_12E61C(v63, HIDWORD(v63));
          v65 = json_real(v64);
          json_object_set_new(v30, "Difficulty Stale", v65);
          v66 = sub_12E970(
                  COERCE_UNSIGNED_INT64(*(double *)(v29 + 1624) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v29 + 1624) * 100.0)));
          v67 = sub_12E61C(v66, HIDWORD(v66));
          v68 = json_real(v67);
          v69 = json_object_set_new(v30, "Last Share Difficulty", v68);
          if ( *(_BYTE *)(v29 + 28) )
            v12 = ((int (*)(void))json_true)();
          else
            v12 = json_false(v69);
          v13 = json_object_set_new(v30, "Has Stratum", v12);
          v14 = json_true(v13);
          json_object_set_new(v30, "Stratum Active", v14);
          v15 = json_string("");
          v16 = json_object_set_new(v30, "Stratum URL", v15);
          v17 = json_false(v16);
          v18 = json_object_set_new(v30, "Has GBT", v17);
          v19 = json_real(v18);
          v20 = json_object_set_new(v30, "Best Share", v19);
          v21 = *(double *)(v29 + 1968) + *(double *)(v29 + 1960) + *(double *)(v29 + 1816);
          if ( v21 != 0.0 )
          {
            v22 = sub_12E970(
                    COERCE_UNSIGNED_INT64(*v52 / v21 * 100.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(*v52 / v21 * 100.0)));
            v20 = sub_12E61C(v22, HIDWORD(v22));
          }
          v23 = json_real(v20);
          v24 = json_object_set_new(v30, "Pool Rejected%", v23);
          v25 = *(double *)(v29 + 1816);
          v26 = *(double *)(v29 + 1960) + *v52 + v25;
          if ( v26 != 0.0 )
          {
            v27 = sub_12E970(
                    COERCE_UNSIGNED_INT64(v25 / v26 * 100.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(v25 / v26 * 100.0)));
            v24 = sub_12E61C(v27, HIDWORD(v27));
          }
          v28 = json_real(v24);
          json_object_set_new(v30, "Pool Stale%%", v28);
          appended = json_array_append_new(v73, v30);
          ++v11;
        }
        while ( total_pools > (int)v11 );
      }
      v6 = 0;
      json_object_set_new(a1, "POOLS", v73);
      v70 = json_integer(1, 0);
      json_object_set_new(a1, "id", v70);
    }
    else
    {
      sub_23EE4(a1, 0, 8, "No pools");
    }
  }
  return v6;
}
