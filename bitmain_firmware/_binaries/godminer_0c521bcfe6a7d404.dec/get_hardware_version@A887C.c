int get_hardware_version()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  fpga_read(0, &v1);
  return v1;
}
