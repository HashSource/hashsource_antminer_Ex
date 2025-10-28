int __fastcall ltc_test_func_ip3_post_short_bist(int a1)
{
  int v3; // [sp+Ch] [bp-10h] BYREF
  int v4; // [sp+10h] [bp-Ch] BYREF
  int v5; // [sp+14h] [bp-8h]

  v4 = 0;
  fpga_write(4120, 1073774592);
  fpga_read(4120, &v4);
  printf("addr: 0x1018,val:%08x\n", v4);
  fpga_write(4124, 266338304);
  fpga_read(4124, &v4);
  printf("addr: 0x101c,val:%08x\n", v4);
  fpga_write(4132, 930944);
  fpga_read(4132, &v4);
  printf("addr: 0x1024,val:%08x\n", v4);
  fpga_write(4136, 10320);
  fpga_read(4136, &v4);
  printf("addr: 0x1028,val:%08x\n", v4);
  fpga_write(4096, 2);
  fpga_read(4096, &v4);
  printf("addr: 0x1000,val:%08x\n", v4);
  fpga_write(4108, (int)"voltage");
  fpga_read(4108, &v4);
  printf("addr: 0x100c,val:%08x\n", v4);
  fpga_write(4112, 0);
  fpga_read(4112, &v4);
  printf("addr: 0x1010,val:%08x\n", v4);
  fpga_write(4104, a1);
  fpga_read(4104, &v4);
  printf("addr: 0x1008,val:%08x\n", v4);
  fpga_write(4116, 1);
  fpga_read(4116, &v4);
  printf("addr: 0x1014,val:%08x\n", v4);
  fpga_write(4100, 0x10000);
  fpga_read(4100, &v4);
  printf("addr: 0x1004,val:%08x\n", v4);
  usleep(2u);
  fpga_write(4100, 65537);
  v4 = 0;
  v3 = 0;
  v5 = 0;
  while ( !v4 )
  {
    fpga_read(4144, &v4);
    printf("IP3_FINISH_ADDR : %08x\n", v4);
    fpga_read(4152, &v3);
    printf("index:%d, addr:0x1038 : %08x\n", v5, v3);
    usleep(0x7A120u);
    ++v5;
  }
  return 0;
}
