int __fastcall sub_229B40(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  char *v12; // r4
  _DWORD *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  char *v16; // r4
  _DWORD *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  char *v20; // r4
  _DWORD *v21; // r0
  int v22; // r0
  _DWORD *v23; // r0
  char *v24; // r4
  _DWORD *v25; // r0
  int v26; // r0
  _DWORD *v27; // r0

  v9 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v9, "-> %s->to_call_history_range (...)\n", (const char *)dword_489C90);
  v10 = off_489F54(&unk_489C8C, off_489F54, a3, a4, a5, a6, a7);
  v11 = (_DWORD *)sub_242FF0(v10);
  sub_2594D8(*v11, "<- %s->to_call_history_range (", (const char *)dword_489C90);
  v12 = sub_98F14((int)&unk_489C8C);
  v13 = (_DWORD *)sub_242FF0(v12);
  v14 = sub_256878(v12, *v13);
  v15 = (_DWORD *)sub_242FF0(v14);
  sub_256878(", ", *v15);
  v16 = sub_98B30(a3, a4);
  v17 = (_DWORD *)sub_242FF0(v16);
  v18 = sub_256878(v16, *v17);
  v19 = (_DWORD *)sub_242FF0(v18);
  sub_256878(", ", *v19);
  v20 = sub_98B30(a5, a6);
  v21 = (_DWORD *)sub_242FF0(v20);
  v22 = sub_256878(v20, *v21);
  v23 = (_DWORD *)sub_242FF0(v22);
  sub_256878(", ", *v23);
  v24 = sub_988D4(a7);
  v25 = (_DWORD *)sub_242FF0(v24);
  v26 = sub_256878(v24, *v25);
  v27 = (_DWORD *)sub_242FF0(v26);
  return sub_256878(")\n", *v27);
}
