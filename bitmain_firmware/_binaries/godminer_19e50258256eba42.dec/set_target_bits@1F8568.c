int __fastcall set_target_bits(int a1)
{
  int v2; // [sp+Ch] [bp-8h] BYREF

  fpga_write(312, a1);
  return fpga_read(312, &v2);
}
