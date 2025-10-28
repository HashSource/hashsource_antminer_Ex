void *__fastcall sph_cubehash256_addbits_and_close(_DWORD *a1, char a2, char a3, int a4)
{
  sub_2D1D58(a1, a2, a3, a4, 8u);
  return sph_cubehash256_init((int)a1);
}
