int __fastcall ltc_test_func_ip3_pre_short_bist(int a1)
{
  int v3; // [sp+Ch] [bp-18h] BYREF
  int v4; // [sp+10h] [bp-14h] BYREF
  _DWORD v5[2]; // [sp+14h] [bp-10h] BYREF
  int v6; // [sp+1Ch] [bp-8h]

  v5[0] = 0;
  v5[1] = 0;
  fpga_write(4120, 1073774592);
  fpga_read(4120, v5);
  printf("addr: 0x1018,val:%08x\n", v5[0]);
  fpga_write(4124, 266338304);
  fpga_read(4124, v5);
  printf("addr: 0x101c,val:%08x\n", v5[0]);
  fpga_write(4132, 930944);
  fpga_read(4132, v5);
  printf("addr: 0x1024,val:%08x\n", v5[0]);
  fpga_write(4136, 10320);
  fpga_read(4136, v5);
  printf("addr: 0x1028,val:%08x\n", v5[0]);
  fpga_write(4096, 2);
  fpga_read(4096, v5);
  printf("addr: 0x1000,val:%08x\n", v5[0]);
  fpga_write(4108, (int)"voltage");
  fpga_read(4108, v5);
  printf("addr: 0x100c,val:%08x\n", v5[0]);
  fpga_write(4112, 0);
  fpga_read(4112, v5);
  printf("addr: 0x1010,val:%08x\n", v5[0]);
  fpga_write(4104, a1);
  fpga_read(4104, v5);
  printf("addr: 0x1008,val:%08x\n", v5[0]);
  fpga_write(4116, 1);
  fpga_read(4116, v5);
  printf("addr: 0x1014,val:%08x\n", v5[0]);
  fpga_write(4100, 0);
  fpga_read(4100, v5);
  printf("addr: 0x1004,val:%08x\n", v5[0]);
  usleep(2u);
  fpga_write(4100, 1);
  v5[0] = 0;
  v4 = 0;
  v6 = 0;
  while ( !v5[0] )
  {
    fpga_read(4144, v5);
    printf("IP3_FINISH_ADDR : %08x\n", v5[0]);
    fpga_read(4152, &v4);
    printf("index:%d, addr:0x1038 : %08x\n", v6, v4);
    usleep(0x7A120u);
    ltc_dev_init();
    v3 = 0;
    ltc_read(0, &v3);
    ltc_dev_uninit();
    ++v6;
  }
  return 0;
}
