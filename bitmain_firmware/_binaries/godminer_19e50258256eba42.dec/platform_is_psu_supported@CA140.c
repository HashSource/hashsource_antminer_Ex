int __fastcall platform_is_psu_supported(__int16 a1)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < dword_C273C4; ++i )
  {
    if ( a1 == *(_WORD *)(dword_C273DC + 2 * i) )
      return 1;
  }
  return 0;
}
