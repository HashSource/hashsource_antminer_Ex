void *__fastcall lzo_getopt_init(_DWORD *a1, int a2, int a3, int a4)
{
  void *result; // r0

  result = memset(a1, 0, 0x38u);
  a1[5] = a2;
  a1[8] = a3;
  a1[9] = a4;
  a1[6] = -1;
  return result;
}
