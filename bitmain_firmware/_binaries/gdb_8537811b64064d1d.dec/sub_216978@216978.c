int __fastcall sub_216978(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r9
  const char *v8; // r8
  char *v9; // r10
  char *v10; // r0

  v6 = sub_1B6B4C(a1, (_DWORD *)dword_4896EC);
  v7 = *(_DWORD *)sub_242FF0(v6);
  v8 = (const char *)sub_1B87F4(a1);
  v9 = sub_98F14(a2);
  v10 = sub_98F14(a3);
  sub_25A440(v7, "qf->relocate (%s, %s, %s)\n", v8, v9, v10);
  return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)(*(_DWORD *)v6 + 40) + 28))(a1, a2, a3);
}
