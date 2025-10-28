int __fastcall stratum_handle_response_eth(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r5
  _DWORD *v7; // r10
  _DWORD *v8; // r7
  _BYTE *v9; // r0
  _BOOL4 v10; // r8
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r6
  int v14; // r0
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  int v19; // r0
  _BOOL4 v20; // r5
  char *v21; // r0
  _DWORD *v22; // r0
  char *v23; // r0
  char v24[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v25[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = (_DWORD *)json_loads(a2, 0, v24);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK(0);
    v19 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "stratum_handle_response_eth",
      27,
      528,
      40,
      v25);
    return 0;
  }
  v6 = (_DWORD *)json_object_get(v4, "result");
  v7 = (_DWORD *)json_object_get(v5, "error");
  v8 = (_DWORD *)json_object_get(v5, "id");
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
      if ( !v8 )
        goto LABEL_28;
      goto LABEL_18;
    }
    v10 = 1;
  }
  if ( !v8 )
  {
LABEL_28:
    V_LOCK(v12);
    v14 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v14);
    v13 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "stratum_handle_response_eth",
      27,
      560,
      20,
      v25);
    goto LABEL_29;
  }
LABEL_18:
  if ( *v8 == 7 )
    goto LABEL_28;
  v13 = *(unsigned __int8 *)(a3 + 1648);
  if ( *(_BYTE *)(a3 + 1648) )
  {
    if ( v6 )
      v20 = 0;
    else
      v20 = v7 == 0;
    if ( !v20 )
    {
      v21 = (char *)json_dumps(v7, 24576);
      share_result(v10, 0, v21, a3);
      goto LABEL_29;
    }
  }
  else if ( v6 && json_integer_value((int)v8) >= 4 )
  {
    v22 = json_array_get(v7, 1u);
    v23 = (char *)json_string_value(v22);
    share_result(v10, v13, v23, a3);
    v13 = 1;
    goto LABEL_29;
  }
  v13 = 0;
LABEL_29:
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
  return v13;
}
