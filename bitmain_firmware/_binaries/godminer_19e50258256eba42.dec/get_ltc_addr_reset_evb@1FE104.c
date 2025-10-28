int get_ltc_addr_reset_evb()
{
  fpga_write(4176, 1);
  return 0;
}
