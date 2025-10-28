void __fastcall sub_267ED0(int a1, _BYTE **a2, unsigned int a3, int a4, int a5)
{
  int v8; // r0
  char *v9; // r0

  v8 = sub_170068(a1);
  if ( **a2 == 7 )
  {
    sub_267E2C(a5, v8, a3, a4);
  }
  else if ( *(_DWORD *)(a5 + 72) )
  {
    sub_1C7404(a5, v8, a3, a4, dword_46D448);
  }
  else if ( *(_DWORD *)(a5 + 20) )
  {
    v9 = sub_25ACB4(v8, a3);
    sub_25A6E4(v9, a4);
  }
}
