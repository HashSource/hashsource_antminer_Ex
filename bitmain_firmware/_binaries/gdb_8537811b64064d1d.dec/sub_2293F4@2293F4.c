int __fastcall sub_2293F4(int a1, int a2, int a3)
{
  _DWORD *v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  char *v8; // r4
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

  v5 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v5, "-> %s->to_store_registers (...)\n", (const char *)dword_489C90);
  v6 = off_489CCC(&unk_489C8C, a2, a3);
  v7 = (_DWORD *)sub_242FF0(v6);
  sub_2594D8(*v7, "<- %s->to_store_registers (", (const char *)dword_489C90);
  v8 = sub_98F14((int)&unk_489C8C);
  v9 = (_DWORD *)sub_242FF0(v8);
  v10 = sub_256878(v8, *v9);
  v11 = (_DWORD *)sub_242FF0(v10);
  sub_256878(", ", *v11);
  v12 = sub_98F14(a2);
  v13 = (_DWORD *)sub_242FF0(v12);
  v14 = sub_256878(v12, *v13);
  v15 = (_DWORD *)sub_242FF0(v14);
  sub_256878(", ", *v15);
  v16 = sub_988D4(a3);
  v17 = (_DWORD *)sub_242FF0(v16);
  v18 = sub_256878(v16, *v17);
  v19 = (_DWORD *)sub_242FF0(v18);
  return sub_256878(")\n", *v19);
}
