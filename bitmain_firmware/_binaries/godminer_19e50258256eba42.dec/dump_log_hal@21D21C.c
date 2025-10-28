int __fastcall dump_log_hal(const char *a1, int a2, int a3, int a4)
{
  int i; // [sp+14h] [bp-8h]

  printf("%s[%d] ", a1, a2);
  for ( i = 0; i < a4; ++i )
    printf("%02x ", *(unsigned __int8 *)(a3 + i));
  return putchar(10);
}
