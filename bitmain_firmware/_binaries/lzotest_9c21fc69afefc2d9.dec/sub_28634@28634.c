_BYTE *__fastcall sub_28634(_DWORD *a1, _BYTE *a2, char *a3, unsigned int a4)
{
  _BYTE *v4; // lr
  _BYTE *v5; // r12
  char *v6; // r4
  char v7; // t1
  _BYTE *v9; // lr
  unsigned int v10; // r12

  v4 = (_BYTE *)a1[10];
  a1[15] += a4;
  if ( v4 == a2 )
  {
    if ( a4 <= 0xEE )
    {
      *a2++ = a4 + 17;
      goto LABEL_4;
    }
    v9 = a2 + 1;
  }
  else
  {
    if ( a4 <= 3 )
    {
      *(a2 - 2) |= a4;
      ++a1[26];
      goto LABEL_4;
    }
    v9 = a2 + 1;
    if ( a4 <= 0x12 )
    {
      *a2++ = a4 - 3;
      ++a1[27];
      goto LABEL_4;
    }
  }
  v10 = a4 - 18;
  for ( *a2 = 0; v10 > 0xFF; ++v9 )
  {
    v10 -= 255;
    *v9 = 0;
  }
  *v9 = v10;
  a2 = v9 + 1;
  ++a1[28];
LABEL_4:
  v5 = a2 - 1;
  v6 = &a3[a4];
  do
  {
    v7 = *a3++;
    *++v5 = v7;
  }
  while ( a3 != v6 );
  return &a2[a4];
}
