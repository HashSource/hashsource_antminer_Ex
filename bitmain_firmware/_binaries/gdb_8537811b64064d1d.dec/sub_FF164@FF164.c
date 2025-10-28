void __fastcall sub_FF164(const char *a1, char *a2)
{
  int i; // r5
  int j; // r4

  for ( i = sub_20F3B0(0); i; i = *(_DWORD *)(i + 12) )
  {
    for ( j = sub_C2640(i); j; j = *(_DWORD *)(j + 16) )
    {
      if ( !*(_DWORD *)(j + 20) && !*(_DWORD *)(j + 8) && !*(_DWORD *)(j + 12) && !strcmp(a2, *(const char **)(j + 4)) )
      {
        *(_DWORD *)(j + 20) = 1;
        sub_FF164(a1, *(_DWORD *)j);
        *(_DWORD *)(j + 20) = 0;
      }
    }
  }
  sub_FF09C(a1, a2);
}
