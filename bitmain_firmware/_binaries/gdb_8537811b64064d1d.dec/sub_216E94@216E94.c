int __fastcall sub_216E94(int a1)
{
  int (__fastcall ***v2)(int); // r5
  int v3; // r6
  const char *v4; // r0

  v2 = (int (__fastcall ***)(int))sub_1B6B4C(a1, (_DWORD *)dword_4896EC);
  v3 = *(_DWORD *)sub_242FF0(v2);
  v4 = (const char *)sub_1B87F4(a1);
  sub_25A440(v3, "sf->sym_new_init (%s)\n", v4);
  return (**v2)(a1);
}
