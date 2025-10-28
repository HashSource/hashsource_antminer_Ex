int __fastcall stratum_handle_response_base(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  int v6; // r0
  char *v7; // r1
  _DWORD *v8; // r5
  int v9; // r0
  char *v10; // r1
  _DWORD *v11; // r8
  _DWORD *v12; // r7
  _BYTE *v13; // r0
  _BOOL4 v14; // r9
  int v15; // r0
  int v16; // r6
  bool v17; // zf
  char *v18; // r2
  int v19; // r3
  _DWORD *v20; // r3
  int v21; // r1
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  int v26; // r3
  _DWORD *v27; // r3
  int v28; // r1
  char *v29; // r2
  _DWORD *v30; // r0
  char v31[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v32[160]; // [sp+70h] [bp-10A0h] BYREF
  char v33[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v31);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    LOWORD(v26) = 7656;
    HIWORD(v26) = (unsigned int)" passed to valid_ascii" >> 16;
    logfmt_raw(v33, 0x1000u, 0, v26, *(_DWORD *)v31, v32);
    V_UNLOCK();
    LOWORD(v27) = -14512;
    HIWORD(v27) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v28) = 7408;
    HIWORD(v28) = (unsigned int)"at hashrate double %f %s" >> 16;
    zlog(*v27, v28, 145, "stratum_handle_response_base", 28, 262, 40, v33);
    return 0;
  }
  v6 = json_object_get(v4, "result");
  LOWORD(v7) = -22980;
  v8 = (_DWORD *)v6;
  HIWORD(v7) = (unsigned int)&unk_13996C >> 16;
  v9 = json_object_get(v5, v7);
  LOWORD(v10) = 11724;
  v11 = (_DWORD *)v9;
  HIWORD(v10) = (unsigned int)"e_extranonce_dash" >> 16;
  v12 = (_DWORD *)json_object_get(v5, v10);
  if ( !v8 || *v8 == 7 || v8 == json_false() )
    goto LABEL_15;
  v13 = json_string_value(v8);
  v14 = (_BOOL4)v13;
  if ( !v13 )
    goto LABEL_16;
  if ( *v13 == 111 && v13[1] == 107 )
  {
    v15 = (unsigned __int8)v13[2];
    v14 = (_BOOL4)v11;
    if ( v11 )
      v14 = 1;
    if ( v15 )
      v14 = 0;
    if ( v14 )
      v14 = *v11 == 7;
  }
  else
  {
LABEL_15:
    v14 = 0;
  }
LABEL_16:
  if ( v8 == json_true() )
  {
    if ( v11 )
    {
      if ( *v11 == 7 )
        v14 = 1;
      if ( !v12 )
        goto LABEL_32;
      goto LABEL_18;
    }
    v14 = 1;
  }
  if ( !v12 )
  {
LABEL_32:
    V_LOCK();
    LOWORD(v19) = 8268;
    HIWORD(v19) = (unsigned int)"ot supported" >> 16;
    logfmt_raw(v33, 0x1000u, 0, v19, "stratum_handle_response_base");
    V_UNLOCK();
    LOWORD(v20) = -14512;
    HIWORD(v20) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v21) = 7408;
    HIWORD(v21) = (unsigned int)"at hashrate double %f %s" >> 16;
    v16 = 0;
    zlog(*v20, v21, 145, "stratum_handle_response_base", 28, 286, 20, v33);
    goto LABEL_33;
  }
LABEL_18:
  if ( *v12 == 7 )
    goto LABEL_32;
  v16 = *(unsigned __int8 *)(a3 + 1816);
  if ( *(_BYTE *)(a3 + 1816) )
  {
    v17 = v8 == 0;
    if ( !v8 )
      v17 = v11 == 0;
    if ( !v17 )
    {
      if ( v11 )
        v18 = (char *)json_string_value(v11);
      else
        v18 = 0;
      share_result(v14, 0, v18, (double *)a3);
      goto LABEL_33;
    }
LABEL_46:
    v16 = 0;
    goto LABEL_33;
  }
  if ( !v8 || json_integer_value((int)v12) < 4 )
    goto LABEL_46;
  if ( v11 )
  {
    v30 = json_array_get(v11, 1u);
    v29 = (char *)json_string_value(v30);
  }
  else
  {
    v29 = 0;
  }
  v16 = 1;
  share_result(v14, 0, v29, (double *)a3);
LABEL_33:
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v22 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v23 = __ldrex(v22);
      v24 = v23 - 1;
    }
    while ( __strex(v24, v22) );
    if ( !v24 )
      json_delete(v5);
  }
  return v16;
}
