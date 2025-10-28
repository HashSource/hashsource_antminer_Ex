int __fastcall setup_all_chip_grin32(int a1)
{
  int result; // r0

  puts("setup_all_chip_grin32");
  **(_BYTE **)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 240) = 256;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), 1);
  sub_A428C(a1);
  enable_core_clk(a1);
  sub_A41B0(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
