int __fastcall pre_push_work_vbk(int a1, int *a2, int a3)
{
  time_t v6; // r0
  int v7; // r3
  bool v8; // zf
  time_t *v9; // r6
  time_t v10; // r5
  void *v11; // r8
  const char *v12; // r1
  char *v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r0
  int v17; // lr
  int v19; // r12
  int v20; // r1

  LOWORD(v9) = 25288;
  v6 = time(0);
  v8 = a3 == 0;
  HIWORD(v9) = (unsigned int)&g_miner_compiletime[192] >> 16;
  if ( a3 )
    v7 = a2[422];
  v10 = v6;
  if ( !a3 )
    v7 = v9[1];
  v11 = *(void **)(a1 + 1152);
  if ( !v8 )
    --v7;
  *v9 = v6;
  if ( !v8 )
    v9[1] = v7;
  if ( v6 <= v7 )
    v10 = v7 + 1;
  v12 = (const char *)a2[400];
  if ( v6 <= v7 )
    *v9 = v10;
  if ( strcmp((const char *)v11, v12) )
  {
    free(v11);
    v13 = _strdup((const char *)a2[400]);
    v14 = a2[421];
    *(_DWORD *)(a1 + 1152) = v13;
    *(_DWORD *)(a1 + 1236) = v14;
  }
  *(_BYTE *)(a1 + 63) = v10;
  *(_BYTE *)(a1 + 62) = BYTE1(v10);
  *(_BYTE *)(a1 + 61) = BYTE2(v10);
  *(_BYTE *)(a1 + 60) = HIBYTE(v10);
  *(_DWORD *)(a1 + 1240) = v10;
  v15 = a2[371];
  v16 = a2[372];
  v17 = a2[373];
  *(_DWORD *)(a1 + 1032) = a2[370];
  *(_DWORD *)(a1 + 1040) = v16;
  *(_DWORD *)(a1 + 1036) = v15;
  *(_DWORD *)(a1 + 1044) = v17;
  v19 = a2[374];
  v20 = a2[375];
  v9[1] = v10;
  *(_DWORD *)(a1 + 1048) = v19;
  *(_DWORD *)(a1 + 1052) = v20;
  *(_QWORD *)a1 = *a2;
  return 0;
}
