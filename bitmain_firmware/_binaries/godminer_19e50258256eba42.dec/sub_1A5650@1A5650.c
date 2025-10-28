int __fastcall sub_1A5650(int a1, unsigned __int8 a2)
{
  int v5; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v5 = sub_344EB8(256, a2);
  for ( i = 0; i < a2; ++i )
    *(_BYTE *)(a1 + i) = v5 * i;
  return v5;
}
