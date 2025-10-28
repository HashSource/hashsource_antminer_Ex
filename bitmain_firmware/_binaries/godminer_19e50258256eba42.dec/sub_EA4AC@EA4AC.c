int __fastcall sub_EA4AC(const char *a1, int a2, int a3)
{
  int i; // [sp+14h] [bp-8h]

  printf("%s[%3d] ", a1, a3);
  for ( i = 0; i < a3; ++i )
    printf("%02x", *(unsigned __int8 *)(a2 + i));
  return putchar(10);
}
