int __fastcall set_pre_header_hash(int result)
{
  int v1; // [sp+4h] [bp-10h]
  int i; // [sp+Ch] [bp-8h]

  v1 = result;
  for ( i = 0; i <= 7; ++i )
    result = fpga_write(4 * (i + 80), *(_DWORD *)(v1 + 4 * i));
  return result;
}
