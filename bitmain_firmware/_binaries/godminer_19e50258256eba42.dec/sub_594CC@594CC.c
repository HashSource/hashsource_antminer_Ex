int __fastcall sub_594CC(int a1, int *a2, const json_t *a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  size_t v6; // r3
  json_t *v7; // r0
  bool v8; // r3
  size_t v9; // r0
  size_t v10; // r0
  size_t v11; // r0
  char *v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  _BYTE v22[40]; // [sp+24h] [bp-1068h] BYREF
  _DWORD v23[8]; // [sp+1024h] [bp-68h] BYREF
  _BYTE src[32]; // [sp+1044h] [bp-48h] BYREF
  void *ptr; // [sp+1064h] [bp-28h]
  bool v26; // [sp+106Bh] [bp-21h]
  int *v27; // [sp+106Ch] [bp-20h]
  int v28; // [sp+1070h] [bp-1Ch]
  char *v29; // [sp+1074h] [bp-18h]
  unsigned __int8 v30; // [sp+107Bh] [bp-11h]
  size_t v31; // [sp+107Ch] [bp-10h]
  char *s2; // [sp+1080h] [bp-Ch]
  char *s; // [sp+1084h] [bp-8h]

  v29 = 0;
  v30 = 0;
  v27 = a2 + 114;
  v3 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v3);
  v4 = json_array_get(a3, 1u);
  s = (char *)json_string_value(v4);
  v31 = 3;
  v5 = json_array_get(a3, 2u);
  v28 = json_integer_value((int)v5);
  if ( json_array_get(a3, 3u) && *(_DWORD *)json_array_get(a3, v31) == 2 )
  {
    v6 = v31++;
    v7 = json_array_get(a3, v6);
    v29 = (char *)json_string_value(v7);
  }
  v8 = json_array_get(a3, v31) && *(_DWORD *)json_array_get(a3, v31) == 5;
  v26 = v8;
  if ( s2 && s && strlen(s) == 64 )
  {
    v9 = strlen(s);
    hex2bin(src, s, v9 >> 1);
    if ( v29 )
    {
      v10 = strlen(v29);
      hex2bin(v23, v29, v10 >> 1);
    }
    if ( v27 )
    {
      if ( v27[281] && !strcmp((const char *)v27[281], s2) )
      {
        V_LOCK();
        logfmt_raw(v22, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change(%s)", v27[281]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
          164,
          "stratum_notify_ckb",
          18,
          41,
          20,
          v22);
      }
      if ( strlen(s2) > 0x1F )
      {
        V_LOCK();
        v11 = strlen(s2);
        logfmt_raw(v22, 0x1000u, 0, "Stratum notify: job_id %s, len %d >= 32", s2, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
          164,
          "stratum_notify_ckb",
          18,
          44,
          100,
          v22);
      }
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
      ptr = (void *)v27[281];
      v12 = strdup(s2);
      v27[281] = (int)v12;
      if ( ptr )
      {
        free(ptr);
        ptr = 0;
      }
      memcpy(v27 + 2, src, 0x20u);
      v27[270] = v28;
      a2[411] = v27[270];
      if ( v29 )
      {
        v13 = v23[1];
        v14 = v23[2];
        v15 = v23[3];
        a2[25] = v23[0];
        a2[26] = v13;
        a2[27] = v14;
        a2[28] = v15;
        v16 = v23[5];
        v17 = v23[6];
        v18 = v23[7];
        a2[29] = v23[4];
        a2[30] = v16;
        a2[31] = v17;
        a2[32] = v18;
      }
      *((_BYTE *)a2 + 444) = v26;
      *(_QWORD *)v27 = *a2;
      v30 = 1;
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_notify_ckb",
      18,
      30,
      100,
      v22);
  }
  return v30;
}
