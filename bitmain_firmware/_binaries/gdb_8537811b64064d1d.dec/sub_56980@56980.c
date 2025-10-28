int __fastcall sub_56980(int result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r8
  int i; // r0
  int v5; // r6
  int v6; // r7
  int v7; // r0

  if ( a2 )
  {
    v2 = (_DWORD *)dword_48769C;
    v3 = dword_487668;
    dword_487668 = dword_48769C;
    if ( dword_48769C )
    {
      for ( i = sub_191AE8(result); ; i = sub_191AE8(result) )
      {
        v5 = i;
        result = sub_56374(i);
        v6 = result;
        if ( result )
        {
          v7 = ((int (*)(void))loc_23DC0C)();
          result = sub_5691C(v5, v7);
          if ( result )
            result = sub_188844(*(_DWORD *)(v6 + 16));
        }
        v2 = (_DWORD *)*v2;
        if ( !v2 )
          break;
        dword_487668 = (int)v2;
      }
    }
    dword_487668 = v3;
  }
  return result;
}
