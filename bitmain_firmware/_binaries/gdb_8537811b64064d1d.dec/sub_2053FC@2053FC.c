int __fastcall sub_2053FC(int a1, int a2)
{
  _DWORD *v4; // r4
  int result; // r0
  int v6; // r2

  v4 = sub_93050(0xCu);
  *v4 = sub_32727C(a1);
  result = sub_32727C(a2);
  v4[1] = result;
  v6 = dword_4893F0;
  v4[2] = 0;
  if ( v6 )
  {
    while ( *(_DWORD *)(v6 + 8) )
      v6 = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 8) = v4;
  }
  else
  {
    dword_4893F0 = (int)v4;
  }
  return result;
}
