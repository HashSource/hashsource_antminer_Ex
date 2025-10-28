bool __fastcall sub_3DA04(int a1, int a2, _DWORD *a3)
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
  const char *v24; // r0
  size_t v25; // r0
  int v26; // r0
  void *v27; // r7
  int v28; // r1
  int v29; // r2
  size_t v30; // r3
  int v31; // r3
  int i; // r6
  void *v33; // r0
  void *v34; // r0
  int v35; // r5
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
  int v51; // r0
  signed int v52; // r7
  _DWORD *v53; // r0
  unsigned __int8 *v54; // r0
  int v55; // r6
  unsigned __int8 *v56; // r8
  void *v57; // r0
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
  int v69; // r0
  const char *v70; // [sp+1Ch] [bp-1140h]
  int ptr; // [sp+20h] [bp-113Ch]
  void *ptra; // [sp+20h] [bp-113Ch]
  const char *v73; // [sp+24h] [bp-1138h]
  const char *v74; // [sp+28h] [bp-1134h]
  _BOOL4 v75; // [sp+2Ch] [bp-1130h]
  void *src; // [sp+30h] [bp-112Ch]
  unsigned int v77; // [sp+34h] [bp-1128h]
  size_t n; // [sp+38h] [bp-1124h]
  size_t nmemb; // [sp+40h] [bp-111Ch]
  pthread_mutex_t *mutex; // [sp+54h] [bp-1108h]
  int v81; // [sp+68h] [bp-10F4h]
  char s[228]; // [sp+74h] [bp-10E8h] BYREF
  _BYTE v83[4100]; // [sp+158h] [bp-1004h] BYREF

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
  v70 = (const char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v74 = (const char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v73 = (const char *)json_string_value(v19);
  v20 = json_array_get(a3, 8u);
  v21 = (char)v20;
  if ( v20 )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v75 = v21;
  }
  else
  {
    v75 = 0;
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
          valid = valid_hex(v70);
          if ( valid )
          {
            valid = valid_hex(v74);
            if ( valid )
            {
              valid = valid_hex(v73);
              if ( valid )
              {
                settime_based_notify_ntime(v73);
                if ( a2 != -456 )
                {
                  v24 = *(const char **)(a2 + 1580);
                  if ( v24 && !strcmp(v24, v10) )
                  {
                    V_LOCK(0);
                    v65 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v65);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bu"
                      "ild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                      169,
                      "stratum_notify_dash",
                      19,
                      88,
                      80,
                      v83);
                  }
                  v25 = strlen(v10);
                  if ( v25 > 0x3F )
                  {
                    V_LOCK(v25);
                    strlen(v10);
                    v26 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v26);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bu"
                      "ild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                      169,
                      "stratum_notify_dash",
                      19,
                      91,
                      80,
                      v83);
                  }
                  mutex = (pthread_mutex_t *)(a2 + 1592);
                  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
                  v27 = *(void **)(a2 + 1580);
                  *(_DWORD *)(a2 + 1580) = _strdup(v10);
                  if ( v27 )
                    free(v27);
                  snprintf((char *)(a2 + 100), 0x41u, "%s", v12);
                  nmemb = strlen(v14) >> 1;
                  n = strlen(v16) >> 1;
                  snprintf((char *)(a2 + 332), 9u, "%s", v70);
                  snprintf((char *)(a2 + 344), 9u, "%s", v74);
                  snprintf((char *)(a2 + 356), 9u, "%s", v73);
                  v28 = *(_DWORD *)(a2 + 84);
                  v29 = *(_DWORD *)(a2 + 324);
                  v30 = nmemb + *(_DWORD *)(a2 + 76);
                  *(_DWORD *)(a2 + 320) = v30;
                  *(_BYTE *)(a2 + 444) = v21;
                  v77 = n + v28 + v30;
                  *(_DWORD *)(a2 + 296) = v77;
                  if ( v29 > 0 )
                  {
                    v31 = *(_DWORD *)(a2 + 328);
                    for ( i = 0; i < v29; ++i )
                    {
                      if ( *(_DWORD *)(v31 + 4 * i) )
                      {
                        free(*(void **)(v31 + 4 * i));
                        v31 = *(_DWORD *)(a2 + 328);
                        v29 = *(_DWORD *)(a2 + 324);
                        *(_DWORD *)(v31 + 4 * i) = 0;
                      }
                    }
                  }
                  if ( ptr )
                  {
                    *(_DWORD *)(a2 + 328) = realloc(*(void **)(a2 + 328), 4 * ptr);
                    v52 = 0;
                    while ( 1 )
                    {
                      v81 = 4 * v52;
                      if ( ptr <= v52 )
                        break;
                      v53 = json_array_get(v6, v52);
                      v54 = (unsigned __int8 *)json_string_value(v53);
                      v55 = *(_DWORD *)(a2 + 328);
                      v56 = v54;
                      v57 = malloc(0x20u);
                      *(_DWORD *)(v55 + 4 * v52) = v57;
                      if ( !v57 )
                      {
                        V_LOCK(0);
                        v59 = logfmt_raw((int)v83, 0x1000u);
                        V_UNLOCK(v59);
                        v60 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                                169,
                                "stratum_notify_dash",
                                19,
                                119,
                                100,
                                v83);
                        V_LOCK(v60);
                        v61 = logfmt_raw((int)v83, 0x1000u);
                        V_UNLOCK(v61);
                        v57 = (void *)zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildr"
                                        "oot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                                        169,
                                        "stratum_notify_dash",
                                        19,
                                        120,
                                        100,
                                        v83);
                      }
                      if ( opt_protocol )
                      {
                        V_LOCK(v57);
                        v58 = logfmt_raw((int)v83, 0x1000u);
                        V_UNLOCK(v58);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/releas"
                          "e/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                          169,
                          "stratum_notify_dash",
                          19,
                          123,
                          20,
                          v83);
                      }
                      ++v52;
                      if ( !hex2bin(*(_DWORD *)(*(_DWORD *)(a2 + 328) + v81), v56, 32) )
                      {
                        v7 = 0;
                        V_LOCK(0);
                        v62 = logfmt_raw((int)v83, 0x1000u);
                        V_UNLOCK(v62);
                        ptra = 0;
                        v63 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                                169,
                                "stratum_notify_dash",
                                19,
                                128,
                                100,
                                v83);
                        V_LOCK(v63);
                        v64 = logfmt_raw((int)v83, 0x1000u);
                        V_UNLOCK(v64);
                        src = 0;
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/releas"
                          "e/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                          169,
                          "stratum_notify_dash",
                          19,
                          129,
                          100,
                          v83);
                        goto LABEL_42;
                      }
                    }
                  }
                  *(_DWORD *)(a2 + 324) = ptr;
                  if ( v75 )
                    *(_QWORD *)(a2 + 312) = 0;
                  snprintf(
                    s,
                    0xE1u,
                    "%s%s%s%s%s%s%s",
                    (const char *)(a2 + 332),
                    (const char *)(a2 + 100),
                    "0000000000000000000000000000000000000000000000000000000000000000",
                    (const char *)(a2 + 356),
                    (const char *)(a2 + 344),
                    "00000000",
                    workpadding[0]);
                  v7 = hex2bin(a2 + 168, (unsigned __int8 *)s, 112);
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
                        v33 = *(void **)(a2 + 300);
                        if ( v33 )
                          free(v33);
                        if ( (v77 & 3) != 0 )
                          v77 = (v77 & 0xFFFFFFFC) + 4;
                        v34 = calloc(v77, 1u);
                        *(_DWORD *)(a2 + 300) = v34;
                        if ( !v34 )
                        {
                          V_LOCK(0);
                          v66 = logfmt_raw((int)v83, 0x1000u);
                          V_UNLOCK(v66);
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/rele"
                            "ase/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            169,
                            "stratum_notify_dash",
                            19,
                            170,
                            100,
                            v83);
                        }
                        v35 = a2 + 464;
                        memcpy(*(void **)(v35 - 164), src, nmemb);
                        memcpy(
                          (void *)(*(_DWORD *)(v35 - 164) + nmemb),
                          *(const void **)(v35 - 384),
                          *(_DWORD *)(v35 - 388));
                        memcpy(
                          (void *)(*(_DWORD *)(v35 - 164) + *(_DWORD *)(v35 - 388) + *(_DWORD *)(v35 - 380) + nmemb),
                          ptra,
                          n);
                        *(_QWORD *)(v35 - 8) = *(int *)(v35 - 464);
                      }
                      else
                      {
                        V_LOCK(0);
                        v67 = logfmt_raw((int)v83, 0x1000u);
                        V_UNLOCK(v67);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/releas"
                          "e/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                          169,
                          "stratum_notify_dash",
                          19,
                          163,
                          100,
                          v83);
                      }
                    }
                    else
                    {
                      V_LOCK(0);
                      v68 = logfmt_raw((int)v83, 0x1000u);
                      V_UNLOCK(v68);
                      ptra = 0;
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/"
                        "build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                        169,
                        "stratum_notify_dash",
                        19,
                        156,
                        100,
                        v83);
                    }
                  }
                  else
                  {
                    V_LOCK(0);
                    v69 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v69);
                    ptra = 0;
                    src = 0;
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bu"
                      "ild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                      169,
                      "stratum_notify_dash",
                      19,
                      149,
                      100,
                      v83);
                  }
LABEL_42:
                  v36 = pthread_mutex_unlock(mutex);
                  if ( opt_protocol )
                  {
                    V_LOCK(v36);
                    v37 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v37);
                    v38 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/rele"
                            "ase/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            169,
                            "stratum_notify_dash",
                            19,
                            188,
                            20,
                            v83);
                    V_LOCK(v38);
                    v39 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v39);
                    v40 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/rele"
                            "ase/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            169,
                            "stratum_notify_dash",
                            19,
                            189,
                            20,
                            v83);
                    V_LOCK(v40);
                    v41 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v41);
                    v42 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/rele"
                            "ase/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            169,
                            "stratum_notify_dash",
                            19,
                            190,
                            20,
                            v83);
                    V_LOCK(v42);
                    v43 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v43);
                    v44 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/rele"
                            "ase/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            169,
                            "stratum_notify_dash",
                            19,
                            191,
                            20,
                            v83);
                    V_LOCK(v44);
                    v45 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v45);
                    v46 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/rele"
                            "ase/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            169,
                            "stratum_notify_dash",
                            19,
                            192,
                            20,
                            v83);
                    V_LOCK(v46);
                    v47 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v47);
                    v48 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/rele"
                            "ase/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            169,
                            "stratum_notify_dash",
                            19,
                            193,
                            20,
                            v83);
                    V_LOCK(v48);
                    v49 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v49);
                    v50 = zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/rele"
                            "ase/build/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                            169,
                            "stratum_notify_dash",
                            19,
                            194,
                            20,
                            v83);
                    V_LOCK(v50);
                    v51 = logfmt_raw((int)v83, 0x1000u);
                    V_UNLOCK(v51);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bu"
                      "ild/godminer-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                      169,
                      "stratum_notify_dash",
                      19,
                      195,
                      20,
                      v83);
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
  v23 = logfmt_raw((int)v83, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_dash/frontend_dash.c",
    169,
    "stratum_notify_dash",
    19,
    80,
    100,
    v83);
  return 0;
}
