int __fastcall get_ltc_addr_reset(char a1, char a2)
{
  fpga_write(4176, 1 << (a2 + 6 * a1));
  return 0;
}
