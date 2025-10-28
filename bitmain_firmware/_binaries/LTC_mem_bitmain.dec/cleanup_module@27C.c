// Alternative name is 'axi_fpga_dev_exit'
int cleanup_module()
{
  misc_deregister(&axi_fpga_misc_dev);
  return memunmap(fpga_cache_store_addr);
}
