int __fastcall stratum_authorize_ks5(int a1, int *a2)
{
  size_t v2; // r4
  size_t v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  const char *v6; // r0
  _BYTE v10[64]; // [sp+34h] [bp-1140h] BYREF
  _DWORD v11[23]; // [sp+1034h] [bp-140h] BYREF
  int v12; // [sp+1090h] [bp-E4h] BYREF
  _DWORD v13[7]; // [sp+1130h] [bp-44h] BYREF
  int v14; // [sp+114Ch] [bp-28h]
  json_t *v15; // [sp+1150h] [bp-24h]
  int v16; // [sp+1154h] [bp-20h]
  char *s; // [sp+1158h] [bp-1Ch]
  void *ptr; // [sp+115Ch] [bp-18h]
  const json_t *v19; // [sp+1160h] [bp-14h]
  unsigned __int8 v20; // [sp+1166h] [bp-Eh]
  char v21; // [sp+1167h] [bp-Dh]

  v19 = 0;
  v20 = 0;
  v21 = 0;
  v16 = 0;
  while ( 1 )
  {
    v2 = strlen((const char *)a2[4]);
    v3 = strlen((const char *)a2[5]);
    s = (char *)malloc(v2 + v3 + 128);
    sprintf(
      s,
      "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}",
      2,
      (const char *)a2[4],
      (const char *)a2[5]);
    if ( (*(unsigned __int8 (__fastcall **)(int *, char *))(a1 + 12))(a2, s) == 1 )
    {
      if ( (unsigned __int8)socket_full(a2[9], 30) != 1 )
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "stratum_subscribe timed out");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
          164,
          "stratum_authorize_ks5",
          21,
          139,
          100,
          v10);
      }
      else
      {
        ptr = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
        if ( ptr )
        {
          v19 = json_loads((int)ptr, 0, (json_error_t *)v11);
          if ( ptr )
            free(ptr);
          if ( v19 )
          {
            v4 = json_object_get(v19, "id");
            v16 = json_integer_value((int)v4);
            v15 = json_object_get(v19, "error");
            if ( !v15 || *(_DWORD *)v15 == 7 )
            {
              v20 = 1;
            }
            else
            {
              V_LOCK();
              sub_6E9C0((int)v13, *a2);
              v5 = json_array_get(v15, 1u);
              v6 = json_string_value(v5);
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
                "authorize failed reason: %s",
                v6);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
                164,
                "stratum_authorize_ks5",
                21,
                163,
                80,
                v10);
              if ( v21 )
              {
                if ( v15 )
                  s = json_dumps(v15, 3);
                else
                  s = strdup("(unknown reason)");
                V_LOCK();
                logfmt_raw(v10, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", s, v16);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
                  164,
                  "stratum_authorize_ks5",
                  21,
                  170,
                  100,
                  v10);
              }
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v10, 0x1000u, 0, "JSON decode failed(%d): %s", v11[0], &v12);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
              164,
              "stratum_authorize_ks5",
              21,
              153,
              100,
              v10);
          }
        }
      }
    }
    if ( s )
      free(s);
    if ( v19 )
      sub_6E958((int)v19);
    if ( v20 == 1 || !ptr || v21 == 1 )
      break;
    v21 = 1;
  }
  return v20;
}
