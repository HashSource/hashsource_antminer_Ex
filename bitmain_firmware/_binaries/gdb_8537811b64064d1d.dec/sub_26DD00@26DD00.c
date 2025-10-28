int *__fastcall sub_26DD00(_DWORD *a1, const void *a2)
{
  int *v4; // r4
  void *v5; // r0

  v4 = (int *)sub_26BBA8(a1);
  v5 = (void *)sub_26BCE0(v4);
  memcpy(v5, a2, a1[5]);
  return v4;
}
