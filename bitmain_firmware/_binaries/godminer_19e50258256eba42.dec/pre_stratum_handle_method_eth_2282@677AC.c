int __fastcall pre_stratum_handle_method_eth_2282(int a1, int a2, int a3, _DWORD *a4)
{
  json_t *v4; // r0
  json_t *v5; // r0
  bool v7; // r3
  bool v8; // r3
  _BYTE v14[16]; // [sp+24h] [bp-1150h] BYREF
  _DWORD v15[23]; // [sp+1024h] [bp-150h] BYREF
  int v16; // [sp+1080h] [bp-F4h] BYREF
  char *v17; // [sp+1128h] [bp-4Ch]
  json_t *v18; // [sp+112Ch] [bp-48h]
  const json_t *v19; // [sp+1130h] [bp-44h]
  int v20; // [sp+1134h] [bp-40h]
  __int64 v21; // [sp+1138h] [bp-3Ch]
  json_t *v22; // [sp+1144h] [bp-30h]
  char *v23; // [sp+1148h] [bp-2Ch]
  char *s1; // [sp+114Ch] [bp-28h]
  const json_t *v25; // [sp+1150h] [bp-24h]
  const json_t *v26; // [sp+1154h] [bp-20h]
  int v27; // [sp+1158h] [bp-1Ch]
  char v28; // [sp+115Fh] [bp-15h]
  const json_t *v29; // [sp+1160h] [bp-14h]
  unsigned __int8 v30; // [sp+1167h] [bp-Dh]

  v30 = 0;
  v28 = 0;
  v27 = a2 + 456;
  v26 = json_loads(a3, 0, (json_error_t *)v15);
  if ( v26 )
  {
    v25 = json_object_get(v26, "jsonrpc");
    s1 = (char *)json_string_value(v25);
    if ( v25 && s1 && !strcasecmp(s1, "2.0") )
    {
      *(_BYTE *)(a2 + 1656) = 1;
      v29 = json_object_get(v26, "params");
      if ( !v29 )
        v29 = json_object_get(v26, "result");
      v30 = sub_65674(v29, a2);
      goto LABEL_52;
    }
    *(_BYTE *)(a2 + 1656) = 0;
    v4 = json_object_get(v26, "method");
    v23 = (char *)json_string_value(v4);
    if ( v23 )
    {
      v29 = json_object_get(v26, "params");
      if ( !v29 )
        v29 = json_object_get(v26, "result");
      v22 = json_object_get(v26, "id");
      if ( !strcasecmp(v23, "mining.notify") )
      {
        v5 = json_object_get(v26, "height");
        v21 = json_integer_value((int)v5);
        if ( v21 )
        {
          if ( !*(_DWORD *)(v27 + 1132) )
          {
            *(_DWORD *)(v27 + 1132) = calloc(1u, 0x6Bu);
            if ( !*(_DWORD *)(v27 + 1132) )
            {
              printf("invalid pointer(%s)!\n", "work->private");
              return 0;
            }
          }
          v20 = *(_DWORD *)(v27 + 1132);
          *(_QWORD *)(v20 + 96) = v21;
        }
        v30 = (*(int (__fastcall **)(int, int, const json_t *))(a1 + 48))(a1, a2, v29);
        if ( v30 )
        {
          *a4 = "notify";
          pool_tset(a2, (unsigned __int8 *)(a2 + 1916), 1);
          goto LABEL_55;
        }
LABEL_20:
        pool_tclear(a2, (unsigned __int8 *)(a2 + 1916), 0);
        goto LABEL_55;
      }
      if ( !strcasecmp(v23, "mining.set_difficulty") || !strcasecmp(v23, "mining.set_target") )
      {
        *a4 = "set diff or target";
        v30 = (*(int (__fastcall **)(int, int, const json_t *))(a1 + 56))(a1, a2, v29);
        goto LABEL_55;
      }
      if ( !strcasecmp(v23, "mining.set_extranonce") )
      {
        v30 = (*(int (__fastcall **)(int, int, const json_t *, _DWORD))(a1 + 52))(a1, a2, v29, 0);
        if ( v30 )
        {
          pool_tset(a2, (unsigned __int8 *)(a2 + 1916), 1);
          goto LABEL_55;
        }
        goto LABEL_20;
      }
    }
    v19 = json_object_get(v26, "result");
    v18 = json_object_get(v26, "error");
    v22 = json_object_get(v26, "id");
    if ( v19 && *(_DWORD *)v19 != 7 )
    {
      if ( v19 == json_false() )
      {
        v28 = 0;
      }
      else
      {
        v17 = (char *)json_string_value(v19);
        v7 = v17 && !strcmp(v17, "ok") && v18 && *(_DWORD *)v18 == 7;
        v28 = v7;
      }
    }
    else
    {
      v28 = 0;
    }
    if ( v19 == json_true() )
    {
      v8 = v18 && *(_DWORD *)v18 == 7;
      if ( v8 || v18 == 0 )
        v28 = 1;
    }
    if ( !v22 || *(_DWORD *)v22 == 7 || json_integer_value((int)v22) != 2 )
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "%s json id error!", "pre_stratum_handle_method_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        174,
        "pre_stratum_handle_method_eth_2282",
        34,
        1143,
        40,
        v14);
      goto LABEL_55;
    }
    v30 = 1;
LABEL_52:
    if ( v30 != 1 )
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "unknown stratum method %s!", a3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        174,
        "pre_stratum_handle_method_eth_2282",
        34,
        1151,
        80,
        v14);
    }
    *a4 = "notify";
    goto LABEL_55;
  }
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "JSON decode failed(%d): %s", v15[0], &v16);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
    174,
    "pre_stratum_handle_method_eth_2282",
    34,
    1052,
    100,
    v14);
LABEL_55:
  if ( v26 )
    sub_6346C((int)v26);
  return v30;
}
