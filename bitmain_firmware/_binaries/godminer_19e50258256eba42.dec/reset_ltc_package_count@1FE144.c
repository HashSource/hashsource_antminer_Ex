int __fastcall reset_ltc_package_count(int a1, int a2)
{
  int v5; // [sp+8h] [bp-Ch]

  v5 = 4 * (6 * a1 + a2 + 404);
  fpga_write(v5, 0);
  printf("reset chain id : %08x, chip id : %08x, addr : %08x\n", a1, a2, v5);
  return 0;
}
