int __fastcall sub_5153C(_DWORD *a1)
{
  _DWORD *v1; // r12
  _DWORD *v2; // r3
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  _BYTE *v11; // [sp+Ch] [bp-8h]

  v1 = a1 + 2;
  v2 = a1 + 6;
  result = a1[6];
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  *v1 = result;
  v1[1] = v4;
  v1[2] = v5;
  v1[3] = v6;
  if ( a1[10] )
  {
    result = a1[10];
    v7 = a1[11];
    v8 = a1[12];
    v9 = a1[13];
    a1[6] = result;
    a1[7] = v7;
    a1[8] = v8;
    a1[9] = v9;
    a1[10] = 0;
  }
  else if ( *((_BYTE *)a1 + 36) || *(_BYTE *)a1[1] )
  {
    v11 = (_BYTE *)a1[1];
    ++a1[17];
    ++a1[18];
    while ( *v11 == 32 || *v11 == 9 || *v11 == 10 || *v11 == 44 || *v11 == 58 )
    {
      if ( *v11 == 10 )
      {
        ++a1[16];
        a1[17] = 1;
      }
      else
      {
        ++a1[17];
      }
      ++a1[18];
      ++v11;
    }
    *((_BYTE *)a1 + 36) = *v11;
    a1[6] = a1[16];
    a1[7] = a1[17];
    a1[8] = a1[18];
    if ( *v11 )
      ++v11;
    a1[1] = v11;
  }
  return result;
}
