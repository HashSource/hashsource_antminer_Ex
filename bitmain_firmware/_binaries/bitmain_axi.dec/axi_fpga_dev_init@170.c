// Alternative name is 'init_module'
int __cdecl axi_fpga_dev_init()
{
  __int64 v0; // x2
  int v1; // w20
  void *v2; // x0
  __int64 v3; // x2

  v1 = misc_register(&axi_fpga_misc_dev);
  if ( v1 < 0 )
  {
    printk(&unk_410, "axi_fpga_dev", v0);
  }
  else
  {
    v2 = (void *)memremap(939524096, 0x8000000, 1);
    fpga_cache_store_addr = v2;
    if ( v2 )
    {
      _memset_io(v2, 0, 0x8000000);
      v1 = 0;
      printk(&unk_470, "axi_fpga_dev", fpga_cache_store_addr);
      printk(&unk_4A0, "axi_fpga_dev", 939524096);
      printk(&unk_4D0, "axi_fpga_dev", 0x8000000);
    }
    else
    {
      printk(&unk_440, "axi_fpga_dev", v3);
      misc_deregister(&axi_fpga_misc_dev);
    }
  }
  return v1;
}
