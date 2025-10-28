void __fastcall sub_1D89E0(int a1, char *a2)
{
  void *v3; // r0
  int v4; // r1
  int v5; // r2
  void *v6; // r6
  int v7; // r5
  bool v8; // zf
  size_t v9; // r0
  _DWORD *v10; // r0

  v3 = sub_92564((int)nullsub_39, 0);
  v6 = v3;
  if ( dword_487D4C )
  {
    v10 = (_DWORD *)sub_242FF0(v3);
    sub_2594D8(*v10, "record_full_goto_bookmark receives %s\n", a2);
  }
  v7 = (unsigned __int8)*a2;
  v8 = v7 == 34;
  if ( v7 != 34 )
    v8 = v7 == 39;
  if ( v8 )
  {
    v9 = strlen(a2);
    if ( (unsigned __int8)a2[v9 - 1] != v7 )
      sub_94708("Unbalanced quotes: %s", a2);
    a2 = sub_93358(a2 + 1, v9 - 2);
    sub_92564((int)sub_1D8810, (int)a2);
  }
  sub_1D3BEC(a2, v4, v5);
  sub_92648(v6);
}
