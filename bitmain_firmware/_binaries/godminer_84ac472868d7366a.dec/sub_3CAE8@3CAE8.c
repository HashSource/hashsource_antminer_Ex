bool __fastcall sub_3CAE8(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _BOOL4 v7; // r9
  int v9; // r8
  _DWORD *v10; // r0
  const char *v11; // r6
  _DWORD *v12; // r0
  const char *v13; // r7
  _DWORD *v14; // r0
  char *v15; // r11
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  bool v21; // r9
  int valid; // r0
  int v23; // r0
  const char *v24; // r0
  int v25; // r0
  size_t v26; // r0
  int v27; // r0
  void *v28; // r10
  int v29; // r1
  int v30; // r2
  size_t v31; // r3
  int v32; // r3
  int i; // r9
  void *v34; // r10
  void *v35; // r0
  void *v36; // r0
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
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  signed int v53; // r6
  _DWORD *v54; // r0
  unsigned __int8 *v55; // r0
  int v56; // r10
  unsigned __int8 *v57; // r9
  void *v58; // r0
  int v59; // r0
  int v60; // r12
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  char *s; // [sp+18h] [bp-113Ch]
  const char *v68; // [sp+1Ch] [bp-1138h]
  const char *v69; // [sp+20h] [bp-1134h]
  const char *v70; // [sp+24h] [bp-1130h]
  _BOOL4 v71; // [sp+28h] [bp-112Ch]
  void *src; // [sp+2Ch] [bp-1128h]
  size_t n; // [sp+30h] [bp-1124h]
  unsigned int v74; // [sp+34h] [bp-1120h]
  size_t nmemb; // [sp+3Ch] [bp-1118h]
  int v76; // [sp+58h] [bp-10FCh]
  char v77[228]; // [sp+6Ch] [bp-10E8h] BYREF
  _BYTE v78[4100]; // [sp+150h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v9 = (int)json_array_size(v5);
  v10 = json_array_get(a3, 0);
  v11 = (const char *)json_string_value(v10);
  v12 = json_array_get(a3, 1u);
  v13 = (const char *)json_string_value(v12);
  v14 = json_array_get(a3, 2u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v16);
  v17 = json_array_get(a3, 5u);
  v68 = (const char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v70 = (const char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v69 = (const char *)json_string_value(v19);
  v20 = json_array_get(a3, 8u);
  v21 = (char)v20;
  if ( v20 )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v71 = v21;
  }
  else
  {
    v71 = 0;
  }
  valid = valid_ascii(v11);
  if ( valid )
  {
    valid = valid_hex(v13);
    if ( valid )
    {
      valid = valid_hex(v15);
      if ( valid )
      {
        valid = valid_hex(s);
        if ( valid )
        {
          valid = valid_hex(v68);
          if ( valid )
          {
            valid = valid_hex(v70);
            if ( valid )
            {
              valid = valid_hex(v69);
              if ( valid )
              {
                if ( a2 != (int *)-448 )
                {
                  v24 = (const char *)a2[400];
                  if ( v24 && !strcmp(v24, v11) )
                  {
                    V_LOCK(0);
                    v25 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v25);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/"
                      "godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                      159,
                      "stratum_notify_dash",
                      19,
                      88,
                      80,
                      v78);
                  }
                  v26 = strlen(v11);
                  if ( v26 > 0x1F )
                  {
                    V_LOCK(v26);
                    strlen(v11);
                    v27 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v27);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/"
                      "godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                      159,
                      "stratum_notify_dash",
                      19,
                      91,
                      80,
                      v78);
                  }
                  pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
                  v28 = (void *)a2[400];
                  a2[400] = (int)_strdup(v11);
                  if ( v28 )
                    free(v28);
                  snprintf((char *)a2 + 92, 0x41u, "%s", v13);
                  nmemb = strlen(v15) >> 1;
                  n = strlen(s) >> 1;
                  snprintf((char *)a2 + 324, 9u, "%s", v68);
                  snprintf((char *)a2 + 336, 9u, "%s", v70);
                  snprintf((char *)a2 + 348, 9u, "%s", v69);
                  v29 = a2[20];
                  v30 = a2[79];
                  v31 = nmemb + a2[18];
                  a2[78] = v31;
                  *((_BYTE *)a2 + 436) = v21;
                  v74 = n + v29 + v31;
                  a2[72] = v74;
                  if ( v30 > 0 )
                  {
                    v32 = a2[80];
                    for ( i = 0; i < v30; ++i )
                    {
                      if ( *(_DWORD *)(v32 + 4 * i) )
                      {
                        free(*(void **)(v32 + 4 * i));
                        v32 = a2[80];
                        v30 = a2[79];
                        *(_DWORD *)(v32 + 4 * i) = 0;
                      }
                    }
                  }
                  if ( v9 )
                  {
                    v53 = 0;
                    a2[80] = (int)realloc((void *)a2[80], 4 * v9);
                    while ( 1 )
                    {
                      v76 = 4 * v53;
                      if ( v9 <= v53 )
                        break;
                      v54 = json_array_get(v6, v53);
                      v55 = (unsigned __int8 *)json_string_value(v54);
                      v56 = a2[80];
                      v57 = v55;
                      v58 = malloc(0x20u);
                      *(_DWORD *)(v56 + 4 * v53) = v58;
                      if ( !v58 )
                      {
                        V_LOCK(0);
                        v62 = logfmt_raw((int)v78, 0x1000u);
                        V_UNLOCK(v62);
                        v58 = (void *)zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/"
                                        "tmp/release/build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                                        159,
                                        "stratum_notify_dash",
                                        19,
                                        119,
                                        100,
                                        v78);
                      }
                      if ( opt_protocol )
                      {
                        V_LOCK(v58);
                        v61 = logfmt_raw((int)v78, 0x1000u);
                        V_UNLOCK(v61);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/bu"
                          "ild/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                          159,
                          "stratum_notify_dash",
                          19,
                          121,
                          20,
                          v78);
                      }
                      ++v53;
                      if ( !hex2bin(*(_DWORD *)(a2[80] + v76), v57, 32) )
                      {
                        v7 = 0;
                        V_LOCK(0);
                        v59 = logfmt_raw((int)v78, 0x1000u);
                        V_UNLOCK(v59);
                        v60 = 126;
                        goto LABEL_56;
                      }
                    }
                  }
                  a2[79] = v9;
                  if ( v71 )
                    *((_QWORD *)a2 + 38) = 0;
                  snprintf(
                    v77,
                    0xE1u,
                    "%s%s%s%s%s%s%s",
                    (const char *)a2 + 324,
                    (const char *)a2 + 92,
                    "0000000000000000000000000000000000000000000000000000000000000000",
                    (const char *)a2 + 348,
                    (const char *)a2 + 336,
                    "00000000",
                    workpadding);
                  v7 = hex2bin((int)(a2 + 40), (unsigned __int8 *)v77, 112);
                  if ( v7 )
                  {
                    src = calloc(nmemb, 1u);
                    v7 = hex2bin((int)src, (unsigned __int8 *)v15, nmemb);
                    if ( v7 )
                    {
                      v34 = calloc(n, 1u);
                      v7 = hex2bin((int)v34, (unsigned __int8 *)s, n);
                      if ( v7 )
                      {
                        v35 = (void *)a2[73];
                        if ( v35 )
                          free(v35);
                        if ( (v74 & 3) != 0 )
                          v74 = (v74 & 0xFFFFFFFC) + 4;
                        v36 = calloc(v74, 1u);
                        a2[73] = (int)v36;
                        if ( !v36 )
                        {
                          V_LOCK(0);
                          v63 = logfmt_raw((int)v78, 0x1000u);
                          V_UNLOCK(v63);
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/"
                            "build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                            159,
                            "stratum_notify_dash",
                            19,
                            167,
                            100,
                            v78);
                        }
                        memcpy((void *)a2[73], src, nmemb);
                        memcpy((void *)(a2[73] + nmemb), (const void *)a2[19], a2[18]);
                        memcpy((void *)(a2[73] + a2[18] + a2[20] + nmemb), v34, n);
                        *((_QWORD *)a2 + 56) = *a2;
                      }
                      else
                      {
                        V_LOCK(0);
                        v65 = logfmt_raw((int)v78, 0x1000u);
                        V_UNLOCK(v65);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/bu"
                          "ild/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                          159,
                          "stratum_notify_dash",
                          19,
                          160,
                          100,
                          v78);
                      }
                    }
                    else
                    {
                      V_LOCK(0);
                      v66 = logfmt_raw((int)v78, 0x1000u);
                      V_UNLOCK(v66);
                      v34 = 0;
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                        159,
                        "stratum_notify_dash",
                        19,
                        153,
                        100,
                        v78);
                    }
                  }
                  else
                  {
                    V_LOCK(0);
                    v64 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v64);
                    v60 = 146;
LABEL_56:
                    v34 = 0;
                    src = 0;
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/"
                      "godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                      159,
                      "stratum_notify_dash",
                      19,
                      v60,
                      100,
                      v78);
                  }
                  v37 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
                  if ( opt_protocol )
                  {
                    V_LOCK(v37);
                    v38 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v38);
                    v39 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/"
                            "build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                            159,
                            "stratum_notify_dash",
                            19,
                            185,
                            20,
                            v78);
                    V_LOCK(v39);
                    v40 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v40);
                    v41 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/"
                            "build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                            159,
                            "stratum_notify_dash",
                            19,
                            186,
                            20,
                            v78);
                    V_LOCK(v41);
                    v42 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v42);
                    v43 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/"
                            "build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                            159,
                            "stratum_notify_dash",
                            19,
                            187,
                            20,
                            v78);
                    V_LOCK(v43);
                    v44 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v44);
                    v45 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/"
                            "build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                            159,
                            "stratum_notify_dash",
                            19,
                            188,
                            20,
                            v78);
                    V_LOCK(v45);
                    v46 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v46);
                    v47 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/"
                            "build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                            159,
                            "stratum_notify_dash",
                            19,
                            189,
                            20,
                            v78);
                    V_LOCK(v47);
                    v48 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v48);
                    v49 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/"
                            "build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                            159,
                            "stratum_notify_dash",
                            19,
                            190,
                            20,
                            v78);
                    V_LOCK(v49);
                    v50 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v50);
                    v51 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/"
                            "build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                            159,
                            "stratum_notify_dash",
                            19,
                            191,
                            20,
                            v78);
                    V_LOCK(v51);
                    v52 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v52);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/"
                      "godminer-origin_master/frontend/frontend_dash/frontend_dash.c",
                      159,
                      "stratum_notify_dash",
                      19,
                      192,
                      20,
                      v78);
                  }
                  if ( src )
                    free(src);
                  if ( v34 )
                    free(v34);
                  return v7;
                }
                return 0;
              }
            }
          }
        }
      }
    }
  }
  V_LOCK(valid);
  v23 = logfmt_raw((int)v78, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_dash/frontend_dash.c",
    159,
    "stratum_notify_dash",
    19,
    82,
    100,
    v78);
  return 0;
}
