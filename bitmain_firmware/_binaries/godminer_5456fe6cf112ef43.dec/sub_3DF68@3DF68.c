bool __fastcall sub_3DF68(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _BOOL4 v7; // r4
  _DWORD *v9; // r0
  const char *v10; // r7
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  char *v14; // r9
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  char *v17; // r11
  _DWORD *v18; // r0
  const char *v19; // r10
  _DWORD *v20; // r0
  bool v21; // r4
  int valid; // r0
  int v23; // r0
  const char *v24; // r0
  size_t v25; // r0
  int v26; // r0
  int v27; // r3
  int v28; // r1
  size_t v29; // r2
  int v30; // r2
  int i; // r7
  char *v32; // r5
  void *v33; // r10
  unsigned __int8 *v34; // r7
  unsigned __int8 *v35; // r3
  unsigned __int8 *v36; // r1
  bool v37; // cf
  unsigned int v38; // t1
  bool v39; // cc
  _BOOL4 v40; // r2
  int v41; // t1
  _BOOL4 v42; // r2
  int v43; // r2
  void *v44; // r8
  void *v45; // r0
  void *v46; // r0
  unsigned int *v47; // r2
  int *v48; // r1
  unsigned int v49; // t1
  unsigned int v50; // r10
  int v51; // r0
  _DWORD *v52; // r0
  unsigned __int8 *v53; // r4
  void *v54; // r0
  int v55; // r0
  int v56; // r1
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // lr
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // [sp+14h] [bp-1040h]
  const char *v66; // [sp+18h] [bp-103Ch]
  unsigned int v67; // [sp+18h] [bp-103Ch]
  char *s; // [sp+1Ch] [bp-1038h]
  _BOOL4 v69; // [sp+20h] [bp-1034h]
  pthread_mutex_t *mutex; // [sp+28h] [bp-102Ch]
  void *ptr; // [sp+2Ch] [bp-1028h]
  char *ptra; // [sp+2Ch] [bp-1028h]
  size_t n; // [sp+30h] [bp-1024h]
  size_t v74; // [sp+34h] [bp-1020h]
  size_t nmemb; // [sp+38h] [bp-101Ch]
  int v76; // [sp+3Ch] [bp-1018h]
  int v77; // [sp+4Ch] [bp-1008h] BYREF
  _BYTE v78[4100]; // [sp+50h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v65 = (int)json_array_size(v5);
  v9 = json_array_get(a3, 0);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 1u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 2u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v15);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  v19 = (const char *)json_string_value(v18);
  v20 = json_array_get(a3, 7u);
  v66 = (const char *)json_string_value(v20);
  if ( json_array_get(a3, 8u) )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v69 = v21;
  }
  else
  {
    v21 = 0;
    v69 = 0;
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
        valid = valid_hex(v17);
        if ( valid )
        {
          valid = valid_hex(v19);
          if ( valid )
          {
            valid = valid_hex(v66);
            if ( valid )
            {
              if ( a2 == (int *)-448 )
                return 0;
              v24 = (const char *)a2[400];
              if ( v24 && !strcmp(v24, v10) )
              {
                V_LOCK(0);
                v58 = logfmt_raw((int)v78, 0x1000u);
                V_UNLOCK(v58);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/frontend/frontend_dcr/frontend_dcr.c",
                  157,
                  "stratum_notify_dcr",
                  18,
                  111,
                  80,
                  v78);
              }
              v25 = strlen(v10);
              if ( v25 > 0x1F )
              {
                V_LOCK(v25);
                strlen(v10);
                v26 = logfmt_raw((int)v78, 0x1000u);
                V_UNLOCK(v26);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/frontend/frontend_dcr/frontend_dcr.c",
                  157,
                  "stratum_notify_dcr",
                  18,
                  114,
                  80,
                  v78);
              }
              mutex = (pthread_mutex_t *)(a2 + 440);
              pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
              ptr = (void *)a2[400];
              a2[400] = (int)_strdup(v10);
              if ( ptr )
                free(ptr);
              snprintf((char *)a2 + 92, 0x41u, "%s", v12);
              ptra = (char *)(strlen(v12) >> 1);
              nmemb = strlen(v17) >> 1;
              n = strlen(v14) >> 1;
              v74 = strlen(s) >> 1;
              snprintf((char *)a2 + 324, 9u, "%s", v17);
              snprintf((char *)a2 + 336, 9u, "%s", v19);
              snprintf((char *)a2 + 348, 9u, "%s", v66);
              strcpy((char *)a2 + 1732, v66);
              v27 = a2[20];
              v28 = a2[79];
              v29 = n + a2[18];
              *((_BYTE *)a2 + 436) = v21;
              a2[78] = v29;
              v67 = v74 + v27 + v29;
              a2[72] = v67;
              if ( v28 > 0 )
              {
                v30 = a2[80];
                for ( i = 0; i < v28; ++i )
                {
                  if ( *(_DWORD *)(v30 + 4 * i) )
                  {
                    free(*(void **)(v30 + 4 * i));
                    v30 = a2[80];
                    v28 = a2[79];
                    *(_DWORD *)(v30 + 4 * i) = 0;
                  }
                }
              }
              if ( v65 )
              {
                a2[80] = (int)realloc((void *)a2[80], 4 * v65);
                if ( v65 > 0 )
                {
                  v50 = 0;
                  while ( 1 )
                  {
                    v52 = json_array_get(v6, v50);
                    v53 = (unsigned __int8 *)json_string_value(v52);
                    v77 = a2[80];
                    v76 = 4 * v50;
                    v54 = malloc(0x20u);
                    *(_DWORD *)(v77 + 4 * v50) = v54;
                    if ( !v54 )
                    {
                      v77 = 0;
                      V_LOCK(0);
                      v55 = logfmt_raw((int)v78, 0x1000u);
                      V_UNLOCK(v55);
                      v54 = (void *)zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tm"
                                      "p/release/build/godminer-origin_master/frontend/frontend_dcr/frontend_dcr.c",
                                      157,
                                      "stratum_notify_dcr",
                                      18,
                                      145,
                                      100,
                                      v78);
                    }
                    if ( opt_protocol )
                    {
                      V_LOCK(v54);
                      v51 = logfmt_raw((int)v78, 0x1000u);
                      V_UNLOCK(v51);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/frontend/frontend_dcr/frontend_dcr.c",
                        157,
                        "stratum_notify_dcr",
                        18,
                        147,
                        20,
                        v78);
                    }
                    ++v50;
                    if ( !hex2bin(*(_DWORD *)(a2[80] + v76), v53, 32) )
                      break;
                    if ( v65 == v50 )
                      goto LABEL_29;
                  }
                  v7 = 0;
                  V_LOCK(0);
                  v59 = logfmt_raw((int)v78, 0x1000u);
                  V_UNLOCK(v59);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/frontend/frontend_dcr/frontend_dcr.c",
                    157,
                    "stratum_notify_dcr",
                    18,
                    152,
                    100,
                    v78);
                  pthread_mutex_unlock(mutex);
                  return v7;
                }
              }
LABEL_29:
              a2[79] = v65;
              if ( v69 )
                *((_QWORD *)a2 + 38) = 0;
              v32 = (char *)calloc((size_t)ptra, 1u);
              v7 = hex2bin((int)v32, (unsigned __int8 *)v12, (int)ptra);
              if ( v7 )
              {
                v33 = calloc(nmemb, 1u);
                if ( hex2bin((int)v33, (unsigned __int8 *)v17, nmemb) )
                {
                  v34 = (unsigned __int8 *)calloc(n, 1u);
                  if ( hex2bin((int)v34, (unsigned __int8 *)v14, n) )
                  {
                    v35 = v34 + 32;
                    v36 = v34 + 160;
                    v37 = v34[32] == 255;
                    if ( v34[32] != 255 )
                      v37 = v35 >= v36;
                    if ( !v37 )
                    {
                      do
                      {
                        v38 = *++v35;
                        v39 = v38 > 0xFF;
                        if ( v38 != 255 )
                          v39 = v36 > v35;
                      }
                      while ( v39 );
                    }
                    v40 = *v35 == 255;
                    if ( v35 >= v36 )
                      v40 = 0;
                    if ( v40 )
                    {
                      do
                      {
                        v41 = *++v35;
                        v42 = v41 == 255;
                        if ( v36 <= v35 )
                          v42 = 0;
                      }
                      while ( v42 );
                    }
                    if ( *(v35 - 1) == 255 && *(v35 - 2) == 255 )
                    {
                      v56 = v35[1];
                      v43 = (unsigned __int16)(v35[2] + (v35[3] << 8));
                      if ( v56 == 3 )
                      {
                        v43 += v35[4] << 16;
                      }
                      else if ( v56 == 4 )
                      {
                        v43 += (v35[4] + (v35[5] << 8)) << 16;
                      }
                    }
                    else
                    {
                      v43 = 0;
                    }
                    a2[453] = v43;
                    v44 = calloc(v74, 1u);
                    v7 = hex2bin((int)v44, (unsigned __int8 *)s, v74);
                    if ( v7 )
                    {
                      v45 = (void *)a2[73];
                      if ( v45 )
                        free(v45);
                      if ( (v67 & 3) != 0 )
                        v67 = (v67 & 0xFFFFFFFC) + 4;
                      v46 = calloc(v67, 1u);
                      a2[73] = (int)v46;
                      if ( !v46 )
                      {
                        V_LOCK(0);
                        v62 = logfmt_raw((int)v78, 0x1000u);
                        V_UNLOCK(v62);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/bu"
                          "ild/godminer-origin_master/frontend/frontend_dcr/frontend_dcr.c",
                          157,
                          "stratum_notify_dcr",
                          18,
                          196,
                          100,
                          v78);
                      }
                      v47 = (unsigned int *)(v32 - 4);
                      v48 = &v77;
                      do
                      {
                        v49 = v47[1];
                        ++v47;
                        v48[1] = bswap32(v49);
                        ++v48;
                      }
                      while ( v32 + 28 != (char *)v47 );
                      memcpy((void *)a2[73], v34, n);
                      memcpy(a2 + 114, v33, nmemb);
                      memcpy((char *)a2 + nmemb + 456, v78, (size_t)ptra);
                      memcpy(&ptra[nmemb + (_DWORD)(a2 + 114)], v34, n);
                      memcpy(a2 + 150, (const void *)a2[19], a2[18]);
                      memcpy(a2 + 158, v44, v74);
                      *((_QWORD *)a2 + 56) = *a2;
                      pthread_mutex_unlock(mutex);
                      if ( !v32 )
                        goto LABEL_60;
                      goto LABEL_58;
                    }
                    V_LOCK(0);
                    v63 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v63);
                    v61 = 189;
                  }
                  else
                  {
                    V_LOCK(0);
                    v44 = 0;
                    v60 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v60);
                    v61 = 181;
                  }
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/frontend/frontend_dcr/frontend_dcr.c",
                    157,
                    "stratum_notify_dcr",
                    18,
                    v61,
                    100,
                    v78);
                }
                else
                {
                  V_LOCK(0);
                  v44 = 0;
                  v64 = logfmt_raw((int)v78, 0x1000u);
                  V_UNLOCK(v64);
                  v34 = 0;
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/frontend/frontend_dcr/frontend_dcr.c",
                    157,
                    "stratum_notify_dcr",
                    18,
                    173,
                    100,
                    v78);
                }
                pthread_mutex_unlock(mutex);
                if ( !v32 )
                {
                  v7 = 0;
LABEL_59:
                  if ( !v33 )
                  {
LABEL_61:
                    if ( v34 )
                      free(v34);
                    if ( v44 )
                      free(v44);
                    return v7;
                  }
LABEL_60:
                  free(v33);
                  goto LABEL_61;
                }
                v7 = 0;
              }
              else
              {
                V_LOCK(0);
                v57 = logfmt_raw((int)v78, 0x1000u);
                V_UNLOCK(v57);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/frontend/frontend_dcr/frontend_dcr.c",
                  157,
                  "stratum_notify_dcr",
                  18,
                  165,
                  100,
                  v78);
                pthread_mutex_unlock(mutex);
                if ( !v32 )
                  return v7;
                v44 = 0;
                v34 = 0;
                v33 = 0;
              }
LABEL_58:
              free(v32);
              goto LABEL_59;
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
    "ster/frontend/frontend_dcr/frontend_dcr.c",
    157,
    "stratum_notify_dcr",
    18,
    105,
    100,
    v78);
  return 0;
}
