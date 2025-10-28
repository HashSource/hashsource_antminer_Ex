int __fastcall sub_170388(int a1, char *s1)
{
  int v5; // [sp+4h] [bp-8h] BYREF

  if ( !strcmp(s1, "code") )
    return 4;
  if ( !strcmp(s1, "data") )
    return 8;
  if ( !((int (__fastcall *)(int))loc_16AEA4)(a1) || !((int (__fastcall *)(int, char *, int *))loc_16AEF0)(a1, s1, &v5) )
    sub_94708("Unknown address space specifier: \"%s\"", s1);
  return v5;
}
