int __fastcall sub_28710(int result, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r12
  int v5; // r4
  bool v6; // cc
  int v7; // lr
  unsigned int v8; // r3
  int v9; // r4

  v3 = *a2;
  if ( *a2 > 3 )
  {
    v4 = *a3;
    if ( *a3 > 0x400 )
    {
      if ( v3 <= 0xF )
      {
        v5 = result + 4 * v3;
        if ( (unsigned int)(*(_DWORD *)(v5 + 40) - 1) < 0x400 )
        {
          *a2 = v3 - 1;
          *a3 = *(_DWORD *)(v5 + 40);
          return result;
        }
      }
      v6 = v4 > 0x4000;
      if ( v4 > 0x4000 )
        v6 = v3 > 9;
      if ( v6 )
      {
        if ( v3 <= 0x10 )
        {
          v7 = 4 * v3;
          v9 = result + 4 * v3;
          if ( (unsigned int)(*(_DWORD *)(v9 + 36) - 1) < 0x400 )
          {
            *a2 = v3 - 2;
            *a3 = *(_DWORD *)(v9 + 36);
            return result;
          }
        }
        else
        {
          if ( v3 > 0x22 )
            return result;
          v7 = 4 * v3;
        }
        result += v7;
        v8 = v3 - 1;
        if ( (unsigned int)(*(_DWORD *)(result + 40) - 1) < 0x4000 )
        {
          *a2 = v8;
          *a3 = *(_DWORD *)(result + 40);
        }
      }
    }
  }
  return result;
}
