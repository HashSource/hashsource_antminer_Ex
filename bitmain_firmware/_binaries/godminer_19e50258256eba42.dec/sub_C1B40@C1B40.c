unsigned int __fastcall sub_C1B40(const char *a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i <= 4; ++i )
  {
    if ( !strcmp(a1, off_59BAEC[i]) )
      return i;
  }
  return 5;
}
