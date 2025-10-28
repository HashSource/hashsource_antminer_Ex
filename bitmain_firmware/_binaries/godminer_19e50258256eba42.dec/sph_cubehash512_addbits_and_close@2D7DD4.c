void *__fastcall sph_cubehash512_addbits_and_close(_DWORD *a1, char a2, char a3, int a4)
{
  sub_2D1D58(a1, a2, a3, a4, 0x10u);
  return sph_cubehash512_init((int)a1);
}
