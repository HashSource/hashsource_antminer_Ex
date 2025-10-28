int __fastcall stratum_handle_response_hns(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r5
  _DWORD *v7; // r7
  int v8; // r6
  _BYTE *v9; // r0
  _BOOL4 v10; // r9
  int v11; // r0
  _DWORD *v12; // r0
  char *v13; // r2
  _DWORD *v14; // r0
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  bool v19; // zf
  char *v20; // r2
  int v21; // r0
  int v22; // r0
  char v23[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v24[4100]; // [sp+110h] [bp-1004h] BYREF

  v4 = (_DWORD *)json_loads(a2, 0, v23);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK(0);
    v22 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_hns/frontend_hns.c",
      163,
      "stratum_handle_response_hns",
      27,
      381,
      40,
      v24);
    return 0;
  }
  v6 = (_DWORD *)json_object_get(v4, "result");
  v7 = (_DWORD *)json_object_get(v5, "error");
  v8 = json_object_get(v5, "id");
  if ( !v6 || *v6 == 7 || v6 == json_false() )
    goto LABEL_15;
  v9 = json_string_value(v6);
  v10 = (_BOOL4)v9;
  if ( !v9 )
    goto LABEL_16;
  if ( *v9 == 111 && v9[1] == 107 )
  {
    v11 = (unsigned __int8)v9[2];
    v10 = (_BOOL4)v7;
    if ( v7 )
      v10 = 1;
    if ( v11 )
      v10 = 0;
    if ( v10 )
      v10 = *v7 == 7;
  }
  else
  {
LABEL_15:
    v10 = 0;
  }
LABEL_16:
  v12 = json_true();
  if ( v6 == v12 )
  {
    if ( v7 )
    {
      if ( *v7 == 7 )
        v10 = 1;
      if ( v8 )
        goto LABEL_18;
      goto LABEL_43;
    }
    v10 = 1;
  }
  if ( v8 )
  {
LABEL_18:
    v8 = *(unsigned __int8 *)(a3 + 1648);
    if ( *(_BYTE *)(a3 + 1648) )
    {
      v19 = v6 == 0;
      if ( !v6 )
        v19 = v7 == 0;
      if ( v19 )
      {
        v8 = 0;
      }
      else
      {
        if ( v7 )
          v20 = (char *)json_string_value(v7);
        else
          v20 = 0;
        share_result(v10, 0, v20, a3);
      }
    }
    else if ( v6 )
    {
      if ( v7 )
      {
        v14 = json_array_get(v7, 1u);
        v13 = (char *)json_string_value(v14);
      }
      else
      {
        v13 = 0;
      }
      v8 = 1;
      share_result(v10, 0, v13, a3);
    }
    goto LABEL_24;
  }
LABEL_43:
  V_LOCK(v12);
  v21 = logfmt_raw((int)v24, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/frontend/frontend_hns/frontend_hns.c",
    163,
    "stratum_handle_response_hns",
    27,
    405,
    20,
    v24);
LABEL_24:
  if ( v5[1] != -1 )
  {
    v15 = v5 + 1;
    __dmb(0xBu);
    do
    {
      v16 = __ldrex(v15);
      v17 = v16 - 1;
    }
    while ( __strex(v17, v15) );
    if ( !v17 )
      json_delete(v5);
  }
  return v8;
}
