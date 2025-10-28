bool __fastcall sub_420F0(int a1, int *a2, _DWORD *a3)
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
  size_t v27; // r0
  size_t v28; // r0
  size_t v29; // r4
  int *v30; // r9
  _BOOL4 v31; // r0
  int v32; // r3
  int v33; // r0
  int *v34; // r10
  size_t v35; // r2
  const void *v36; // r1
  size_t v37; // r0
  size_t v38; // r7
  char *v39; // r0
  _BYTE *i; // r2
  char v41; // t1
  size_t v42; // r3
  char *v43; // r0
  _BYTE *j; // r2
  char v45; // t1
  size_t v46; // r3
  char *v47; // r0
  _BYTE *k; // r2
  char v49; // t1
  size_t v50; // r3
  _BYTE *v51; // r1
  _BYTE *v52; // r2
  char v53; // t1
  int *v54; // r1
  char *v55; // r2
  char v56; // t1
  char *v57; // r1
  signed int v58; // r2
  char v59; // t1
  bool v60; // cc
  int v61; // r0
  size_t v62; // r7
  char *v63; // r1
  _BYTE *m; // r3
  char v65; // t1
  size_t v66; // r7
  _BYTE *v67; // r2
  _BYTE *v68; // r3
  char v69; // t1
  size_t v70; // r3
  size_t v71; // r7
  size_t v72; // r7
  int v73; // r0
  int v74; // r0
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
  int v91; // [sp+4h] [bp-10A0h]
  char *src; // [sp+14h] [bp-1090h]
  char *v93; // [sp+18h] [bp-108Ch]
  char *s; // [sp+1Ch] [bp-1088h]
  char *sa; // [sp+1Ch] [bp-1088h]
  void *ptr; // [sp+28h] [bp-107Ch]
  size_t ptrb; // [sp+28h] [bp-107Ch]
  char *ptra; // [sp+28h] [bp-107Ch]
  char *v99; // [sp+2Ch] [bp-1078h]
  char *v100; // [sp+30h] [bp-1074h]
  void *v101; // [sp+34h] [bp-1070h]
  signed int v102; // [sp+38h] [bp-106Ch]
  signed int v103; // [sp+3Ch] [bp-1068h]
  signed int v104; // [sp+40h] [bp-1064h]
  signed int v105; // [sp+44h] [bp-1060h]
  void *v106; // [sp+48h] [bp-105Ch]
  signed int v107; // [sp+4Ch] [bp-1058h]
  size_t n; // [sp+50h] [bp-1054h]
  size_t nmemb; // [sp+54h] [bp-1050h]
  void *v110; // [sp+5Ch] [bp-1048h]
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
  v93 = (char *)json_string_value(v20);
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
                valid = valid_hex(v93);
                if ( valid )
                {
                  valid = valid_hex(src);
                  if ( valid )
                  {
                    settime_based_notify_ntime(src);
                    if ( a2 == (int *)-456 )
                      return 0;
                    v24 = (const char *)a2[395];
                    if ( v24 && !strcmp(v24, v8) )
                    {
                      V_LOCK(0);
                      v73 = logfmt_raw((int)v113, 0x1000u);
                      V_UNLOCK(v73);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/"
                        "build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                        167,
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
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/"
                        "build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                        167,
                        "stratum_notify_hns",
                        18,
                        145,
                        80,
                        v113);
                    }
                    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
                    ptr = (void *)a2[395];
                    a2[395] = (int)_strdup(v8);
                    if ( ptr )
                      free(ptr);
                    snprintf((char *)a2 + 100, 0x41u, "%s", v10);
                    v102 = strlen(v10) >> 1;
                    v103 = strlen(v12) >> 1;
                    v104 = strlen(v14) >> 1;
                    v107 = strlen(v16) >> 1;
                    v105 = strlen(s) >> 1;
                    ptrb = strlen(v19);
                    nmemb = strlen(src) >> 1;
                    n = ptrb >> 1;
                    snprintf((char *)a2 + 332, ptrb + 1, "%s", v19);
                    v27 = strlen(v93);
                    snprintf((char *)a2 + 344, v27 + 1, "%s", v93);
                    v28 = strlen(src);
                    snprintf((char *)a2 + 356, v28 + 1, "%s", src);
                    strcpy((char *)a2 + 1556, src);
                    *((_BYTE *)a2 + 444) = 1;
                    v29 = strlen(v93);
                    v110 = calloc(v29, 1u);
                    v4 = hex2bin((int)v110, (unsigned __int8 *)v93, v29 >> 1);
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
                            a2[411] = 0;
                            v99 = (char *)calloc(v104, 1u);
                            v4 = hex2bin((int)v99, (unsigned __int8 *)v14, v104);
                            if ( v4 )
                            {
                              ptra = (char *)calloc(v105, 1u);
                              v4 = hex2bin((int)ptra, (unsigned __int8 *)s, v105);
                              if ( v4 )
                              {
                                sa = (char *)calloc(v107, 1u);
                                v4 = hex2bin((int)sa, (unsigned __int8 *)v16, v107);
                                if ( v4 )
                                {
                                  v30 = (int *)calloc(v102, 1u);
                                  v31 = hex2bin((int)v30, (unsigned __int8 *)v10, v102);
                                  v4 = v31;
                                  if ( v31 )
                                  {
                                    v32 = sa == 0;
                                    if ( !v30 )
                                      v32 = 1;
                                    if ( v32 )
                                    {
                                      V_LOCK(v31);
                                      v33 = logfmt_raw((int)v113, 0x1000u);
                                      V_UNLOCK(v33);
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildr"
                                        "oot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                        167,
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
                                        v111[v32] = *((_BYTE *)v30 + v32) ^ sa[v32];
                                        ++v32;
                                      }
                                      while ( v32 != 20 );
                                    }
                                    if ( memcmp(v30, &dword_173EE4, 0x20u) )
                                    {
                                      dword_173EE4 = *v30;
                                      memset(dest, 0, sizeof(dest));
                                      memset(&unk_173F04, 0, 0x20u);
                                      memset(v113, 0, 0xF0u);
                                      hs_blake2b_init(v113, 32);
                                      hs_blake2b_update(v113, v30, 32);
                                      hs_blake2b_update(v113, dest, 32);
                                      hs_blake2b_final(v113, &unk_173F04, 32);
                                    }
                                    v34 = a2 + 116;
                                    v35 = a2[19];
                                    v36 = (const void *)a2[20];
                                    memset(dest, 0, 22);
                                    memcpy(dest, v36, v35);
                                    memset(a2 + 116, 0, 0x100u);
                                    v37 = strlen(v93);
                                    memcpy(a2 + 116, v110, v37 >> 1);
                                    v38 = strlen(v93) >> 1;
                                    memcpy((char *)a2 + v38 + 464, v101, n);
                                    v39 = &v100[v103];
                                    for ( i = (char *)a2 + v38 + n + 464; v103 > i - ((char *)a2 + v38 + n + 464); ++i )
                                    {
                                      v41 = *--v39;
                                      *i = v41;
                                    }
                                    v42 = v38 + n + v103;
                                    v43 = &v99[v104];
                                    for ( j = (char *)v34 + v42; v104 > j - ((char *)v34 + v42); ++j )
                                    {
                                      v45 = *--v43;
                                      *j = v45;
                                    }
                                    v46 = v42 + v104;
                                    v47 = &ptra[v105];
                                    for ( k = (char *)v34 + v46; k - ((char *)v34 + v46) < v105; ++k )
                                    {
                                      v49 = *--v47;
                                      *k = v49;
                                    }
                                    v50 = v46 + v105;
                                    v51 = (char *)v34 + v50;
                                    v52 = &dest[22];
                                    do
                                    {
                                      v53 = *--v52;
                                      *v51++ = v53;
                                    }
                                    while ( dest != v52 );
                                    v54 = &dword_173F24;
                                    v55 = (char *)v34 + v50 + 21;
                                    do
                                    {
                                      v56 = *((_BYTE *)v54 - 1);
                                      v54 = (int *)((char *)v54 - 1);
                                      *++v55 = v56;
                                    }
                                    while ( &unk_173F04 != (_UNKNOWN *)v54 );
                                    v57 = &sa[v107];
                                    v58 = 0;
                                    while ( 1 )
                                    {
                                      v60 = v107 <= v58;
                                      v61 = (int)v34 + v50 + v58++;
                                      if ( v60 )
                                        break;
                                      v59 = *--v57;
                                      *(_BYTE *)(v61 + 54) = v59;
                                    }
                                    v62 = v50 + v107 + 54;
                                    v63 = (char *)v30 + v102;
                                    for ( m = (char *)v34 + v62; m - ((char *)v34 + v62) < v102; ++m )
                                    {
                                      v65 = *--v63;
                                      *m = v65;
                                    }
                                    v66 = v62 + v102;
                                    v67 = (char *)v34 + v66;
                                    v68 = dest;
                                    do
                                    {
                                      v69 = *--v68;
                                      *v67++ = v69;
                                    }
                                    while ( v111 != v68 );
                                    v70 = v66 + 20;
                                    v71 = v66 + 24;
                                    *(int *)((char *)v34 + v70) = 0;
                                    memcpy((char *)v34 + v71, v106, nmemb);
                                    v72 = v71 + nmemb;
                                    *(int *)((char *)v34 + v72) = 0;
                                    *(_WORD *)((char *)v34 + v72 + 4) = 0;
                                    *((_QWORD *)a2 + 57) = *a2;
                                    goto LABEL_63;
                                  }
                                  V_LOCK(0);
                                  v74 = logfmt_raw((int)v113, 0x1000u);
                                  V_UNLOCK(v74);
                                  v75 = 233;
                                }
                                else
                                {
                                  V_LOCK(0);
                                  v30 = 0;
                                  v90 = logfmt_raw((int)v113, 0x1000u);
                                  V_UNLOCK(v90);
                                  v75 = 225;
                                }
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tm"
                                  "p/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                  167,
                                  "stratum_notify_hns",
                                  18,
                                  v75,
                                  100,
                                  v113);
                              }
                              else
                              {
                                V_LOCK(0);
                                sa = 0;
                                v30 = 0;
                                v88 = logfmt_raw((int)v113, 0x1000u);
                                V_UNLOCK(v88);
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tm"
                                  "p/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                  167,
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
                              ptra = 0;
                              v30 = 0;
                              v89 = logfmt_raw((int)v113, 0x1000u);
                              V_UNLOCK(v89);
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                167,
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
                            ptra = 0;
                            v30 = 0;
                            v84 = logfmt_raw((int)v113, 0x1000u);
                            V_UNLOCK(v84);
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/re"
                              "lease/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                              167,
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
                          ptra = 0;
                          v30 = 0;
                          v85 = logfmt_raw((int)v113, 0x1000u);
                          V_UNLOCK(v85);
                          sa = 0;
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/rele"
                            "ase/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                            167,
                            "stratum_notify_hns",
                            18,
                            189,
                            100,
                            v113);
                          v99 = 0;
                          v100 = 0;
                        }
LABEL_63:
                        v76 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
                        V_LOCK(v76);
                        v77 = logfmt_raw((int)v113, 0x1000u);
                        V_UNLOCK(v77);
                        v78 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                167,
                                "stratum_notify_hns",
                                18,
                                303,
                                20,
                                v113);
                        V_LOCK(v78);
                        v79 = logfmt_raw((int)v113, 0x1000u);
                        V_UNLOCK(v79);
                        v80 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                167,
                                "stratum_notify_hns",
                                18,
                                304,
                                20,
                                v113);
                        V_LOCK(v80);
                        v81 = logfmt_raw((int)v113, 0x1000u);
                        V_UNLOCK(v81);
                        v82 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                                167,
                                "stratum_notify_hns",
                                18,
                                305,
                                20,
                                v113);
                        V_LOCK(v82);
                        v83 = logfmt_raw((int)v113, 0x1000u);
                        V_UNLOCK(v83);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/releas"
                          "e/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                          167,
                          "stratum_notify_hns",
                          18,
                          306,
                          20,
                          v113);
                        if ( v110 )
                          free(v110);
                        if ( v106 )
                          free(v106);
                        if ( v101 )
                          free(v101);
                        if ( v100 )
                          free(v100);
                        if ( v99 )
                          free(v99);
                        if ( ptra )
                          free(ptra);
                        if ( sa )
                          free(sa);
                        if ( v30 )
                          free(v30);
                        return v4;
                      }
                      V_LOCK(0);
                      ptra = 0;
                      v86 = logfmt_raw((int)v113, 0x1000u);
                      V_UNLOCK(v86);
                      v91 = 181;
                      sa = 0;
                      v99 = 0;
                    }
                    else
                    {
                      V_LOCK(0);
                      v106 = 0;
                      v87 = logfmt_raw((int)v113, 0x1000u);
                      V_UNLOCK(v87);
                      v91 = 173;
                      ptra = 0;
                      sa = 0;
                      v99 = 0;
                    }
                    v30 = 0;
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bu"
                      "ild/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                      167,
                      "stratum_notify_hns",
                      18,
                      v91,
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
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_hns/frontend_hns.c",
    167,
    "stratum_notify_hns",
    18,
    134,
    100,
    v113);
  return 0;
}
