void *__fastcall sub_306664(int a1, const void *a2)
{
  void *result; // r0

  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), a2, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
