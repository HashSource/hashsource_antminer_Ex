_DWORD *__fastcall sub_2B348(_DWORD *result, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r4
  int v5; // lr
  bool v6; // zf
  _BOOL4 v7; // r12
  unsigned int v8; // r3
  _DWORD *v9; // r12

  v3 = *a2;
  if ( *a2 <= 3 )
    return result;
  v4 = *a3;
  v5 = *(_DWORD *)(result[45] + 20);
  v6 = v3 == 8;
  if ( v3 <= 8 )
    v6 = v4 == v5;
  if ( v6 )
    return result;
  v7 = v3 - 4 <= 5;
  if ( !v5 )
    v7 = 0;
  if ( v7 )
  {
    v9 = &result[v3];
    if ( v5 == v9[10] )
    {
      *a2 = v3 - 1;
      *a3 = v9[10];
      return result;
    }
  }
  if ( v4 <= 0x700 )
    return result;
  if ( v3 <= 9 )
  {
    result += v3;
    v8 = v3 - 1;
    if ( (unsigned int)(result[10] - 1) >= 0x700 )
      return result;
    goto LABEL_15;
  }
  if ( v4 <= 0x4000 )
    return result;
  if ( v3 == 10 )
  {
    if ( (unsigned int)(result[19] - 1) < 0x700 )
    {
      *a2 = 8;
      *a3 = result[19];
      return result;
    }
  }
  else if ( v3 > 0x22 )
  {
    return result;
  }
  result += v3;
  v8 = v3 - 1;
  if ( (unsigned int)(result[10] - 1) < 0x4000 )
  {
LABEL_15:
    *a2 = v8;
    *a3 = result[10];
  }
  return result;
}
