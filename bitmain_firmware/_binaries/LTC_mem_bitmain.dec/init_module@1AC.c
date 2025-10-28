// Alternative name is 'axi_fpga_dev_init'
int init_module()
{
  int v0; // r2
  int v1; // r3
  int v2; // r4
  int v4; // r0
  int v5; // r2
  int v6; // r3

  v2 = misc_register(&axi_fpga_misc_dev);
  if ( v2 >= 0 )
  {
    v4 = memremap(266338304, 0x200000, 1);
    fpga_cache_store_addr = v4;
    if ( v4 )
    {
      mmioset(v4, 0, 0x200000);
      v2 = 0;
      printk(&unk_3FD, "ltc_mem", fpga_cache_store_addr, fpga_cache_store_addr >> 31);
      printk(&unk_42A, "ltc_mem", 266338304, 0);
      printk(&unk_457, "ltc_mem", 0x200000, 0);
    }
    else
    {
      printk(&unk_3CE, "ltc_mem", v5, v6);
      misc_deregister(&axi_fpga_misc_dev);
    }
  }
  else
  {
    printk(&unk_3A5, "ltc_mem", v0, v1);
  }
  return v2;
}
