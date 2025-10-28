int __fastcall set_cache_nodes(__int64 a1)
{
  return fpga_write(292, a1 >> 6);
}
