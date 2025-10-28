int __fastcall stratum_handle_response_base(int a1, int a2, int a3)
{
  bool v3; // r3
  bool v4; // r3
  int v5; // r4
  char *v6; // r2
  json_t *v7; // r0
  _BYTE v10[32]; // [sp+24h] [bp-1120h] BYREF
  _DWORD v11[23]; // [sp+1024h] [bp-120h] BYREF
  int v12; // [sp+1080h] [bp-C4h] BYREF
  char *s1; // [sp+1120h] [bp-24h]
  json_t *v14; // [sp+1124h] [bp-20h]
  const json_t *v15; // [sp+1128h] [bp-1Ch]
  const json_t *v16; // [sp+112Ch] [bp-18h]
  const json_t *v17; // [sp+1130h] [bp-14h]
  unsigned __int8 v18; // [sp+1136h] [bp-Eh]
  unsigned __int8 v19; // [sp+1137h] [bp-Dh]

  v19 = 0;
  v18 = 0;
  v17 = json_loads(a2, 0, (json_error_t *)v11);
  if ( !v17 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "JSON decode failed(%d): %s", v11[0], &v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_handle_response_base",
      28,
      321,
      40,
      v10);
    goto LABEL_37;
  }
  v16 = json_object_get(v17, "result");
  v15 = json_object_get(v17, "error");
  v14 = json_object_get(v17, "id");
  if ( v16 && *(_DWORD *)v16 != 7 )
  {
    if ( v16 == json_false() )
    {
      v18 = 0;
    }
    else
    {
      s1 = (char *)json_string_value(v16);
      v3 = s1 && !strcmp(s1, "ok") && v15 && *(_DWORD *)v15 == 7;
      v18 = v3;
    }
  }
  else
  {
    v18 = 0;
  }
  if ( v16 == json_true() )
  {
    v4 = v15 && *(_DWORD *)v15 == 7;
    if ( v4 || v15 == 0 )
      v18 = 1;
  }
  if ( !v14 || *(_DWORD *)v14 == 7 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "%s json id is null!", "stratum_handle_response_base");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_handle_response_base",
      28,
      345,
      20,
      v10);
    goto LABEL_37;
  }
  if ( *(_BYTE *)(a3 + 1656) )
  {
    if ( v16 || v15 )
    {
      v5 = v18;
      if ( v15 )
        v6 = (char *)json_string_value(v15);
      else
        v6 = 0;
LABEL_36:
      share_result(v5, 0, v6, (double *)a3);
      v19 = 1;
    }
  }
  else if ( v16 && json_integer_value((int)v14) >= 4 )
  {
    v5 = v18;
    if ( v15 )
    {
      v7 = json_array_get(v15, 1u);
      v6 = (char *)json_string_value(v7);
    }
    else
    {
      v6 = 0;
    }
    goto LABEL_36;
  }
LABEL_37:
  if ( v17 )
    sub_56E60((int)v17);
  return v19;
}
