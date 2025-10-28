void *__fastcall sph_cubehash256_init(int a1)
{
  void *result; // r0

  result = memcpy((void *)(a1 + 36), &unk_14C1FC, 0x80u);
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
