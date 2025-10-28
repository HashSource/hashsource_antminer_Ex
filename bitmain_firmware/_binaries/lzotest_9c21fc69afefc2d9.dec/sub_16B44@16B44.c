char *__fastcall sub_16B44(char *a1, char *src, unsigned int a3)
{
  unsigned int v3; // r6
  int v6; // r7
  int v7; // r8
  char *result; // r0
  char *v9; // r4
  char *v10; // r1
  char *v11; // r3
  _BYTE *v12; // r0
  _BYTE *v13; // r3
  char v14; // t1
  char *v15; // r0
  char *v16; // r3
  char *v17; // r1
  char v18; // t1

  v3 = a3;
  if ( a3 >= 0x200 )
  {
    v6 = 7;
    do
    {
      while ( 1 )
      {
        v7 = 256 << v6;
        if ( 256 << v6 > v3 )
          break;
        *a1 = 0;
        a1[1] = v6 - 8;
        v3 -= v7;
        v15 = (char *)memcpy(a1 + 2, src, 256 << v6);
        src += v7;
        a1 = &v15[v7];
      }
      --v6;
    }
    while ( v6 );
  }
  if ( v3 >= 0x118 )
  {
    v9 = a1 + 282;
    do
    {
      *(v9 - 282) = 0;
      *(v9 - 281) = -8;
      v3 -= 280;
      memcpy(v9 - 280, src, 0x118u);
      result = v9;
      src += 280;
      v9 += 282;
    }
    while ( v3 >= 0x118 );
  }
  else
  {
    result = a1;
  }
  if ( v3 <= 0x1F )
  {
    if ( v3 )
    {
      v16 = result;
      v17 = &src[v3];
      *result = v3;
      do
      {
        v18 = *src++;
        *++v16 = v18;
      }
      while ( src != v17 );
      result += v3 + 1;
    }
  }
  else
  {
    v10 = &src[v3];
    v11 = result;
    *result = 0;
    v12 = result + 2;
    v11[1] = v3 - 32;
    v13 = v11 + 1;
    do
    {
      v14 = *src++;
      *++v13 = v14;
    }
    while ( src != v10 );
    return &v12[v3];
  }
  return result;
}
