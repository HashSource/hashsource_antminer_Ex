int __fastcall pre_push_work_vbk(int a1, int *a2, int a3)
{
  time_t v6; // r0
  int v7; // r3
  bool v8; // zf
  int v9; // r5
  void *v10; // r8
  const char *v11; // r1
  char *v12; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r0
  int v16; // lr
  int v18; // r12
  int v19; // r1

  v6 = time(0);
  v8 = a3 == 0;
  if ( a3 )
    v7 = a2[424];
  v9 = v6;
  if ( !a3 )
    v7 = dword_1672DC;
  v10 = *(void **)(a1 + 1152);
  if ( !v8 )
    --v7;
  dword_1672D8 = v6;
  if ( !v8 )
    dword_1672DC = v7;
  if ( v6 <= v7 )
    v9 = v7 + 1;
  v11 = (const char *)a2[400];
  if ( v6 <= v7 )
    dword_1672D8 = v9;
  if ( strcmp((const char *)v10, v11) )
  {
    free(v10);
    v12 = _strdup((const char *)a2[400]);
    v13 = a2[423];
    *(_DWORD *)(a1 + 1152) = v12;
    *(_DWORD *)(a1 + 1244) = v13;
  }
  *(_BYTE *)(a1 + 63) = v9;
  *(_BYTE *)(a1 + 62) = BYTE1(v9);
  *(_BYTE *)(a1 + 61) = BYTE2(v9);
  *(_BYTE *)(a1 + 60) = HIBYTE(v9);
  *(_DWORD *)(a1 + 1248) = v9;
  v14 = a2[371];
  v15 = a2[372];
  v16 = a2[373];
  *(_DWORD *)(a1 + 1032) = a2[370];
  *(_DWORD *)(a1 + 1040) = v15;
  *(_DWORD *)(a1 + 1036) = v14;
  *(_DWORD *)(a1 + 1044) = v16;
  v18 = a2[374];
  v19 = a2[375];
  dword_1672DC = v9;
  *(_DWORD *)(a1 + 1048) = v18;
  *(_DWORD *)(a1 + 1052) = v19;
  *(_QWORD *)a1 = *a2;
  return 0;
}
