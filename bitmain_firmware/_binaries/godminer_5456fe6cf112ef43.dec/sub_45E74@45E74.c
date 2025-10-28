bool __fastcall sub_45E74(int a1, int *a2, _DWORD *a3)
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
  const char *v24; // r0
  size_t v25; // r0
  int v26; // r0
  void *v27; // r4
  size_t v28; // r4
  size_t v29; // r0
  size_t v30; // r0
  size_t v31; // r4
  unsigned __int8 *v32; // r2
  char *v33; // r1
  bool v34; // cc
  _BOOL4 v35; // r0
  int v36; // r3
  _BOOL4 v37; // r0
  int v38; // r3
  int v39; // r0
  int *v40; // r10
  size_t v41; // r2
  const void *v42; // r1
  size_t v43; // r0
  size_t v44; // r7
  unsigned __int8 *v45; // r0
  _BYTE *i; // r2
  char v47; // t1
  size_t v48; // r3
  char *v49; // r0
  _BYTE *j; // r2
  char v51; // t1
  size_t v52; // r3
  char *v53; // r0
  _BYTE *k; // r2
  char v55; // t1
  size_t v56; // r3
  _BYTE *v57; // r1
  __int16 *v58; // r2
  char v59; // t1
  char *v60; // r1
  char *v61; // r2
  char v62; // t1
  char *v63; // r1
  signed int v64; // r2
  char v65; // t1
  int v66; // r0
  size_t v67; // r7
  char *v68; // r1
  _BYTE *m; // r3
  char v70; // t1
  size_t v71; // r7
  _BYTE *v72; // r2
  _BYTE *v73; // r3
  char v74; // t1
  size_t v75; // r3
  size_t v76; // r7
  size_t v77; // r7
  int *v78; // r9
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
  int v93; // r0
  int v94; // r0
  int v95; // r0
  int v96; // r0
  int v97; // r0
  int v98; // r1
  int v99; // r0
  int v100; // [sp+4h] [bp-1198h]
  char *src; // [sp+10h] [bp-118Ch]
  char *v102; // [sp+14h] [bp-1188h]
  char *s; // [sp+18h] [bp-1184h]
  char *sa; // [sp+18h] [bp-1184h]
  char *v105; // [sp+24h] [bp-1178h]
  char *v106; // [sp+28h] [bp-1174h]
  unsigned __int8 *v107; // [sp+2Ch] [bp-1170h]
  void *v108; // [sp+30h] [bp-116Ch]
  signed int v109; // [sp+34h] [bp-1168h]
  signed int v110; // [sp+38h] [bp-1164h]
  signed int v111; // [sp+3Ch] [bp-1160h]
  signed int v112; // [sp+40h] [bp-115Ch]
  void *v113; // [sp+44h] [bp-1158h]
  signed int v114; // [sp+48h] [bp-1154h]
  size_t n; // [sp+4Ch] [bp-1150h]
  size_t nmemb; // [sp+50h] [bp-114Ch]
  void *ptr; // [sp+5Ch] [bp-1140h]
  _BYTE v118[20]; // [sp+74h] [bp-1128h] BYREF
  _BYTE v119[32]; // [sp+88h] [bp-1114h] BYREF
  _BYTE dest[20]; // [sp+A8h] [bp-10F4h] BYREF
  __int16 v121; // [sp+BCh] [bp-10E0h]
  __int16 v122; // [sp+BEh] [bp-10DEh] BYREF
  _BYTE v123[4100]; // [sp+198h] [bp-1004h] BYREF

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
  v102 = (char *)json_string_value(v20);
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
                valid = valid_hex(v102);
                if ( valid )
                {
                  valid = valid_hex(src);
                  if ( valid )
                  {
                    if ( a2 == (int *)-448 )
                      return 0;
                    v24 = (const char *)a2[400];
                    if ( v24 && !strcmp(v24, v8) )
                    {
                      V_LOCK(0);
                      v91 = logfmt_raw((int)v123, 0x1000u);
                      V_UNLOCK(v91);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                        157,
                        "stratum_notify_hns",
                        18,
                        141,
                        80,
                        v123);
                    }
                    v25 = strlen(v8);
                    if ( v25 > 0x1F )
                    {
                      V_LOCK(v25);
                      strlen(v8);
                      v26 = logfmt_raw((int)v123, 0x1000u);
                      V_UNLOCK(v26);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                        157,
                        "stratum_notify_hns",
                        18,
                        144,
                        80,
                        v123);
                    }
                    pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
                    v27 = (void *)a2[400];
                    a2[400] = (int)_strdup(v8);
                    if ( v27 )
                      free(v27);
                    snprintf((char *)a2 + 92, 0x41u, "%s", v10);
                    v109 = strlen(v10) >> 1;
                    v110 = strlen(v12) >> 1;
                    v111 = strlen(v14) >> 1;
                    v114 = strlen(v16) >> 1;
                    v112 = strlen(s) >> 1;
                    v28 = strlen(v19);
                    nmemb = strlen(src) >> 1;
                    n = v28 >> 1;
                    snprintf((char *)a2 + 324, v28 + 1, "%s", v19);
                    v29 = strlen(v102);
                    snprintf((char *)a2 + 336, v29 + 1, "%s", v102);
                    v30 = strlen(src);
                    snprintf((char *)a2 + 348, v30 + 1, "%s", src);
                    strcpy((char *)a2 + 1732, src);
                    *((_BYTE *)a2 + 436) = 1;
                    v31 = strlen(v102);
                    ptr = calloc(v31, 1u);
                    v4 = hex2bin((int)ptr, (unsigned __int8 *)v102, v31 >> 1);
                    if ( v4 )
                    {
                      v113 = calloc(nmemb, 1u);
                      v4 = hex2bin((int)v113, (unsigned __int8 *)src, nmemb);
                      if ( v4 )
                      {
                        v108 = calloc(n, 1u);
                        v4 = hex2bin((int)v108, (unsigned __int8 *)v19, n);
                        if ( v4 )
                        {
                          v107 = (unsigned __int8 *)calloc(v110, 1u);
                          v4 = hex2bin((int)v107, (unsigned __int8 *)v12, v110);
                          if ( v4 )
                          {
                            v32 = v107 + 32;
                            v33 = (char *)(v107 + 160);
                            while ( 1 )
                            {
                              v34 = 0;
                              if ( *v32 != 255 )
                                v34 = v33 > (char *)v32;
                              if ( !v34 )
                                break;
                              ++v32;
                            }
                            while ( 1 )
                            {
                              v35 = *v32 == 255;
                              if ( v33 <= (char *)v32 )
                                v35 = 0;
                              if ( !v35 )
                                break;
                              ++v32;
                            }
                            v36 = 0;
                            if ( *(v32 - 1) == 255 && *(v32 - 2) == 255 )
                            {
                              v98 = v32[1];
                              v36 = (unsigned __int16)(v32[2] + (v32[3] << 8));
                              if ( v98 == 3 )
                              {
                                v36 += v32[4] << 16;
                              }
                              else if ( v98 == 4 )
                              {
                                v36 += (v32[4] + (v32[5] << 8)) << 16;
                              }
                            }
                            a2[453] = v36;
                            v106 = (char *)calloc(v111, 1u);
                            v4 = hex2bin((int)v106, (unsigned __int8 *)v14, v111);
                            if ( v4 )
                            {
                              v105 = (char *)calloc(v112, 1u);
                              v4 = hex2bin((int)v105, (unsigned __int8 *)s, v112);
                              if ( v4 )
                              {
                                sa = (char *)calloc(v114, 1u);
                                v4 = hex2bin((int)sa, (unsigned __int8 *)v16, v114);
                                if ( v4 )
                                {
                                  v78 = (int *)calloc(v109, 1u);
                                  v37 = hex2bin((int)v78, (unsigned __int8 *)v10, v109);
                                  v4 = v37;
                                  if ( v37 )
                                  {
                                    v38 = v78 == 0;
                                    if ( !sa )
                                      v38 = 1;
                                    if ( v38 )
                                    {
                                      V_LOCK(v37);
                                      v39 = logfmt_raw((int)v123, 0x1000u);
                                      V_UNLOCK(v39);
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/"
                                        "tmp/release/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                                        157,
                                        "hns_padding",
                                        11,
                                        83,
                                        100,
                                        v123);
                                    }
                                    else
                                    {
                                      do
                                      {
                                        v118[v38] = *((_BYTE *)v78 + v38) ^ sa[v38];
                                        ++v38;
                                      }
                                      while ( v38 != 20 );
                                    }
                                    if ( memcmp(v78, &dword_166154, 0x20u) )
                                    {
                                      dword_166154 = *v78;
                                      memset(v119, 0, sizeof(v119));
                                      memset(&unk_166174, 0, 0x20u);
                                      hs_blake2b_init(dest, 32);
                                      hs_blake2b_update(dest, v78, 32);
                                      hs_blake2b_update(dest, v119, 32);
                                      v92 = hs_blake2b_final(dest, &unk_166174, 32);
                                      V_LOCK(v92);
                                      v93 = logfmt_raw((int)v123, 0x1000u);
                                      V_UNLOCK(v93);
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/"
                                        "tmp/release/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                                        157,
                                        "stratum_notify_hns",
                                        18,
                                        248,
                                        80,
                                        v123);
                                    }
                                    v40 = a2 + 114;
                                    v41 = a2[18];
                                    v42 = (const void *)a2[19];
                                    memset(dest, 0, sizeof(dest));
                                    v121 = 0;
                                    memcpy(dest, v42, v41);
                                    memset(a2 + 114, 0, 0x100u);
                                    v43 = strlen(v102);
                                    memcpy(a2 + 114, ptr, v43 >> 1);
                                    v44 = strlen(v102) >> 1;
                                    memcpy((char *)a2 + v44 + 456, v108, n);
                                    v45 = &v107[v110];
                                    for ( i = (char *)a2 + v44 + n + 456; v110 > i - ((char *)a2 + v44 + n + 456); ++i )
                                    {
                                      v47 = *--v45;
                                      *i = v47;
                                    }
                                    v48 = v44 + n + v110;
                                    v49 = &v106[v111];
                                    for ( j = (char *)v40 + v48; j - ((char *)v40 + v48) < v111; ++j )
                                    {
                                      v51 = *--v49;
                                      *j = v51;
                                    }
                                    v52 = v48 + v111;
                                    v53 = &v105[v112];
                                    for ( k = (char *)v40 + v52; v112 > k - ((char *)v40 + v52); ++k )
                                    {
                                      v55 = *--v53;
                                      *k = v55;
                                    }
                                    v56 = v52 + v112;
                                    v57 = (char *)v40 + v56;
                                    v58 = &v122;
                                    do
                                    {
                                      v59 = *((_BYTE *)v58 - 1);
                                      v58 = (__int16 *)((char *)v58 - 1);
                                      *v57++ = v59;
                                    }
                                    while ( v58 != (__int16 *)dest );
                                    v60 = (char *)&unk_166194;
                                    v61 = (char *)v40 + v56 + 21;
                                    do
                                    {
                                      v62 = *--v60;
                                      *++v61 = v62;
                                    }
                                    while ( v60 != (char *)&unk_166174 );
                                    v63 = &sa[v114];
                                    v64 = 0;
                                    while ( 1 )
                                    {
                                      v34 = v114 <= v64;
                                      v66 = (int)v40 + v56 + v64++;
                                      if ( v34 )
                                        break;
                                      v65 = *--v63;
                                      *(_BYTE *)(v66 + 54) = v65;
                                    }
                                    v67 = v56 + v114 + 54;
                                    v68 = (char *)v78 + v109;
                                    for ( m = (char *)v40 + v67; m - ((char *)v40 + v67) < v109; ++m )
                                    {
                                      v70 = *--v68;
                                      *m = v70;
                                    }
                                    v71 = v67 + v109;
                                    v72 = (char *)v40 + v71;
                                    v73 = v119;
                                    do
                                    {
                                      v74 = *--v73;
                                      *v72++ = v74;
                                    }
                                    while ( v118 != v73 );
                                    v75 = v71 + 20;
                                    v76 = v71 + 24;
                                    *(int *)((char *)v40 + v75) = 0;
                                    memcpy((char *)v40 + v76, v113, nmemb);
                                    v77 = v76 + nmemb;
                                    *(int *)((char *)v40 + v77) = 0;
                                    *(_WORD *)((char *)v40 + v77 + 4) = 0;
                                    *((_QWORD *)a2 + 56) = *a2;
                                    goto LABEL_71;
                                  }
                                  V_LOCK(0);
                                  v94 = logfmt_raw((int)v123, 0x1000u);
                                  V_UNLOCK(v94);
                                  v95 = 230;
                                }
                                else
                                {
                                  V_LOCK(0);
                                  v78 = 0;
                                  v96 = logfmt_raw((int)v123, 0x1000u);
                                  V_UNLOCK(v96);
                                  v95 = 222;
                                }
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                                  157,
                                  "stratum_notify_hns",
                                  18,
                                  v95,
                                  100,
                                  v123);
                              }
                              else
                              {
                                V_LOCK(0);
                                sa = 0;
                                v78 = 0;
                                v99 = logfmt_raw((int)v123, 0x1000u);
                                V_UNLOCK(v99);
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                                  157,
                                  "stratum_notify_hns",
                                  18,
                                  214,
                                  100,
                                  v123);
                              }
                            }
                            else
                            {
                              V_LOCK(0);
                              v105 = 0;
                              v78 = 0;
                              v97 = logfmt_raw((int)v123, 0x1000u);
                              V_UNLOCK(v97);
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                                157,
                                "stratum_notify_hns",
                                18,
                                206,
                                100,
                                v123);
                              sa = 0;
                            }
                          }
                          else
                          {
                            V_LOCK(0);
                            v105 = 0;
                            v78 = 0;
                            v79 = logfmt_raw((int)v123, 0x1000u);
                            V_UNLOCK(v79);
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/releas"
                              "e/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                              157,
                              "stratum_notify_hns",
                              18,
                              196,
                              100,
                              v123);
                            sa = 0;
                            v106 = 0;
                          }
                        }
                        else
                        {
                          V_LOCK(0);
                          v105 = 0;
                          v78 = 0;
                          v88 = logfmt_raw((int)v123, 0x1000u);
                          V_UNLOCK(v88);
                          sa = 0;
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/"
                            "build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                            157,
                            "stratum_notify_hns",
                            18,
                            188,
                            100,
                            v123);
                          v106 = 0;
                          v107 = 0;
                        }
LABEL_71:
                        v80 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
                        V_LOCK(v80);
                        v81 = logfmt_raw((int)v123, 0x1000u);
                        V_UNLOCK(v81);
                        v82 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                                157,
                                "stratum_notify_hns",
                                18,
                                299,
                                20,
                                v123);
                        V_LOCK(v82);
                        v83 = logfmt_raw((int)v123, 0x1000u);
                        V_UNLOCK(v83);
                        v84 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                                157,
                                "stratum_notify_hns",
                                18,
                                300,
                                20,
                                v123);
                        V_LOCK(v84);
                        v85 = logfmt_raw((int)v123, 0x1000u);
                        V_UNLOCK(v85);
                        v86 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                                157,
                                "stratum_notify_hns",
                                18,
                                301,
                                20,
                                v123);
                        V_LOCK(v86);
                        v87 = logfmt_raw((int)v123, 0x1000u);
                        V_UNLOCK(v87);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/bu"
                          "ild/godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                          157,
                          "stratum_notify_hns",
                          18,
                          302,
                          20,
                          v123);
                        if ( ptr )
                          free(ptr);
                        if ( v113 )
                          free(v113);
                        if ( v108 )
                          free(v108);
                        if ( v107 )
                          free(v107);
                        if ( v106 )
                          free(v106);
                        if ( v105 )
                          free(v105);
                        if ( sa )
                          free(sa);
                        if ( v78 )
                          free(v78);
                        return v4;
                      }
                      V_LOCK(0);
                      v105 = 0;
                      v89 = logfmt_raw((int)v123, 0x1000u);
                      V_UNLOCK(v89);
                      v100 = 180;
                      sa = 0;
                      v106 = 0;
                    }
                    else
                    {
                      V_LOCK(0);
                      v113 = 0;
                      v90 = logfmt_raw((int)v123, 0x1000u);
                      V_UNLOCK(v90);
                      v100 = 172;
                      v105 = 0;
                      sa = 0;
                      v106 = 0;
                    }
                    v78 = 0;
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/"
                      "godminer-origin_master/frontend/frontend_hns/frontend_hns.c",
                      157,
                      "stratum_notify_hns",
                      18,
                      v100,
                      100,
                      v123);
                    v107 = 0;
                    v108 = 0;
                    goto LABEL_71;
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
  v23 = logfmt_raw((int)v123, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_hns/frontend_hns.c",
    157,
    "stratum_notify_hns",
    18,
    135,
    100,
    v123);
  return 0;
}
