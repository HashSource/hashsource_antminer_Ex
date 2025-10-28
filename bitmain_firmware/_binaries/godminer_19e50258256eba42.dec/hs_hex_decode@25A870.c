bool __fastcall hs_hex_decode(unsigned __int8 *a1, int a2)
{
  int v5; // [sp+Ch] [bp-18h]
  char v6; // [sp+13h] [bp-11h]
  int v7; // [sp+14h] [bp-10h]
  unsigned __int8 *i; // [sp+18h] [bp-Ch]
  char v9; // [sp+1Ch] [bp-8h]

  if ( !a1 )
    return 1;
  v7 = 0;
  v6 = 0;
  v9 = 0;
  for ( i = a1; *i; ++i )
  {
    v5 = sub_25A55C(*i);
    if ( v5 == -1 )
      return 0;
    if ( (v9 & 1) != 0 )
    {
      v6 |= v5;
      if ( a2 )
        *(_BYTE *)(a2 + v7) = v6;
      ++v7;
    }
    else
    {
      v6 = 16 * v5;
    }
    ++v9;
  }
  return (v9 & 1) == 0;
}
