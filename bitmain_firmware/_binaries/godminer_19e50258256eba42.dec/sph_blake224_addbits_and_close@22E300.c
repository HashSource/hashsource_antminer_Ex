void *__fastcall sph_blake224_addbits_and_close(_DWORD *a1, char a2, int a3, int a4)
{
  sub_22B8C4(a1, a2, a3, a4, 7u);
  return sph_blake224_init(a1);
}
