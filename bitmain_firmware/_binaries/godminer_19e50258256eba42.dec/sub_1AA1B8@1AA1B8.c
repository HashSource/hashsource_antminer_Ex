__int64 __fastcall sub_1AA1B8(_BYTE *a1, __int64 a2)
{
  a1[7] = a2;
  a1[6] = BYTE1(a2);
  a1[5] = BYTE2(a2);
  a1[4] = BYTE3(a2);
  a1[3] = BYTE4(a2);
  a1[2] = BYTE5(a2);
  a1[1] = BYTE6(a2);
  *a1 = HIBYTE(a2);
  return a2;
}
