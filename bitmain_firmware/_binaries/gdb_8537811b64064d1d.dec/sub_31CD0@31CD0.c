bool __fastcall sub_31CD0(unsigned int a1, int a2)
{
  _DWORD *v4; // r4
  int v6; // r4
  int v7; // r7
  int v8; // r8
  unsigned int v9; // r4

  v4 = (_DWORD *)sub_31088();
  *v4 = 0;
  sub_316AC(v4);
  if ( !*v4 )
    return 0;
  v6 = sub_31BE8(v4);
  if ( !v6 )
    return 0;
  v7 = sub_930BC(1, 0x428u);
  v8 = sub_92564(198000, v7);
  v9 = sub_313C8(v6);
  *(_DWORD *)(v7 + 4) = v9;
  sub_92564(&loc_30570, v9);
  if ( v9 )
    v9 = *(_DWORD *)(v9 + 28);
  sub_92648(v8);
  return v9 >= a1 && a1 + a2 > v9;
}
