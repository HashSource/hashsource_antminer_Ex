int __fastcall set_ticket_mask(int a1)
{
  int v2; // [sp+Ch] [bp-8h] BYREF

  fpga_write(140, a1);
  return fpga_read(140, &v2);
}
