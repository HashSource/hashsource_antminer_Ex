int __fastcall sub_256974(const char *a1, int a2, unsigned int a3)
{
  unsigned int i; // [sp+14h] [bp-8h]

  printf("%s ", a1);
  for ( i = 0; i < a3; ++i )
    printf("%02x", *(unsigned __int8 *)(a2 + i));
  return putchar(10);
}
