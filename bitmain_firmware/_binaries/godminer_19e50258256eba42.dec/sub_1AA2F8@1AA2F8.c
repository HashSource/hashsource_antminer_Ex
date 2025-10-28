_BYTE *__fastcall sub_1AA2F8(_BYTE *result, int a2)
{
  result[3] = a2;
  result[2] = BYTE1(a2);
  result[1] = BYTE2(a2);
  *result = HIBYTE(a2);
  return result;
}
