int hs_uart_bypass_en()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  fpga_read(256, &v1);
  LOBYTE(v1) = v1 | 1;
  return fpga_write(256, v1);
}
