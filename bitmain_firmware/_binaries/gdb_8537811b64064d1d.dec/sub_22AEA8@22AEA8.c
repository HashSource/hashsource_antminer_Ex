int __fastcall sub_22AEA8(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r0
  int v5; // r0
  _DWORD *v6; // r0
  char *v7; // r5
  _DWORD *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  char *v12; // r4
  _DWORD *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v17; // [sp+4h] [bp-10h] BYREF
  int v18; // [sp+8h] [bp-Ch]
  int v19; // [sp+Ch] [bp-8h]

  v17 = a2;
  v18 = a3;
  v19 = a4;
  v4 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v4, "-> %s->to_post_startup_inferior (...)\n", (const char *)dword_489C90);
  v5 = off_489D54(&unk_489C8C, v17, v18, v19);
  v6 = (_DWORD *)sub_242FF0(v5);
  sub_2594D8(*v6, "<- %s->to_post_startup_inferior (", (const char *)dword_489C90);
  v7 = sub_98F14((int)&unk_489C8C);
  v8 = (_DWORD *)sub_242FF0(v7);
  v9 = sub_256878(v7, *v8);
  v10 = (_DWORD *)sub_242FF0(v9);
  sub_256878(", ", *v10);
  v11 = ps_getpid_0((int)&v17);
  v12 = sub_988D4(v11);
  v13 = (_DWORD *)sub_242FF0(v12);
  v14 = sub_256878(v12, *v13);
  v15 = (_DWORD *)sub_242FF0(v14);
  return sub_256878(")\n", *v15);
}
