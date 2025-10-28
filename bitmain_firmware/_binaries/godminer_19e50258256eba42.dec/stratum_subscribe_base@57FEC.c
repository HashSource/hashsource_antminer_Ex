int __fastcall stratum_subscribe_base(int a1, int *a2)
{
  size_t v3; // r3
  json_t *v4; // r0
  int v5; // r3
  _BYTE v9[72]; // [sp+34h] [bp-1148h] BYREF
  _DWORD v10[23]; // [sp+1034h] [bp-148h] BYREF
  int v11; // [sp+1090h] [bp-ECh] BYREF
  _DWORD v12[7]; // [sp+1130h] [bp-4Ch] BYREF
  int v13; // [sp+114Ch] [bp-30h]
  json_t *v14; // [sp+1154h] [bp-28h]
  json_t *v15; // [sp+1158h] [bp-24h]
  int v16; // [sp+115Ch] [bp-20h]
  void *dest; // [sp+1160h] [bp-1Ch]
  char v18; // [sp+1166h] [bp-16h]
  unsigned __int8 v19; // [sp+1167h] [bp-15h]
  const json_t *v20; // [sp+1168h] [bp-14h]
  void *ptr; // [sp+116Ch] [bp-10h]

  ptr = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v16 = 0;
  if ( *((_BYTE *)a2 + 1656) )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "pool %d is jsonrpc_2, no need to subscribe", *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_subscribe_base",
      22,
      174,
      20,
      v9);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v3 = a2[18] ? strlen((const char *)a2[18]) + 128 : 128;
      dest = malloc(v3);
      if ( v18 )
        strcpy((char *)dest, "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null]}");
      else
        strcpy((char *)dest, "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}");
      if ( (*(unsigned __int8 (__fastcall **)(int *, void *))(a1 + 12))(a2, dest) != 1 )
      {
        V_LOCK();
        logfmt_raw(v9, 0x1000u, 0, "stratum_subscribe send failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_base.c",
          152,
          "stratum_subscribe_base",
          22,
          190,
          100,
          v9);
      }
      else if ( (unsigned __int8)socket_full(a2[9], 30) != 1 )
      {
        V_LOCK();
        sub_56EC8((int)v12, *a2);
        logfmt_raw(
          v9,
          0x1000u,
          0,
          v13,
          v12[0],
          v12[1],
          v12[2],
          v12[3],
          v12[4],
          v12[5],
          v12[6],
          v13,
          "stratum_subscribe timed out");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_base.c",
          152,
          "stratum_subscribe_base",
          22,
          195,
          100,
          v9);
      }
      else
      {
        ptr = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
        if ( ptr )
        {
          v20 = json_loads((int)ptr, 0, (json_error_t *)v10);
          if ( ptr )
            free(ptr);
          if ( v20 )
          {
            v15 = json_object_get(v20, "result");
            v14 = json_object_get(v20, "error");
            v4 = json_object_get(v20, "id");
            v16 = json_integer_value((int)v4);
            if ( v16 == 1 && v15 && *(_DWORD *)v15 != 7 && (!v14 || *(_DWORD *)v14 == 7) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(int, int *, json_t *, int))(a1 + 52))(a1, a2, v15, 1) == 1 )
              {
                v19 = 1;
                a2[480] = 2;
              }
            }
            else if ( v18 )
            {
              if ( v14 )
                dest = json_dumps(v14, 3);
              else
                dest = strdup("(unknown reason)");
              V_LOCK();
              logfmt_raw(v9, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", dest, v16);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_base.c",
                152,
                "stratum_subscribe_base",
                22,
                221,
                100,
                v9);
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v9, 0x1000u, 0, "JSON decode failed(%d): %s", v10[0], &v11);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_base.c",
              152,
              "stratum_subscribe_base",
              22,
              206,
              100,
              v9);
          }
        }
      }
      if ( v19 )
      {
        if ( a2[8] )
        {
          if ( strstr((const char *)a2[8], "nicehash") )
          {
            v5 = a2[480];
            a2[480] = v5 + 1;
            sprintf((char *)dest, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v5);
            if ( (*(int (__fastcall **)(int *, void *))(a1 + 12))(a2, dest) )
            {
              if ( socket_full(a2[9], 30) )
                (*(void (__fastcall **)(int *))(a1 + 8))(a2);
            }
          }
        }
      }
      if ( dest )
        free(dest);
      if ( v20 )
        sub_56E60((int)v20);
      if ( v19 == 1 || !ptr || v18 == 1 )
        break;
      v18 = 1;
    }
    return v19;
  }
}
