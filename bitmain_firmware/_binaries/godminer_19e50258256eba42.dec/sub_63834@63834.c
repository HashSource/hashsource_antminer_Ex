int __fastcall sub_63834(int a1, int *a2)
{
  const char *v2; // r12
  _DWORD *v3; // r5
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  json_t *v9; // r0
  const char *v10; // r0
  _BYTE v14[80]; // [sp+34h] [bp-1150h] BYREF
  _DWORD v15[23]; // [sp+1034h] [bp-150h] BYREF
  int v16; // [sp+1090h] [bp-F4h] BYREF
  _DWORD v17[7]; // [sp+1130h] [bp-54h] BYREF
  int v18; // [sp+114Ch] [bp-38h]
  json_t *v19; // [sp+1154h] [bp-30h]
  json_t *v20; // [sp+1158h] [bp-2Ch]
  void *ptr; // [sp+115Ch] [bp-28h]
  const json_t *v22; // [sp+1160h] [bp-24h]
  unsigned __int8 v23; // [sp+1166h] [bp-1Eh]
  char v24; // [sp+1167h] [bp-1Dh]
  int v25; // [sp+1168h] [bp-1Ch]
  void *v26; // [sp+116Ch] [bp-18h]

  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = malloc(0x80u);
  v2 = "{\"id\": 0,\"method\":\"mining.extranonce.subscribe\",\"params\":[]}";
  v3 = v26;
  do
  {
    v4 = *((_DWORD *)v2 + 1);
    v5 = *((_DWORD *)v2 + 2);
    v6 = *((_DWORD *)v2 + 3);
    *v3 = *(_DWORD *)v2;
    v3[1] = v4;
    v3[2] = v5;
    v3[3] = v6;
    v2 += 16;
    v3 += 4;
  }
  while ( v2 != "\"params\":[]}" );
  v7 = *((_DWORD *)v2 + 1);
  v8 = *((_DWORD *)v2 + 2);
  *v3 = *(_DWORD *)v2;
  v3[1] = v7;
  v3[2] = v8;
  *((_BYTE *)v3 + 12) = v2[12];
  if ( (*(unsigned __int8 (__fastcall **)(int *, void *))(a1 + 12))(a2, v26) == 1 )
  {
    if ( (unsigned __int8)socket_full(a2[9], 30) != 1 )
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "stratum_subscribe timed out");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        174,
        "stratum_extra_subscribe_eth_2282",
        32,
        41,
        100,
        v14);
    }
    else
    {
      ptr = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
      if ( ptr )
      {
        v22 = json_loads((int)ptr, 0, (json_error_t *)v15);
        if ( ptr )
          free(ptr);
        if ( v22 )
        {
          v20 = json_object_get(v22, "result");
          v19 = json_object_get(v22, "error");
          if ( v20 && *(_DWORD *)v20 != 6 && (!v19 || *(_DWORD *)v19 == 7) )
          {
            v23 = 1;
          }
          else
          {
            V_LOCK();
            sub_634D4((int)v17, *a2);
            v9 = json_array_get(v19, 1u);
            v10 = json_string_value(v9);
            logfmt_raw(
              v14,
              0x1000u,
              0,
              v18,
              v17[0],
              v17[1],
              v17[2],
              v17[3],
              v17[4],
              v17[5],
              v17[6],
              v18,
              "extranonce subscribe failed reason: %s",
              v10);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
              174,
              "stratum_extra_subscribe_eth_2282",
              32,
              64,
              80,
              v14);
            if ( v24 )
            {
              if ( v19 )
                v26 = json_dumps(v19, 3);
              else
                v26 = strdup("(unknown reason)");
              V_LOCK();
              logfmt_raw(v14, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v26, v25);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
                174,
                "stratum_extra_subscribe_eth_2282",
                32,
                71,
                100,
                v14);
            }
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v14, 0x1000u, 0, "JSON decode failed(%d): %s", v15[0], &v16);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
            174,
            "stratum_extra_subscribe_eth_2282",
            32,
            55,
            100,
            v14);
        }
      }
    }
  }
  if ( v26 )
    free(v26);
  if ( v22 )
    sub_6346C((int)v22);
  return v23;
}
