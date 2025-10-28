int __fastcall sub_2ABFD4(int a1)
{
  FILE *v2; // r0

  if ( !a1 )
    sub_2A6BE4("opncls.c", 1354);
  v2 = sub_2A87BC(a1, (int)"r");
  if ( !v2 )
    return 0;
  fclose(v2);
  return 1;
}
