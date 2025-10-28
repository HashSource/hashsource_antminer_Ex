int __fastcall sub_76DDC(const char *a1, char *a2, char *a3)
{
  size_t n; // [sp+14h] [bp-8h]

  for ( n = strlen(a1) - 1; a1[n] != 58; --n )
    ;
  strncpy(a2, a1, n);
  a2[n] = 0;
  strcpy(a3, &a1[n + 1]);
  return 1;
}
