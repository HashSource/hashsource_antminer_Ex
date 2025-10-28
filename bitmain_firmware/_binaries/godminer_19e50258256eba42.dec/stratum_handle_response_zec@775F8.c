int __fastcall stratum_handle_response_zec(int a1, int a2, int a3)
{
  int v4; // r4
  char *v5; // r0
  int v6; // r4
  json_t *v7; // r0
  char *v8; // r0
  _BYTE v11[28]; // [sp+20h] [bp-111Ch] BYREF
  _DWORD v12[23]; // [sp+1020h] [bp-11Ch] BYREF
  int v13; // [sp+107Ch] [bp-C0h] BYREF
  json_t *v14; // [sp+111Ch] [bp-20h]
  const json_t *v15; // [sp+1120h] [bp-1Ch]
  json_t *v16; // [sp+1124h] [bp-18h]
  const json_t *v17; // [sp+1128h] [bp-14h]
  unsigned __int8 v18; // [sp+112Eh] [bp-Eh]
  unsigned __int8 v19; // [sp+112Fh] [bp-Dh]

  v19 = 0;
  v18 = 0;
  v17 = json_loads(a2, 0, (json_error_t *)v12);
  if ( v17 )
  {
    v16 = json_object_get(v17, "result");
    v15 = json_object_get(v17, "error");
    v14 = json_object_get(v17, "id");
    if ( v16 && v15 && v14 && *(_DWORD *)v14 == 3 )
    {
      if ( *(_DWORD *)v16 == 5 && *(_DWORD *)v15 == 7 )
        v18 = 1;
      if ( *(_BYTE *)(a3 + 1656) )
      {
        v4 = v18;
        v5 = (char *)json_string_value(v15);
        share_result(v4, 0, v5, (double *)a3);
      }
      else if ( json_integer_value((int)v14) >= 3 )
      {
        v6 = v18;
        v7 = json_array_get(v15, 1u);
        v8 = (char *)json_string_value(v7);
        share_result(v6, 0, v8, (double *)a3);
      }
      v19 = 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "%s json response format is invalid!", "stratum_handle_response_zec");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_zec/frontend_zec.c",
        164,
        "stratum_handle_response_zec",
        27,
        279,
        20,
        v11);
    }
    sub_75A14((int)v17);
    return v19;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "JSON decode failed(%d): %s", v12[0], &v13);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_handle_response_zec",
      27,
      269,
      40,
      v11);
    return 0;
  }
}
