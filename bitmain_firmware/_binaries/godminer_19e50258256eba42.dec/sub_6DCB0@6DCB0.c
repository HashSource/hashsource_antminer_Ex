int __fastcall sub_6DCB0(int a1, int *a2, const json_t *a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  bool v5; // r3
  size_t v6; // r0
  size_t v7; // r0
  char *v8; // r0
  _BYTE v12[56]; // [sp+24h] [bp-1138h] BYREF
  _BYTE src[287]; // [sp+1024h] [bp-138h] BYREF
  bool v14; // [sp+1143h] [bp-19h]
  char *s2; // [sp+1144h] [bp-18h]
  char *s; // [sp+1148h] [bp-14h]
  unsigned __int8 v17; // [sp+114Fh] [bp-Dh]
  size_t v18; // [sp+1150h] [bp-Ch]
  int *v19; // [sp+1154h] [bp-8h]

  v17 = 0;
  v19 = a2 + 114;
  v3 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v3);
  v18 = 2;
  v4 = json_array_get(a3, 1u);
  s = (char *)json_string_value(v4);
  v5 = json_array_get(a3, 2u) && *(_DWORD *)json_array_get(a3, v18) == 5;
  v14 = v5;
  if ( (unsigned __int8)valid_ascii(s2) != 1 || (unsigned __int8)valid_hex(s) != 1 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kda/frontend_kda.c",
      164,
      "stratum_notify_kda",
      18,
      28,
      100,
      v12);
  }
  else
  {
    v6 = strlen(s);
    hex2bin(src, s, v6 >> 1);
    if ( v19 )
    {
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
      if ( v19[281] && !strcmp((const char *)v19[281], s2) )
      {
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", v19[281], s2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kda/frontend_kda.c",
          164,
          "stratum_notify_kda",
          18,
          36,
          80,
          v12);
      }
      if ( strlen(s2) > 0x3F )
      {
        V_LOCK();
        v7 = strlen(s2);
        logfmt_raw(v12, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= %d", s2, v7, 64);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kda/frontend_kda.c",
          164,
          "stratum_notify_kda",
          18,
          39,
          80,
          v12);
      }
      if ( v19[281] )
      {
        free((void *)v19[281]);
        v19[281] = 0;
      }
      v8 = strdup(s2);
      v19[281] = (int)v8;
      memset(v19 + 2, 0, 0x11Eu);
      memcpy(v19 + 2, src, 0x11Eu);
      *((_BYTE *)a2 + 444) = v14;
      *(_QWORD *)v19 = *a2;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
      return 1;
    }
  }
  return v17;
}
