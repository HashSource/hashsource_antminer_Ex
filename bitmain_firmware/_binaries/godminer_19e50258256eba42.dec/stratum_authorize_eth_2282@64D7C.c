int __fastcall stratum_authorize_eth_2282(int a1, int *a2)
{
  size_t v2; // r4
  size_t v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  const char *v6; // r0
  char v10[32]; // [sp+30h] [bp-116Ch] BYREF
  _BYTE v11[12]; // [sp+50h] [bp-114Ch] BYREF
  time_t timer; // [sp+1050h] [bp-14Ch] BYREF
  _DWORD v13[23]; // [sp+1054h] [bp-148h] BYREF
  int v14; // [sp+10B0h] [bp-ECh] BYREF
  _DWORD v15[7]; // [sp+1150h] [bp-4Ch] BYREF
  int v16; // [sp+116Ch] [bp-30h]
  const json_t *v17; // [sp+1170h] [bp-2Ch]
  json_t *v18; // [sp+1174h] [bp-28h]
  void *ptr; // [sp+1178h] [bp-24h]
  char *s; // [sp+117Ch] [bp-20h]
  int v22; // [sp+1184h] [bp-18h]
  unsigned __int8 v23; // [sp+118Bh] [bp-11h]
  const json_t *v24; // [sp+118Ch] [bp-10h]

  v24 = 0;
  v23 = 0;
  v22 = 0;
  if ( a2[6] )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Will Use Worker Name!->'%s'", a2[6]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_authorize_eth_2282",
      26,
      380,
      20,
      v11);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Didn't Set Worker Name, Will Use MacAddr!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_authorize_eth_2282",
      26,
      362,
      20,
      v11);
    memset(v10, 0, sizeof(v10));
    if ( sub_64C7C(v10) )
    {
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Get Mac Failed, Will Use Current Time!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        174,
        "stratum_authorize_eth_2282",
        26,
        371,
        20,
        v11);
      time(&timer);
      sprintf(v10, "%d", timer);
    }
    a2[6] = (int)strdup(v10);
  }
  v2 = strlen((const char *)a2[4]);
  v3 = strlen((const char *)a2[5]);
  s = (char *)malloc(v2 + v3 + 128);
  sprintf(
    s,
    "{\"worker\": \"%s\", \"jsonrpc\": \"2.0\", \"params\": [\"%s\", \"%s\"], \"id\": %d, \"method\": \"eth_submitLogin\"}",
    (const char *)a2[6],
    (const char *)a2[4],
    (const char *)a2[5],
    2);
  if ( (*(unsigned __int8 (__fastcall **)(int *, char *))(a1 + 12))(a2, s) == 1 )
  {
    while ( 1 )
    {
      ptr = (void *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
      if ( !ptr )
        break;
      if ( (*(unsigned __int8 (__fastcall **)(int, int *, void *))(a1 + 20))(a1, a2, ptr) != 1 )
      {
        v24 = json_loads((int)ptr, 0, (json_error_t *)v13);
        if ( ptr )
          free(ptr);
        if ( v24 )
        {
          v18 = json_object_get(v24, "result");
          v17 = json_object_get(v24, "error");
          v4 = json_object_get(v24, "id");
          v22 = json_integer_value((int)v4);
          if ( v18 && *(_DWORD *)v18 != 6 && (!v17 || *(_DWORD *)v17 == 7) )
          {
            a2[480] = 40;
            v23 = 1;
          }
          else
          {
            V_LOCK();
            sub_634D4((int)v15, *a2);
            v5 = json_array_get(v17, 1u);
            v6 = json_string_value(v5);
            logfmt_raw(
              v11,
              0x1000u,
              0,
              v16,
              v15[0],
              v15[1],
              v15[2],
              v15[3],
              v15[4],
              v15[5],
              v15[6],
              v16,
              "authorize failed reason: %s",
              v6);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
              174,
              "stratum_authorize_eth_2282",
              26,
              416,
              80,
              v11);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, "JSON decode failed(%d): %s", v13[0], &v14);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
            174,
            "stratum_authorize_eth_2282",
            26,
            405,
            100,
            v11);
        }
        break;
      }
      if ( ptr )
        free(ptr);
    }
  }
  if ( s )
    free(s);
  if ( v24 )
    sub_6346C((int)v24);
  return v23;
}
