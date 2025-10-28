int __fastcall setup_all_chip_grin32(int a1)
{
  int result; // r0

  puts("setup_all_chip_grin32");
  **(_BYTE **)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 248) = 256;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 156))(a1, *(_DWORD *)(a1 + 304), 1);
  sub_A49DC(a1);
  enable_core_clk(a1);
  sub_A4900(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 276) )
    *(_DWORD *)(a1 + 280) = (int)*(float *)(a1 + 768);
  return result;
}
