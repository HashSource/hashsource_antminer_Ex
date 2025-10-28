int __fastcall stratum_handle_method_eth(int a1, int a2, int a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  _BYTE v10[52]; // [sp+20h] [bp-1134h] BYREF
  _DWORD v11[23]; // [sp+1020h] [bp-134h] BYREF
  int v12; // [sp+107Ch] [bp-D8h] BYREF
  int v13; // [sp+111Ch] [bp-38h]
  __int64 v14; // [sp+1120h] [bp-34h]
  char *s1; // [sp+112Ch] [bp-28h]
  const json_t *v16; // [sp+1130h] [bp-24h]
  int v17; // [sp+1134h] [bp-20h]
  const json_t *v18; // [sp+1138h] [bp-1Ch]
  int v19; // [sp+113Ch] [bp-18h]
  json_t *v20; // [sp+1140h] [bp-14h]
  unsigned __int8 v21; // [sp+1147h] [bp-Dh]

  v21 = 0;
  v19 = a2 + 456;
  v18 = json_loads(a3, 0, (json_error_t *)v11);
  if ( v18 )
  {
    v3 = json_object_get(v18, "id");
    v17 = json_integer_value((int)v3);
    v16 = json_object_get(v18, "result");
    if ( *(_BYTE *)(a2 + 1656) )
    {
      if ( !v16 || *(_DWORD *)v16 != 1 || v17 )
        goto LABEL_28;
      v21 = sub_61100(a2, v16);
      if ( v21 )
        goto LABEL_8;
    }
    else
    {
      v4 = json_object_get(v18, "method");
      s1 = (char *)json_string_value(v4);
      if ( !s1 )
        goto LABEL_28;
      v20 = json_object_get(v18, "params");
      if ( !v20 )
        v20 = json_object_get(v18, "result");
      if ( !strcasecmp(s1, "mining.notify") )
      {
        v5 = json_object_get(v18, "height");
        v14 = json_integer_value((int)v5);
        if ( v14 )
        {
          if ( !*(_DWORD *)(v19 + 1132) )
          {
            *(_DWORD *)(v19 + 1132) = calloc(1u, 0x6Bu);
            if ( !*(_DWORD *)(v19 + 1132) )
            {
              printf("invalid pointer(%s)!\n", "work->private");
              return 0;
            }
          }
          v13 = *(_DWORD *)(v19 + 1132);
          *(_QWORD *)(v13 + 96) = v14;
        }
        v21 = (*(int (__fastcall **)(int, int, json_t *))(a1 + 48))(a1, a2, v20);
        if ( v21 )
        {
LABEL_8:
          pool_tset(a2, (unsigned __int8 *)(a2 + 1916), 1);
          goto LABEL_28;
        }
      }
      else
      {
        if ( !strcasecmp(s1, "mining.set_difficulty") || !strcasecmp(s1, "mining.set_target") )
        {
          v21 = (*(int (__fastcall **)(int, int, json_t *))(a1 + 56))(a1, a2, v20);
          goto LABEL_28;
        }
        if ( strcasecmp(s1, "mining.set_extranonce") )
          goto LABEL_28;
        v21 = (*(int (__fastcall **)(int, int, json_t *, _DWORD))(a1 + 52))(a1, a2, v20, 0);
        if ( v21 )
          goto LABEL_8;
      }
    }
    pool_tclear(a2, (unsigned __int8 *)(a2 + 1916), 0);
    goto LABEL_28;
  }
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "JSON decode failed(%d): %s", v11[0], &v12);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_eth/frontend_eth.c",
    164,
    "stratum_handle_method_eth",
    25,
    685,
    100,
    v10);
LABEL_28:
  if ( v18 )
    sub_5E5B0((int)v18);
  return v21;
}
