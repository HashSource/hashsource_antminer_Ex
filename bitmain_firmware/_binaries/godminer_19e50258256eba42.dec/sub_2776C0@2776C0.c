void *__fastcall sub_2776C0(char *a1, _BYTE *a2)
{
  int v5[49]; // [sp+Ch] [bp-C8h] BYREF

  sph_luffa512_init((int)v5);
  sph_luffa512((unsigned int)v5, a1, 0x40u);
  return sph_luffa512_close(v5, a2);
}
