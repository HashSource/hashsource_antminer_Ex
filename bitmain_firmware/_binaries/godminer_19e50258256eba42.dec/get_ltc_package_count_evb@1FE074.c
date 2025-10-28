int __fastcall get_ltc_package_count_evb(_DWORD *a1)
{
  fpga_read(4168, a1);
  return 0;
}
