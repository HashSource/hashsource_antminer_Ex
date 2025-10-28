int __fastcall stratum_authorize_base(int a1, int a2)
{
  size_t v2; // r4
  size_t v3; // r0
  int v4; // r2
  json_t *v5; // r0
  _BYTE v9[36]; // [sp+18h] [bp-1124h] BYREF
  _DWORD v10[23]; // [sp+1018h] [bp-124h] BYREF
  int v11; // [sp+1074h] [bp-C8h] BYREF
  json_t *v12; // [sp+1114h] [bp-28h]
  json_t *v13; // [sp+1118h] [bp-24h]
  void *ptr; // [sp+111Ch] [bp-20h]
  char *s; // [sp+1120h] [bp-1Ch]
  int v16; // [sp+1124h] [bp-18h]
  const json_t *v17; // [sp+1128h] [bp-14h]
  unsigned __int8 v18; // [sp+112Fh] [bp-Dh]

  v17 = 0;
  v18 = 0;
  v16 = 0;
  v2 = strlen(*(const char **)(a2 + 16));
  v3 = strlen(*(const char **)(a2 + 20));
  s = (char *)malloc(v2 + v3 + 80);
  v4 = *(_DWORD *)(a2 + 1920);
  *(_DWORD *)(a2 + 1920) = v4 + 1;
  sprintf(
    s,
    "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}",
    v4,
    *(const char **)(a2 + 16),
    *(const char **)(a2 + 20));
  if ( (*(unsigned __int8 (__fastcall **)(int, char *))(a1 + 12))(a2, s) == 1 )
  {
    while ( 1 )
    {
      ptr = (void *)(*(int (__fastcall **)(int))(a1 + 8))(a2);
      if ( !ptr )
        break;
      if ( (*(unsigned __int8 (__fastcall **)(int, int, void *))(a1 + 20))(a1, a2, ptr) != 1 )
      {
        v17 = json_loads((int)ptr, 0, (json_error_t *)v10);
        if ( ptr )
          free(ptr);
        if ( v17 )
        {
          v13 = json_object_get(v17, "result");
          v12 = json_object_get(v17, "error");
          v5 = json_object_get(v17, "id");
          v16 = json_integer_value((int)v5);
          if ( v16 == *(_DWORD *)(a2 + 1920) - 1 && v13 && *(_DWORD *)v13 != 6 && (!v12 || *(_DWORD *)v12 == 7) )
          {
            v18 = 1;
          }
          else
          {
            V_LOCK();
            logfmt_raw(v9, 0x1000u, 0, "Stratum authentication failed, req_id=%d", v16);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_base.c",
              152,
              "stratum_authorize_base",
              22,
              293,
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
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_base.c",
            152,
            "stratum_authorize_base",
            22,
            283,
            100,
            v9);
        }
        break;
      }
      free(ptr);
    }
  }
  if ( s )
    free(s);
  if ( v17 )
    sub_56E60((int)v17);
  return v18;
}
