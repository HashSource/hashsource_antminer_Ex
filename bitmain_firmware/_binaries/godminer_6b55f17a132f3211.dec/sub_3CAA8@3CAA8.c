bool __fastcall sub_3CAA8(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _BOOL4 v7; // r6
  _DWORD *v9; // r0
  const char *v10; // r8
  _DWORD *v11; // r0
  const char *v12; // r10
  _DWORD *v13; // r0
  char *v14; // r9
  _DWORD *v15; // r0
  char *v16; // r11
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  bool v21; // r6
  int valid; // r0
  int v23; // r0
  const char *kind; // r0
  size_t v25; // r0
  int v26; // r0
  void *v27; // r7
  int owner; // r1
  int count; // r2
  size_t v30; // r3
  int v31; // r3
  int i; // r6
  void *v33; // r0
  void *v34; // r0
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
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  signed int v51; // r7
  _DWORD *v52; // r0
  unsigned __int8 *v53; // r0
  int v54; // r6
  unsigned __int8 *v55; // r8
  void *v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  const char *v69; // [sp+18h] [bp-1144h]
  int ptr; // [sp+1Ch] [bp-1140h]
  void *ptra; // [sp+1Ch] [bp-1140h]
  const char *v72; // [sp+20h] [bp-113Ch]
  const char *v73; // [sp+24h] [bp-1138h]
  _BOOL4 v74; // [sp+28h] [bp-1134h]
  void *src; // [sp+2Ch] [bp-1130h]
  unsigned int v76; // [sp+30h] [bp-112Ch]
  size_t n; // [sp+34h] [bp-1128h]
  size_t nmemb; // [sp+3Ch] [bp-1120h]
  int v79; // [sp+64h] [bp-10F8h]
  char s[228]; // [sp+74h] [bp-10E8h] BYREF
  _BYTE v81[4100]; // [sp+158h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  ptr = (int)json_array_size(v5);
  v9 = json_array_get(a3, 0);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 1u);
  v12 = (const char *)json_string_value(v11);
  v13 = json_array_get(a3, 2u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 3u);
  v16 = (char *)json_string_value(v15);
  v17 = json_array_get(a3, 5u);
  v69 = (const char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v73 = (const char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v72 = (const char *)json_string_value(v19);
  v20 = json_array_get(a3, 8u);
  v21 = (char)v20;
  if ( v20 )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v74 = v21;
  }
  else
  {
    v74 = 0;
  }
  valid = valid_ascii(v10);
  if ( valid )
  {
    valid = valid_hex(v12);
    if ( valid )
    {
      valid = valid_hex(v14);
      if ( valid )
      {
        valid = valid_hex(v16);
        if ( valid )
        {
          valid = valid_hex(v69);
          if ( valid )
          {
            valid = valid_hex(v73);
            if ( valid )
            {
              valid = valid_hex(v72);
              if ( valid )
              {
                settime_based_notify_ntime(v72);
                if ( a2 != (pthread_mutex_t *)-448 )
                {
                  kind = (const char *)a2[65].__kind;
                  if ( kind && !strcmp(kind, v10) )
                  {
                    V_LOCK(0);
                    v64 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v64);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/"
                      "godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                      165,
                      "stratum_notify_dash",
                      19,
                      88,
                      80,
                      v81);
                  }
                  v25 = strlen(v10);
                  if ( v25 > 0x3F )
                  {
                    V_LOCK(v25);
                    strlen(v10);
                    v26 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v26);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/"
                      "godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                      165,
                      "stratum_notify_dash",
                      19,
                      91,
                      80,
                      v81);
                  }
                  pthread_mutex_lock(a2 + 66);
                  v27 = (void *)a2[65].__kind;
                  a2[65].__kind = (int)_strdup(v10);
                  if ( v27 )
                    free(v27);
                  snprintf(&a2[3].__size[20], 0x41u, "%s", v12);
                  nmemb = strlen(v14) >> 1;
                  n = strlen(v16) >> 1;
                  snprintf(&a2[13].__size[12], 9u, "%s", v69);
                  snprintf((char *)&a2[14], 9u, "%s", v73);
                  snprintf(&a2[14].__size[12], 9u, "%s", v72);
                  owner = a2[3].__owner;
                  count = a2[13].__count;
                  v30 = nmemb + a2[3].__lock;
                  a2[13].__lock = v30;
                  a2[18].__size[4] = v21;
                  v76 = n + owner + v30;
                  a2[12].__lock = v76;
                  if ( count > 0 )
                  {
                    v31 = a2[13].__owner;
                    for ( i = 0; i < count; ++i )
                    {
                      if ( *(_DWORD *)(v31 + 4 * i) )
                      {
                        free(*(void **)(v31 + 4 * i));
                        v31 = a2[13].__owner;
                        count = a2[13].__count;
                        *(_DWORD *)(v31 + 4 * i) = 0;
                      }
                    }
                  }
                  if ( ptr )
                  {
                    a2[13].__owner = (int)realloc((void *)a2[13].__owner, 4 * ptr);
                    v51 = 0;
                    while ( 1 )
                    {
                      v79 = 4 * v51;
                      if ( ptr <= v51 )
                        break;
                      v52 = json_array_get(v6, v51);
                      v53 = (unsigned __int8 *)json_string_value(v52);
                      v54 = a2[13].__owner;
                      v55 = v53;
                      v56 = malloc(0x20u);
                      *(_DWORD *)(v54 + 4 * v51) = v56;
                      if ( !v56 )
                      {
                        V_LOCK(0);
                        v58 = logfmt_raw((int)v81, 0x1000u);
                        V_UNLOCK(v58);
                        v59 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/de"
                                "bug/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                                165,
                                "stratum_notify_dash",
                                19,
                                119,
                                100,
                                v81);
                        V_LOCK(v59);
                        v60 = logfmt_raw((int)v81, 0x1000u);
                        V_UNLOCK(v60);
                        v56 = (void *)zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroo"
                                        "t/tmp/debug/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                                        165,
                                        "stratum_notify_dash",
                                        19,
                                        120,
                                        100,
                                        v81);
                      }
                      if ( opt_protocol )
                      {
                        V_LOCK(v56);
                        v57 = logfmt_raw((int)v81, 0x1000u);
                        V_UNLOCK(v57);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/bu"
                          "ild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                          165,
                          "stratum_notify_dash",
                          19,
                          123,
                          20,
                          v81);
                      }
                      ++v51;
                      if ( !hex2bin(*(_DWORD *)(a2[13].__owner + v79), v55, 32) )
                      {
                        v7 = 0;
                        V_LOCK(0);
                        v61 = logfmt_raw((int)v81, 0x1000u);
                        V_UNLOCK(v61);
                        ptra = 0;
                        v62 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/de"
                                "bug/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                                165,
                                "stratum_notify_dash",
                                19,
                                128,
                                100,
                                v81);
                        V_LOCK(v62);
                        v63 = logfmt_raw((int)v81, 0x1000u);
                        V_UNLOCK(v63);
                        src = 0;
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/bu"
                          "ild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                          165,
                          "stratum_notify_dash",
                          19,
                          129,
                          100,
                          v81);
                        goto LABEL_42;
                      }
                    }
                  }
                  a2[13].__count = ptr;
                  if ( v74 )
                    *((_QWORD *)&a2[12].__align + 2) = 0;
                  snprintf(
                    s,
                    0xE1u,
                    "%s%s%s%s%s%s%s",
                    &a2[13].__size[12],
                    &a2[3].__size[20],
                    "0000000000000000000000000000000000000000000000000000000000000000",
                    &a2[14].__size[12],
                    (const char *)&a2[14],
                    "00000000",
                    workpadding);
                  v7 = hex2bin((int)&a2[6].__nusers, (unsigned __int8 *)s, 112);
                  if ( v7 )
                  {
                    src = calloc(nmemb, 1u);
                    v7 = hex2bin((int)src, (unsigned __int8 *)v14, nmemb);
                    if ( v7 )
                    {
                      ptra = calloc(n, 1u);
                      v7 = hex2bin((int)ptra, (unsigned __int8 *)v16, n);
                      if ( v7 )
                      {
                        v33 = (void *)a2[12].__count;
                        if ( v33 )
                          free(v33);
                        if ( (v76 & 3) != 0 )
                          v76 = (v76 & 0xFFFFFFFC) + 4;
                        v34 = calloc(v76, 1u);
                        a2[12].__count = (unsigned int)v34;
                        if ( !v34 )
                        {
                          V_LOCK(0);
                          v65 = logfmt_raw((int)v81, 0x1000u);
                          V_UNLOCK(v65);
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/"
                            "build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            165,
                            "stratum_notify_dash",
                            19,
                            170,
                            100,
                            v81);
                        }
                        memcpy((void *)a2[12].__count, src, nmemb);
                        memcpy((void *)(a2[12].__count + nmemb), (const void *)a2[3].__count, a2[3].__lock);
                        memcpy((void *)(a2[12].__count + a2[3].__lock + a2[3].__owner + nmemb), ptra, n);
                        *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
                      }
                      else
                      {
                        V_LOCK(0);
                        v66 = logfmt_raw((int)v81, 0x1000u);
                        V_UNLOCK(v66);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/bu"
                          "ild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                          165,
                          "stratum_notify_dash",
                          19,
                          163,
                          100,
                          v81);
                      }
                    }
                    else
                    {
                      V_LOCK(0);
                      v67 = logfmt_raw((int)v81, 0x1000u);
                      V_UNLOCK(v67);
                      ptra = 0;
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/buil"
                        "d/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                        165,
                        "stratum_notify_dash",
                        19,
                        156,
                        100,
                        v81);
                    }
                  }
                  else
                  {
                    V_LOCK(0);
                    v68 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v68);
                    ptra = 0;
                    src = 0;
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/"
                      "godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                      165,
                      "stratum_notify_dash",
                      19,
                      149,
                      100,
                      v81);
                  }
LABEL_42:
                  v35 = pthread_mutex_unlock(a2 + 66);
                  if ( opt_protocol )
                  {
                    V_LOCK(v35);
                    v36 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v36);
                    v37 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/"
                            "build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            165,
                            "stratum_notify_dash",
                            19,
                            188,
                            20,
                            v81);
                    V_LOCK(v37);
                    v38 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v38);
                    v39 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/"
                            "build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            165,
                            "stratum_notify_dash",
                            19,
                            189,
                            20,
                            v81);
                    V_LOCK(v39);
                    v40 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v40);
                    v41 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/"
                            "build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            165,
                            "stratum_notify_dash",
                            19,
                            190,
                            20,
                            v81);
                    V_LOCK(v41);
                    v42 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v42);
                    v43 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/"
                            "build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            165,
                            "stratum_notify_dash",
                            19,
                            191,
                            20,
                            v81);
                    V_LOCK(v43);
                    v44 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v44);
                    v45 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/"
                            "build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            165,
                            "stratum_notify_dash",
                            19,
                            192,
                            20,
                            v81);
                    V_LOCK(v45);
                    v46 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v46);
                    v47 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/"
                            "build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            165,
                            "stratum_notify_dash",
                            19,
                            193,
                            20,
                            v81);
                    V_LOCK(v47);
                    v48 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v48);
                    v49 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/"
                            "build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            165,
                            "stratum_notify_dash",
                            19,
                            194,
                            20,
                            v81);
                    V_LOCK(v49);
                    v50 = logfmt_raw((int)v81, 0x1000u);
                    V_UNLOCK(v50);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/"
                      "godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                      165,
                      "stratum_notify_dash",
                      19,
                      195,
                      20,
                      v81);
                  }
                  if ( src )
                    free(src);
                  if ( ptra )
                    free(ptra);
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
  v23 = logfmt_raw((int)v81, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/frontend/frontend_dash/frontend_dash.c",
    165,
    "stratum_notify_dash",
    19,
    80,
    100,
    v81);
  return 0;
}
