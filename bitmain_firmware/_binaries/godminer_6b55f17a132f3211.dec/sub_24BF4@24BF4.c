int __fastcall sub_24BF4(int a1, int a2)
{
  void *v4; // r0
  _BOOL4 v5; // r6
  int v6; // r5
  void *v7; // r0
  const char *v8; // r2
  int v9; // r1
  int appended; // r0
  int v11; // r7
  int v12; // r2
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  double v21; // d5
  double v22; // d7
  __int64 v23; // r0
  int v24; // r0
  int v25; // r0
  double v26; // d7
  __int64 v27; // r0
  int v28; // r0
  int v29; // r5
  int v30; // r4
  int v31; // r0
  int v32; // r0
  int v33; // r3
  bool v34; // zf
  int *v35; // r3
  int v36; // r1
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
  int v48; // r0
  int v49; // r3
  bool v50; // cc
  unsigned int v51; // lr
  int v52; // r0
  double *v53; // r9
  double *v54; // r11
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  __int64 v59; // r0
  int v60; // r0
  int v61; // r0
  __int64 v62; // r0
  int v63; // r0
  int v64; // r0
  __int64 v65; // r0
  int v66; // r0
  int v67; // r0
  __int64 v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r0
  int v72; // r0
  int v74; // r0
  const char *v75; // [sp+18h] [bp-114Ch]
  int v76; // [sp+24h] [bp-1140h]
  int v78; // [sp+3Ch] [bp-1128h] BYREF
  int v79; // [sp+40h] [bp-1124h]
  int v80; // [sp+44h] [bp-1120h]
  char v81[4]; // [sp+48h] [bp-111Ch] BYREF
  int v82; // [sp+4Ch] [bp-1118h]
  int v83; // [sp+50h] [bp-1114h]
  int v84; // [sp+54h] [bp-1110h]
  int v85; // [sp+58h] [bp-110Ch]
  int v86; // [sp+5Ch] [bp-1108h]
  _DWORD s[32]; // [sp+60h] [bp-1104h] BYREF
  char v88[128]; // [sp+E0h] [bp-1084h] BYREF
  _BYTE v89[4100]; // [sp+160h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = memset(v88, 0, sizeof(v88));
  v5 = a1 == 0;
  if ( !a2 )
    v5 = 1;
  v79 = 0;
  v80 = 0;
  v78 = 0;
  *(_DWORD *)v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  if ( v5 )
  {
    v6 = -2147483646;
    V_LOCK(v4);
    v74 = logfmt_raw((int)v89, 0x1000u);
    V_UNLOCK(v74);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_pools_old",
      13,
      1224,
      100,
      v89);
  }
  else
  {
    v6 = total_pools;
    if ( total_pools )
    {
      v7 = sub_22E5C(a1, 1, 7, *(const char **)(a2 + 8));
      v76 = json_array(v7);
      if ( total_pools > 0 )
      {
        v8 = "TEST";
        v9 = -1851608123;
        appended = -2004318071;
        v11 = 0;
        v75 = 0;
        do
        {
          v29 = *(_DWORD *)(pools + 4 * v11);
          v30 = json_object(appended, v9, v8, pools);
          v31 = json_integer(v11, v75);
          json_object_set_new(v30, "POOL", v31);
          memset(&s[1], 0, 0x7Cu);
          strcpy((char *)s, "TEST");
          v32 = json_string(s);
          json_object_set_new(v30, "URL", v32);
          v33 = *(unsigned __int8 *)(v29 + 1896);
          v78 = 0;
          v79 = 0;
          v34 = v33 == 0;
          v80 = 0;
          if ( v33 )
            LOWORD(v35) = 11244;
          else
            LOWORD(v35) = 11252;
          HIWORD(v35) = 18;
          v36 = v35[1];
          v78 = *v35;
          if ( v34 )
            LOWORD(v79) = v36;
          else
            LOBYTE(v79) = v36;
          v37 = json_string(&v78);
          json_object_set_new(v30, "Status", v37);
          v38 = json_integer(*(_DWORD *)(v29 + 4), *(int *)(v29 + 4) >> 31);
          json_object_set_new(v30, "Priority", v38);
          v39 = json_integer(*(_DWORD *)(v29 + 1628), *(int *)(v29 + 1628) >> 31);
          json_object_set_new(v30, "Quota", v39);
          v40 = json_string("N");
          json_object_set_new(v30, "Long Poll", v40);
          v41 = json_integer(*(_DWORD *)(v29 + 1624), 0);
          json_object_set_new(v30, "Getworks", v41);
          v42 = json_integer(*(_DWORD *)(v29 + 1920), *(_DWORD *)(v29 + 1924));
          json_object_set_new(v30, "Accepted", v42);
          v43 = json_integer(*(_DWORD *)(v29 + 1928), *(_DWORD *)(v29 + 1932));
          json_object_set_new(v30, "Rejected", v43);
          v44 = json_integer(*(_DWORD *)(v29 + 1936), 0);
          json_object_set_new(v30, "Discarded", v44);
          v45 = json_integer(*(_DWORD *)(v29 + 1632), 0);
          json_object_set_new(v30, "Stale", v45);
          v46 = json_integer(*(_DWORD *)(v29 + 1940), 0);
          json_object_set_new(v30, "Get Failures", v46);
          v47 = json_integer(*(_DWORD *)(v29 + 1944), 0);
          json_object_set_new(v30, "Remote Failures", v47);
          memset(&v88[4], 0, 0x7Cu);
          strcpy(v88, "TEST");
          v48 = json_string(v88);
          json_object_set_new(v30, "User", v48);
          v49 = *(_DWORD *)(v29 + 1608);
          *(_DWORD *)v81 = 0;
          v82 = 0;
          v50 = v49 <= 0;
          v83 = 0;
          if ( v49 <= 0 )
            LOWORD(v49) = 48;
          v84 = 0;
          v85 = 0;
          v86 = 0;
          if ( v50 )
          {
            *(_WORD *)v81 = v49;
          }
          else
          {
            v51 = time(0) - *(_DWORD *)(v29 + 1608);
            snprintf(v81, 0x18u, "%d:%d:%d", v51 / 0xE10, v51 % 0xE10 / 0x3C, v51 % 0xE10 % 0x3C);
          }
          v52 = json_string(v81);
          json_object_set_new(v30, "Last Share Time", v52);
          v53 = (double *)(v29 + 1808);
          v54 = (double *)(v29 + 1952);
          sprintf((char *)(v29 + 1968), "%8.4f", *(double *)(v29 + 1800));
          v55 = json_string(v29 + 1968);
          json_object_set_new(v30, "Diff", v55);
          v56 = json_integer(*(_DWORD *)(v29 + 1984), *(_DWORD *)(v29 + 1988));
          json_object_set_new(v30, "Diff1 Shares", v56);
          v57 = json_string("");
          json_object_set_new(v30, "Proxy Type", v57);
          v58 = json_string("");
          json_object_set_new(v30, "Proxy", v58);
          v59 = sub_122368(COERCE_UNSIGNED_INT64(*v54 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v54 * 100.0)));
          v60 = sub_122014(v59, HIDWORD(v59));
          v61 = json_real(v60);
          json_object_set_new(v30, "Difficulty Accepted", v61);
          v62 = sub_122368(
                  COERCE_UNSIGNED_INT64(*(double *)(v29 + 1960) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v29 + 1960) * 100.0)));
          v63 = sub_122014(v62, HIDWORD(v62));
          v64 = json_real(v63);
          json_object_set_new(v30, "Difficulty Rejected", v64);
          v65 = sub_122368(COERCE_UNSIGNED_INT64(*v53 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(*v53 * 100.0)));
          v66 = sub_122014(v65, HIDWORD(v65));
          v67 = json_real(v66);
          json_object_set_new(v30, "Difficulty Stale", v67);
          v68 = sub_122368(
                  COERCE_UNSIGNED_INT64(*(double *)(v29 + 1616) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v29 + 1616) * 100.0)));
          v69 = sub_122014(v68, HIDWORD(v68));
          v70 = json_real(v69);
          v71 = json_object_set_new(v30, "Last Share Difficulty", v70);
          if ( *(_BYTE *)(v29 + 24) )
            v12 = ((int (*)(void))json_true)();
          else
            v12 = json_false(v71);
          v13 = json_object_set_new(v30, "Has Stratum", v12);
          v14 = json_true(v13);
          json_object_set_new(v30, "Stratum Active", v14);
          v15 = json_string("");
          v16 = json_object_set_new(v30, "Stratum URL", v15);
          v17 = json_false(v16);
          v18 = json_object_set_new(v30, "Has GBT", v17);
          v19 = json_real(v18);
          v20 = json_object_set_new(v30, "Best Share", v19);
          v21 = *(double *)(v29 + 1960);
          v22 = v21 + *v54 + *v53;
          if ( v22 != 0.0 )
          {
            v23 = sub_122368(
                    COERCE_UNSIGNED_INT64(v21 / v22 * 100.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(v21 / v22 * 100.0)));
            v20 = sub_122014(v23, HIDWORD(v23));
          }
          v24 = json_real(v20);
          v25 = json_object_set_new(v30, "Pool Rejected%", v24);
          v26 = *v54 + *(double *)(v29 + 1960) + *v53;
          if ( v26 != 0.0 )
          {
            v27 = sub_122368(
                    COERCE_UNSIGNED_INT64(*v53 / v26 * 100.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(*v53 / v26 * 100.0)));
            v25 = sub_122014(v27, HIDWORD(v27));
          }
          v28 = json_real(v25);
          json_object_set_new(v30, "Pool Stale%%", v28);
          appended = json_array_append_new(v76, v30);
          v8 = (const char *)((__PAIR64__((unsigned int)v75, v11++) + 1) >> 32);
          v75 = v8;
        }
        while ( total_pools > v11 );
      }
      v6 = 0;
      json_object_set_new(a1, "POOLS", v76);
      v72 = json_integer(1, 0);
      json_object_set_new(a1, "id", v72);
    }
    else
    {
      sub_22E5C(a1, 0, 8, "No pools");
    }
  }
  return v6;
}
