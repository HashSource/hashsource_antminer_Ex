int __fastcall sub_6ED20(int a1, int a2)
{
  size_t v3; // r3
  json_t *v4; // r0
  _BYTE v8[44]; // [sp+18h] [bp-112Ch] BYREF
  _DWORD v9[23]; // [sp+1018h] [bp-12Ch] BYREF
  int v10; // [sp+1074h] [bp-D0h] BYREF
  json_t *v11; // [sp+1114h] [bp-30h]
  json_t *v12; // [sp+1118h] [bp-2Ch]
  int v13; // [sp+111Ch] [bp-28h]
  int v14; // [sp+1120h] [bp-24h]
  void *dest; // [sp+1124h] [bp-20h]
  char v16; // [sp+112Bh] [bp-19h]
  void *ptr; // [sp+112Ch] [bp-18h]
  const json_t *v18; // [sp+1130h] [bp-14h]
  unsigned __int8 v19; // [sp+1137h] [bp-Dh]

  ptr = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v14 = 0;
  v13 = a2 + 456;
  if ( *(_BYTE *)(a2 + 1656) )
    return 1;
  while ( 1 )
  {
    v3 = *(_DWORD *)(a2 + 72) ? strlen(*(const char **)(a2 + 72)) + 256 : 256;
    dest = malloc(v3);
    strcpy((char *)dest, "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}");
    if ( (*(unsigned __int8 (__fastcall **)(int, void *))(a1 + 12))(a2, dest) != 1 )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "stratum_subscribe send failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
        164,
        "stratum_subscribe_ks5",
        21,
        42,
        100,
        v8);
    }
    else if ( (unsigned __int8)socket_full(*(_DWORD *)(a2 + 36), 30) != 1 )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "stratum_subscribe timed out");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
        164,
        "stratum_subscribe_ks5",
        21,
        48,
        100,
        v8);
    }
    else
    {
      ptr = (void *)(*(int (__fastcall **)(int))(a1 + 8))(a2);
      if ( ptr )
      {
        v18 = json_loads((int)ptr, 0, (json_error_t *)v9);
        if ( ptr )
          free(ptr);
        if ( v18 )
        {
          v4 = json_object_get(v18, "id");
          v14 = json_integer_value((int)v4);
          v12 = json_object_get(v18, "result");
          v11 = json_object_get(v18, "error");
          if ( v14 == 1 && v12 && *(_DWORD *)v12 != 7 && (!v11 || *(_DWORD *)v11 == 7) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(int, int, json_t *, int))(a1 + 52))(a1, a2, v12, 1) != 1 )
            {
              V_LOCK();
              logfmt_raw(v8, 0x1000u, 0, "no need to parse extranonce");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
                164,
                "stratum_subscribe_ks5",
                21,
                88,
                60,
                v8);
            }
            v19 = 1;
            ++*(_DWORD *)(a2 + 1920);
          }
          else if ( v16 )
          {
            if ( v11 )
              dest = json_dumps(v11, 3);
            else
              dest = strdup("(unknown reason)");
            V_LOCK();
            logfmt_raw(v8, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", dest, v14);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
              164,
              "stratum_subscribe_ks5",
              21,
              77,
              100,
              v8);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v8, 0x1000u, 0, "JSON decode failed(%d): %s", v9[0], &v10);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
            164,
            "stratum_subscribe_ks5",
            21,
            61,
            100,
            v8);
        }
      }
    }
    if ( v19 )
    {
      sprintf(
        (char *)dest,
        "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}",
        *(_DWORD *)(a2 + 1920));
      if ( (*(int (__fastcall **)(int, void *))(a1 + 12))(a2, dest) )
      {
        if ( socket_full(*(_DWORD *)(a2 + 36), 30) )
          (*(void (__fastcall **)(int))(a1 + 8))(a2);
      }
    }
    if ( dest )
      free(dest);
    if ( v18 )
      sub_6E958((int)v18);
    if ( v19 == 1 || !ptr || v16 == 1 )
      break;
    v16 = 1;
  }
  return v19;
}
