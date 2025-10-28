int ltc_phy_12_test()
{
  int v1; // [sp+0h] [bp-Ch] BYREF
  int v2; // [sp+4h] [bp-8h]

  ltc_fpga_reset();
  usleep(0x2710u);
  v1 = 0;
  fpga_write(4116, 0);
  fpga_read(4116, &v1);
  printf("addr: 0x1014,val:%08x\n", v1);
  fpga_write(4108, (int)"voltage");
  fpga_read(4108, &v1);
  printf("addr: 0x100c,val:%08x\n", v1);
  fpga_write(4120, 1073774592);
  fpga_read(4120, &v1);
  printf("addr: 0x1018,val:%08x\n", v1);
  fpga_write(4124, 266338304);
  fpga_read(4124, &v1);
  printf("addr: 0x101c,val:%08x\n", v1);
  fpga_write(4128, 24608);
  fpga_read(4128, &v1);
  printf("addr: 0x1020,val:%08x\n", v1);
  fpga_write(4132, 930944);
  fpga_read(4132, &v1);
  printf("addr: 0x1024,val:%08x\n", v1);
  fpga_write(4136, 10320);
  fpga_read(4136, &v1);
  printf("addr: 0x1028,val:%08x\n", v1);
  fpga_write(4096, 2);
  fpga_read(4096, &v1);
  printf("addr: 0x1000,val:%08x\n", v1);
  fpga_write(4112, 0);
  fpga_read(4112, &v1);
  printf("addr: 0x1010,val:%08x\n", v1);
  fpga_write(4104, 260046848);
  fpga_read(4104, &v1);
  printf("addr: 0x1008,val:%08x\n", v1);
  fpga_write(4116, 1);
  fpga_read(4116, &v1);
  printf("addr: 0x1014,val:%08x\n", v1);
  fpga_write(4112, 82011);
  fpga_read(4116, &v1);
  printf("addr: 0x1014,val:%08x\n", v1);
  fpga_write(4100, 0x2000);
  fpga_read(4116, &v1);
  printf("addr: 0x1014,val:%08x\n", v1);
  usleep(2u);
  fpga_write(4100, 8448);
  fpga_read(4116, &v1);
  printf("addr: 0x1014,val:%08x\n", v1);
  v1 = 0;
  v2 = 0;
  while ( !v1 )
  {
    fpga_read(4160, &v1);
    printf("PHY_FINISH_ADDR : %08x\n", v1);
    sleep(1u);
    ++v2;
  }
  return 0;
}
