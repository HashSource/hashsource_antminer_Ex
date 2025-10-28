int __fastcall sub_229DC0(int a1, int a2, int a3, int a4)
{
  _DWORD *v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  char *v9; // r4
  _DWORD *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  char *v13; // r4
  _DWORD *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0

  v6 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v6, "-> %s->to_goto_record (...)\n", (const char *)dword_489C90);
  v7 = off_489F3C(&unk_489C8C, off_489F3C, a3, a4);
  v8 = (_DWORD *)sub_242FF0(v7);
  sub_2594D8(*v8, "<- %s->to_goto_record (", (const char *)dword_489C90);
  v9 = sub_98F14((int)&unk_489C8C);
  v10 = (_DWORD *)sub_242FF0(v9);
  v11 = sub_256878(v9, *v10);
  v12 = (_DWORD *)sub_242FF0(v11);
  sub_256878(", ", *v12);
  v13 = sub_98B30(a3, a4);
  v14 = (_DWORD *)sub_242FF0(v13);
  v15 = sub_256878(v13, *v14);
  v16 = (_DWORD *)sub_242FF0(v15);
  return sub_256878(")\n", *v16);
}
