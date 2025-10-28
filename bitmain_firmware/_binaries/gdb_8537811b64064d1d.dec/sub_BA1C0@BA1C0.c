_DWORD *__fastcall sub_BA1C0(int a1)
{
  _DWORD *result; // r0
  _DWORD *v2; // r4
  int v3; // r0

  result = (_DWORD *)sub_B97AC(a1);
  v2 = result;
  if ( !*result )
  {
    *result = sub_323B54(31, sub_B9550, sub_B9060, sub_B9190);
    v3 = sub_323B54(31, sub_B9550, sub_B9060, sub_B9190);
    v2[3] = 0;
    v2[1] = v3;
    v2[2] = 0;
    return v2;
  }
  return result;
}
