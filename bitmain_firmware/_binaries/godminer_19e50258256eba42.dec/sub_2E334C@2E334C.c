_DWORD *__fastcall sub_2E334C(_DWORD *result, char *a2, size_t a3)
{
  size_t n; // [sp+4h] [bp-20h]
  char *src; // [sp+8h] [bp-1Ch]
  _DWORD *v5; // [sp+Ch] [bp-18h]
  _DWORD *v6; // [sp+14h] [bp-10h]
  size_t v7; // [sp+18h] [bp-Ch]
  int v8; // [sp+1Ch] [bp-8h]

  v5 = result;
  src = a2;
  n = a3;
  v6 = result;
  v8 = result[48];
  if ( a3 >= 192 - v8 )
  {
    while ( n )
    {
      v7 = 192 - v8;
      if ( 192 - v8 > n )
        v7 = n;
      result = memcpy((char *)v6 + v8, src, v7);
      v8 += v7;
      src += v7;
      n -= v7;
      if ( v8 == 192 )
      {
        v5[66] += 1536;
        if ( v5[66] < 0x600u && !++v5[67] && !++v5[68] )
          ++v5[69];
        result = sub_2D823C(v5);
        v8 = 0;
      }
    }
    v5[48] = v8;
  }
  else
  {
    result = memcpy((char *)result + v8, a2, a3);
    v5[48] = v8 + n;
  }
  return result;
}
