int __fastcall chain_reset_high(char a1)
{
  int v3; // [sp+Ch] [bp-8h] BYREF

  v3 = 0;
  fpga_read(52, &v3);
  return fpga_write(52, (1 << a1) | v3);
}
