int __fastcall set_TW_write_command(int result)
{
  int v1; // [sp+4h] [bp-10h]
  unsigned int i; // [sp+Ch] [bp-8h]

  v1 = result;
  for ( i = 0; i <= 0xC; ++i )
    result = fpga_write(4 * (i + 16), *(_DWORD *)(v1 + 4 * i));
  return result;
}
