int __fastcall sub_16F374(int a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  printf("work[%3d]: ", 54);
  for ( i = 0; i <= 0x35; ++i )
    printf("%02x", *(unsigned __int8 *)(a1 + i));
  return putchar(10);
}
