_DWORD *__fastcall new_iterator_c_map(int a1)
{
  _DWORD *result; // r0

  result = malloc(0x18u);
  result[3] = a1;
  *result = 852876;
  result[2] = 852752;
  result[1] = 852780;
  result[4] = 0;
  result[5] = 0;
  return result;
}
