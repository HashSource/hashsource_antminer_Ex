_BYTE *__fastcall embed_timestamp(_BYTE *result, int a2)
{
  result[55] = a2;
  result[54] = BYTE1(a2);
  result[53] = BYTE2(a2);
  result[52] = HIBYTE(a2);
  return result;
}
