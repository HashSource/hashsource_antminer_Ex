int __fastcall sub_1C8AD8(int result)
{
  int v1; // r3
  int v2; // r4
  int v3; // r5
  void *v4; // r0
  int v5; // r3
  int v6; // r6
  int v7; // r1
  int v8; // r3
  bool v9; // zf
  void *v10; // r6
  _BYTE *v11; // r1
  void *v12; // r0
  void *v13; // r3
  void *v14; // r7
  int v15; // r0
  int v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r0
  void *v20; // r7
  int v21; // r8
  int v22; // r4
  int *v23; // r0
  void *ptr; // [sp+8h] [bp-68h] BYREF
  _BYTE v25[64]; // [sp+Ch] [bp-64h] BYREF
  int v26; // [sp+4Ch] [bp-24h]

  if ( !*(_DWORD *)(result + 32) )
    return result;
  v1 = *(_DWORD *)(result + 8);
  v2 = result;
  if ( !v1 )
    goto LABEL_18;
  v3 = *(_DWORD *)(v1 + 4);
  result = sub_B8974(result);
  if ( v3 == result )
  {
    if ( *(_DWORD *)(v2 + 8) )
      goto LABEL_22;
    goto LABEL_18;
  }
  v4 = *(void **)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  if ( !v4 )
  {
    *(_DWORD *)(v2 + 28) = 0;
    goto LABEL_18;
  }
  free(v4);
  v5 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 28) = 0;
  if ( !v5 )
  {
LABEL_18:
    v10 = sub_92E50();
    v11 = *(_BYTE **)(v2 + 4);
    dword_487CE0 = 0;
    sub_1C42D0((char **)&ptr, v11);
    v12 = *(void **)(v2 + 8);
    v13 = ptr;
    ptr = 0;
    *(_DWORD *)(v2 + 8) = v13;
    if ( v12 )
    {
      free(v12);
      if ( ptr )
        free(ptr);
    }
    *(_DWORD *)(v2 + 28) = dword_487CE0;
    result = sub_92E68((int)v10);
LABEL_22:
    if ( *(_DWORD *)(v2 + 28) )
    {
      if ( *(_DWORD *)(v2 + 24) != dword_487D2C )
        return result;
      v19 = sub_20F3B0(0);
      result = sub_C2388(v19, *(_DWORD *)(v2 + 28));
      if ( !result )
        return result;
    }
  }
  v6 = dword_487CFC;
  dword_487CFC = *(_DWORD *)(v2 + 12);
  sub_B79F0();
  sub_259F38("%d", *(_DWORD *)(v2 + 12));
  sub_B7A10();
  sub_259F38((const char *)&word_3B6A28);
  if ( *(_BYTE *)(v2 + 21) )
  {
    sub_B7A30();
    sub_259F38("x/");
    v7 = *(_DWORD *)(v2 + 16);
    if ( v7 != 1 )
      sub_259F38("%d", v7);
    sub_259F38("%c", *(unsigned __int8 *)(v2 + 20));
    v8 = *(unsigned __int8 *)(v2 + 20);
    v9 = v8 == 115;
    if ( v8 != 115 )
      v9 = v8 == 105;
    if ( !v9 )
      sub_259F38("%c", *(unsigned __int8 *)(v2 + 21));
    sub_259F38((const char *)&word_3E1FAC);
    sub_B7A50();
    sub_259B5C(*(_DWORD *)(v2 + 4));
    sub_B7A70();
    if ( *(_DWORD *)(v2 + 16) != 1 || *(_BYTE *)(v2 + 20) == 105 )
      sub_259F38((const char *)&word_356660);
    else
      sub_259F38("  ");
    sub_B7A90();
    v14 = sub_92E50();
    v15 = sub_14CD64(*(int **)(v2 + 8));
    v16 = sub_26EBD0(v15);
    if ( *(_BYTE *)(v2 + 20) == 105 )
      ((void (__fastcall *)(_DWORD, int))loc_169FC8)(*(_DWORD *)(*(_DWORD *)(v2 + 8) + 4), v16);
    ((void (__fastcall *)(_DWORD))loc_1C8230)(*(_DWORD *)(v2 + 16));
    sub_92E68((int)v14);
  }
  else
  {
    sub_B7A30();
    if ( *(_BYTE *)(v2 + 20) )
      sub_259F38("/%c ", *(unsigned __int8 *)(v2 + 20));
    sub_B7A50();
    sub_259B5C(*(_DWORD *)(v2 + 4));
    sub_B7A70();
    sub_259F38(" = ");
    sub_B7A50();
    sub_266650(v25, *(unsigned __int8 *)(v2 + 20));
    v26 = *(unsigned __int8 *)(v2 + 22);
    v20 = sub_92E50();
    v21 = sub_14CD64(*(int **)(v2 + 8));
    v22 = *(unsigned __int8 *)(v2 + 21);
    v23 = (int *)sub_242FB4(v21);
    sub_1C5800(v21, v22, (int)v25, *v23);
    sub_92E68((int)v20);
    sub_259F38((const char *)&word_356660);
  }
  v17 = sub_B7AB0();
  v18 = (_DWORD *)sub_242FB4(v17);
  result = sub_256834(*v18);
  dword_487CFC = v6;
  return result;
}
