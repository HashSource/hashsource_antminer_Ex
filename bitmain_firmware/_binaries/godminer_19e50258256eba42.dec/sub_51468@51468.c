void *__fastcall sub_51468(_DWORD *a1, int a2, int a3, int a4)
{
  void *result; // r0

  a1[14] = a2;
  a1[15] = a3;
  *a1 = a4;
  a1[1] = *a1;
  memset(a1 + 2, 0, 0x10u);
  memset(a1 + 6, 0, 0x10u);
  result = memset(a1 + 10, 0, 0x10u);
  a1[16] = 1;
  a1[17] = 0;
  a1[18] = 0;
  a1[19] = 0;
  return result;
}
