_DWORD *__fastcall sub_2B15A4(int a1)
{
  _DWORD *result; // r0

  result = sub_2AD0C4(a1, 0x1Cu);
  if ( result )
  {
    *result = a1;
    result[6] = 0;
  }
  return result;
}
