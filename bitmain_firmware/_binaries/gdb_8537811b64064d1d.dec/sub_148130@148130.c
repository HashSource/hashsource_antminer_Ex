void __fastcall sub_148130(int a1, int a2)
{
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0

  if ( *(_BYTE *)(a1 + 52) )
  {
    sub_946D8("bug: psymtab for %s is already read in.", *(const char **)(a1 + 4));
  }
  else
  {
    if ( dword_48A514 )
    {
      v7 = sub_259F38("Reading in symbols for %s...", *(const char **)(a1 + 4));
      v8 = (_DWORD *)sub_242FB4(v7);
      sub_256834(*v8);
    }
    v4 = sub_1B6B4C(a2, dword_4872F0);
    v5 = *(_DWORD *)(a2 + 180);
    dword_4872D8 = v4;
    if ( v5 )
    {
      v6 = sub_1B6B4C(v5, dword_4872F0);
      v4 = dword_4872D8;
      *(_BYTE *)(dword_4872D8 + 416) = *(_BYTE *)(v6 + 416);
    }
    *(_BYTE *)(v4 + 432) = 0;
    sub_148018(a1);
    if ( dword_48A514 )
      sub_259F38("done.\n");
  }
  sub_125930();
}
