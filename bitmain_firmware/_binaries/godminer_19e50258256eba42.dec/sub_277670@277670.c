void *__fastcall sub_277670(char *a1, void *a2)
{
  _BYTE v5[208]; // [sp+8h] [bp-D4h] BYREF

  sph_jh512_init((int)v5);
  sph_jh512((int)v5, a1, 0x40u);
  return sph_jh512_close((int)v5, a2);
}
