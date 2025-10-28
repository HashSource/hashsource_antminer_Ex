int __fastcall sub_216EF8(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  const char *v6; // r0

  v4 = sub_1B6B4C(a1, (_DWORD *)dword_4896EC);
  v5 = *(_DWORD *)sub_242FF0(v4);
  v6 = (const char *)sub_1B87F4(a1);
  sub_25A440(v5, "sf->sym_read (%s, 0x%x)\n", v6, a2);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 8))(a1, a2);
}
