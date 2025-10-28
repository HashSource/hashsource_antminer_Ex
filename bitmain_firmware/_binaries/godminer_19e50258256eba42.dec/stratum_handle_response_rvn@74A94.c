int __fastcall stratum_handle_response_rvn(int a1, int a2, int a3)
{
  bool v3; // r3
  bool v4; // r3
  int v5; // r4
  char *v6; // r0
  int v7; // r4
  json_t *v8; // r0
  char *v9; // r0
  _BYTE v12[32]; // [sp+24h] [bp-1120h] BYREF
  _DWORD v13[23]; // [sp+1024h] [bp-120h] BYREF
  int v14; // [sp+1080h] [bp-C4h] BYREF
  char *s1; // [sp+1120h] [bp-24h]
  json_t *v16; // [sp+1124h] [bp-20h]
  json_t *v17; // [sp+1128h] [bp-1Ch]
  const json_t *v18; // [sp+112Ch] [bp-18h]
  const json_t *v19; // [sp+1130h] [bp-14h]
  unsigned __int8 v20; // [sp+1136h] [bp-Eh]
  unsigned __int8 v21; // [sp+1137h] [bp-Dh]

  v21 = 0;
  v20 = 0;
  v19 = json_loads(a2, 0, (json_error_t *)v13);
  if ( !v19 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "JSON decode failed(%d): %s", v13[0], &v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "stratum_handle_response_rvn",
      27,
      440,
      40,
      v12);
    goto LABEL_33;
  }
  v18 = json_object_get(v19, "result");
  v17 = json_object_get(v19, "error");
  v16 = json_object_get(v19, "id");
  if ( v18 && *(_DWORD *)v18 != 7 )
  {
    if ( v18 == json_false() )
    {
      v20 = 0;
    }
    else
    {
      s1 = (char *)json_string_value(v18);
      v3 = s1 && !strcmp(s1, "ok") && v17 && *(_DWORD *)v17 == 7;
      v20 = v3;
    }
  }
  else
  {
    v20 = 0;
  }
  if ( v18 == json_true() )
  {
    v4 = v17 && *(_DWORD *)v17 == 7;
    if ( v4 || v17 == 0 )
      v20 = 1;
  }
  if ( !v16 || *(_DWORD *)v16 == 7 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "%s json id is null!", "stratum_handle_response_rvn");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "stratum_handle_response_rvn",
      27,
      472,
      20,
      v12);
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a3 + 1656) )
  {
    if ( v18 || v17 )
    {
      v5 = v20;
      v6 = json_dumps(v17, 24576);
      share_result(v5, 0, v6, (double *)a3);
LABEL_32:
      v21 = 1;
    }
  }
  else if ( v18 && json_integer_value((int)v16) >= 4 )
  {
    v7 = v20;
    v8 = json_array_get(v17, 1u);
    v9 = (char *)json_string_value(v8);
    share_result(v7, 0, v9, (double *)a3);
    goto LABEL_32;
  }
LABEL_33:
  if ( v19 )
    sub_72A38((int)v19);
  return v21;
}
