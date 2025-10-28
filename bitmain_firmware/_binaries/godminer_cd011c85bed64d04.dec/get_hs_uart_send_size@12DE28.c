int __fastcall get_hs_uart_send_size(unsigned int a1)
{
  int v2; // [sp+4h] [bp-Ch] BYREF

  if ( a1 > 7 )
    return 0;
  v2 = 0;
  fpga_read(4 * (a1 + 268), &v2);
  return v2;
}
