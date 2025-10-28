_BYTE *__fastcall sub_25280(int a1, _BYTE *a2, __int64 a3)
{
  bool v4; // cc
  bool v5; // zf
  char v6; // r4
  char *v7; // lr
  unsigned int v8; // r6
  _BYTE *result; // r0
  _BYTE *v10; // r4
  unsigned int v11; // r5
  unsigned int v12; // r0
  unsigned int v13; // r0

  *(_DWORD *)(a1 + 64) += a3;
  if ( (_DWORD)a3 == 2 )
  {
    *a2 = (4 * (BYTE4(a3) - 1)) & 0xC;
    result = a2 + 2;
    a2[1] = (unsigned int)(HIDWORD(a3) - 1) >> 2;
    ++*(_DWORD *)(a1 + 84);
    goto LABEL_16;
  }
  v4 = (unsigned int)a3 > 8;
  if ( (unsigned int)a3 <= 8 )
    v4 = HIDWORD(a3) > 0x800;
  if ( !v4 )
  {
    *a2 = (4 * (BYTE4(a3) - 1)) & 0x1C | (32 * (a3 - 1));
    result = a2 + 2;
    a2[1] = (unsigned int)(HIDWORD(a3) - 1) >> 3;
    ++*(_DWORD *)(a1 + 92);
    goto LABEL_16;
  }
  v5 = HIDWORD(a3) == 3072;
  if ( HIDWORD(a3) <= 0xC00 )
    v5 = (_DWORD)a3 == 3;
  v6 = v5;
  if ( v5 )
  {
    if ( *(_DWORD *)(a1 + 76) > 3u )
    {
      *a2 = (4 * (BYTE4(a3) - 1)) & 0xC;
      result = a2 + 2;
      a2[1] = (unsigned int)(HIDWORD(a3) - 2049) >> 2;
      ++*(_DWORD *)(a1 + 88);
      goto LABEL_16;
    }
    v10 = a2 + 1;
    v11 = HIDWORD(a3) - 1;
    goto LABEL_21;
  }
  v7 = a2 + 1;
  if ( HIDWORD(a3) <= 0x4000 )
  {
    v11 = HIDWORD(a3) - 1;
    if ( (unsigned int)a3 > 0x21 )
    {
      v13 = a3 - 33;
      for ( *a2 = 32; v13 > 0xFF; ++v7 )
      {
        v13 -= 255;
        *v7 = v6;
      }
      v10 = v7 + 1;
      *v7 = v13;
      goto LABEL_22;
    }
    v10 = a2 + 1;
LABEL_21:
    *a2 = (a3 - 2) | 0x20;
LABEL_22:
    *v10 = 4 * v11;
    result = v10 + 2;
    v10[1] = v11 >> 6;
    ++*(_DWORD *)(a1 + 96);
    goto LABEL_16;
  }
  v8 = ((unsigned int)(HIDWORD(a3) - 0x4000) >> 11) & 8;
  if ( (unsigned int)a3 > 9 )
  {
    v12 = a3 - 9;
    for ( *a2 = v8 | 0x10; v12 > 0xFF; ++v7 )
    {
      v12 -= 255;
      *v7 = v6;
    }
    *v7++ = v12;
  }
  else
  {
    *a2 = v8 | (a3 - 2) | 0x10;
  }
  *v7 = 4 * BYTE4(a3);
  result = v7 + 2;
  v7[1] = (unsigned int)(HIDWORD(a3) - 0x4000) >> 6;
  ++*(_DWORD *)(a1 + 100);
LABEL_16:
  *(_QWORD *)(a1 + 16) = a3;
  return result;
}
