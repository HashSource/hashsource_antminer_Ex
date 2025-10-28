int __fastcall setup_all_chip_ae(int a1)
{
  _BYTE *v2; // r3
  int result; // r0

  puts("setup_all_chip_ae");
  v2 = *(_BYTE **)(a1 + 296);
  v2[3] = -64;
  *v2 = 0;
  v2[2] = 0x80;
  v2[1] = 64;
  *(_DWORD *)(a1 + 240) = 64;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), 4);
  sub_54158(a1);
  sub_54080(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
