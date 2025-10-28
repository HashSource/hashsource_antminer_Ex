void *__fastcall sph_luffa224_addbits_and_close(unsigned int *a1, char a2, char a3, _BYTE *a4)
{
  void *result; // r0

  sub_10B7C4(a1, a2, a3, a4, 7);
  result = memcpy(a1 + 9, &unk_150558, 0x60u);
  a1[8] = 0;
  return result;
}
