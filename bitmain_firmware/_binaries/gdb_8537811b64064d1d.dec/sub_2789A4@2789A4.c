int __fastcall sub_2789A4(int a1, int a2)
{
  const char *v3; // r6
  int i; // r4
  const char *v5; // r0

  if ( *(_BYTE *)a2 != 95 || *(_BYTE *)(a2 + 1) != 95 )
    sub_94708("Invalid register name \"%s\".", (const char *)a2);
  v3 = (const char *)(a2 + 2);
  for ( i = 0; ; ++i )
  {
    if ( i >= ((int (__fastcall *)(int))loc_166EC4)(a1) )
      sub_94708("Cannot find gdbarch register \"%s\".", v3);
    v5 = (const char *)((int (__fastcall *)(int, int))loc_1677E8)(a1, i);
    if ( !strcmp(v3, v5) )
      break;
  }
  return i;
}
