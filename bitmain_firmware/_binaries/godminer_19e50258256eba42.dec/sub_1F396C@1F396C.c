_BYTE *__fastcall sub_1F396C(_BYTE *result, char a2, int a3, unsigned __int8 a4)
{
  unsigned __int8 i; // [sp+15h] [bp-7h]
  __int16 v5; // [sp+16h] [bp-6h]

  *result = 85;
  result[1] = -86;
  result[2] = a4 + 4;
  result[3] = a2;
  v5 = (unsigned __int8)result[2] + (unsigned __int8)result[3];
  if ( a3 )
  {
    for ( i = 0; i < (unsigned int)a4; ++i )
    {
      result[i + 4] = *(_BYTE *)(a3 + i);
      v5 += *(unsigned __int8 *)(a3 + i);
    }
    result[i + 4] = HIBYTE(v5);
    result[i + 5] = v5;
  }
  else
  {
    result[4] = HIBYTE(v5);
    result[5] = v5;
  }
  return result;
}
