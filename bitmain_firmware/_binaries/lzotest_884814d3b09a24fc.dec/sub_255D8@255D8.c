int __fastcall sub_255D8(unsigned int a1, unsigned int a2, unsigned int a3)
{
  bool v3; // cc
  bool v4; // zf
  unsigned int v5; // r3
  unsigned int v6; // r2
  bool v7; // cc
  int result; // r0
  unsigned int v9; // r3

  if ( a1 <= 1 )
    return 0;
  if ( a1 == 2 )
  {
    v6 = a3 - 1;
    v7 = v6 > 2;
    if ( v6 <= 2 )
      v7 = a2 > 0x400;
    if ( v7 )
      return 0;
    else
      return 2;
  }
  else
  {
    v3 = a1 > 8;
    if ( a1 <= 8 )
      v3 = a2 > 0x800;
    if ( !v3 )
      return 2;
    v4 = a2 == 3072;
    if ( a2 <= 0xC00 )
      v4 = a1 == 3;
    if ( v4 )
    {
      if ( a3 >= 4 )
        return 2;
      else
        return 3;
    }
    if ( a2 > 0x4000 )
    {
      if ( a2 < 0xC000 )
      {
        if ( a1 > 9 )
        {
          v5 = a1 - 9;
          for ( result = 4; v5 > 0xFF; ++result )
            v5 -= 255;
          return result;
        }
        return 3;
      }
      return 0;
    }
    if ( a1 <= 0x21 )
      return 3;
    v9 = a1 - 33;
    for ( result = 4; v9 > 0xFF; ++result )
      v9 -= 255;
  }
  return result;
}
