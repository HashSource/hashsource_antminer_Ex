void *__fastcall sph_cubehash224_init_0(int a1)
{
  const void *v1; // r1
  void *result; // r0

  LOWORD(v1) = -22652;
  HIWORD(v1) = (unsigned int)&unk_149894 >> 16;
  result = memcpy((void *)(a1 + 36), v1, 0x80u);
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
