int __fastcall sub_1B7038(int a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  printf("nonce[%3ld]: ", 47);
  for ( i = 0; i <= 0x2E; ++i )
    printf("%02x ", *(unsigned __int8 *)(a1 + i));
  return putchar(10);
}
