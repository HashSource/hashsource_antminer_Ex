int __fastcall sub_22B34C(int a1, unsigned int a2, int a3, int a4, int a5, int *a6)
{
  _DWORD *v9; // r0
  int v10; // r6
  _DWORD *v11; // r0
  char *v12; // r5
  _DWORD *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  char *v16; // r5
  _DWORD *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  char *v20; // r5
  _DWORD *v21; // r0
  int v22; // r0
  _DWORD *v23; // r0
  char *v24; // r5
  _DWORD *v25; // r0
  int v26; // r0
  _DWORD *v27; // r0
  char *v28; // r5
  _DWORD *v29; // r0
  int v30; // r0
  _DWORD *v31; // r0
  char *v32; // r4
  _DWORD *v33; // r0
  int v34; // r0
  _DWORD *v35; // r0
  char *v36; // r4
  _DWORD *v37; // r0
  int v38; // r0
  _DWORD *v39; // r0

  v9 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v9, "-> %s->to_trace_find (...)\n", (const char *)dword_489C90);
  v10 = off_489EAC(&unk_489C8C, a2, a3, a4, a5, a6);
  v11 = (_DWORD *)sub_242FF0(v10);
  sub_2594D8(*v11, "<- %s->to_trace_find (", (const char *)dword_489C90);
  v12 = sub_98F14((int)&unk_489C8C);
  v13 = (_DWORD *)sub_242FF0(v12);
  v14 = sub_256878(v12, *v13);
  v15 = (_DWORD *)sub_242FF0(v14);
  sub_256878(", ", *v15);
  v16 = sub_988D4(a2);
  v17 = (_DWORD *)sub_242FF0(v16);
  v18 = sub_256878(v16, *v17);
  v19 = (_DWORD *)sub_242FF0(v18);
  sub_256878(", ", *v19);
  v20 = sub_988D4(a3);
  v21 = (_DWORD *)sub_242FF0(v20);
  v22 = sub_256878(v20, *v21);
  v23 = (_DWORD *)sub_242FF0(v22);
  sub_256878(", ", *v23);
  v24 = sub_98E44(a4);
  v25 = (_DWORD *)sub_242FF0(v24);
  v26 = sub_256878(v24, *v25);
  v27 = (_DWORD *)sub_242FF0(v26);
  sub_256878(", ", *v27);
  v28 = sub_98E44(a5);
  v29 = (_DWORD *)sub_242FF0(v28);
  v30 = sub_256878(v28, *v29);
  v31 = (_DWORD *)sub_242FF0(v30);
  sub_256878(", ", *v31);
  v32 = sub_988D4(*a6);
  v33 = (_DWORD *)sub_242FF0(v32);
  v34 = sub_256878(v32, *v33);
  v35 = (_DWORD *)sub_242FF0(v34);
  sub_256878(") = ", *v35);
  v36 = sub_988D4(v10);
  v37 = (_DWORD *)sub_242FF0(v36);
  v38 = sub_256878(v36, *v37);
  v39 = (_DWORD *)sub_242FF0(v38);
  sub_256878(&word_356660, *v39);
  return v10;
}
