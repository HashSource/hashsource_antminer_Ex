int __fastcall sub_10AE60(int a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  printf("nonce[%3d]: ", 46);
  for ( i = 0; i <= 0x2D; ++i )
    printf("%02x ", *(unsigned __int8 *)(a1 + i));
  return putchar(10);
}
