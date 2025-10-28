int __fastcall sub_47C24(int a1, pthread_mutex_t *a2, _DWORD *a3)
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
  int valid; // r4
  size_t v21; // r0
  void *v22; // r0
  void *v23; // r7
  void *v24; // r0
  void *v25; // r8
  size_t v26; // r0
  size_t v27; // r0
  size_t v28; // r0
  const char *nusers; // r0
  size_t v30; // r0
  void *v31; // r9
  void *count; // r0
  size_t lock; // r10
  void *v34; // r0
  void *v35; // r9
  char *v36; // r0
  signed int v37; // r9
  int v38; // r0
  int v39; // r1
  unsigned int v40; // r2
  int v41; // r3
  int v42; // lr
  int v43; // r0
  unsigned int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r12
  int v48; // r2
  signed int v49; // r3
  signed int v50; // r9
  unsigned int v51; // r0
  int v52; // r1
  int v53; // r2
  unsigned int v54; // r3
  int v55; // r5
  int v56; // r0
  int v57; // r1
  unsigned int v58; // r2
  int v59; // r3
  int v60; // r12
  int v61; // r2
  _DWORD *v62; // r0
  unsigned __int8 *v63; // r0
  int owner; // r10
  unsigned __int8 *v65; // r4
  void *v66; // r0
  signed int v67; // [sp+10h] [bp-104Ch]
  char *s; // [sp+14h] [bp-1048h]
  char *sa; // [sp+14h] [bp-1048h]
  char *sb; // [sp+14h] [bp-1048h]
  char *v71; // [sp+18h] [bp-1044h]
  bool v72; // [sp+1Ch] [bp-1040h]
  size_t n; // [sp+20h] [bp-103Ch]
  size_t v74; // [sp+24h] [bp-1038h]
  int v75; // [sp+2Ch] [bp-1030h] BYREF
  int v76; // [sp+30h] [bp-102Ch] BYREF
  int v77; // [sp+34h] [bp-1028h] BYREF
  unsigned int v78; // [sp+38h] [bp-1024h] BYREF
  int v79; // [sp+3Ch] [bp-1020h]
  unsigned int v80; // [sp+40h] [bp-101Ch]
  unsigned int v81; // [sp+44h] [bp-1018h]
  int v82; // [sp+48h] [bp-1014h]
  unsigned int v83; // [sp+4Ch] [bp-1010h]
  unsigned int v84; // [sp+50h] [bp-100Ch]
  int v85; // [sp+54h] [bp-1008h]
  char v86[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v67 = (signed int)json_array_size(v5);
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
  v71 = (char *)json_string_value(v19);
  if ( json_array_get(a3, 8u) )
    v72 = *json_array_get(a3, 8u) == 5;
  else
    v72 = 0;
  if ( valid_ascii(v9)
    && valid_hex(v11)
    && valid_hex(v13)
    && valid_hex(v15)
    && valid_hex(v17)
    && valid_hex(s)
    && (valid = valid_hex(v71)) != 0 )
  {
    v21 = strlen(v11);
    hex2bin((int)&v78, (unsigned __int8 *)v11, v21 >> 1);
    n = strlen(v13) >> 1;
    v22 = calloc(n, 1u);
    v23 = v22;
    if ( !v22 )
    {
      V_LOCK();
      logfmt_raw(v86, 0x1000u, 0, "Failed to calloc pool coinbase1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ltc/frontend_ltc.c",
        157,
        "stratum_notify_ltc",
        18,
        58,
        100,
        v86);
      return 0;
    }
    hex2bin((int)v22, (unsigned __int8 *)v13, n);
    v74 = strlen(v15) >> 1;
    v24 = calloc(v74, 1u);
    v25 = v24;
    if ( v24 )
    {
      hex2bin((int)v24, (unsigned __int8 *)v15, v74);
      v26 = strlen(v17);
      hex2bin((int)&v75, (unsigned __int8 *)v17, v26 >> 1);
      v27 = strlen(s);
      hex2bin((int)&v76, (unsigned __int8 *)s, v27 >> 1);
      v28 = strlen(v71);
      hex2bin((int)&v77, (unsigned __int8 *)v71, v28 >> 1);
      if ( a2 == (pthread_mutex_t *)-448 )
      {
        valid = 0;
      }
      else
      {
        nusers = (const char *)a2[66].__nusers;
        if ( nusers && !strcmp(nusers, v9) )
        {
          V_LOCK();
          logfmt_raw(v86, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[66].__nusers, v9);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_ltc/frontend_ltc.c",
            157,
            "stratum_notify_ltc",
            18,
            75,
            80,
            v86);
        }
        if ( strlen(v9) > 0x3F )
        {
          V_LOCK();
          v30 = strlen(v9);
          logfmt_raw(v86, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= %d", v9, v30, 64);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_ltc/frontend_ltc.c",
            157,
            "stratum_notify_ltc",
            18,
            78,
            80,
            v86);
        }
        pthread_mutex_lock(a2 + 73);
        v31 = (void *)a2[66].__nusers;
        a2[66].__nusers = (unsigned int)_strdup(v9);
        if ( v31 )
          free(v31);
        count = (void *)a2[12].__count;
        if ( count )
          free(count);
        lock = a2[3].__lock;
        sa = (char *)(lock + a2[3].__owner + n);
        a2[12].__lock = (int)&sa[v74];
        v34 = calloc((size_t)&sa[v74], 1u);
        v35 = v34;
        a2[12].__count = (unsigned int)v34;
        if ( v34 )
        {
          memcpy(v34, v23, n);
          memcpy((char *)v35 + n, (const void *)a2[3].__count, lock);
          v36 = &sa[(_DWORD)v35];
          v37 = 0;
          memcpy(v36, v25, v74);
          v38 = v78;
          v39 = v79;
          v40 = v80;
          v41 = v81;
          a2[3].__kind = n + lock;
          v42 = v75;
          a2[3].__spins = v38;
          a2[4].__lock = v39;
          a2[4].__count = v40;
          a2[4].__owner = v41;
          v43 = v82;
          v44 = v83;
          v45 = v84;
          v46 = v85;
          v47 = v77;
          a2[13].__kind = v42;
          a2[4].__spins = v45;
          v48 = v76;
          a2[5].__lock = v46;
          a2[4].__kind = v43;
          a2[4].__nusers = v44;
          v49 = a2[13].__count;
          a2[14].__lock = v48;
          a2[14].__kind = v47;
          while ( v37 < v49 )
          {
            if ( *(_DWORD *)(a2[13].__owner + 4 * v37) )
            {
              free(*(void **)(a2[13].__owner + 4 * v37));
              v49 = a2[13].__count;
              *(_DWORD *)(a2[13].__owner + 4 * v37) = 0;
            }
            ++v37;
          }
          v50 = 0;
          a2[13].__count = 0;
          if ( v67 )
          {
            sb = (char *)valid;
            a2[13].__owner = (int)realloc((void *)a2[13].__owner, 4 * v67);
            while ( v50 < v67 )
            {
              v62 = json_array_get(v6, v50);
              v63 = (unsigned __int8 *)json_string_value(v62);
              owner = a2[13].__owner;
              v65 = v63;
              v66 = malloc(0x20u);
              *(_DWORD *)(owner + 4 * v50++) = v66;
              hex2bin((int)v66, v65, 32);
            }
            valid = (int)sb;
            a2[13].__count = v67;
          }
          memset(&a2[19], 0, 0x50u);
          v51 = v78;
          v52 = v79;
          v53 = v80;
          v54 = v81;
          a2[19].__lock = v75;
          v55 = v76;
          a2[19].__count = v51;
          a2[19].__owner = v52;
          a2[19].__kind = v53;
          a2[19].__nusers = v54;
          v56 = v82;
          v57 = v83;
          v58 = v84;
          v59 = v85;
          v60 = v77;
          a2[22].__lock = v55;
          a2[20].__count = v58;
          v61 = a2->__lock;
          a2[20].__owner = v59;
          a2[20].__lock = v57;
          a2[18].__size[4] = v72;
          a2[19].__spins = v56;
          a2[21].__spins = v60;
          *((_QWORD *)&a2[18].__align + 2) = v61;
          pthread_mutex_unlock(a2 + 73);
        }
        else
        {
          V_LOCK();
          logfmt_raw(v86, 0x1000u, 0, "Failed to calloc pool coinbase");
          V_UNLOCK();
          valid = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_ltc/frontend_ltc.c",
            157,
            "stratum_notify_ltc",
            18,
            89,
            100,
            v86);
          pthread_mutex_unlock(a2 + 73);
        }
      }
      free(v25);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v86, 0x1000u, 0, "Failed to calloc pool coinbase2");
      V_UNLOCK();
      valid = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ltc/frontend_ltc.c",
        157,
        "stratum_notify_ltc",
        18,
        65,
        100,
        v86);
    }
    free(v23);
    return valid;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v86, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ltc/frontend_ltc.c",
      157,
      "stratum_notify_ltc",
      18,
      50,
      100,
      v86);
    return 0;
  }
}
