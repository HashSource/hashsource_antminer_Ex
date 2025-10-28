int __fastcall sub_283AF0(int result, int a2)
{
  int v3; // r4
  int v4; // r1
  bool v5; // zf
  int v6; // r0

  if ( result )
  {
    v3 = result;
    v4 = dword_48AAD0;
    v5 = dword_48AAD0 == (_DWORD)sub_283AF0;
    if ( (int (*)())dword_48AAD0 != sub_283AF0 )
      v5 = dword_48AAD0 == (_DWORD)sub_283B74;
    if ( !v5 )
      sub_283730(result);
    if ( dword_48ABCC )
    {
      if ( v3 > 0 )
        v4 = 1;
      v6 = abs32(v3);
      if ( v3 <= 0 )
        v4 = -1;
      return sub_2839D0(v6, v4);
    }
    else
    {
      return sub_29760C(v3, a2);
    }
  }
  return result;
}
