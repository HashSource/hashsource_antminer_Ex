int __fastcall sub_16217C(int a1, int a2)
{
  _DWORD *v2; // r5
  _DWORD *v4; // r6
  char *v5; // r0
  int v6; // r2
  int v7; // r3

  v2 = *(_DWORD **)a1;
  v4 = *(_DWORD **)(*(_DWORD *)a1 + 164);
  sub_2578D4(a2, 0);
  sub_25752C(a2, "refcount", *v4);
  v5 = sub_98F14((int)v2);
  sub_257610(a2, "addr", v5);
  sub_257610(a2, "filename", *v2);
  sub_2573A8(a2, &word_356660, v6, v7);
  sub_257374(a2, 0);
  return 1;
}
