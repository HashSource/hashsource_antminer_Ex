bool __fastcall sub_3DCDC(int a1, pthread_mutex_t *a2, _DWORD *a3)
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
  const char *kind; // r0
  size_t v25; // r0
  int owner; // r3
  int count; // r1
  size_t v28; // r2
  int v29; // r2
  int i; // r4
  char *v31; // r5
  void *v32; // r10
  unsigned __int8 *v33; // r7
  unsigned __int8 *v34; // r3
  unsigned __int8 *v35; // r2
  bool v36; // cf
  unsigned int v37; // t1
  bool v38; // cc
  int j; // r0
  int v40; // t1
  _BOOL4 v41; // r1
  int v42; // r2
  void *v43; // r8
  void *v44; // r0
  void *v45; // r0
  unsigned int *v46; // r3
  int *v47; // r1
  unsigned int v48; // t1
  int v49; // r1
  signed int v50; // r10
  _DWORD *v51; // r0
  unsigned __int8 *v52; // r4
  void *v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // lr
  int v63; // r0
  int v64; // r0
  int v65; // [sp+10h] [bp-103Ch]
  const char *v66; // [sp+14h] [bp-1038h]
  unsigned int v67; // [sp+14h] [bp-1038h]
  char *s; // [sp+18h] [bp-1034h]
  _BOOL4 v69; // [sp+1Ch] [bp-1030h]
  pthread_mutex_t *mutex; // [sp+24h] [bp-1028h]
  void *ptr; // [sp+28h] [bp-1024h]
  char *ptra; // [sp+28h] [bp-1024h]
  size_t n; // [sp+2Ch] [bp-1020h]
  size_t v74; // [sp+30h] [bp-101Ch]
  size_t nmemb; // [sp+34h] [bp-1018h]
  int v76; // [sp+38h] [bp-1014h]
  int v77; // [sp+44h] [bp-1008h] BYREF
  _BYTE v78[4100]; // [sp+48h] [bp-1004h] BYREF

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
              settime_based_notify_ntime(v66);
              if ( a2 == (pthread_mutex_t *)-448 )
                return 0;
              kind = (const char *)a2[65].__kind;
              if ( kind && !strcmp(kind, v10) )
              {
                V_LOCK(0);
                v58 = logfmt_raw((int)v78, 0x1000u);
                V_UNLOCK(v58);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                  163,
                  "stratum_notify_dcr",
                  18,
                  112,
                  80,
                  v78);
              }
              v25 = strlen(v10);
              if ( v25 > 0x1F )
              {
                V_LOCK(v25);
                strlen(v10);
                v57 = logfmt_raw((int)v78, 0x1000u);
                V_UNLOCK(v57);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                  163,
                  "stratum_notify_dcr",
                  18,
                  115,
                  80,
                  v78);
              }
              mutex = a2 + 66;
              pthread_mutex_lock(a2 + 66);
              ptr = (void *)a2[65].__kind;
              a2[65].__kind = (int)_strdup(v10);
              if ( ptr )
                free(ptr);
              snprintf(&a2[3].__size[20], 0x41u, "%s", v12);
              ptra = (char *)(strlen(v12) >> 1);
              nmemb = strlen(v17) >> 1;
              n = strlen(v14) >> 1;
              v74 = strlen(s) >> 1;
              snprintf(&a2[13].__size[12], 9u, "%s", v17);
              snprintf((char *)&a2[14], 9u, "%s", v19);
              snprintf(&a2[14].__size[12], 9u, "%s", v66);
              strcpy(&a2[64].__size[12], v66);
              owner = a2[3].__owner;
              count = a2[13].__count;
              v28 = n + a2[3].__lock;
              a2[18].__size[4] = v21;
              a2[13].__lock = v28;
              v67 = v74 + owner + v28;
              a2[12].__lock = v67;
              if ( count > 0 )
              {
                v29 = a2[13].__owner;
                for ( i = 0; i < count; ++i )
                {
                  if ( *(_DWORD *)(v29 + 4 * i) )
                  {
                    free(*(void **)(v29 + 4 * i));
                    v29 = a2[13].__owner;
                    count = a2[13].__count;
                    *(_DWORD *)(v29 + 4 * i) = 0;
                  }
                }
              }
              if ( v65 )
              {
                v50 = 0;
                a2[13].__owner = (int)realloc((void *)a2[13].__owner, 4 * v65);
                while ( 1 )
                {
                  v76 = 4 * v50;
                  if ( v65 <= v50 )
                    break;
                  v51 = json_array_get(v6, v50);
                  v52 = (unsigned __int8 *)json_string_value(v51);
                  v77 = a2[13].__owner;
                  v53 = malloc(0x20u);
                  *(_DWORD *)(v77 + 4 * v50) = v53;
                  if ( !v53 )
                  {
                    v77 = 0;
                    V_LOCK(0);
                    v56 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v56);
                    v53 = (void *)zlog(
                                    g_zc,
                                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tm"
                                    "p/debug/build/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                                    163,
                                    "stratum_notify_dcr",
                                    18,
                                    146,
                                    100,
                                    v78);
                  }
                  if ( opt_protocol )
                  {
                    V_LOCK(v53);
                    v54 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v54);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/"
                      "godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                      163,
                      "stratum_notify_dcr",
                      18,
                      148,
                      20,
                      v78);
                  }
                  ++v50;
                  if ( !hex2bin(*(_DWORD *)(a2[13].__owner + v76), v52, 32) )
                  {
                    v7 = 0;
                    V_LOCK(0);
                    v55 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v55);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/"
                      "godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                      163,
                      "stratum_notify_dcr",
                      18,
                      153,
                      100,
                      v78);
                    pthread_mutex_unlock(mutex);
                    return v7;
                  }
                }
              }
              a2[13].__count = v65;
              if ( v69 )
                *((_QWORD *)&a2[12].__align + 2) = 0;
              v31 = (char *)calloc((size_t)ptra, 1u);
              v7 = hex2bin((int)v31, (unsigned __int8 *)v12, (int)ptra);
              if ( v7 )
              {
                v32 = calloc(nmemb, 1u);
                if ( hex2bin((int)v32, (unsigned __int8 *)v17, nmemb) )
                {
                  v33 = (unsigned __int8 *)calloc(n, 1u);
                  if ( hex2bin((int)v33, (unsigned __int8 *)v14, n) )
                  {
                    v34 = v33 + 32;
                    v35 = v33 + 160;
                    v36 = v33[32] == 255;
                    if ( v33[32] != 255 )
                      v36 = v34 >= v35;
                    if ( !v36 )
                    {
                      do
                      {
                        v37 = *++v34;
                        v38 = v37 > 0xFF;
                        if ( v37 != 255 )
                          v38 = v35 > v34;
                      }
                      while ( v38 );
                    }
                    for ( j = *v34; ; j = v40 )
                    {
                      v41 = j == 255;
                      if ( v35 <= v34 )
                        v41 = 0;
                      if ( !v41 )
                        break;
                      v40 = *++v34;
                    }
                    if ( *(v34 - 1) == 255 && *(v34 - 2) == 255 )
                    {
                      v49 = v34[1];
                      v42 = (unsigned __int16)(v34[2] + (v34[3] << 8));
                      if ( v49 == 3 )
                      {
                        v42 += v34[4] << 16;
                      }
                      else if ( v49 == 4 )
                      {
                        v42 += (v34[4] + (v34[5] << 8)) << 16;
                      }
                    }
                    else
                    {
                      v42 = 0;
                    }
                    a2[68].__count = v42;
                    v43 = calloc(v74, 1u);
                    v7 = hex2bin((int)v43, (unsigned __int8 *)s, v74);
                    if ( v7 )
                    {
                      v44 = (void *)a2[12].__count;
                      if ( v44 )
                        free(v44);
                      if ( (v67 & 3) != 0 )
                        v67 = (v67 & 0xFFFFFFFC) + 4;
                      v45 = calloc(v67, 1u);
                      a2[12].__count = (unsigned int)v45;
                      if ( !v45 )
                      {
                        V_LOCK(0);
                        v60 = logfmt_raw((int)v78, 0x1000u);
                        V_UNLOCK(v60);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/bu"
                          "ild/godminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                          163,
                          "stratum_notify_dcr",
                          18,
                          197,
                          100,
                          v78);
                      }
                      v46 = (unsigned int *)(v31 - 4);
                      v47 = &v77;
                      do
                      {
                        v48 = v46[1];
                        ++v46;
                        v47[1] = bswap32(v48);
                        ++v47;
                      }
                      while ( v31 + 28 != (char *)v46 );
                      memcpy((void *)a2[12].__count, v33, n);
                      memcpy(&a2[19], v32, nmemb);
                      memcpy((char *)&a2[19] + nmemb, v78, (size_t)ptra);
                      memcpy(&ptra[nmemb + (_DWORD)(a2 + 19)], v33, n);
                      memcpy(&a2[25], (const void *)a2[3].__count, a2[3].__lock);
                      memcpy(&a2[26].__align + 2, v43, v74);
                      *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
                      pthread_mutex_unlock(mutex);
                      if ( !v31 )
                        goto LABEL_59;
                      goto LABEL_57;
                    }
                    V_LOCK(0);
                    v61 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v61);
                    v62 = 190;
                  }
                  else
                  {
                    V_LOCK(0);
                    v43 = 0;
                    v63 = logfmt_raw((int)v78, 0x1000u);
                    V_UNLOCK(v63);
                    v62 = 182;
                  }
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/go"
                    "dminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                    163,
                    "stratum_notify_dcr",
                    18,
                    v62,
                    100,
                    v78);
                }
                else
                {
                  V_LOCK(0);
                  v43 = 0;
                  v64 = logfmt_raw((int)v78, 0x1000u);
                  V_UNLOCK(v64);
                  v33 = 0;
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/go"
                    "dminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                    163,
                    "stratum_notify_dcr",
                    18,
                    174,
                    100,
                    v78);
                }
                pthread_mutex_unlock(mutex);
                if ( !v31 )
                {
                  v7 = 0;
LABEL_58:
                  if ( !v32 )
                  {
LABEL_60:
                    if ( v33 )
                      free(v33);
                    if ( v43 )
                      free(v43);
                    return v7;
                  }
LABEL_59:
                  free(v32);
                  goto LABEL_60;
                }
                v7 = 0;
              }
              else
              {
                V_LOCK(0);
                v59 = logfmt_raw((int)v78, 0x1000u);
                V_UNLOCK(v59);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                  163,
                  "stratum_notify_dcr",
                  18,
                  166,
                  100,
                  v78);
                pthread_mutex_unlock(mutex);
                if ( !v31 )
                  return v7;
                v43 = 0;
                v33 = 0;
                v32 = 0;
              }
LABEL_57:
              free(v31);
              goto LABEL_58;
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
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/frontend/frontend_dcr/frontend_dcr.c",
    163,
    "stratum_notify_dcr",
    18,
    104,
    100,
    v78);
  return 0;
}
