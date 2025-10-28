_DWORD *__fastcall sub_2B3FF4(int a1)
{
  _DWORD *result; // r0

  result = sub_2B3F20(a1);
  if ( result )
  {
    result[107] = 1;
    result[103] = 64;
    result[104] = 16;
  }
  return result;
}
