bool __fastcall sub_40528(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _BOOL4 v4; // r4
  _DWORD *v7; // r0
  const char *v8; // r5
  _DWORD *v9; // r0
  char *v10; // r6
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  char *v14; // r7
  _DWORD *v15; // r0
  char *v16; // r9
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  char *v19; // r10
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  int valid; // r0
  int v23; // r0
  const char *kind; // r0
  size_t v25; // r0
  int v26; // r0
  void *v27; // r4
  size_t v28; // r4
  size_t v29; // r0
  size_t v30; // r0
  size_t v31; // r4
  int *v32; // r9
  _BOOL4 v33; // r0
  int v34; // r3
  int v35; // r0
  pthread_mutex_t *v36; // r10
  size_t lock; // r2
  const void *count; // r1
  size_t v39; // r0
  size_t v40; // r7
  char *v41; // r0
  _BYTE *i; // r2
  char v43; // t1
  size_t v44; // r3
  char *v45; // r0
  _BYTE *j; // r2
  char v47; // t1
  size_t v48; // r3
  char *v49; // r0
  _BYTE *k; // r2
  char v51; // t1
  size_t v52; // r3
  _BYTE *v53; // r1
  _BYTE *v54; // r2
  char v55; // t1
  int *v56; // r1
  char *v57; // r2
  char v58; // t1
  char *v59; // r1
  signed int v60; // r2
  char v61; // t1
  bool v62; // cc
  int v63; // r0
  size_t v64; // r7
  char *v65; // r1
  _BYTE *m; // r3
  char v67; // t1
  size_t v68; // r7
  _BYTE *v69; // r2
  _BYTE *v70; // r3
  char v71; // t1
  size_t v72; // r3
  size_t v73; // r7
  size_t v74; // r7
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r0
  int v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r0
  int v88; // r0
  int v89; // r0
  int v90; // r0
  int v91; // r0
  int v92; // r0
  int v93; // [sp+4h] [bp-10A0h]
  char *src; // [sp+10h] [bp-1094h]
  char *v95; // [sp+14h] [bp-1090h]
  char *s; // [sp+18h] [bp-108Ch]
  char *sa; // [sp+18h] [bp-108Ch]
  char *v98; // [sp+24h] [bp-1080h]
  char *v99; // [sp+28h] [bp-107Ch]
  char *v100; // [sp+2Ch] [bp-1078h]
  void *v101; // [sp+30h] [bp-1074h]
  signed int v102; // [sp+34h] [bp-1070h]
  signed int v103; // [sp+38h] [bp-106Ch]
  signed int v104; // [sp+3Ch] [bp-1068h]
  signed int v105; // [sp+40h] [bp-1064h]
  void *v106; // [sp+44h] [bp-1060h]
  signed int v107; // [sp+48h] [bp-105Ch]
  size_t n; // [sp+4Ch] [bp-1058h]
  size_t nmemb; // [sp+50h] [bp-1054h]
  void *ptr; // [sp+58h] [bp-104Ch]
  _BYTE v111[20]; // [sp+6Ch] [bp-1038h] BYREF
  _BYTE dest[32]; // [sp+80h] [bp-1024h] BYREF
  _BYTE v113[4100]; // [sp+A0h] [bp-1004h] BYREF

  if ( !a3 || *a3 != 1 )
    return 0;
  v7 = json_array_get(a3, 0);
  v8 = (const char *)json_string_value(v7);
  v9 = json_array_get(a3, 1u);
  v10 = (char *)json_string_value(v9);
  v11 = json_array_get(a3, 2u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 3u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 4u);
  v16 = (char *)json_string_value(v15);
  v17 = json_array_get(a3, 5u);
  s = (char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v19 = (char *)json_string_value(v18);
  v20 = json_array_get(a3, 7u);
  v95 = (char *)json_string_value(v20);
  v21 = json_array_get(a3, 8u);
  src = (char *)json_string_value(v21);
  valid = valid_ascii(v8);
  if ( valid )
  {
    valid = valid_hex(v10);
    if ( valid )
    {
      valid = valid_hex(v14);
      if ( valid )
      {
        valid = valid_hex(v12);
        if ( valid )
        {
          valid = valid_hex(v16);
          if ( valid )
          {
            valid = valid_hex(s);
            if ( valid )
            {
              valid = valid_hex(v19);
              if ( valid )
              {
                valid = valid_hex(v95);
                if ( valid )
                {
                  valid = valid_hex(src);
                  if ( valid )
                  {
                    settime_based_notify_ntime(src);
                    if ( a2 == (pthread_mutex_t *)-448 )
                      return 0;
                    kind = (const char *)a2[65].__kind;
                    if ( kind && !strcmp(kind, v8) )
                    {
                      V_LOCK(0);
                      v75 = logfmt_raw((int)v113, 0x1000u);
                      V_UNLOCK(v75);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/buil"
                        "d/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                        163,
                        "stratum_notify_hns",
                        18,
                        142,
                        80,
                        v113);
                    }
                    v25 = strlen(v8);
                    if ( v25 > 0x1F )
                    {
                      V_LOCK(v25);
                      strlen(v8);
                      v26 = logfmt_raw((int)v113, 0x1000u);
                      V_UNLOCK(v26);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/buil"
                        "d/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                        163,
                        "stratum_notify_hns",
                        18,
                        145,
                        80,
                        v113);
                    }
                    pthread_mutex_lock(a2 + 66);
                    v27 = (void *)a2[65].__kind;
                    a2[65].__kind = (int)_strdup(v8);
                    if ( v27 )
                      free(v27);
                    snprintf(&a2[3].__size[20], 0x41u, "%s", v10);
                    v102 = strlen(v10) >> 1;
                    v103 = strlen(v12) >> 1;
                    v104 = strlen(v14) >> 1;
                    v107 = strlen(v16) >> 1;
                    v105 = strlen(s) >> 1;
                    v28 = strlen(v19);
                    nmemb = strlen(src) >> 1;
                    n = v28 >> 1;
                    snprintf(&a2[13].__size[12], v28 + 1, "%s", v19);
                    v29 = strlen(v95);
                    snprintf((char *)&a2[14], v29 + 1, "%s", v95);
                    v30 = strlen(src);
                    snprintf(&a2[14].__size[12], v30 + 1, "%s", src);
                    strcpy(&a2[64].__size[12], src);
                    a2[18].__size[4] = 1;
                    v31 = strlen(v95);
                    ptr = calloc(v31, 1u);
                    v4 = hex2bin((int)ptr, (unsigned __int8 *)v95, v31 >> 1);
                    if ( v4 )
                    {
                      v106 = calloc(nmemb, 1u);
                      v4 = hex2bin((int)v106, (unsigned __int8 *)src, nmemb);
                      if ( v4 )
                      {
                        v101 = calloc(n, 1u);
                        v4 = hex2bin((int)v101, (unsigned __int8 *)v19, n);
                        if ( v4 )
                        {
                          v100 = (char *)calloc(v103, 1u);
                          v4 = hex2bin((int)v100, (unsigned __int8 *)v12, v103);
                          if ( v4 )
                          {
                            a2[68].__count = 0;
                            v99 = (char *)calloc(v104, 1u);
                            v4 = hex2bin((int)v99, (unsigned __int8 *)v14, v104);
                            if ( v4 )
                            {
                              v98 = (char *)calloc(v105, 1u);
                              v4 = hex2bin((int)v98, (unsigned __int8 *)s, v105);
                              if ( v4 )
                              {
                                sa = (char *)calloc(v107, 1u);
                                v4 = hex2bin((int)sa, (unsigned __int8 *)v16, v107);
                                if ( v4 )
                                {
                                  v32 = (int *)calloc(v102, 1u);
                                  v33 = hex2bin((int)v32, (unsigned __int8 *)v10, v102);
                                  v4 = v33;
                                  if ( v33 )
                                  {
                                    v34 = sa == 0;
                                    if ( !v32 )
                                      v34 = 1;
                                    if ( v34 )
                                    {
                                      V_LOCK(v33);
                                      v35 = logfmt_raw((int)v113, 0x1000u);
                                      V_UNLOCK(v35);
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroo"
                                        "t/tmp/debug/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                        163,
                                        "hns_padding",
                                        11,
                                        82,
                                        100,
                                        v113);
                                    }
                                    else
                                    {
                                      do
                                      {
                                        v111[v34] = *((_BYTE *)v32 + v34) ^ sa[v34];
                                        ++v34;
                                      }
                                      while ( v34 != 20 );
                                    }
                                    if ( memcmp(v32, &dword_165C1C, 0x20u) )
                                    {
                                      dword_165C1C = *v32;
                                      memset(dest, 0, sizeof(dest));
                                      memset(&unk_165C3C, 0, 0x20u);
                                      memset(v113, 0, 0xF0u);
                                      hs_blake2b_init(v113, 32);
                                      hs_blake2b_update(v113, v32, 32);
                                      hs_blake2b_update(v113, dest, 32);
                                      hs_blake2b_final(v113, &unk_165C3C, 32);
                                    }
                                    v36 = a2 + 19;
                                    lock = a2[3].__lock;
                                    count = (const void *)a2[3].__count;
                                    memset(dest, 0, 22);
                                    memcpy(dest, count, lock);
                                    memset(&a2[19], 0, 0x100u);
                                    v39 = strlen(v95);
                                    memcpy(&a2[19], ptr, v39 >> 1);
                                    v40 = strlen(v95) >> 1;
                                    memcpy((char *)&a2[19] + v40, v101, n);
                                    v41 = &v100[v103];
                                    for ( i = (char *)&a2[19] + v40 + n; v103 > i - ((char *)&a2[19] + v40 + n); ++i )
                                    {
                                      v43 = *--v41;
                                      *i = v43;
                                    }
                                    v44 = v40 + n + v103;
                                    v45 = &v99[v104];
                                    for ( j = (char *)v36 + v44; v104 > j - ((char *)v36 + v44); ++j )
                                    {
                                      v47 = *--v45;
                                      *j = v47;
                                    }
                                    v48 = v44 + v104;
                                    v49 = &v98[v105];
                                    for ( k = (char *)v36 + v48; k - ((char *)v36 + v48) < v105; ++k )
                                    {
                                      v51 = *--v49;
                                      *k = v51;
                                    }
                                    v52 = v48 + v105;
                                    v53 = (char *)v36 + v52;
                                    v54 = &dest[22];
                                    do
                                    {
                                      v55 = *--v54;
                                      *v53++ = v55;
                                    }
                                    while ( dest != v54 );
                                    v56 = &dword_165C5C;
                                    v57 = &v36->__size[v52 + 21];
                                    do
                                    {
                                      v58 = *((_BYTE *)v56 - 1);
                                      v56 = (int *)((char *)v56 - 1);
                                      *++v57 = v58;
                                    }
                                    while ( &unk_165C3C != (_UNKNOWN *)v56 );
                                    v59 = &sa[v107];
                                    v60 = 0;
                                    while ( 1 )
                                    {
                                      v62 = v107 <= v60;
                                      v63 = (int)v36 + v52 + v60++;
                                      if ( v62 )
                                        break;
                                      v61 = *--v59;
                                      *(_BYTE *)(v63 + 54) = v61;
                                    }
                                    v64 = v52 + v107 + 54;
                                    v65 = (char *)v32 + v102;
                                    for ( m = (char *)v36 + v64; m - ((char *)v36 + v64) < v102; ++m )
                                    {
                                      v67 = *--v65;
                                      *m = v67;
                                    }
                                    v68 = v64 + v102;
                                    v69 = (char *)v36 + v68;
                                    v70 = dest;
                                    do
                                    {
                                      v71 = *--v70;
                                      *v69++ = v71;
                                    }
                                    while ( v111 != v70 );
                                    v72 = v68 + 20;
                                    v73 = v68 + 24;
                                    *(int *)((char *)&v36->__lock + v72) = 0;
                                    memcpy((char *)v36 + v73, v106, nmemb);
                                    v74 = v73 + nmemb;
                                    *(int *)((char *)&v36->__lock + v74) = 0;
                                    *(_WORD *)&v36->__size[v74 + 4] = 0;
                                    *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
                                    goto LABEL_63;
                                  }
                                  V_LOCK(0);
                                  v76 = logfmt_raw((int)v113, 0x1000u);
                                  V_UNLOCK(v76);
                                  v77 = 233;
                                }
                                else
                                {
                                  V_LOCK(0);
                                  v32 = 0;
                                  v92 = logfmt_raw((int)v113, 0x1000u);
                                  V_UNLOCK(v92);
                                  v77 = 225;
                                }
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/"
                                  "debug/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                  163,
                                  "stratum_notify_hns",
                                  18,
                                  v77,
                                  100,
                                  v113);
                              }
                              else
                              {
                                V_LOCK(0);
                                sa = 0;
                                v32 = 0;
                                v90 = logfmt_raw((int)v113, 0x1000u);
                                V_UNLOCK(v90);
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/"
                                  "debug/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                  163,
                                  "stratum_notify_hns",
                                  18,
                                  217,
                                  100,
                                  v113);
                              }
                            }
                            else
                            {
                              V_LOCK(0);
                              v98 = 0;
                              v32 = 0;
                              v91 = logfmt_raw((int)v113, 0x1000u);
                              V_UNLOCK(v91);
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/de"
                                "bug/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                163,
                                "stratum_notify_hns",
                                18,
                                209,
                                100,
                                v113);
                              sa = 0;
                            }
                          }
                          else
                          {
                            V_LOCK(0);
                            v98 = 0;
                            v32 = 0;
                            v86 = logfmt_raw((int)v113, 0x1000u);
                            V_UNLOCK(v86);
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debu"
                              "g/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                              163,
                              "stratum_notify_hns",
                              18,
                              197,
                              100,
                              v113);
                            sa = 0;
                            v99 = 0;
                          }
                        }
                        else
                        {
                          V_LOCK(0);
                          v98 = 0;
                          v32 = 0;
                          v87 = logfmt_raw((int)v113, 0x1000u);
                          V_UNLOCK(v87);
                          sa = 0;
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/"
                            "build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                            163,
                            "stratum_notify_hns",
                            18,
                            189,
                            100,
                            v113);
                          v99 = 0;
                          v100 = 0;
                        }
LABEL_63:
                        v78 = pthread_mutex_unlock(a2 + 66);
                        V_LOCK(v78);
                        v79 = logfmt_raw((int)v113, 0x1000u);
                        V_UNLOCK(v79);
                        v80 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/de"
                                "bug/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                163,
                                "stratum_notify_hns",
                                18,
                                303,
                                20,
                                v113);
                        V_LOCK(v80);
                        v81 = logfmt_raw((int)v113, 0x1000u);
                        V_UNLOCK(v81);
                        v82 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/de"
                                "bug/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                163,
                                "stratum_notify_hns",
                                18,
                                304,
                                20,
                                v113);
                        V_LOCK(v82);
                        v83 = logfmt_raw((int)v113, 0x1000u);
                        V_UNLOCK(v83);
                        v84 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/de"
                                "bug/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                163,
                                "stratum_notify_hns",
                                18,
                                305,
                                20,
                                v113);
                        V_LOCK(v84);
                        v85 = logfmt_raw((int)v113, 0x1000u);
                        V_UNLOCK(v85);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/bu"
                          "ild/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                          163,
                          "stratum_notify_hns",
                          18,
                          306,
                          20,
                          v113);
                        if ( ptr )
                          free(ptr);
                        if ( v106 )
                          free(v106);
                        if ( v101 )
                          free(v101);
                        if ( v100 )
                          free(v100);
                        if ( v99 )
                          free(v99);
                        if ( v98 )
                          free(v98);
                        if ( sa )
                          free(sa);
                        if ( v32 )
                          free(v32);
                        return v4;
                      }
                      V_LOCK(0);
                      v98 = 0;
                      v88 = logfmt_raw((int)v113, 0x1000u);
                      V_UNLOCK(v88);
                      v93 = 181;
                      sa = 0;
                      v99 = 0;
                    }
                    else
                    {
                      V_LOCK(0);
                      v106 = 0;
                      v89 = logfmt_raw((int)v113, 0x1000u);
                      V_UNLOCK(v89);
                      v93 = 173;
                      v98 = 0;
                      sa = 0;
                      v99 = 0;
                    }
                    v32 = 0;
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/"
                      "godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                      163,
                      "stratum_notify_hns",
                      18,
                      v93,
                      100,
                      v113);
                    v100 = 0;
                    v101 = 0;
                    goto LABEL_63;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  V_LOCK(valid);
  v23 = logfmt_raw((int)v113, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/frontend/frontend_hns/frontend_hns.c",
    163,
    "stratum_notify_hns",
    18,
    134,
    100,
    v113);
  return 0;
}
