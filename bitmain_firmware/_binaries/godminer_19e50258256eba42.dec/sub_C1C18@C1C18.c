int __fastcall sub_C1C18(const char *a1)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; strcmp(a1, (const char *)*(&off_59BB4C + i)); ++i )
    ;
  return i;
}
