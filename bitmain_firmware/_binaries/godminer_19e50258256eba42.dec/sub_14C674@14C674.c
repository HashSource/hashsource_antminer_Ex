int __fastcall sub_14C674(int a1, int a2)
{
  unsigned int i; // [sp+8h] [bp-Ch]
  unsigned __int16 v4; // [sp+Eh] [bp-6h]

  v4 = 0;
  for ( i = 2; i < a2 - 2; ++i )
    v4 += *(unsigned __int8 *)(a1 + i);
  *(_BYTE *)(a1 + a2 - 2) = HIBYTE(v4);
  *(_BYTE *)(a1 + a2 - 1) = v4;
  return v4;
}
