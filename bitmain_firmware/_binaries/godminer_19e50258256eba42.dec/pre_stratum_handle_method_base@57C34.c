int __fastcall pre_stratum_handle_method_base(int a1, int a2, int a3, _DWORD *a4)
{
  json_t *v4; // r0
  _BYTE v10[20]; // [sp+20h] [bp-1114h] BYREF
  _DWORD v11[23]; // [sp+1020h] [bp-114h] BYREF
  _DWORD v12[41]; // [sp+107Ch] [bp-B8h] BYREF
  char *s1; // [sp+1120h] [bp-14h]
  const json_t *v14; // [sp+1124h] [bp-10h]
  json_t *v15; // [sp+1128h] [bp-Ch]
  unsigned __int8 v16; // [sp+112Fh] [bp-5h]

  v16 = 0;
  v14 = json_loads(a3, 0, (json_error_t *)v11);
  if ( v14 )
  {
    v4 = json_object_get(v14, "method");
    s1 = (char *)json_string_value(v4);
    if ( s1 )
    {
      v15 = json_object_get(v14, "params");
      if ( !v15 )
        v15 = json_object_get(v14, "result");
      v12[40] = json_object_get(v14, "id");
      if ( !strcasecmp(s1, "mining.notify") )
      {
        v16 = (*(int (__fastcall **)(int, int, json_t *))(a1 + 48))(a1, a2, v15);
        if ( v16 )
        {
          *a4 = "notify";
          pool_tset(a2, (unsigned __int8 *)(a2 + 1916), 1);
        }
        else
        {
          pool_tclear(a2, (unsigned __int8 *)(a2 + 1916), 0);
        }
      }
      else if ( !strcasecmp(s1, "mining.set_difficulty") || !strcasecmp(s1, "mining.set_target") )
      {
        *a4 = "set diff or target";
        v16 = (*(int (__fastcall **)(int, int, json_t *))(a1 + 56))(a1, a2, v15);
      }
      else if ( v16 != 1 )
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "unknown stratum method %s!", a3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_base.c",
          152,
          "pre_stratum_handle_method_base",
          30,
          156,
          80,
          v10);
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "JSON decode failed(%d): %s", v11[0], v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "pre_stratum_handle_method_base",
      30,
      123,
      100,
      v10);
  }
  if ( v14 )
    sub_56E60((int)v14);
  return v16;
}
