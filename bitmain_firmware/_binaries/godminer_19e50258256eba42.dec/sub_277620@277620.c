int __fastcall sub_277620(int a1, void *a2)
{
  _BYTE v5[272]; // [sp+8h] [bp-114h] BYREF

  sph_groestl512_init((int)v5);
  sph_groestl512((int)v5, a1, 64);
  return sph_groestl512_close((int)v5, a2);
}
