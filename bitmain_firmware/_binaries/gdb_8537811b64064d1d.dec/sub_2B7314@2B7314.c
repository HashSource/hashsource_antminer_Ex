int __fastcall sub_2B7314(int a1, int a2, int a3, _BYTE *a4)
{
  __int16 v4; // r4
  _BYTE *v5; // r5

  v4 = a3;
  v5 = a4 + 2;
  if ( (*(_DWORD *)(a2 + 8) == 1) == a1 )
  {
    sub_2AB5F4(SHIWORD(a3), a4);
    return sub_2AB5F4(v4, v5);
  }
  else
  {
    sub_2AB604(SHIWORD(a3), a4);
    return sub_2AB604(v4, v5);
  }
}
