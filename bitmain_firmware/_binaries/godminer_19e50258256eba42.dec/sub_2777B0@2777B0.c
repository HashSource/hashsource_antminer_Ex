void *__fastcall sub_2777B0(char *a1, int a2)
{
  _DWORD v5[67]; // [sp+Ch] [bp-110h] BYREF

  sph_simd512_init(v5);
  sph_simd512((unsigned __int8 *)v5, a1, 0x40u);
  return sph_simd512_close(v5, a2);
}
