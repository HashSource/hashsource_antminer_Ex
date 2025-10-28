_DWORD *__fastcall sub_2AB0E4(int a1, int a2)
{
  _DWORD *result; // r0

  result = sub_2AB080(a1, a2);
  if ( result )
    result[10] = 1;
  return result;
}
