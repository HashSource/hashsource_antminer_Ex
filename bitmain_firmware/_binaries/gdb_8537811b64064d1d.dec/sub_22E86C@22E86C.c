int *__fastcall sub_22E86C(int *a1)
{
  _DWORD *v2; // r0
  int v3; // r0
  int v4; // r6
  void *v5; // r3
  void *v6; // r0
  void **v7; // r6
  void *v8; // r0
  _DWORD *v9; // r0
  char *v10; // r5
  _DWORD *v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  char *v14; // r5
  _DWORD *v15; // r0
  int v16; // r0
  _DWORD *v17; // r0
  void *ptr; // [sp+4h] [bp-4h] BYREF

  *a1 = 0;
  v2 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v2, "-> %s->to_traceframe_info (...)\n", (const char *)dword_489C90);
  v3 = off_489EF0(&ptr, &unk_489C8C);
  v4 = *a1;
  v5 = ptr;
  ptr = 0;
  *a1 = (int)v5;
  if ( v4 )
  {
    v6 = *(void **)(v4 + 12);
    if ( v6 )
      sub_339E8C(v6);
    if ( *(_DWORD *)v4 )
      sub_339E8C(*(void **)v4);
    sub_33AC2C((void *)v4);
    v7 = (void **)ptr;
    if ( ptr )
    {
      v8 = (void *)*((_DWORD *)ptr + 3);
      if ( v8 )
        sub_339E8C(v8);
      if ( *v7 )
        sub_339E8C(*v7);
      sub_33AC2C(v7);
    }
  }
  v9 = (_DWORD *)sub_242FF0(v3);
  sub_2594D8(*v9, "<- %s->to_traceframe_info (", (const char *)dword_489C90);
  v10 = sub_98F14((int)&unk_489C8C);
  v11 = (_DWORD *)sub_242FF0(v10);
  v12 = sub_256878(v10, *v11);
  v13 = (_DWORD *)sub_242FF0(v12);
  sub_256878(") = ", *v13);
  v14 = sub_98F14(*a1);
  v15 = (_DWORD *)sub_242FF0(v14);
  v16 = sub_256878(v14, *v15);
  v17 = (_DWORD *)sub_242FF0(v16);
  sub_256878(&word_356660, *v17);
  return a1;
}
