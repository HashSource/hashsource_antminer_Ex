int __fastcall sub_56640(int result)
{
  _DWORD *v1; // r4
  int v2; // r6
  int i; // r0

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    for ( i = sub_191AE8(result); ; i = sub_191AE8(result) )
    {
      result = sub_56374(i);
      if ( result )
        result = sub_188364(*(_DWORD *)(result + 16));
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        break;
      dword_487668 = (int)v1;
    }
  }
  dword_487668 = v2;
  return result;
}
