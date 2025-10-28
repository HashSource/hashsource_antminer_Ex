int __fastcall stratum_handle_response_eth(int a1, int a2, int a3)
{
  bool v3; // r3
  int v4; // r4
  char *v5; // r0
  int v6; // r4
  json_t *v7; // r0
  char *v8; // r0
  _BYTE v11[32]; // [sp+24h] [bp-1120h] BYREF
  _DWORD v12[23]; // [sp+1024h] [bp-120h] BYREF
  int v13; // [sp+1080h] [bp-C4h] BYREF
  json_t *v14; // [sp+1120h] [bp-24h]
  json_t *v15; // [sp+1124h] [bp-20h]
  json_t *v16; // [sp+1128h] [bp-1Ch]
  const json_t *v17; // [sp+112Ch] [bp-18h]
  int v18; // [sp+1130h] [bp-14h]
  unsigned __int8 v19; // [sp+1136h] [bp-Eh]
  unsigned __int8 v20; // [sp+1137h] [bp-Dh]

  v19 = 0;
  v20 = 0;
  v18 = a3 + 456;
  v17 = json_loads(a2, 0, (json_error_t *)v12);
  if ( !v17 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "JSON decode failed(%d): %s", v12[0], &v13);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_handle_response_eth",
      27,
      1118,
      40,
      v11);
    goto LABEL_25;
  }
  v16 = json_object_get(v17, "result");
  v15 = json_object_get(v17, "error");
  v14 = json_object_get(v17, "id");
  if ( v16 && *(_DWORD *)v16 != 7 )
  {
    if ( v16 == json_false() )
      v20 = 0;
  }
  else
  {
    v20 = 0;
  }
  if ( v16 == json_true() )
  {
    v3 = v15 && *(_DWORD *)v15 == 7;
    if ( v3 || v15 == 0 )
      v20 = 1;
  }
  if ( !*(_BYTE *)(a3 + 1656) )
  {
    if ( !v16 )
      goto LABEL_25;
    v6 = v20;
    v7 = json_array_get(v15, 1u);
    v8 = (char *)json_string_value(v7);
    share_result(v6, 0, v8, (double *)a3);
    goto LABEL_24;
  }
  if ( !v14 || *(_DWORD *)v14 == 7 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "%s json id is null!", "stratum_handle_response_eth");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_handle_response_eth",
      27,
      1147,
      40,
      v11);
    goto LABEL_25;
  }
  if ( v16 || v15 )
  {
    v4 = v20;
    v5 = json_dumps(v15, 24576);
    share_result(v4, 0, v5, (double *)a3);
LABEL_24:
    v19 = 1;
  }
LABEL_25:
  if ( v17 )
    sub_5E5B0((int)v17);
  return v19;
}
