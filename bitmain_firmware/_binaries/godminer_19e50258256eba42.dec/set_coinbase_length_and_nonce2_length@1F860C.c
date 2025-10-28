int __fastcall set_coinbase_length_and_nonce2_length(int a1)
{
  int v2; // [sp+Ch] [bp-8h] BYREF

  fpga_write(260, a1);
  return fpga_read(260, &v2);
}
