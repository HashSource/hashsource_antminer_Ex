unsigned int *__fastcall hs_sha3_final(unsigned int *result, void *a2)
{
  unsigned int *src; // [sp+4h] [bp-10h]
  unsigned int v4; // [sp+8h] [bp-Ch]
  unsigned int n; // [sp+Ch] [bp-8h]

  src = result;
  n = 100 - (result[99] >> 1);
  v4 = result[99];
  if ( (result[98] & 0x80000000) == 0 )
  {
    memset((char *)result + result[98] + 200, 0, v4 - result[98]);
    *((_BYTE *)src + src[98] + 200) |= 6u;
    *((_BYTE *)src + v4 + 199) = ~((unsigned int)~(*((unsigned __int8 *)src + v4 + 199) << 25) >> 25);
    result = (unsigned int *)sub_2596C0(src, (_QWORD *)src + 25, v4);
    src[98] = 0x80000000;
  }
  if ( a2 )
    return (unsigned int *)memcpy(a2, src, n);
  return result;
}
