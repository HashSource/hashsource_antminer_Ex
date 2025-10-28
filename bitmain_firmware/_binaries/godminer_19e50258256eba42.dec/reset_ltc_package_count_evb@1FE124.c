int reset_ltc_package_count_evb()
{
  fpga_write(4168, 0);
  return 0;
}
