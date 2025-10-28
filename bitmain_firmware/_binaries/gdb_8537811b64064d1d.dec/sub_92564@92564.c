void *__fastcall sub_92564(int a1, int a2)
{
  int v4; // r3
  void *result; // r0

  v4 = sub_93050(16);
  *(_DWORD *)(v4 + 4) = a1;
  result = off_46BBC4;
  *(_DWORD *)(v4 + 12) = a2;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)v4 = result;
  off_46BBC4 = (_UNKNOWN *)v4;
  if ( !result )
    sub_15AD4();
  return result;
}
