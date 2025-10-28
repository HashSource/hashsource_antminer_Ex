int __fastcall sub_1F8750(int *a1)
{
  int v3; // [sp+Ch] [bp-8h] BYREF

  fpga_write(196, *a1);
  fpga_write(200, a1[1]);
  fpga_write(204, a1[2]);
  fpga_read(196, &v3);
  fpga_read(200, &v3);
  return fpga_read(204, &v3);
}
