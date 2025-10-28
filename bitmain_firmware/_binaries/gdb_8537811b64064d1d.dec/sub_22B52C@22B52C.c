int __fastcall sub_22B52C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int *a9)
{
  _DWORD *v12; // r0
  int v13; // r6
  _DWORD *v14; // r0
  char *v15; // r5
  _DWORD *v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  char *v19; // r5
  _DWORD *v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  char *v23; // r5
  _DWORD *v24; // r0
  int v25; // r0
  _DWORD *v26; // r0
  char *v27; // r5
  _DWORD *v28; // r0
  int v29; // r0
  _DWORD *v30; // r0
  char *v31; // r5
  _DWORD *v32; // r0
  int v33; // r0
  _DWORD *v34; // r0
  char *v35; // r4
  _DWORD *v36; // r0
  int v37; // r0
  _DWORD *v38; // r0
  char *v39; // r4
  _DWORD *v40; // r0
  int v41; // r0
  _DWORD *v42; // r0

  v12 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v12, "-> %s->to_search_memory (...)\n", (const char *)dword_489C90);
  v13 = ((int (__fastcall *)(void *, int, int, int, int))off_489E30)(&unk_489C8C, a2, a3, a4, a5);
  v14 = (_DWORD *)sub_242FF0(v13);
  sub_2594D8(*v14, "<- %s->to_search_memory (", (const char *)dword_489C90);
  v15 = sub_98F14((int)&unk_489C8C);
  v16 = (_DWORD *)sub_242FF0(v15);
  v17 = sub_256878(v15, *v16);
  v18 = (_DWORD *)sub_242FF0(v17);
  sub_256878(", ", *v18);
  v19 = sub_98E44(a2);
  v20 = (_DWORD *)sub_242FF0(v19);
  v21 = sub_256878(v19, *v20);
  v22 = (_DWORD *)sub_242FF0(v21);
  sub_256878(", ", *v22);
  v23 = sub_98B30(a3, a4);
  v24 = (_DWORD *)sub_242FF0(v23);
  v25 = sub_256878(v23, *v24);
  v26 = (_DWORD *)sub_242FF0(v25);
  sub_256878(", ", *v26);
  v27 = sub_98F14(a5);
  v28 = (_DWORD *)sub_242FF0(v27);
  v29 = sub_256878(v27, *v28);
  v30 = (_DWORD *)sub_242FF0(v29);
  sub_256878(", ", *v30);
  v31 = sub_98B30(a7, a8);
  v32 = (_DWORD *)sub_242FF0(v31);
  v33 = sub_256878(v31, *v32);
  v34 = (_DWORD *)sub_242FF0(v33);
  sub_256878(", ", *v34);
  v35 = sub_98E44(*a9);
  v36 = (_DWORD *)sub_242FF0(v35);
  v37 = sub_256878(v35, *v36);
  v38 = (_DWORD *)sub_242FF0(v37);
  sub_256878(") = ", *v38);
  v39 = sub_988D4(v13);
  v40 = (_DWORD *)sub_242FF0(v39);
  v41 = sub_256878(v39, *v40);
  v42 = (_DWORD *)sub_242FF0(v41);
  sub_256878(&word_356660, *v42);
  return v13;
}
