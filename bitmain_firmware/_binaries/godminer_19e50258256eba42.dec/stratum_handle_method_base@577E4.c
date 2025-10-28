int __fastcall stratum_handle_method_base(int a1, int a2, int a3)
{
  json_t *v3; // r0
  _BYTE v8[28]; // [sp+20h] [bp-111Ch] BYREF
  _DWORD v9[23]; // [sp+1020h] [bp-11Ch] BYREF
  _DWORD v10[41]; // [sp+107Ch] [bp-C0h] BYREF
  char *s1; // [sp+1120h] [bp-1Ch]
  const json_t *v12; // [sp+1124h] [bp-18h]
  json_t *v13; // [sp+1128h] [bp-14h]
  unsigned __int8 v14; // [sp+112Fh] [bp-Dh]

  v14 = 0;
  v12 = json_loads(a3, 0, (json_error_t *)v9);
  if ( !v12 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "JSON decode failed(%d): %s", v9[0], v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_handle_method_base",
      26,
      65,
      100,
      v8);
    goto LABEL_18;
  }
  v3 = json_object_get(v12, "method");
  s1 = (char *)json_string_value(v3);
  if ( s1 )
  {
    v13 = json_object_get(v12, "params");
    if ( !v13 )
      v13 = json_object_get(v12, "result");
    v10[40] = json_object_get(v12, "id");
    if ( !strcasecmp(s1, "mining.notify") )
    {
      v14 = (*(int (__fastcall **)(int, int, json_t *))(a1 + 48))(a1, a2, v13);
      if ( v14 )
      {
LABEL_8:
        pool_tset(a2, (unsigned __int8 *)(a2 + 1916), 1);
        goto LABEL_18;
      }
      goto LABEL_15;
    }
    if ( !strcasecmp(s1, "mining.set_difficulty") || !strcasecmp(s1, "mining.set_target") )
    {
      v14 = (*(int (__fastcall **)(int, int, json_t *))(a1 + 56))(a1, a2, v13);
      goto LABEL_18;
    }
    if ( !strcasecmp(s1, "mining.set_extranonce") )
    {
      v14 = (*(int (__fastcall **)(int, int, json_t *, _DWORD))(a1 + 52))(a1, a2, v13, 0);
      if ( v14 )
        goto LABEL_8;
LABEL_15:
      pool_tclear(a2, (unsigned __int8 *)(a2 + 1916), 0);
      goto LABEL_18;
    }
    if ( v14 != 1 )
    {
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "unknown stratum method %s!", a3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_base.c",
        152,
        "stratum_handle_method_base",
        26,
        105,
        80,
        v8);
    }
  }
LABEL_18:
  if ( v12 )
    sub_56E60((int)v12);
  return v14;
}
