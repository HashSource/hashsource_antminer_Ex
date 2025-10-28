void *sub_C200C()
{
  void *result; // r0
  int v1; // [sp+0h] [bp-Ch]
  int i; // [sp+4h] [bp-8h]

  v1 = dword_C27368;
  for ( i = 1; i < v1; ++i )
    result = memcpy((void *)(dword_C27388 + 120 * i), (const void *)dword_C27388, 0x78u);
  return result;
}
