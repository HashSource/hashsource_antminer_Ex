int __fastcall sub_1D57D8(int a1, int a2, int a3)
{
  const char *v6; // r7
  int v7; // r2
  int v8; // r3
  _BOOL4 v9; // r3
  _BOOL4 v10; // r2
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r3

  v6 = sub_E135C(a3, a2);
  sub_2573A8(a1, "[", v7, v8);
  v9 = a2 <= 0;
  v10 = a3 != 2 || a2 <= 0;
  if ( v10 )
  {
    sub_2573A8(a1, "decode error (", v10, v9);
    sub_25752C(a1, "errcode", a2);
    sub_2573A8(a1, "): ", v11, v12);
  }
  sub_2573A8(a1, v6, v10, v9);
  return sub_2573A8(a1, "]\n", v13, v14);
}
