int bitmain_power_on()
{
  int v1; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  fpga_read(48, &v1);
  fpga_write(48, v1 & 0xBFFFFFFF);
  return 0;
}
