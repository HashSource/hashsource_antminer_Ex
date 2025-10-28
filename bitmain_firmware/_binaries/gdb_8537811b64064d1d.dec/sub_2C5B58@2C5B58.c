int __fastcall sub_2C5B58(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v1 + 44) != 4 )
  {
    sub_2A6BE4("elf32-arm.c", 6910);
    __und(0);
  }
  sub_2B8FBC(*(const char ***)(v1 + 360), *(_DWORD *)(v1 + 276), ".glue_7");
  sub_2B8FBC(*(const char ***)(v1 + 360), *(_DWORD *)(v1 + 272), ".glue_7t");
  sub_2B8FBC(*(const char ***)(v1 + 360), *(_DWORD *)(v1 + 344), ".vfp11_veneer");
  sub_2B8FBC(*(const char ***)(v1 + 360), *(_DWORD *)(v1 + 348), ".text.stm32l4xx_veneer");
  sub_2B8FBC(*(const char ***)(v1 + 360), *(_DWORD *)(v1 + 280), ".v4_bx");
  return 1;
}
