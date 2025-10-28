bool __fastcall sub_68D68(int a1, int *a2, const json_t *a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  json_t *v10; // r0
  json_t *v11; // r0
  size_t v12; // r0
  char *v13; // r0
  size_t v14; // r0
  size_t v15; // r0
  size_t v16; // r0
  size_t v17; // r0
  size_t v18; // r0
  size_t v19; // r0
  char v23[32]; // [sp+20h] [bp-10CCh] BYREF
  _DWORD v24[1025]; // [sp+40h] [bp-10ACh] BYREF
  _BYTE dest[24]; // [sp+1044h] [bp-A8h] BYREF
  int v26[5]; // [sp+105Ch] [bp-90h] BYREF
  int v27; // [sp+1070h] [bp-7Ch]
  size_t nmemb; // [sp+1074h] [bp-78h]
  size_t n; // [sp+1078h] [bp-74h]
  size_t v30; // [sp+107Ch] [bp-70h]
  size_t v31; // [sp+1080h] [bp-6Ch]
  size_t v32; // [sp+1084h] [bp-68h]
  size_t v33; // [sp+1088h] [bp-64h]
  size_t v34; // [sp+108Ch] [bp-60h]
  void *ptr; // [sp+1090h] [bp-5Ch]
  bool v36; // [sp+1097h] [bp-55h]
  int *v37; // [sp+1098h] [bp-54h]
  void *v38; // [sp+109Ch] [bp-50h]
  void *s1; // [sp+10A0h] [bp-4Ch]
  void *v40; // [sp+10A4h] [bp-48h]
  void *v41; // [sp+10A8h] [bp-44h]
  void *v42; // [sp+10ACh] [bp-40h]
  void *v43; // [sp+10B0h] [bp-3Ch]
  void *v44; // [sp+10B4h] [bp-38h]
  void *v45; // [sp+10B8h] [bp-34h]
  char *s2; // [sp+10BCh] [bp-30h]
  char *s; // [sp+10C0h] [bp-2Ch]
  char *v48; // [sp+10C4h] [bp-28h]
  char *v49; // [sp+10C8h] [bp-24h]
  char *v50; // [sp+10CCh] [bp-20h]
  char *v51; // [sp+10D0h] [bp-1Ch]
  char *v52; // [sp+10D4h] [bp-18h]
  char *v53; // [sp+10D8h] [bp-14h]
  char *src; // [sp+10DCh] [bp-10h]

  v36 = 0;
  v37 = a2 + 114;
  v38 = 0;
  s1 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  if ( a3 && *(_DWORD *)a3 == 1 )
  {
    v3 = json_array_get(a3, 0);
    s2 = (char *)json_string_value(v3);
    v4 = json_array_get(a3, 1u);
    s = (char *)json_string_value(v4);
    v5 = json_array_get(a3, 2u);
    v48 = (char *)json_string_value(v5);
    v6 = json_array_get(a3, 3u);
    v49 = (char *)json_string_value(v6);
    v7 = json_array_get(a3, 4u);
    v50 = (char *)json_string_value(v7);
    v8 = json_array_get(a3, 5u);
    v51 = (char *)json_string_value(v8);
    v9 = json_array_get(a3, 6u);
    v52 = (char *)json_string_value(v9);
    v10 = json_array_get(a3, 7u);
    v53 = (char *)json_string_value(v10);
    v11 = json_array_get(a3, 8u);
    src = (char *)json_string_value(v11);
    if ( (unsigned __int8)valid_ascii(s2) != 1
      || (unsigned __int8)valid_hex(s) != 1
      || (unsigned __int8)valid_hex(v49) != 1
      || (unsigned __int8)valid_hex(v48) != 1
      || (unsigned __int8)valid_hex(v50) != 1
      || (unsigned __int8)valid_hex(v51) != 1
      || (unsigned __int8)valid_hex(v52) != 1
      || (unsigned __int8)valid_hex(v53) != 1
      || (unsigned __int8)valid_hex(src) != 1 )
    {
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, "Stratum notify: invalid parameters");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_hns/frontend_hns.c",
        164,
        "stratum_notify_hns",
        18,
        134,
        100,
        v24);
    }
    else
    {
      settime_based_notify_ntime(src);
      if ( v37 )
      {
        if ( v37[281] && !strcmp((const char *)v37[281], s2) )
        {
          V_LOCK();
          logfmt_raw(v24, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", v37[281], s2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
            164,
            "stratum_notify_hns",
            18,
            142,
            80,
            v24);
        }
        if ( strlen(s2) > 0x1F )
        {
          V_LOCK();
          v12 = strlen(s2);
          logfmt_raw(v24, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", s2, v12);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
            164,
            "stratum_notify_hns",
            18,
            145,
            80,
            v24);
        }
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
        ptr = (void *)v37[281];
        v13 = strdup(s2);
        v37[281] = (int)v13;
        if ( ptr )
        {
          free(ptr);
          ptr = 0;
        }
        snprintf((char *)a2 + 100, 0x41u, "%s", s);
        v34 = strlen(s) >> 1;
        v33 = strlen(v48) >> 1;
        v32 = strlen(v49) >> 1;
        v31 = strlen(v50) >> 1;
        v30 = strlen(v51) >> 1;
        n = strlen(v52) >> 1;
        nmemb = strlen(src) >> 1;
        v14 = strlen(v52);
        snprintf((char *)a2 + 332, v14 + 1, "%s", v52);
        v15 = strlen(v53);
        snprintf((char *)a2 + 344, v15 + 1, "%s", v53);
        v16 = strlen(src);
        snprintf((char *)a2 + 356, v16 + 1, "%s", src);
        strcpy((char *)v37 + 1100, src);
        *((_BYTE *)a2 + 444) = 1;
        v17 = strlen(v53);
        v44 = calloc(v17, 1u);
        v18 = strlen(v53);
        v36 = hex2bin(v44, v53, v18 >> 1);
        if ( !v36 )
        {
          V_LOCK();
          logfmt_raw(v24, 0x1000u, 0, "parse nbits failed!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
            164,
            "stratum_notify_hns",
            18,
            173,
            100,
            v24);
        }
        else
        {
          v45 = calloc(nmemb, 1u);
          v36 = hex2bin(v45, src, nmemb);
          if ( !v36 )
          {
            V_LOCK();
            logfmt_raw(v24, 0x1000u, 0, "parse ntime failed!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
              164,
              "stratum_notify_hns",
              18,
              181,
              100,
              v24);
          }
          else
          {
            v38 = calloc(n, 1u);
            v36 = hex2bin(v38, v52, n);
            if ( !v36 )
            {
              V_LOCK();
              logfmt_raw(v24, 0x1000u, 0, "parse bloc_version failed!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                164,
                "stratum_notify_hns",
                18,
                189,
                100,
                v24);
            }
            else
            {
              v40 = calloc(v33, 1u);
              v36 = hex2bin(v40, v48, v33);
              if ( !v36 )
              {
                V_LOCK();
                logfmt_raw(v24, 0x1000u, 0, "parse merkle failed!");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                  164,
                  "stratum_notify_hns",
                  18,
                  197,
                  100,
                  v24);
              }
              else
              {
                a2[411] = 0;
                v41 = calloc(v32, 1u);
                v36 = hex2bin(v41, v49, v32);
                if ( !v36 )
                {
                  V_LOCK();
                  logfmt_raw(v24, 0x1000u, 0, "parse witness failed!");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                    164,
                    "stratum_notify_hns",
                    18,
                    209,
                    100,
                    v24);
                }
                else
                {
                  v43 = calloc(v30, 1u);
                  v36 = hex2bin(v43, v51, v30);
                  if ( !v36 )
                  {
                    V_LOCK();
                    logfmt_raw(v24, 0x1000u, 0, "parse reserved_root failed!");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                      164,
                      "stratum_notify_hns",
                      18,
                      217,
                      100,
                      v24);
                  }
                  else
                  {
                    v42 = calloc(v31, 1u);
                    v36 = hex2bin(v42, v50, v31);
                    if ( !v36 )
                    {
                      V_LOCK();
                      logfmt_raw(v24, 0x1000u, 0, "parse nameroot failed!");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                        164,
                        "stratum_notify_hns",
                        18,
                        225,
                        100,
                        v24);
                    }
                    else
                    {
                      s1 = calloc(v34, 1u);
                      v36 = hex2bin(s1, s, v34);
                      if ( !v36 )
                      {
                        V_LOCK();
                        logfmt_raw(v24, 0x1000u, 0, "parse prev_hash failed!");
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/b"
                          "uild/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                          164,
                          "stratum_notify_hns",
                          18,
                          233,
                          100,
                          v24);
                      }
                      else
                      {
                        sub_68BD8(v26, (int)s1, (int)v42, 0x14u);
                        if ( memcmp(s1, &dword_5AD134, 0x20u) )
                        {
                          dword_5AD134 = *(_DWORD *)s1;
                          memset(v23, 0, sizeof(v23));
                          memset(&unk_5AD154, 0, 0x20u);
                          memset(v24, 0, 0xF0u);
                          hs_blake2b_init(v24, 0x20u);
                          hs_blake2b_update((int)v24, (char *)s1, 0x20u);
                          hs_blake2b_update((int)v24, v23, 0x20u);
                          hs_blake2b_final((int)v24, &unk_5AD154, 0x20u);
                        }
                        memset(dest, 0, 0x16u);
                        memcpy(dest, (const void *)a2[20], a2[19]);
                        v27 = 0;
                        memset(v37 + 2, 0, 0x100u);
                        v19 = strlen(v53);
                        memcpy((char *)v37 + v27 + 8, v44, v19 >> 1);
                        v27 += strlen(v53) >> 1;
                        memcpy((char *)v37 + v27 + 8, v38, n);
                        v27 += n;
                        sub_689F8((int)v37 + v27 + 8, (int)v40, v33);
                        v27 += v33;
                        sub_689F8((int)v37 + v27 + 8, (int)v41, v32);
                        v27 += v32;
                        sub_689F8((int)v37 + v27 + 8, (int)v43, v30);
                        v27 += v30;
                        sub_689F8((int)v37 + v27 + 8, (int)dest, 22);
                        v27 += 22;
                        sub_689F8((int)v37 + v27 + 8, (int)&unk_5AD154, 32);
                        v27 += 32;
                        sub_689F8((int)v37 + v27 + 8, (int)v42, v31);
                        v27 += v31;
                        sub_689F8((int)v37 + v27 + 8, (int)s1, v34);
                        v27 += v34;
                        sub_689F8((int)v37 + v27 + 8, (int)v26, 20);
                        v27 += 20;
                        memset((char *)v37 + v27 + 8, 0, sizeof(int));
                        v27 += 4;
                        memcpy((char *)v37 + v27 + 8, v45, nmemb);
                        v27 += nmemb;
                        memset((char *)v37 + v27 + 8, 0, 6u);
                        *(_QWORD *)v37 = *a2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
        V_LOCK();
        logfmt_raw(v24, 0x1000u, 0, "job_id: %s", s2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          303,
          20,
          v24);
        V_LOCK();
        logfmt_raw(v24, 0x1000u, 0, "prev_hash: %s", s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          304,
          20,
          v24);
        V_LOCK();
        logfmt_raw(v24, 0x1000u, 0, "nbit: %s", v53);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          305,
          20,
          v24);
        V_LOCK();
        logfmt_raw(v24, 0x1000u, 0, "ntime: %s", src);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          306,
          20,
          v24);
        if ( v44 )
        {
          free(v44);
          v44 = 0;
        }
        if ( v45 )
        {
          free(v45);
          v45 = 0;
        }
        if ( v38 )
        {
          free(v38);
          v38 = 0;
        }
        if ( v40 )
        {
          free(v40);
          v40 = 0;
        }
        if ( v41 )
        {
          free(v41);
          v41 = 0;
        }
        if ( v43 )
        {
          free(v43);
          v43 = 0;
        }
        if ( v42 )
        {
          free(v42);
          v42 = 0;
        }
        if ( s1 )
        {
          free(s1);
          s1 = 0;
        }
      }
    }
  }
  return v36;
}
