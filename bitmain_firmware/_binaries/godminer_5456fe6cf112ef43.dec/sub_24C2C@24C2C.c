int __fastcall sub_24C2C(int a1, int a2)
{
  void *v4; // r0
  bool v5; // zf
  int v6; // r5
  void *v7; // r0
  char *appended; // r0
  __int64 v9; // kr00_8
  int v10; // r2
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  double v19; // d5
  double v20; // d7
  __int64 v21; // r0
  int v22; // r0
  int v23; // r0
  double v24; // d7
  __int64 v25; // r0
  int v26; // r0
  int v27; // r5
  int v28; // r4
  int v29; // r0
  int v30; // r0
  int v31; // r2
  int *v32; // r3
  int v33; // r1
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
  int v44; // r0
  int v45; // r0
  int v46; // r3
  bool v47; // cc
  time_t v48; // r0
  unsigned int v49; // r0
  int v50; // r0
  double *v51; // r8
  double *v52; // r9
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
  int v73; // [sp+24h] [bp-1140h]
  int v75; // [sp+3Ch] [bp-1128h] BYREF
  int v76; // [sp+40h] [bp-1124h]
  int v77; // [sp+44h] [bp-1120h]
  char v78[4]; // [sp+48h] [bp-111Ch] BYREF
  int v79; // [sp+4Ch] [bp-1118h]
  int v80; // [sp+50h] [bp-1114h]
  int v81; // [sp+54h] [bp-1110h]
  int v82; // [sp+58h] [bp-110Ch]
  int v83; // [sp+5Ch] [bp-1108h]
  char s[128]; // [sp+60h] [bp-1104h] BYREF
  char v85[128]; // [sp+E0h] [bp-1084h] BYREF
  _BYTE v86[4100]; // [sp+160h] [bp-1004h] BYREF

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
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_pools_old",
      13,
      1045,
      100,
      v86);
  }
  else
  {
    v6 = total_pools;
    if ( total_pools )
    {
      v7 = sub_235C8(a1, 1, 7, *(const char **)(a2 + 8));
      v73 = json_array(v7);
      if ( total_pools > 0 )
      {
        appended = "";
        v9 = 0;
        do
        {
          v27 = *(_DWORD *)(pools + 4 * v9);
          v28 = json_object(appended);
          v29 = json_integer(v9, HIDWORD(v9));
          json_object_set_new(v28, "POOL", v29);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(_DWORD *)(v27 + 8));
          v30 = json_string(s);
          json_object_set_new(v28, "URL", v30);
          v31 = *(unsigned __int8 *)(v27 + 2072);
          v75 = 0;
          v76 = 0;
          v77 = 0;
          if ( v31 )
            LOWORD(v32) = -9132;
          else
            LOWORD(v32) = -9124;
          HIWORD(v32) = 18;
          v33 = v32[1];
          v75 = *v32;
          if ( v31 )
            LOBYTE(v76) = v33;
          else
            LOWORD(v76) = v33;
          v34 = json_string(&v75);
          json_object_set_new(v28, "Status", v34);
          v35 = json_integer(*(_DWORD *)(v27 + 4), *(int *)(v27 + 4) >> 31);
          json_object_set_new(v28, "Priority", v35);
          v36 = json_integer(*(_DWORD *)(v27 + 1804), *(int *)(v27 + 1804) >> 31);
          json_object_set_new(v28, "Quota", v36);
          v37 = json_string("N");
          json_object_set_new(v28, "Long Poll", v37);
          v38 = json_integer(*(_DWORD *)(v27 + 1800), 0);
          json_object_set_new(v28, "Getworks", v38);
          v39 = json_integer(*(_DWORD *)(v27 + 2096), *(_DWORD *)(v27 + 2100));
          json_object_set_new(v28, "Accepted", v39);
          v40 = json_integer(*(_DWORD *)(v27 + 2104), *(_DWORD *)(v27 + 2108));
          json_object_set_new(v28, "Rejected", v40);
          v41 = json_integer(*(_DWORD *)(v27 + 2112), 0);
          json_object_set_new(v28, "Discarded", v41);
          v42 = json_integer(*(_DWORD *)(v27 + 1808), 0);
          json_object_set_new(v28, "Stale", v42);
          v43 = json_integer(*(_DWORD *)(v27 + 2116), 0);
          json_object_set_new(v28, "Get Failures", v43);
          v44 = json_integer(*(_DWORD *)(v27 + 2120), 0);
          json_object_set_new(v28, "Remote Failures", v44);
          memset(v85, 0, sizeof(v85));
          snprintf(v85, 0x80u, "%s", *(_DWORD *)(v27 + 12));
          v45 = json_string(v85);
          json_object_set_new(v28, "User", v45);
          v46 = *(_DWORD *)(v27 + 1784);
          *(_DWORD *)v78 = 0;
          v79 = 0;
          v47 = v46 <= 0;
          v80 = 0;
          if ( v46 <= 0 )
            LOWORD(v46) = 48;
          v81 = 0;
          v82 = 0;
          v83 = 0;
          if ( v47 )
          {
            *(_WORD *)v78 = v46;
          }
          else
          {
            v48 = time(0);
            v49 = (v48 - *(_DWORD *)(v27 + 1784)) & ~((v48 - *(_DWORD *)(v27 + 1784)) >> 31);
            snprintf(v78, 0x18u, "%d:%02d:%02d", v49 / 0xE10, v49 % 0xE10 / 0x3C, v49 % 0xE10 % 0x3C);
          }
          v50 = json_string(v78);
          json_object_set_new(v28, "Last Share Time", v50);
          v51 = (double *)(v27 + 1984);
          v52 = (double *)(v27 + 2128);
          sprintf((char *)(v27 + 2144), "%8.4f", *(double *)(v27 + 1976));
          v53 = json_string(v27 + 2144);
          json_object_set_new(v28, "Diff", v53);
          v54 = json_integer(*(_DWORD *)(v27 + 2160), *(_DWORD *)(v27 + 2164));
          json_object_set_new(v28, "Diff1 Shares", v54);
          v55 = json_string("");
          json_object_set_new(v28, "Proxy Type", v55);
          v56 = json_string("");
          json_object_set_new(v28, "Proxy", v56);
          v57 = sub_12D578(COERCE_UNSIGNED_INT64(*v52 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v52 * 100.0)));
          v58 = sub_12D224(v57, HIDWORD(v57));
          v59 = json_real(v58);
          json_object_set_new(v28, "Difficulty Accepted", v59);
          v60 = sub_12D578(
                  COERCE_UNSIGNED_INT64(*(double *)(v27 + 2136) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v27 + 2136) * 100.0)));
          v61 = sub_12D224(v60, HIDWORD(v60));
          v62 = json_real(v61);
          json_object_set_new(v28, "Difficulty Rejected", v62);
          v63 = sub_12D578(COERCE_UNSIGNED_INT64(*v51 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v51 * 100.0)));
          v64 = sub_12D224(v63, HIDWORD(v63));
          v65 = json_real(v64);
          json_object_set_new(v28, "Difficulty Stale", v65);
          v66 = sub_12D578(
                  COERCE_UNSIGNED_INT64(*(double *)(v27 + 1792) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v27 + 1792) * 100.0)));
          v67 = sub_12D224(v66, HIDWORD(v66));
          v68 = json_real(v67);
          v69 = json_object_set_new(v28, "Last Share Difficulty", v68);
          if ( *(_BYTE *)(v27 + 24) )
            v10 = ((int (*)(void))json_true)();
          else
            v10 = json_false(v69);
          v11 = json_object_set_new(v28, "Has Stratum", v10);
          v12 = json_true(v11);
          json_object_set_new(v28, "Stratum Active", v12);
          v13 = json_string("");
          v14 = json_object_set_new(v28, "Stratum URL", v13);
          v15 = json_false(v14);
          v16 = json_object_set_new(v28, "Has GBT", v15);
          v17 = json_real(v16);
          v18 = json_object_set_new(v28, "Best Share", v17);
          v19 = *(double *)(v27 + 2136);
          v20 = v19 + *v52 + *v51;
          if ( v20 != 0.0 )
          {
            v21 = sub_12D578(
                    COERCE_UNSIGNED_INT64(v19 / v20 * 100.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(v19 / v20 * 100.0)));
            v18 = sub_12D224(v21, HIDWORD(v21));
          }
          v22 = json_real(v18);
          v23 = json_object_set_new(v28, "Pool Rejected%", v22);
          v24 = *v52 + *(double *)(v27 + 2136) + *v51;
          if ( v24 != 0.0 )
          {
            v25 = sub_12D578(
                    COERCE_UNSIGNED_INT64(*v51 / v24 * 100.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(*v51 / v24 * 100.0)));
            v23 = sub_12D224(v25, HIDWORD(v25));
          }
          v26 = json_real(v23);
          json_object_set_new(v28, "Pool Stale%%", v26);
          appended = (char *)json_array_append_new(v73, v28);
          ++v9;
        }
        while ( total_pools > (int)v9 );
      }
      v6 = 0;
      json_object_set_new(a1, "POOLS", v73);
      v70 = json_integer(1, 0);
      json_object_set_new(a1, "id", v70);
    }
    else
    {
      sub_235C8(a1, 0, 8, "No pools");
    }
  }
  return v6;
}
