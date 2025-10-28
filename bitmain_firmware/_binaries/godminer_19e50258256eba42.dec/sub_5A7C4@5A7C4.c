bool __fastcall sub_5A7C4(int a1, int *a2, const json_t *a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  bool v10; // r3
  size_t v11; // r0
  char *v12; // r0
  json_t *v13; // r0
  void **v14; // r4
  const char *v15; // r3
  _BYTE v19[64]; // [sp+2Ch] [bp-1140h] BYREF
  size_t v20; // [sp+102Ch] [bp-140h] BYREF
  char v21[228]; // [sp+1030h] [bp-13Ch] BYREF
  char *v22; // [sp+1114h] [bp-58h]
  int *v23; // [sp+1118h] [bp-54h]
  bool v24; // [sp+111Fh] [bp-4Dh]
  void *v25; // [sp+1120h] [bp-4Ch]
  void *src; // [sp+1124h] [bp-48h]
  signed int v27; // [sp+1128h] [bp-44h]
  const json_t *v28; // [sp+112Ch] [bp-40h]
  char *s; // [sp+1130h] [bp-3Ch]
  const char *v30; // [sp+1134h] [bp-38h]
  char *s2; // [sp+1138h] [bp-34h]
  char *v32; // [sp+113Ch] [bp-30h]
  const char *v33; // [sp+1140h] [bp-2Ch]
  const char *v34; // [sp+1144h] [bp-28h]
  const char *v35; // [sp+1148h] [bp-24h]
  bool v36; // [sp+114Fh] [bp-1Dh]
  void *ptr; // [sp+1150h] [bp-1Ch]
  size_t n; // [sp+1154h] [bp-18h]
  size_t nmemb; // [sp+1158h] [bp-14h]
  signed int i; // [sp+115Ch] [bp-10h]

  v24 = 0;
  v23 = a2 + 114;
  src = 0;
  v25 = 0;
  v28 = json_array_get(a3, 4u);
  if ( v28 && *(_DWORD *)v28 == 1 )
  {
    v27 = json_array_size(v28);
    v3 = json_array_get(a3, 0);
    s2 = (char *)json_string_value(v3);
    v4 = json_array_get(a3, 1u);
    v30 = json_string_value(v4);
    v5 = json_array_get(a3, 2u);
    s = (char *)json_string_value(v5);
    v6 = json_array_get(a3, 3u);
    v32 = (char *)json_string_value(v6);
    v7 = json_array_get(a3, 5u);
    v33 = json_string_value(v7);
    v8 = json_array_get(a3, 6u);
    v34 = json_string_value(v8);
    v9 = json_array_get(a3, 7u);
    v35 = json_string_value(v9);
    v10 = json_array_get(a3, 8u) && *(_DWORD *)json_array_get(a3, 8u) == 5;
    v36 = v10;
    if ( (unsigned __int8)valid_ascii(s2) != 1
      || (unsigned __int8)valid_hex(v30) != 1
      || (unsigned __int8)valid_hex(s) != 1
      || (unsigned __int8)valid_hex(v32) != 1
      || (unsigned __int8)valid_hex(v33) != 1
      || (unsigned __int8)valid_hex(v34) != 1
      || (unsigned __int8)valid_hex(v35) != 1 )
    {
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, "Stratum notify: invalid parameters");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dash/frontend_dash.c",
        166,
        "stratum_notify_dash",
        19,
        81,
        100,
        v19);
    }
    else
    {
      settime_based_notify_ntime(v35);
      if ( v23 )
      {
        if ( v23[281] && !strcmp((const char *)v23[281], s2) )
        {
          V_LOCK();
          logfmt_raw(v19, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", v23[281], s2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            89,
            80,
            v19);
        }
        if ( strlen(s2) > 0x3F )
        {
          V_LOCK();
          v11 = strlen(s2);
          logfmt_raw(v19, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 64", s2, v11);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            92,
            80,
            v19);
        }
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
        ptr = (void *)v23[281];
        v12 = strdup(s2);
        v23[281] = (int)v12;
        if ( ptr )
        {
          free(ptr);
          ptr = 0;
        }
        snprintf((char *)a2 + 100, 0x41u, "%s", v30);
        nmemb = strlen(s) >> 1;
        n = strlen(v32) >> 1;
        snprintf((char *)a2 + 332, 9u, "%s", v33);
        snprintf((char *)a2 + 344, 9u, "%s", v34);
        snprintf((char *)a2 + 356, 9u, "%s", v35);
        *((_BYTE *)a2 + 444) = v36;
        a2[74] = a2[19] + nmemb + a2[21] + n;
        v20 = a2[74];
        a2[80] = a2[19] + nmemb;
        for ( i = 0; i < a2[81]; ++i )
        {
          if ( *(_DWORD *)(a2[82] + 4 * i) )
          {
            free(*(void **)(a2[82] + 4 * i));
            *(_DWORD *)(a2[82] + 4 * i) = 0;
          }
        }
        if ( v27 )
        {
          a2[82] = (int)realloc((void *)a2[82], 4 * v27);
          for ( i = 0; i < v27; ++i )
          {
            v13 = json_array_get(v28, i);
            v22 = (char *)json_string_value(v13);
            v14 = (void **)(a2[82] + 4 * i);
            *v14 = malloc(0x20u);
            if ( !*(_DWORD *)(a2[82] + 4 * i) )
            {
              V_LOCK();
              logfmt_raw(v19, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                166,
                "stratum_notify_dash",
                19,
                120,
                100,
                v19);
              set_miner_6060info_malloc_failed_err(1);
            }
            if ( opt_protocol )
            {
              V_LOCK();
              logfmt_raw(v19, 0x1000u, 0, "merkle %d: %s", i, v22);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                166,
                "stratum_notify_dash",
                19,
                124,
                20,
                v19);
            }
            v24 = hex2bin(*(_BYTE **)(a2[82] + 4 * i), v22, 32);
            if ( !v24 )
            {
              V_LOCK();
              logfmt_raw(v19, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                166,
                "stratum_notify_dash",
                19,
                129,
                100,
                v19);
              set_miner_6060info_malloc_failed_err(1);
              goto LABEL_51;
            }
          }
        }
        a2[81] = v27;
        if ( v36 )
          *((_QWORD *)a2 + 39) = 0;
        snprintf(
          v21,
          0xE1u,
          "%s%s%s%s%s%s%s",
          (const char *)a2 + 332,
          (const char *)a2 + 100,
          off_597F14[0],
          (const char *)a2 + 356,
          (const char *)a2 + 344,
          "00000000",
          workpadding[0]);
        v24 = hex2bin((_BYTE *)a2 + 168, v21, 112);
        if ( !v24 )
        {
          V_LOCK();
          logfmt_raw(v19, 0x1000u, 0, "Failed to convert header to header_bin in parse_notify");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            150,
            100,
            v19);
        }
        else
        {
          src = calloc(nmemb, 1u);
          v24 = hex2bin(src, s, nmemb);
          if ( !v24 )
          {
            V_LOCK();
            logfmt_raw(v19, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              166,
              "stratum_notify_dash",
              19,
              157,
              100,
              v19);
          }
          else
          {
            v25 = calloc(n, 1u);
            v24 = hex2bin(v25, v32, n);
            if ( !v24 )
            {
              V_LOCK();
              logfmt_raw(v19, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                166,
                "stratum_notify_dash",
                19,
                164,
                100,
                v19);
            }
            else
            {
              if ( a2[75] )
              {
                free((void *)a2[75]);
                a2[75] = 0;
              }
              align_len(&v20);
              a2[75] = (int)calloc(v20, 1u);
              if ( !a2[75] )
              {
                V_LOCK();
                logfmt_raw(v19, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                  166,
                  "stratum_notify_dash",
                  19,
                  171,
                  100,
                  v19);
              }
              memcpy((void *)a2[75], src, nmemb);
              memcpy((void *)(a2[75] + nmemb), (const void *)a2[20], a2[19]);
              memcpy((void *)(a2[75] + a2[19] + nmemb + a2[21]), v25, n);
              *(_QWORD *)v23 = *a2;
            }
          }
        }
LABEL_51:
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
        if ( opt_protocol )
        {
          V_LOCK();
          logfmt_raw(v19, 0x1000u, 0, "job_id: %s", s2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            189,
            20,
            v19);
          V_LOCK();
          logfmt_raw(v19, 0x1000u, 0, "prev_hash: %s", v30);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            190,
            20,
            v19);
          V_LOCK();
          logfmt_raw(v19, 0x1000u, 0, "coinbase1: %s", s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            191,
            20,
            v19);
          V_LOCK();
          logfmt_raw(v19, 0x1000u, 0, "coinbase2: %s", v32);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            192,
            20,
            v19);
          V_LOCK();
          logfmt_raw(v19, 0x1000u, 0, "bbversion: %s", v33);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            193,
            20,
            v19);
          V_LOCK();
          logfmt_raw(v19, 0x1000u, 0, "nbit: %s", v34);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            194,
            20,
            v19);
          V_LOCK();
          logfmt_raw(v19, 0x1000u, 0, "ntime: %s", v35);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            195,
            20,
            v19);
          V_LOCK();
          if ( v36 )
            v15 = "yes";
          else
            v15 = "no";
          logfmt_raw(v19, 0x1000u, 0, "clean: %s", v15);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            196,
            20,
            v19);
        }
        if ( src )
        {
          free(src);
          src = 0;
        }
        if ( v25 )
        {
          free(v25);
          v25 = 0;
        }
      }
    }
  }
  return v24;
}
