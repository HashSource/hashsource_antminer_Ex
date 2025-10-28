void *__fastcall sub_277760(char *a1, int a2)
{
  _DWORD v5[41]; // [sp+Ch] [bp-A8h] BYREF

  sph_cubehash512_init((int)v5);
  sph_cubehash512((int)v5, a1, 0x40u);
  return sph_cubehash512_close(v5, a2);
}
