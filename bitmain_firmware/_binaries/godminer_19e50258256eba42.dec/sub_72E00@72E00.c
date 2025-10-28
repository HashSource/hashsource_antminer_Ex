int __fastcall sub_72E00(int a1, int *a2)
{
  size_t v3; // r3
  json_t *v4; // r0
  json_t *v5; // r0
  const char *v6; // r0
  _BYTE v10[72]; // [sp+3Ch] [bp-1148h] BYREF
  _DWORD v11[23]; // [sp+103Ch] [bp-148h] BYREF
  int v12; // [sp+1098h] [bp-ECh] BYREF
  _DWORD v13[7]; // [sp+1138h] [bp-4Ch] BYREF
  int v14; // [sp+1154h] [bp-30h]
  json_t *v15; // [sp+1158h] [bp-2Ch]
  const json_t *v16; // [sp+115Ch] [bp-28h]
  int *v17; // [sp+1160h] [bp-24h]
  void *dest; // [sp+1164h] [bp-20h]
  void *ptr; // [sp+1168h] [bp-1Ch]
  const json_t *v20; // [sp+116Ch] [bp-18h]
  unsigned __int8 v21; // [sp+1172h] [bp-12h]
  char v22; // [sp+1173h] [bp-11h]
  int v23; // [sp+1174h] [bp-10h]

  ptr = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v17 = a2 + 114;
  if ( *((_BYTE *)a2 + 1656) )
    return 1;
  while ( 1 )
  {
    v3 = a2[18] ? strlen((const char *)a2[18]) + 256 : 256;
    dest = malloc(v3);
    strcpy((char *)dest, "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}");
    if ( (*(unsigned __int8 (__fastcall **)(int *, void *))(a1 + 12))(a2, dest) != 1 )
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "stratum_subscribe send failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_subscribe_rvn",
        21,
        43,
        100,
        v10);
    }
    else if ( (unsigned __int8)socket_full(a2[9], 30) != 1 )
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "stratum_subscribe timed out");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_subscribe_rvn",
        21,
        49,
        100,
        v10);
    }
    else
    {
      ptr = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
      if ( ptr )
      {
        v20 = json_loads((int)ptr, 0, (json_error_t *)v11);
        if ( ptr )
          free(ptr);
        if ( v20 )
        {
          v16 = json_object_get(v20, "result");
          v15 = json_object_get(v20, "error");
          v4 = json_object_get(v20, "id");
          v23 = json_integer_value((int)v4);
          if ( v23 == 1 && v16 && *(_DWORD *)v16 != 7 && (!v15 || *(_DWORD *)v15 == 7) )
          {
            if ( a2[20] )
              free((void *)a2[20]);
            v5 = json_array_get(v16, 1u);
            v6 = json_string_value(v5);
            a2[20] = (int)strdup(v6);
            a2[19] = strlen((const char *)a2[20]);
            V_LOCK();
            sub_72AA0((int)v13, *a2);
            logfmt_raw(
              v10,
              0x1000u,
              0,
              v14,
              v13[0],
              v13[1],
              v13[2],
              v13[3],
              v13[4],
              v13[5],
              v13[6],
              v14,
              "extra_nonce %s, len: %d",
              a2[20],
              a2[19]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
              164,
              "stratum_subscribe_rvn",
              21,
              95,
              60,
              v10);
            if ( v17 )
            {
              pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
              if ( v17[274] )
              {
                free((void *)v17[274]);
                v17[274] = 0;
              }
              v17[274] = (int)calloc(8u, 1u);
              strcpy((char *)v17[274], (const char *)a2[20]);
              pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
            }
            if ( (*(unsigned __int8 (__fastcall **)(int, int *, const json_t *, int))(a1 + 52))(a1, a2, v16, 1) != 1 )
            {
              V_LOCK();
              logfmt_raw(v10, 0x1000u, 0, "no need to parse extranonce");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
                164,
                "stratum_subscribe_rvn",
                21,
                113,
                60,
                v10);
            }
            v21 = 1;
            ++a2[480];
          }
          else if ( v22 )
          {
            if ( v15 )
              dest = json_dumps(v15, 3);
            else
              dest = strdup("(unknown reason)");
            V_LOCK();
            logfmt_raw(v10, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", dest, v23);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
              164,
              "stratum_subscribe_rvn",
              21,
              79,
              100,
              v10);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v10, 0x1000u, 0, "JSON decode failed(%d): %s", v11[0], &v12);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
            164,
            "stratum_subscribe_rvn",
            21,
            62,
            100,
            v10);
        }
      }
    }
    if ( v21 )
    {
      sprintf(
        (char *)dest,
        "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": [\"%s\"]}",
        a2[480],
        (const char *)a2[20]);
      if ( (*(int (__fastcall **)(int *, void *))(a1 + 12))(a2, dest) )
      {
        if ( socket_full(a2[9], 30) )
          (*(void (__fastcall **)(int *))(a1 + 8))(a2);
      }
    }
    if ( dest )
      free(dest);
    if ( v20 )
      sub_72A38((int)v20);
    if ( v21 == 1 || !ptr || v22 == 1 )
      break;
    v22 = 1;
  }
  return v21;
}
