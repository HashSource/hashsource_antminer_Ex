bool __fastcall sub_5CAFC(int a1, int *a2, const json_t *a3)
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
  _BYTE v18[44]; // [sp+20h] [bp-106Ch] BYREF
  size_t v19; // [sp+1020h] [bp-6Ch] BYREF
  char *v20; // [sp+1024h] [bp-68h]
  size_t v21; // [sp+1028h] [bp-64h]
  size_t n; // [sp+102Ch] [bp-60h]
  size_t v23; // [sp+1030h] [bp-5Ch]
  size_t nmemb; // [sp+1034h] [bp-58h]
  void *ptr; // [sp+1038h] [bp-54h]
  bool v26; // [sp+103Fh] [bp-4Dh]
  signed int i; // [sp+1040h] [bp-4Ch]
  bool v28; // [sp+1047h] [bp-45h]
  int *v29; // [sp+1048h] [bp-44h]
  void *v30; // [sp+104Ch] [bp-40h]
  void *v31; // [sp+1050h] [bp-3Ch]
  void *v32; // [sp+1054h] [bp-38h]
  void *v33; // [sp+1058h] [bp-34h]
  signed int v34; // [sp+105Ch] [bp-30h]
  const json_t *v35; // [sp+1060h] [bp-2Ch]
  char *s2; // [sp+1064h] [bp-28h]
  char *s; // [sp+1068h] [bp-24h]
  char *v38; // [sp+106Ch] [bp-20h]
  char *v39; // [sp+1070h] [bp-1Ch]
  char *v40; // [sp+1074h] [bp-18h]
  const char *v41; // [sp+1078h] [bp-14h]
  char *src; // [sp+107Ch] [bp-10h]

  v28 = 0;
  v29 = a2 + 114;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v35 = json_array_get(a3, 4u);
  if ( v35 && *(_DWORD *)v35 == 1 )
  {
    v34 = json_array_size(v35);
    v3 = json_array_get(a3, 0);
    s2 = (char *)json_string_value(v3);
    v4 = json_array_get(a3, 1u);
    s = (char *)json_string_value(v4);
    v5 = json_array_get(a3, 2u);
    v38 = (char *)json_string_value(v5);
    v6 = json_array_get(a3, 3u);
    v39 = (char *)json_string_value(v6);
    v7 = json_array_get(a3, 5u);
    v40 = (char *)json_string_value(v7);
    v8 = json_array_get(a3, 6u);
    v41 = json_string_value(v8);
    v9 = json_array_get(a3, 7u);
    src = (char *)json_string_value(v9);
    v10 = json_array_get(a3, 8u) && *(_DWORD *)json_array_get(a3, 8u) == 5;
    v26 = v10;
    if ( (unsigned __int8)valid_ascii(s2) != 1
      || (unsigned __int8)valid_hex(s) != 1
      || (unsigned __int8)valid_hex(v38) != 1
      || (unsigned __int8)valid_hex(v40) != 1
      || (unsigned __int8)valid_hex(v41) != 1
      || (unsigned __int8)valid_hex(src) != 1 )
    {
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, "Stratum notify: invalid parameters");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        164,
        "stratum_notify_dcr",
        18,
        104,
        100,
        v18);
    }
    else
    {
      settime_based_notify_ntime(src);
      if ( v29 )
      {
        if ( v29[281] && !strcmp((const char *)v29[281], s2) )
        {
          V_LOCK();
          logfmt_raw(v18, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", v29[281], s2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            164,
            "stratum_notify_dcr",
            18,
            112,
            80,
            v18);
        }
        if ( strlen(s2) > 0x1F )
        {
          V_LOCK();
          v11 = strlen(s2);
          logfmt_raw(v18, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", s2, v11);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            164,
            "stratum_notify_dcr",
            18,
            115,
            80,
            v18);
        }
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
        ptr = (void *)v29[281];
        v12 = strdup(s2);
        v29[281] = (int)v12;
        if ( ptr )
        {
          free(ptr);
          ptr = 0;
        }
        snprintf((char *)a2 + 100, 0x41u, "%s", s);
        nmemb = strlen(s) >> 1;
        v23 = strlen(v40) >> 1;
        n = strlen(v38) >> 1;
        v21 = strlen(v39) >> 1;
        snprintf((char *)a2 + 332, 9u, "%s", v40);
        snprintf((char *)a2 + 344, 9u, "%s", v41);
        snprintf((char *)a2 + 356, 9u, "%s", src);
        strcpy((char *)v29 + 1100, src);
        *((_BYTE *)a2 + 444) = v26;
        a2[74] = a2[19] + n + a2[21] + v21;
        v19 = a2[74];
        a2[80] = a2[19] + n;
        for ( i = 0; i < a2[81]; ++i )
        {
          if ( *(_DWORD *)(a2[82] + 4 * i) )
          {
            free(*(void **)(a2[82] + 4 * i));
            *(_DWORD *)(a2[82] + 4 * i) = 0;
          }
        }
        if ( v34 )
        {
          a2[82] = (int)realloc((void *)a2[82], 4 * v34);
          for ( i = 0; i < v34; ++i )
          {
            v13 = json_array_get(v35, i);
            v20 = (char *)json_string_value(v13);
            v14 = (void **)(a2[82] + 4 * i);
            *v14 = malloc(0x20u);
            if ( !*(_DWORD *)(a2[82] + 4 * i) )
            {
              V_LOCK();
              logfmt_raw(v18, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                164,
                "stratum_notify_dcr",
                18,
                146,
                100,
                v18);
            }
            if ( opt_protocol )
            {
              V_LOCK();
              logfmt_raw(v18, 0x1000u, 0, "merkle %d: %s", i, v20);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                164,
                "stratum_notify_dcr",
                18,
                148,
                20,
                v18);
            }
            v28 = hex2bin(*(_BYTE **)(a2[82] + 4 * i), v20, 32);
            if ( !v28 )
            {
              V_LOCK();
              logfmt_raw(v18, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                164,
                "stratum_notify_dcr",
                18,
                153,
                100,
                v18);
              goto LABEL_52;
            }
          }
        }
        a2[81] = v34;
        if ( v26 )
          *((_QWORD *)a2 + 39) = 0;
        v31 = calloc(nmemb, 1u);
        v28 = hex2bin(v31, s, nmemb);
        if ( !v28 )
        {
          V_LOCK();
          logfmt_raw(v18, 0x1000u, 0, "Failed to convert prev_bloc_hash to prev_bloc_hash_bin in parse_notify");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            164,
            "stratum_notify_dcr",
            18,
            166,
            100,
            v18);
        }
        else
        {
          v30 = calloc(v23, 1u);
          v28 = hex2bin(v30, v40, v23);
          if ( !v28 )
          {
            V_LOCK();
            logfmt_raw(v18, 0x1000u, 0, "Failed to convert block_version to block_version_bin in parse_notify");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
              164,
              "stratum_notify_dcr",
              18,
              174,
              100,
              v18);
          }
          else
          {
            v32 = calloc(n, 1u);
            v28 = hex2bin(v32, v38, n);
            if ( !v28 )
            {
              V_LOCK();
              logfmt_raw(v18, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                164,
                "stratum_notify_dcr",
                18,
                182,
                100,
                v18);
            }
            else
            {
              a2[411] = sub_5C99C((int)v32);
              v33 = calloc(v21, 1u);
              v28 = hex2bin(v33, v39, v21);
              if ( !v28 )
              {
                V_LOCK();
                logfmt_raw(v18, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                  164,
                  "stratum_notify_dcr",
                  18,
                  190,
                  100,
                  v18);
              }
              else
              {
                if ( a2[75] )
                {
                  free((void *)a2[75]);
                  a2[75] = 0;
                }
                sub_5C8A0(&v19);
                a2[75] = (int)calloc(v19, 1u);
                if ( !a2[75] )
                {
                  V_LOCK();
                  logfmt_raw(v18, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                    164,
                    "stratum_notify_dcr",
                    18,
                    197,
                    100,
                    v18);
                }
                flip32(v18, v31);
                memcpy((void *)a2[75], v32, n);
                memset(v29 + 2, 0, 0xB4u);
                memcpy(v29 + 3, v31, 0x20u);
                memcpy(v29 + 11, v32, 0x28u);
                v29[38] = *(_DWORD *)a2[20];
                *(_QWORD *)v29 = *a2;
              }
            }
          }
        }
LABEL_52:
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
        if ( v31 )
        {
          free(v31);
          v31 = 0;
        }
        if ( v30 )
        {
          free(v30);
          v30 = 0;
        }
        if ( v32 )
        {
          free(v32);
          v32 = 0;
        }
        if ( v33 )
        {
          free(v33);
          v33 = 0;
        }
      }
    }
  }
  return v28;
}
