int __fastcall sub_6CF30(int a1, int *a2, const json_t *a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  __int64 v6; // r0
  json_t *v7; // r0
  size_t v8; // r0
  char *v9; // r0
  __int64 v10; // r0
  __int64 v11; // r0
  _BYTE v15[12]; // [sp+20h] [bp-104Ch] BYREF
  __int64 src; // [sp+1020h] [bp-4Ch] BYREF
  int v17; // [sp+1028h] [bp-44h] BYREF
  _DWORD v18[7]; // [sp+102Ch] [bp-40h]
  int *v19; // [sp+1048h] [bp-24h]
  signed int i; // [sp+104Ch] [bp-20h]
  char *s2; // [sp+1050h] [bp-1Ch]
  int j; // [sp+1054h] [bp-18h]
  __int64 v23; // [sp+1058h] [bp-14h]
  int k; // [sp+1060h] [bp-Ch]
  unsigned __int8 v25; // [sp+1067h] [bp-5h]

  v25 = 0;
  v19 = a2 + 114;
  v3 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v3);
  for ( i = 0; i <= 3; ++i )
  {
    v4 = json_array_get(a3, 1u);
    v5 = json_array_get(v4, i);
    v6 = json_integer_value((int)v5);
    *(_QWORD *)&v18[2 * i - 1] = v6;
  }
  v7 = json_array_get(a3, 2u);
  src = json_integer_value((int)v7);
  for ( j = 0; j <= 3; ++j )
  {
    if ( !*(_QWORD *)&v18[2 * j - 1] )
    {
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "Stratum notify: invalid parameters");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        381,
        100,
        v15);
      return v25;
    }
  }
  if ( (unsigned __int8)valid_ascii(s2) == 1 && src )
  {
    if ( v19 )
    {
      if ( v19[281] && !strcmp((const char *)v19[281], s2) )
      {
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", v19[281], s2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_notify_kas",
          18,
          395,
          80,
          v15);
      }
      if ( strlen(s2) > 0x1F )
      {
        V_LOCK();
        v8 = strlen(s2);
        logfmt_raw(v15, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", s2, v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_notify_kas",
          18,
          399,
          80,
          v15);
      }
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
      v9 = strdup(s2);
      v19[281] = (int)v9;
      LODWORD(v10) = sub_6B270(src, HIDWORD(src));
      v23 = v10;
      src = v10;
      memcpy(v19 + 2, &src, 8u);
      for ( k = 0; k <= 3; ++k )
      {
        LODWORD(v11) = sub_6B270(v18[2 * k - 1], v18[2 * k]);
        v23 = v11;
        *(_QWORD *)&v18[2 * k - 1] = v11;
        memcpy(&v19[2 * k + 4], &v18[2 * k - 1], 0x20u);
      }
      memcpy(v19 + 12, (const void *)a2[20], a2[19]);
      memset((char *)v19 + a2[19] + 48, 0, 8 - a2[19]);
      *(_QWORD *)v19 = *a2;
      v25 = 1;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
      if ( opt_protocol )
      {
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, "job_id: %s", s2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_notify_kas",
          18,
          427,
          20,
          v15);
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, "header0: %llx", v17, v18[0]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_notify_kas",
          18,
          428,
          20,
          v15);
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, "header1: %llx", v18[1], v18[2]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_notify_kas",
          18,
          429,
          20,
          v15);
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, "header2: %llx", v18[3], v18[4]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_notify_kas",
          18,
          430,
          20,
          v15);
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, "header3: %llx", v18[5], v18[6]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_notify_kas",
          18,
          431,
          20,
          v15);
        V_LOCK();
        logfmt_raw(v15, 0x1000u, 0, "timestamp: %llx", src);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "stratum_notify_kas",
          18,
          432,
          20,
          v15);
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kas/frontend_kas.c",
      164,
      "stratum_notify_kas",
      18,
      387,
      100,
      v15);
  }
  return v25;
}
