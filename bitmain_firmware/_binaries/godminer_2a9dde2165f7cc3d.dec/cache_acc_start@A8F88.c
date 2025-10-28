int cache_acc_start()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  fpga_read(256, &v1);
  HIBYTE(v1) |= 0x80u;
  return fpga_write(256, v1);
}
