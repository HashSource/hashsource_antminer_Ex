_DWORD *__fastcall sub_32AE6C(_DWORD *result, char *a2, unsigned int a3)
{
  _DWORD *v5; // [sp+Ch] [bp-18h]
  _DWORD *v6; // [sp+14h] [bp-10h]
  unsigned int n; // [sp+18h] [bp-Ch]
  int v8; // [sp+1Ch] [bp-8h]

  v5 = result;
  v6 = result;
  v8 = result[16];
  while ( a3 )
  {
    n = 64 - v8;
    if ( 64 - v8 > a3 )
      n = a3;
    result = memcpy((char *)v6 + v8, a2, n);
    a2 += n;
    v8 += n;
    a3 -= n;
    if ( v8 == 64 )
    {
      v5[25] += 512;
      if ( !v5[25] )
        ++v5[26];
      result = (_DWORD *)sub_319898(v5, (int)v6);
      v8 = 0;
    }
  }
  v5[16] = v8;
  return result;
}
