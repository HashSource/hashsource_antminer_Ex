void *__fastcall sub_34191C(_DWORD *a1, const void *a2)
{
  void *result; // r0

  result = memcpy(a1 + 33, a2, 0x80u);
  a1[66] = 0;
  a1[65] = a1[66];
  a1[32] = 0;
  return result;
}
