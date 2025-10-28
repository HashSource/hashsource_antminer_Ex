void *__fastcall sub_3418B4(_DWORD *a1, const void *a2)
{
  void *result; // r0

  result = memcpy(a1 + 17, a2, 0x40u);
  a1[34] = 0;
  a1[33] = a1[34];
  a1[16] = 0;
  return result;
}
