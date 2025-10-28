int dag_acc_en()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  fpga_read(256, &v1);
  HIBYTE(v1) |= 0x40u;
  return fpga_write(256, v1);
}
