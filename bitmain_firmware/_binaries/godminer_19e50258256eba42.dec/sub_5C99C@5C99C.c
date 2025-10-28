int __fastcall sub_5C99C(int a1)
{
  unsigned int v2; // [sp+8h] [bp-14h]
  char v3; // [sp+Fh] [bp-Dh]
  unsigned __int8 *v4; // [sp+10h] [bp-Ch]
  unsigned __int8 *v5; // [sp+10h] [bp-Ch]
  unsigned __int8 *v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v7 = 0;
  v4 = (unsigned __int8 *)(a1 + 32);
  v2 = a1 + 160;
  while ( *v4 != 255 && (unsigned int)v4 < v2 )
    ++v4;
  while ( *v4 == 255 && (unsigned int)v4 < v2 )
    ++v4;
  if ( *(v4 - 1) == 255 && *(v4 - 2) == 255 )
  {
    v5 = v4 + 1;
    v3 = *v5++;
    v7 = sub_5C84C(v5);
    v6 = v5 + 2;
    if ( v3 == 3 )
    {
      v7 += *v6 << 16;
    }
    else if ( v3 == 4 )
    {
      v7 += sub_5C84C(v6) << 16;
    }
  }
  return v7;
}
