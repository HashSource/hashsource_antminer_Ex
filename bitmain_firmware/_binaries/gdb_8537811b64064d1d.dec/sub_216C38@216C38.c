int __fastcall sub_216C38(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r8
  const char *v9; // r7
  char *v10; // r6
  char *v11; // r5
  char *v12; // r0

  v6 = sub_1B6B4C(a1, (_DWORD *)dword_4896EC);
  v7 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 32))(a1, a2, a3);
  v8 = *(_DWORD *)sub_242FF0(v7);
  v9 = (const char *)sub_1B87F4(a1);
  v10 = sub_98F14(a2);
  v11 = sub_98F14(a3);
  v12 = sub_98F14(v7);
  sub_25A440(v8, "sf->sym_relocate (%s, %s, %s) = %s\n", v9, v10, v11, v12);
  return v7;
}
