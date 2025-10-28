char *__fastcall sub_420B0(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _DWORD *v8; // r0
  const char *v9; // r10
  _DWORD *v10; // r0
  char *v11; // r7
  _DWORD *v12; // r0
  char *v13; // r8
  _DWORD *v14; // r0
  char *v15; // r9
  _DWORD *v16; // r0
  char *v17; // r11
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int valid; // r0
  int v21; // r0
  char *v22; // r4
  size_t v23; // r0
  void *v24; // r0
  void *v25; // r7
  void *v26; // r0
  void *v27; // r8
  size_t v28; // r0
  size_t v29; // r0
  size_t v30; // r0
  const char *kind; // r0
  int v32; // r0
  size_t v33; // r0
  int v34; // r0
  void *v35; // r9
  void *count; // r0
  size_t lock; // r10
  void *v38; // r0
  void *v39; // r9
  char *v40; // r0
  int v41; // r9
  unsigned int v42; // r0
  int v43; // r1
  unsigned int v44; // r2
  unsigned int v45; // r3
  int v46; // lr
  int v47; // r0
  unsigned int v48; // r1
  unsigned int v49; // r2
  int v50; // r3
  int v51; // r12
  int v52; // r2
  int v53; // r3
  signed int v54; // r9
  unsigned int v55; // r0
  int v56; // r1
  unsigned int v57; // r2
  unsigned int v58; // r3
  int v59; // r5
  int v60; // r0
  unsigned int v61; // r1
  unsigned int v62; // r2
  int v63; // r3
  int v64; // r12
  int v65; // r2
  int v66; // r0
  _DWORD *v67; // r0
  unsigned __int8 *v68; // r0
  int owner; // r10
  unsigned __int8 *v70; // r4
  void *v71; // r0
  int v72; // r0
  int v73; // r0
  int v74; // [sp+10h] [bp-104Ch]
  char *s; // [sp+14h] [bp-1048h]
  char *sa; // [sp+14h] [bp-1048h]
  char *sb; // [sp+14h] [bp-1048h]
  char *v78; // [sp+18h] [bp-1044h]
  bool v79; // [sp+1Ch] [bp-1040h]
  size_t n; // [sp+20h] [bp-103Ch]
  size_t v81; // [sp+24h] [bp-1038h]
  int v82; // [sp+2Ch] [bp-1030h] BYREF
  int v83; // [sp+30h] [bp-102Ch] BYREF
  int v84; // [sp+34h] [bp-1028h] BYREF
  unsigned int v85; // [sp+38h] [bp-1024h] BYREF
  int v86; // [sp+3Ch] [bp-1020h]
  unsigned int v87; // [sp+40h] [bp-101Ch]
  unsigned int v88; // [sp+44h] [bp-1018h]
  int v89; // [sp+48h] [bp-1014h]
  unsigned int v90; // [sp+4Ch] [bp-1010h]
  unsigned int v91; // [sp+50h] [bp-100Ch]
  int v92; // [sp+54h] [bp-1008h]
  _BYTE v93[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v74 = (int)json_array_size(v5);
  v8 = json_array_get(a3, 0);
  v9 = (const char *)json_string_value(v8);
  v10 = json_array_get(a3, 1u);
  v11 = (char *)json_string_value(v10);
  v12 = json_array_get(a3, 2u);
  v13 = (char *)json_string_value(v12);
  v14 = json_array_get(a3, 3u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  s = (char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v78 = (char *)json_string_value(v19);
  if ( json_array_get(a3, 8u) )
    v79 = *json_array_get(a3, 8u) == 5;
  else
    v79 = 0;
  valid = valid_ascii(v9);
  if ( valid
    && (valid = valid_hex(v11)) != 0
    && (valid = valid_hex(v13)) != 0
    && (valid = valid_hex(v15)) != 0
    && (valid = valid_hex(v17)) != 0
    && (valid = valid_hex(s)) != 0
    && (valid = valid_hex(v78), (v22 = (char *)valid) != 0) )
  {
    v23 = strlen(v11);
    hex2bin((int)&v85, (unsigned __int8 *)v11, v23 >> 1);
    n = strlen(v13) >> 1;
    v24 = calloc(n, 1u);
    v25 = v24;
    if ( !v24 )
    {
      V_LOCK(0);
      v73 = logfmt_raw((int)v93, 0x1000u);
      V_UNLOCK(v73);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        162,
        "stratum_notify_ltc",
        18,
        56,
        100,
        v93);
      return 0;
    }
    hex2bin((int)v24, (unsigned __int8 *)v13, n);
    v81 = strlen(v15) >> 1;
    v26 = calloc(v81, 1u);
    v27 = v26;
    if ( v26 )
    {
      hex2bin((int)v26, (unsigned __int8 *)v15, v81);
      v28 = strlen(v17);
      hex2bin((int)&v82, (unsigned __int8 *)v17, v28 >> 1);
      v29 = strlen(s);
      hex2bin((int)&v83, (unsigned __int8 *)s, v29 >> 1);
      v30 = strlen(v78);
      hex2bin((int)&v84, (unsigned __int8 *)v78, v30 >> 1);
      if ( a2 == (pthread_mutex_t *)-448 )
      {
        v22 = 0;
      }
      else
      {
        kind = (const char *)a2[65].__kind;
        if ( kind && !strcmp(kind, v9) )
        {
          V_LOCK(0);
          v32 = logfmt_raw((int)v93, 0x1000u);
          V_UNLOCK(v32);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            162,
            "stratum_notify_ltc",
            18,
            73,
            80,
            v93);
        }
        v33 = strlen(v9);
        if ( v33 > 0x3F )
        {
          V_LOCK(v33);
          strlen(v9);
          v34 = logfmt_raw((int)v93, 0x1000u);
          V_UNLOCK(v34);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            162,
            "stratum_notify_ltc",
            18,
            76,
            80,
            v93);
        }
        pthread_mutex_lock(a2 + 66);
        v35 = (void *)a2[65].__kind;
        a2[65].__kind = (int)_strdup(v9);
        if ( v35 )
          free(v35);
        count = (void *)a2[12].__count;
        if ( count )
          free(count);
        lock = a2[3].__lock;
        sa = (char *)(lock + a2[3].__owner + n);
        a2[12].__lock = (int)&sa[v81];
        v38 = calloc((size_t)&sa[v81], 1u);
        v39 = v38;
        a2[12].__count = (unsigned int)v38;
        if ( v38 )
        {
          memcpy(v38, v25, n);
          memcpy((char *)v39 + n, (const void *)a2[3].__count, lock);
          v40 = &sa[(_DWORD)v39];
          v41 = 0;
          memcpy(v40, v27, v81);
          v42 = v85;
          v43 = v86;
          v44 = v87;
          v45 = v88;
          a2[3].__kind = n + lock;
          v46 = v82;
          a2[3].__spins = v42;
          a2[4].__lock = v43;
          a2[4].__count = v44;
          a2[4].__owner = v45;
          v47 = v89;
          v48 = v90;
          v49 = v91;
          v50 = v92;
          v51 = v84;
          a2[13].__kind = v46;
          a2[4].__spins = v49;
          v52 = v83;
          a2[5].__lock = v50;
          a2[4].__kind = v47;
          a2[4].__nusers = v48;
          v53 = a2[13].__count;
          a2[14].__lock = v52;
          a2[14].__kind = v51;
          while ( v41 < v53 )
          {
            if ( *(_DWORD *)(a2[13].__owner + 4 * v41) )
            {
              free(*(void **)(a2[13].__owner + 4 * v41));
              v53 = a2[13].__count;
              *(_DWORD *)(a2[13].__owner + 4 * v41) = 0;
            }
            ++v41;
          }
          v54 = 0;
          a2[13].__count = 0;
          if ( v74 )
          {
            sb = v22;
            a2[13].__owner = (int)realloc((void *)a2[13].__owner, 4 * v74);
            while ( v54 < v74 )
            {
              v67 = json_array_get(v6, v54);
              v68 = (unsigned __int8 *)json_string_value(v67);
              owner = a2[13].__owner;
              v70 = v68;
              v71 = malloc(0x20u);
              *(_DWORD *)(owner + 4 * v54++) = v71;
              hex2bin((int)v71, v70, 32);
            }
            v22 = sb;
            a2[13].__count = v74;
          }
          memset(&a2[19], 0, 0x50u);
          v55 = v85;
          v56 = v86;
          v57 = v87;
          v58 = v88;
          a2[19].__lock = v82;
          v59 = v83;
          a2[19].__count = v55;
          a2[19].__owner = v56;
          a2[19].__kind = v57;
          a2[19].__nusers = v58;
          v60 = v89;
          v61 = v90;
          v62 = v91;
          v63 = v92;
          v64 = v84;
          a2[22].__lock = v59;
          a2[20].__count = v62;
          v65 = a2->__lock;
          a2[20].__owner = v63;
          a2[20].__lock = v61;
          a2[18].__size[4] = v79;
          a2[19].__spins = v60;
          a2[21].__spins = v64;
          *((_QWORD *)&a2[18].__align + 2) = v65;
          pthread_mutex_unlock(a2 + 66);
        }
        else
        {
          V_LOCK(0);
          v66 = logfmt_raw((int)v93, 0x1000u);
          V_UNLOCK(v66);
          v22 = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            162,
            "stratum_notify_ltc",
            18,
            87,
            100,
            v93);
          pthread_mutex_unlock(a2 + 66);
        }
      }
      free(v27);
    }
    else
    {
      V_LOCK(0);
      v72 = logfmt_raw((int)v93, 0x1000u);
      V_UNLOCK(v72);
      v22 = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        162,
        "stratum_notify_ltc",
        18,
        63,
        100,
        v93);
    }
    free(v25);
    return v22;
  }
  else
  {
    V_LOCK(valid);
    v21 = logfmt_raw((int)v93, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      162,
      "stratum_notify_ltc",
      18,
      48,
      100,
      v93);
    return 0;
  }
}
