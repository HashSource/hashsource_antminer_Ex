int read_fpga_id()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  return fpga_read(240, &v1);
}
