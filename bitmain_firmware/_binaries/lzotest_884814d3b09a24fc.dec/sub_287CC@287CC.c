int __fastcall sub_287CC(unsigned int a1, unsigned int a2, unsigned int a3)
{
  bool v4; // zf
  unsigned int v5; // r3
  int result; // r0
  _BOOL4 v7; // r0
  unsigned int v8; // r3

  if ( a1 <= 1 )
    return 0;
  if ( a1 == 2 )
  {
    v7 = a3 - 1 <= 2 && a2 <= 0x400;
    return 2 * v7;
  }
  else
  {
    if ( a1 <= 0xE && a2 <= 0x400 )
      return 2;
    v4 = a2 == 2048;
    if ( a2 <= 0x800 )
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
    v8 = a1 - 33;
    for ( result = 4; v8 > 0xFF; ++result )
      v8 -= 255;
  }
  return result;
}
