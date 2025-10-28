int *__fastcall sub_216F58(int a1)
{
  int v2; // r0
  int *v3; // r4
  int v4; // r6
  const char *v5; // r5
  char *v6; // r0

  v2 = sub_1B6B4C(a1, (_DWORD *)dword_4896EC);
  v3 = (int *)(**(int (__fastcall ***)(int))(*(_DWORD *)v2 + 36))(a1);
  v4 = *(_DWORD *)sub_242FF0(v3);
  v5 = (const char *)sub_1B87F4(a1);
  v6 = sub_98F14(*v3);
  sub_25A440(v4, "probes->sym_get_probes (%s) = %s\n", v5, v6);
  return v3;
}
