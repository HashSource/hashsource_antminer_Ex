// Alternative name is 'cleanup_module'
void __cdecl axi_fpga_dev_exit()
{
  misc_deregister(&axi_fpga_misc_dev);
  memunmap(fpga_cache_store_addr);
}
