int __fastcall stratum_subscribe_zec(int a1, int *a2)
{
  json_t *v3; // r0
  int v4; // r3
  _BYTE v8[24]; // [sp+34h] [bp-1198h] BYREF
  char v9[16]; // [sp+1034h] [bp-198h] BYREF
  char v10[64]; // [sp+1044h] [bp-188h] BYREF
  _DWORD v11[23]; // [sp+1084h] [bp-148h] BYREF
  int v12; // [sp+10E0h] [bp-ECh] BYREF
  _DWORD v13[7]; // [sp+1180h] [bp-4Ch] BYREF
  int v14; // [sp+119Ch] [bp-30h]
  json_t *v15; // [sp+11A4h] [bp-28h]
  json_t *v16; // [sp+11A8h] [bp-24h]
  int v17; // [sp+11ACh] [bp-20h]
  char *s; // [sp+11B0h] [bp-1Ch]
  char v19; // [sp+11B6h] [bp-16h]
  unsigned __int8 v20; // [sp+11B7h] [bp-15h]
  const json_t *v21; // [sp+11B8h] [bp-14h]
  void *ptr; // [sp+11BCh] [bp-10h]

  ptr = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v17 = 0;
  if ( *((_BYTE *)a2 + 1656) )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "pool %d is jsonrpc_2, no need to subscribe", *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_subscribe_zec",
      21,
      167,
      20,
      v8);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      s = (char *)malloc(0x80u);
      sub_76DDC((const char *)a2[3], v10, v9);
      if ( v19 )
        sprintf(
          s,
          "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null, \"%s\", \"%s\"]}",
          v10,
          v9);
      else
        sprintf(
          s,
          "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null, \"%s\", \"%s\"]}",
          v10,
          v9);
      if ( (*(unsigned __int8 (__fastcall **)(int *, char *))(a1 + 12))(a2, s) != 1 )
      {
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, "stratum_subscribe send failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_subscribe_zec",
          21,
          182,
          100,
          v8);
      }
      else if ( (unsigned __int8)socket_full(a2[9], 30) != 1 )
      {
        V_LOCK();
        sub_75A7C((int)v13, *a2);
        logfmt_raw(
          v8,
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
          "stratum_subscribe timed out");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          164,
          "stratum_subscribe_zec",
          21,
          188,
          100,
          v8);
      }
      else
      {
        ptr = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
        if ( ptr )
        {
          v21 = json_loads((int)ptr, 0, (json_error_t *)v11);
          if ( ptr )
            free(ptr);
          if ( v21 )
          {
            v16 = json_object_get(v21, "result");
            v15 = json_object_get(v21, "error");
            v3 = json_object_get(v21, "id");
            v17 = json_integer_value((int)v3);
            if ( v17 == 1 && v16 && *(_DWORD *)v16 != 7 && (!v15 || *(_DWORD *)v15 == 7) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(int, int *, json_t *, int))(a1 + 52))(a1, a2, v16, 1) == 1 )
              {
                v20 = 1;
                a2[480] = 2;
              }
            }
            else if ( v19 )
            {
              if ( v15 )
                s = json_dumps(v15, 3);
              else
                s = strdup("(unknown reason)");
              V_LOCK();
              logfmt_raw(v8, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", s, v17);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
                164,
                "stratum_subscribe_zec",
                21,
                218,
                100,
                v8);
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v8, 0x1000u, 0, "JSON decode failed(%d): %s", v11[0], &v12);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
              164,
              "stratum_subscribe_zec",
              21,
              201,
              100,
              v8);
          }
        }
      }
      if ( v20 )
      {
        if ( a2[8] )
        {
          if ( strstr((const char *)a2[8], "nicehash") )
          {
            v4 = a2[480];
            a2[480] = v4 + 1;
            sprintf(s, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v4);
            if ( (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, s) )
            {
              if ( socket_full(a2[9], 30) )
                (*(void (__fastcall **)(int *))(a1 + 8))(a2);
            }
          }
        }
      }
      if ( s )
        free(s);
      if ( v21 )
        sub_75A14((int)v21);
      if ( v20 == 1 || !ptr || v19 == 1 )
        break;
      v19 = 1;
    }
    return v20;
  }
}
