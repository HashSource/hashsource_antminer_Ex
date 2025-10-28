int __fastcall FBM_kit2(int result, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  bool v6; // cc
  int v7; // r1
  int v8; // r5

  v6 = a6 < 131;
  if ( a6 <= 131 )
    v6 = a5 < 2064;
  if ( v6 )
  {
    if ( a5 >= 2048 )
    {
      *(_DWORD *)(a2 + 4 * (a5 + 1073739776)) = 0;
    }
    else if ( a6 <= 127 )
    {
      v7 = (a6 + 31) & (a6 >> 31);
      if ( a6 >= 0 )
        v7 = a6;
      LOBYTE(v8) = a6 & 0x1F;
      if ( a6 <= 0 )
        v8 = -(-a6 & 0x1F);
      *(_DWORD *)(result + 4 * (4 * a5 + (v7 >> 5))) += 1 << v8;
      ++*a4;
    }
    else if ( a5 >= 1024 )
    {
      if ( a5 < 1536 )
        *(_DWORD *)(a3 + 4 * (a6 + 1073741704)) = 0;
      else
        *(_DWORD *)(a3 + 4 * (a6 + 1073741708)) = 0;
    }
    else if ( a5 >= 512 )
    {
      *(_DWORD *)(a3 + 4 * (a6 + 1073741700)) = 0;
    }
    else if ( a5 >= 0 )
    {
      *(_DWORD *)(a3 + 4 * (a6 + 1073741696)) = 0;
    }
  }
  return result;
}
