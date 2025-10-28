int __fastcall sub_214860(unsigned int a1)
{
  int v1; // r7
  _DWORD *v2; // r5
  int *v3; // r3
  int *i; // r4

  v1 = dword_489690;
  if ( dword_489690 )
  {
    v2 = *(_DWORD **)(dword_487D2C + 36);
    if ( v2 )
    {
      v3 = (int *)v2[43];
      v1 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          for ( i = (int *)v2[42]; v3 > i; i += 3 )
          {
            if ( *i && dword_489690 && sub_2117CC(i) )
            {
              if ( sub_214690(a1, i) )
              {
                v1 = (int)i;
                if ( sub_2142F8(i) )
                  return v1;
              }
              else if ( sub_21460C(a1, i) )
              {
                v1 = (int)i;
              }
            }
            v3 = (int *)v2[43];
          }
          if ( v3 == i )
            break;
          v3 = (int *)v2[43];
          if ( v3 != i )
            return v1;
        }
        v2 = (_DWORD *)*v2;
        if ( !v2 )
          break;
        v3 = (int *)v2[43];
      }
    }
    else
    {
      return 0;
    }
  }
  return v1;
}
