int __fastcall sub_75DDC(int a1, int *a2, const json_t *a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  bool v10; // r3
  size_t v11; // r4
  size_t v12; // r4
  size_t v13; // r4
  size_t v14; // r4
  size_t v15; // r4
  char *v16; // r0
  const char *v17; // r3
  _BYTE v21[60]; // [sp+28h] [bp-113Ch] BYREF
  char v22[262]; // [sp+1028h] [bp-13Ch] BYREF
  bool v23; // [sp+112Eh] [bp-36h]
  unsigned __int8 v24; // [sp+112Fh] [bp-35h]
  int *v25; // [sp+1130h] [bp-34h]
  size_t v26; // [sp+1134h] [bp-30h]
  char *s2; // [sp+1138h] [bp-2Ch]
  char *s; // [sp+113Ch] [bp-28h]
  char *src; // [sp+1140h] [bp-24h]
  char *v30; // [sp+1144h] [bp-20h]
  char *v31; // [sp+1148h] [bp-1Ch]
  char *v32; // [sp+114Ch] [bp-18h]
  size_t v33; // [sp+1150h] [bp-14h]
  char *v34; // [sp+1154h] [bp-10h]

  v24 = 0;
  v26 = 0;
  v25 = a2 + 114;
  v3 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v3);
  v4 = json_array_get(a3, 1u);
  s = (char *)json_string_value(v4);
  v5 = json_array_get(a3, 2u);
  src = (char *)json_string_value(v5);
  v6 = json_array_get(a3, 3u);
  v30 = (char *)json_string_value(v6);
  v7 = json_array_get(a3, 4u);
  v31 = (char *)json_string_value(v7);
  v8 = json_array_get(a3, 5u);
  v32 = (char *)json_string_value(v8);
  v33 = 7;
  v9 = json_array_get(a3, 6u);
  v34 = (char *)json_string_value(v9);
  v10 = json_array_get(a3, 7u) && *(_DWORD *)json_array_get(a3, v33) == 5;
  v23 = v10;
  v11 = strlen(s);
  v12 = v11 + strlen(src);
  v13 = v12 + strlen(v30);
  v14 = v13 + strlen(v31);
  v15 = v14 + strlen(v32);
  v26 = v15 + strlen(v34);
  if ( s2 && s && src && v30 && v31 && v32 && v34 && v26 == 216 )
  {
    if ( v25 )
    {
      if ( v25[281] && !strcmp((const char *)v25[281], s2) )
      {
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change(%s)", v25[281]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_notify_zec",
          18,
          41,
          20,
          v21);
      }
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
      if ( v25[281] )
      {
        free((void *)v25[281]);
        v25[281] = 0;
      }
      v16 = strdup(s2);
      v25[281] = (int)v16;
      strncpy((char *)a2 + 332, s, 0xCu);
      strncpy((char *)a2 + 100, src, 0x44u);
      strncpy((char *)a2 + 356, v32, 0x18u);
      memcpy(a2 + 389, a2 + 89, 0x18u);
      strncpy((char *)a2 + 344, v34, 0xCu);
      *((_BYTE *)a2 + 444) = v23;
      if ( v23 )
        *((_QWORD *)a2 + 39) = 0;
      snprintf(v22, 0x104u, "%s%s%s%s%s%s%s", s, src, v30, v31, v32, v34, "0000000000000000000000000000000000000000");
      if ( !hex2bin((_BYTE *)a2 + 168, v22, 128) )
      {
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "%s: Failed to convert header to header_bin, got %s", "stratum_notify_zec", v22);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_notify_zec",
          18,
          59,
          100,
          v21);
      }
      else
      {
        *(_QWORD *)v25 = *a2;
        v24 = 1;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
      if ( opt_protocol )
      {
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "job_id: %s", s2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_notify_zec",
          18,
          68,
          20,
          v21);
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "version: %s", s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_notify_zec",
          18,
          69,
          20,
          v21);
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "prevhash: %s", src);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_notify_zec",
          18,
          70,
          20,
          v21);
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "merkle: %s", v30);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_notify_zec",
          18,
          71,
          20,
          v21);
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "reserved: %s", v31);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_notify_zec",
          18,
          72,
          20,
          v21);
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "ntime: %s", v32);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_notify_zec",
          18,
          73,
          20,
          v21);
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "nbits: %s", v34);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_notify_zec",
          18,
          74,
          20,
          v21);
        V_LOCK();
        if ( v23 )
          v17 = "yes";
        else
          v17 = "no";
        logfmt_raw(v21, 0x1000u, 0, "clean: %s", v17);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_notify_zec",
          18,
          75,
          20,
          v21);
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_notify_zec",
      18,
      34,
      100,
      v21);
  }
  return v24;
}
