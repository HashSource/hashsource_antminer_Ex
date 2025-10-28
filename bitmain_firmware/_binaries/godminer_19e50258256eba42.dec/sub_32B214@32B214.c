void *__fastcall sub_32B214(_DWORD *a1, const void *a2)
{
  void *result; // r0

  result = memcpy(a1 + 33, a2, 0x40u);
  a1[32] = 0;
  a1[49] = 0;
  a1[50] = 0;
  a1[51] = 0;
  a1[52] = 0;
  return result;
}
