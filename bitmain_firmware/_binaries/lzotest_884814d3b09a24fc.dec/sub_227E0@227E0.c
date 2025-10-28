_BYTE *__fastcall sub_227E0(_BYTE *a1, char *a2, unsigned int a3, unsigned int a4)
{
  _BOOL4 v4; // r12
  _BYTE *v5; // r3
  char *v6; // lr
  char v7; // t1
  _BYTE *v9; // r4
  unsigned int v10; // lr
  _BYTE *v11; // r12

  v4 = a3 <= 3;
  if ( (unsigned int)a1 <= a4 )
    v4 = 0;
  if ( v4 )
  {
    *(a1 - 2) |= a3;
  }
  else
  {
    v9 = a1 + 1;
    if ( a3 > 0x1F )
    {
      v10 = a3 - 31;
      *a1 = 0;
      if ( a3 - 31 > 0xFF )
      {
        while ( 1 )
        {
          v10 -= 255;
          *v9 = 0;
          v11 = v9 + 1;
          if ( v10 <= 0xFF )
            break;
          ++v9;
        }
        a1 = v9 + 2;
      }
      else
      {
        a1 += 2;
        v11 = v9;
      }
      *v11 = v10;
    }
    else
    {
      *a1++ = a3;
    }
  }
  v5 = a1 - 1;
  v6 = &a2[a3];
  do
  {
    v7 = *a2++;
    *++v5 = v7;
  }
  while ( a2 != v6 );
  return &a1[a3];
}
