int __fastcall sub_1870C4(int (__fastcall *a1)(int))
{
  int result; // r0
  int i; // r4
  int v4; // r0

  result = sub_22EBE4(a1);
  if ( result )
  {
    result = sub_98FA0(&dword_4878EC, &dword_475848);
    if ( !result )
    {
      result = sub_232978(0);
      if ( result )
      {
        v4 = ((int (*)(void))loc_23DC0C)();
        return a1(v4);
      }
      else
      {
        for ( i = dword_48A4D4; i; i = *(_DWORD *)(i + 4) )
        {
          result = i;
          if ( *(_DWORD *)(i + 44) != 2 )
            result = a1(i);
        }
      }
    }
  }
  return result;
}
