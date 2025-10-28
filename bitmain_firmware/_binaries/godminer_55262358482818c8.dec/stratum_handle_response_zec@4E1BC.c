int __fastcall stratum_handle_response_zec(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r5
  int v6; // r0
  char *v7; // r1
  int *v8; // r6
  int v9; // r0
  char *v10; // r1
  _DWORD *v11; // r7
  _DWORD *v12; // r0
  _BOOL4 v13; // r3
  _BOOL4 v14; // r4
  int v15; // r3
  int v16; // r1
  int v17; // r6
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  int v22; // r3
  char *v23; // r0
  int v24; // r3
  int v25; // r1
  _DWORD *v26; // r0
  char *v27; // r0
  char v28[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v29[160]; // [sp+70h] [bp-10A0h] BYREF
  char v30[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v28);
  v5 = v4;
  if ( v4 )
  {
    v6 = json_object_get(v4, "result");
    LOWORD(v7) = 27772;
    v8 = (int *)v6;
    HIWORD(v7) = (unsigned int)"od-miner.c" >> 16;
    v9 = json_object_get(v5, v7);
    LOWORD(v10) = 28304;
    v11 = (_DWORD *)v9;
    HIWORD(v10) = (unsigned int)"lid" >> 16;
    v12 = (_DWORD *)json_object_get(v5, v10);
    v13 = v11 == 0;
    if ( !v8 )
      v13 = 1;
    if ( v12 )
      v14 = v13;
    else
      v14 = 1;
    if ( v14 || *v12 != 3 )
    {
      V_LOCK();
      LOWORD(v15) = -18616;
      HIWORD(v15) = (unsigned int)"%s\", \"%s\", \"%s\", \"%s\"]}" >> 16;
      logfmt_raw(v30, 0x1000u, 0, v15, "stratum_handle_response_zec");
      V_UNLOCK();
      LOWORD(v16) = -19100;
      HIWORD(v16) = (unsigned int)"stratum_subscribe_zec" >> 16;
      v17 = 0;
      zlog(g_zc, v16, 167, "stratum_handle_response_zec", 27, 279, 20, v30);
    }
    else
    {
      v22 = *v8;
      v17 = *(unsigned __int8 *)(a3 + 1656);
      if ( v22 == 5 )
        v14 = *v11 == 7;
      if ( *(_BYTE *)(a3 + 1656) )
      {
        v23 = (char *)json_string_value(v11);
        share_result(v14, 0, v23, (double *)a3);
      }
      else
      {
        if ( json_integer_value((int)v12) >= 3 )
        {
          v26 = json_array_get(v11, 1u);
          v27 = (char *)json_string_value(v26);
          share_result(v14, 0, v27, (double *)a3);
        }
        v17 = 1;
      }
    }
    if ( *((_DWORD *)v5 + 1) == -1 )
      return v17;
    v18 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v19 = __ldrex(v18);
      v20 = v19 - 1;
    }
    while ( __strex(v20, v18) );
    if ( v20 )
    {
      return v17;
    }
    else
    {
      json_delete(v5);
      return v17;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v24) = -27332;
    HIWORD(v24) = (unsigned int)"x %08x %08x %08x %08x " >> 16;
    logfmt_raw(v30, 0x1000u, 0, v24, *(_DWORD *)v28, v29);
    V_UNLOCK();
    LOWORD(v25) = -19100;
    HIWORD(v25) = (unsigned int)"stratum_subscribe_zec" >> 16;
    zlog(g_zc, v25, 167, "stratum_handle_response_zec", 27, 269, 40, v30);
    return 0;
  }
}
