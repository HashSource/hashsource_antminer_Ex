bool __fastcall sub_256BAC(_BYTE *a1, char *a2, int a3)
{
  char *endptr; // [sp+10h] [bp-Ch] BYREF
  char nptr[4]; // [sp+14h] [bp-8h] BYREF

  nptr[2] = 0;
  while ( *a2 && a3 )
  {
    if ( !a2[1] )
    {
      puts("hex2bin str truncated");
      return 0;
    }
    nptr[0] = *a2;
    nptr[1] = a2[1];
    *a1 = strtol(nptr, &endptr, 16);
    if ( *endptr )
    {
      printf("hex2bin failed on '%s'\n", nptr);
      return 0;
    }
    ++a1;
    a2 += 2;
    --a3;
  }
  return a3 == 0;
}
