int __fastcall sub_267E2C(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r3
  unsigned int v10; // r7
  bool v11; // zf
  char *v13; // r0

  v8 = ((int (__fastcall *)(int, int, int *))loc_169F00)(a2, a3, &dword_4899A0);
  v9 = *(_DWORD *)(a1 + 20);
  v10 = v8;
  v11 = v9 == 0;
  if ( v9 )
    v11 = a3 == v8;
  if ( !v11 )
  {
    sub_25A6E4("@", a4);
    v13 = sub_25ACB4(a2, a3);
    sub_25A6E4(v13, a4);
    sub_25A6E4(&word_3B6A28, a4);
  }
  return sub_1C7404(a1, a2, v10, a4, dword_46D448);
}
