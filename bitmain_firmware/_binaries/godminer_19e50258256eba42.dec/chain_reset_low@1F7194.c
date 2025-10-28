int __fastcall chain_reset_low(int a1)
{
  char v2; // [sp+4h] [bp-10h]
  int v3; // [sp+Ch] [bp-8h] BYREF

  v2 = a1;
  printf("chain_id : %08x\n", a1);
  v3 = 0;
  fpga_read(52, &v3);
  return fpga_write(52, v3 & ~(1 << v2));
}
