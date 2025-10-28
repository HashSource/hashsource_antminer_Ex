int __fastcall axi_fpga_dev_mmap(int a1, int *a2, int a3)
{
  int v3; // r12
  unsigned int v4; // r3

  v3 = *a2;
  a2[10] |= 0x4044000u;
  v4 = a2[9] & 0xFFFFFFC3;
  a2[9] = v4;
  return remap_pfn_range(a2, v3 + a2[19], 65024, 0x200000, v4, a2, a3);
}
