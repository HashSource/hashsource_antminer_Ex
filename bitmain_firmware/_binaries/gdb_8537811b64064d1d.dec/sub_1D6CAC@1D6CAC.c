void __fastcall sub_1D6CAC(int a1, int a2, int a3)
{
  int *v3; // r0
  _DWORD *v4; // r4

  v3 = &dword_487D64;
  if ( dword_487D94 )
    sub_1532FC(&dword_487D94);
  sub_1D6B74((int)v3, a2, a3);
  v4 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      if ( v4[11] != 2 )
        sub_E14E0(v4);
      v4 = (_DWORD *)v4[1];
    }
    while ( v4 );
  }
}
