_BYTE *__fastcall sub_26D018(int a1)
{
  _BYTE *result; // r0
  int v3; // r0
  char v4; // r3

  result = *(_BYTE **)(a1 + 8);
  if ( !result )
  {
    sub_16F67C(0);
    sub_1780DC();
    result = sub_26BBA8(*(_DWORD **)(v3 + 168));
    v4 = result[4];
    *((_DWORD *)result + 2) = a1;
    *(_DWORD *)result = 4;
    result[4] = v4 & 0xFE;
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}
