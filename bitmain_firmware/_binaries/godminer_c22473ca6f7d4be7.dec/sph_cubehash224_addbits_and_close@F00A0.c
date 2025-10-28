void *__fastcall sph_cubehash224_addbits_and_close(_DWORD *a1, char a2, char a3, _WORD *a4)
{
  const void *v5; // r1
  void *result; // r0

  sub_ECED8(a1, a2, a3, a4, 7);
  LOWORD(v5) = -22652;
  HIWORD(v5) = (unsigned int)&unk_149894 >> 16;
  result = memcpy(a1 + 9, v5, 0x80u);
  a1[8] = 0;
  return result;
}
