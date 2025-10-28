int __fastcall sub_68CA4(int a1, int a2, int a3, int a4, const char *a5, int a6, int a7)
{
  int v7; // r4

  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 36) - 4);
  if ( *(_BYTE *)(a1 + 24) )
    *(_BYTE *)(a1 + 24) = 0;
  else
    sub_68C0C(a1);
  if ( a5 )
    sub_2594D8(v7, "%s=\"", a5);
  else
    sub_256878("\"", v7);
  sub_25936C(v7, a6, a7);
  return sub_256878("\"", v7);
}
