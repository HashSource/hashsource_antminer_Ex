int __fastcall sub_17C700(_DWORD *a1, const char *a2, int a3, int a4, int a5, int a6)
{
  int v9; // r12
  int v10; // r0

  if ( a4 > 0 )
    v9 = sub_171280(a1);
  else
    v9 = (int)a1;
  v10 = *(_DWORD *)(v9 + 24);
  if ( *(_BYTE *)v10 == 2 && **(_BYTE **)(*(_DWORD *)(v10 + 20) + 24) == 20 )
    return sub_25A6E4("string", a3);
  else
    return sub_E93C0(v9, a2, a3, a4, a5, a6);
}
