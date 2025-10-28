_DWORD *__fastcall sub_C1960(int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r3

  result = sub_930BC(1u, 0x5Cu);
  if ( a1 )
    result[21] = a1;
  else
    LOWORD(v5) = 5528;
  if ( !a1 )
  {
    HIWORD(v5) = 12;
    result[21] = v5;
  }
  if ( a2 )
    result[22] = a2;
  else
    LOWORD(v5) = 5596;
  if ( !a2 )
  {
    HIWORD(v5) = 12;
    result[22] = v5;
  }
  return result;
}
