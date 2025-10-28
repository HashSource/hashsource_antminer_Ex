int __fastcall sub_1A7D0(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r3

  v3 = (_DWORD *)*a2;
  if ( !*a2 )
  {
    v3 = sub_1A6E0(a1);
    *a2 = v3;
  }
  if ( a3 == 13 )
    return sub_160FE8(a1, 13, *v3, 0);
  else
    return sub_250DA4(a1, v3[3], a3);
}
