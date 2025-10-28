int __fastcall stratum_authorize_rvn(int a1, int *a2)
{
  size_t v2; // r4
  size_t v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  const char *v6; // r0
  _BYTE v10[72]; // [sp+34h] [bp-1148h] BYREF
  _DWORD v11[23]; // [sp+1034h] [bp-148h] BYREF
  int v12; // [sp+1090h] [bp-ECh] BYREF
  _DWORD v13[7]; // [sp+1130h] [bp-4Ch] BYREF
  int v14; // [sp+114Ch] [bp-30h]
  json_t *v15; // [sp+1154h] [bp-28h]
  json_t *v16; // [sp+1158h] [bp-24h]
  int v17; // [sp+115Ch] [bp-20h]
  char *s; // [sp+1160h] [bp-1Ch]
  void *ptr; // [sp+1164h] [bp-18h]
  const json_t *v20; // [sp+1168h] [bp-14h]
  unsigned __int8 v21; // [sp+116Eh] [bp-Eh]
  char v22; // [sp+116Fh] [bp-Dh]

  v20 = 0;
  v21 = 0;
  v22 = 0;
  v17 = 0;
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
          "igin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          164,
          "stratum_authorize_rvn",
          21,
          191,
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
            v17 = json_integer_value((int)v4);
            if ( v17 == 2 && v16 && *(_DWORD *)v16 != 6 && (!v15 || *(_DWORD *)v15 == 7) )
            {
              v21 = 1;
            }
            else
            {
              V_LOCK();
              sub_72AA0((int)v13, *a2);
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
                "ner-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
                164,
                "stratum_authorize_rvn",
                21,
                215,
                80,
                v10);
              if ( v22 )
              {
                if ( v15 )
                  s = json_dumps(v15, 3);
                else
                  s = strdup("(unknown reason)");
                V_LOCK();
                logfmt_raw(v10, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", s, v17);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
                  164,
                  "stratum_authorize_rvn",
                  21,
                  222,
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
              "r-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
              164,
              "stratum_authorize_rvn",
              21,
              205,
              100,
              v10);
          }
        }
      }
    }
    if ( s )
      free(s);
    if ( v20 )
      sub_72A38((int)v20);
    if ( v21 == 1 || !ptr || v22 == 1 )
      break;
    v22 = 1;
  }
  return v21;
}
