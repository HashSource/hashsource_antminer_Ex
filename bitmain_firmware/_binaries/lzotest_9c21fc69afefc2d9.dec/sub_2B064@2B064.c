_BYTE *__fastcall sub_2B064(int a1, _BYTE *a2, __int64 a3)
{
  int v4; // r0
  char v5; // lr
  bool v6; // zf
  _BYTE *v7; // r5
  unsigned int v8; // r4
  _BYTE *v9; // lr
  unsigned int v10; // r4
  unsigned int v11; // r0
  _BYTE *result; // r0
  unsigned int v13; // r0

  *(_DWORD *)(a1 + 64) += a3;
  if ( (_DWORD)a3 == 2 )
  {
    *a2 = (unsigned int)(HIDWORD(a3) - 1) >> 6;
    result = a2 + 2;
    a2[1] = 4 * (BYTE4(a3) - 1);
    ++*(_DWORD *)(a1 + 84);
    goto LABEL_20;
  }
  if ( (unsigned int)a3 <= 8 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    if ( HIDWORD(a3) <= 0x700 )
    {
      v5 = 32 * (a3 - 1);
      if ( HIDWORD(a3) != v4 )
      {
        *a2 = v5 | ((unsigned int)(HIDWORD(a3) - 1) >> 6);
        result = a2 + 2;
        a2[1] = 4 * (BYTE4(a3) - 1);
LABEL_23:
        ++*(_DWORD *)(a1 + 92);
        goto LABEL_20;
      }
LABEL_31:
      result = a2 + 1;
      *a2 = v5 | 0x1C;
      goto LABEL_23;
    }
    if ( HIDWORD(a3) == v4 )
    {
      v5 = 32 * (a3 - 1);
      goto LABEL_31;
    }
    v6 = HIDWORD(a3) == 2816;
    if ( HIDWORD(a3) <= 0xB00 )
      v6 = (_DWORD)a3 == 3;
    if ( v6 )
    {
      if ( *(_DWORD *)(a1 + 76) > 3u )
      {
        *a2 = (unsigned int)(HIDWORD(a3) - 1793) >> 6;
        result = a2 + 2;
        a2[1] = 4 * (BYTE4(a3) - 1);
        ++*(_DWORD *)(a1 + 88);
        goto LABEL_20;
      }
      v7 = a2 + 1;
      v8 = HIDWORD(a3) - 1;
      goto LABEL_13;
    }
  }
  v9 = a2 + 1;
  if ( HIDWORD(a3) <= 0x4000 )
  {
    v8 = HIDWORD(a3) - 1;
    if ( (unsigned int)a3 > 0x21 )
    {
      v11 = a3 - 33;
      for ( *a2 = 32; v11 > 0xFF; ++v9 )
      {
        v11 -= 255;
        *v9 = 0;
      }
      v7 = v9 + 1;
      *v9 = v11;
      goto LABEL_14;
    }
    v7 = a2 + 1;
LABEL_13:
    *a2 = (a3 - 2) | 0x20;
LABEL_14:
    *v7 = v8 >> 6;
    result = v7 + 2;
    v7[1] = 4 * v8;
    ++*(_DWORD *)(a1 + 96);
    goto LABEL_20;
  }
  v10 = ((unsigned int)(HIDWORD(a3) - 0x4000) >> 11) & 8;
  if ( (unsigned int)a3 > 9 )
  {
    v13 = a3 - 9;
    for ( *a2 = v10 | 0x10; v13 > 0xFF; ++v9 )
    {
      v13 -= 255;
      *v9 = 0;
    }
    *v9++ = v13;
  }
  else
  {
    *a2 = v10 | (a3 - 2) | 0x10;
  }
  *v9 = (unsigned int)(HIDWORD(a3) - 0x4000) >> 6;
  result = v9 + 2;
  v9[1] = 4 * BYTE4(a3);
  ++*(_DWORD *)(a1 + 100);
LABEL_20:
  *(_QWORD *)(a1 + 16) = a3;
  return result;
}
