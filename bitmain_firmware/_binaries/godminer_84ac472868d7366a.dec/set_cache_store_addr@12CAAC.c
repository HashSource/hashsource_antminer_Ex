int __fastcall set_cache_store_addr(__int64 a1)
{
  return fpga_write(300, a1 >> 6);
}
