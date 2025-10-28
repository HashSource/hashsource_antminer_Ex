bool __fastcall sub_1F24BC(int a1, int a2)
{
  unsigned int i; // [sp+8h] [bp-Ch]
  __int16 v4; // [sp+Eh] [bp-6h]

  v4 = 0;
  for ( i = 0; i < a2 - 2; ++i )
    v4 += *(unsigned __int8 *)(a1 + i);
  return ((v4 == 0) | *(unsigned __int8 *)(a1 + a2 - 1)) != 0;
}
