int __fastcall sub_192064(int a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  printf("nonce[%3d]: ", 14);
  for ( i = 0; i <= 0xD; ++i )
    printf("%02x ", *(unsigned __int8 *)(a1 + i));
  return putchar(10);
}
