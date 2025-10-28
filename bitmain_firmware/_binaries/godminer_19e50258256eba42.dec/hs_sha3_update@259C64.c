_DWORD *__fastcall hs_sha3_update(_DWORD *result, char *a2, unsigned int a3)
{
  int v3; // r1
  size_t v4; // r3
  unsigned int v5; // [sp+4h] [bp-20h]
  _DWORD *v7; // [sp+Ch] [bp-18h]
  size_t n; // [sp+10h] [bp-14h]
  size_t v9; // [sp+14h] [bp-10h]
  int v10; // [sp+18h] [bp-Ch]

  v7 = result;
  v5 = a3;
  v10 = result[98];
  v9 = result[99];
  if ( v10 < 0 )
    return result;
  result = (_DWORD *)sub_344E9C(result[98] + a3, v9);
  v7[98] = v3;
  if ( !v10 )
    goto LABEL_11;
  n = v9 - v10;
  v4 = v5;
  if ( v9 - v10 < v5 )
    v4 = v9 - v10;
  result = memcpy((char *)v7 + v10 + 200, a2, v4);
  if ( v5 >= n )
  {
    result = (_DWORD *)sub_2596C0(v7, (_QWORD *)v7 + 25, v9);
    a2 += n;
    v5 -= n;
LABEL_11:
    while ( v5 >= v9 )
    {
      if ( ((unsigned __int8)a2 & 7) != 0 )
      {
        memcpy(v7 + 50, a2, v9);
        result = (_DWORD *)sub_2596C0(v7, (_QWORD *)v7 + 25, v9);
      }
      else
      {
        result = (_DWORD *)sub_2596C0(v7, a2, v9);
      }
      a2 += v9;
      v5 -= v9;
    }
    if ( v5 )
      return memcpy(v7 + 50, a2, v5);
  }
  return result;
}
