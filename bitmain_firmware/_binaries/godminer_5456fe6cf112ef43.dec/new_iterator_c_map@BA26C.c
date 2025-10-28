_DWORD *__fastcall new_iterator_c_map(int a1)
{
  _DWORD *result; // r0

  result = malloc(0x18u);
  result[3] = a1;
  *result = sub_BA0BC;
  result[2] = sub_BA040;
  result[1] = sub_BA05C;
  result[4] = 0;
  result[5] = 0;
  return result;
}
