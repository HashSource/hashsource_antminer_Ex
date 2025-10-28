void *__fastcall sub_32AE10(_DWORD *a1, const void *a2)
{
  void *result; // r0

  result = memcpy(a1 + 17, a2, 0x20u);
  a1[16] = 0;
  a1[25] = 0;
  a1[26] = 0;
  return result;
}
