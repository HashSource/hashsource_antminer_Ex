int __fastcall sub_22B0A0(int a1, int a2, int a3, int a4, int *a5)
{
  _DWORD *v5; // r0
  int v6; // r7
  _DWORD *v7; // r0
  char *v8; // r5
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  char *v13; // r4
  _DWORD *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  char *v17; // r4
  _DWORD *v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  char *v21; // r4
  _DWORD *v22; // r0
  int v23; // r0
  _DWORD *v24; // r0
  int v26; // [sp+Ch] [bp-10h] BYREF
  int v27; // [sp+10h] [bp-Ch]
  int v28; // [sp+14h] [bp-8h]

  v26 = a2;
  v27 = a3;
  v28 = a4;
  v5 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v5, "-> %s->to_get_tib_address (...)\n", (const char *)dword_489C90);
  v6 = off_489EE0(&unk_489C8C, v26, v27, v28, a5);
  v7 = (_DWORD *)sub_242FF0(v6);
  sub_2594D8(*v7, "<- %s->to_get_tib_address (", (const char *)dword_489C90);
  v8 = sub_98F14((int)&unk_489C8C);
  v9 = (_DWORD *)sub_242FF0(v8);
  v10 = sub_256878(v8, *v9);
  v11 = (_DWORD *)sub_242FF0(v10);
  sub_256878(", ", *v11);
  v12 = ps_getpid_0((int)&v26);
  v13 = sub_988D4(v12);
  v14 = (_DWORD *)sub_242FF0(v13);
  v15 = sub_256878(v13, *v14);
  v16 = (_DWORD *)sub_242FF0(v15);
  sub_256878(", ", *v16);
  v17 = sub_98E44(*a5);
  v18 = (_DWORD *)sub_242FF0(v17);
  v19 = sub_256878(v17, *v18);
  v20 = (_DWORD *)sub_242FF0(v19);
  sub_256878(") = ", *v20);
  v21 = sub_988D4(v6);
  v22 = (_DWORD *)sub_242FF0(v21);
  v23 = sub_256878(v21, *v22);
  v24 = (_DWORD *)sub_242FF0(v23);
  sub_256878(&word_356660, *v24);
  return v6;
}
