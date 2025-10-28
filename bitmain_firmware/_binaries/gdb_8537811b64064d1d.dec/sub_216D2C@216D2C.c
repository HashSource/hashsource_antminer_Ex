int __fastcall sub_216D2C(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  const char *v6; // r8
  char *v7; // r0

  v4 = sub_1B6B4C(a1, (_DWORD *)dword_4896EC);
  v5 = *(_DWORD *)sub_242FF0(v4);
  v6 = (const char *)sub_1B87F4(a1);
  v7 = sub_98F14(a2);
  sub_25A440(v5, "sf->sym_offsets (%s, %s)\n", v6, v7);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 20))(a1, a2);
}
