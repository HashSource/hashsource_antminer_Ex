_DWORD *__fastcall sub_32B288(_DWORD *result, char *a2, unsigned int a3)
{
  _DWORD *v5; // [sp+Ch] [bp-18h]
  _DWORD *v6; // [sp+14h] [bp-10h]
  unsigned int n; // [sp+18h] [bp-Ch]
  int v8; // [sp+1Ch] [bp-8h]

  v5 = result;
  v6 = result;
  v8 = result[32];
  while ( a3 )
  {
    n = 128 - v8;
    if ( 128 - v8 > a3 )
      n = a3;
    result = memcpy((char *)v6 + v8, a2, n);
    a2 += n;
    v8 += n;
    a3 -= n;
    if ( v8 == 128 )
    {
      v5[49] += 1024;
      if ( !v5[49] && !++v5[50] && !++v5[51] )
        ++v5[52];
      result = (_DWORD *)sub_320D00(v5, (int)v6);
      v8 = 0;
    }
  }
  v5[32] = v8;
  return result;
}
