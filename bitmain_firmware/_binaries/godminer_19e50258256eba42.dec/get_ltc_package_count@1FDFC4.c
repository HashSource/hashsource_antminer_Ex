int __fastcall get_ltc_package_count(_DWORD *a1, int a2, int a3)
{
  int v7; // [sp+18h] [bp-Ch]

  v7 = 4 * (6 * a2 + a3 + 404);
  fpga_read(v7, a1);
  printf("chain id : %08x, chip id : %08x, addr : %08x, value : %08x\n", a2, a3, v7, *a1);
  return 0;
}
