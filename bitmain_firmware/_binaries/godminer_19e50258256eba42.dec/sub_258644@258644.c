void *__fastcall sub_258644(_DWORD *a1, int a2)
{
  void *result; // r0
  unsigned int v4; // [sp+Ch] [bp-8h]

  v4 = -2 * a2 + 1600;
  result = memset(a1, 0, 0x190u);
  a1[99] = v4 >> 3;
  return result;
}
