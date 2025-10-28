unsigned int __fastcall sub_25AA64(unsigned int result, int a2, unsigned int a3)
{
  unsigned int v5; // [sp+Ch] [bp-18h]
  unsigned int i; // [sp+14h] [bp-10h]

  v5 = result;
  for ( i = 0; i < a3; ++i )
  {
    result = sub_25AA18(*(_DWORD *)(a2 + 4 * i));
    *(_DWORD *)(v5 + 4 * i) = result;
  }
  return result;
}
