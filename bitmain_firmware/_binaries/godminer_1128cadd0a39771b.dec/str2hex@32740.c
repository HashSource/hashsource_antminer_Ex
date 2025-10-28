int __fastcall str2hex(int a1, int a2, int a3)
{
  char v3; // r4
  char v4; // r5
  int i; // r3
  int v6; // lr
  unsigned int v7; // r6
  char v8; // lr
  int v9; // lr
  unsigned int v10; // r6
  char v11; // lr

  if ( a3 <= 0 )
    return a3 / 2;
  for ( i = 0; i < a3; i += 2 )
  {
    v6 = *(unsigned __int8 *)(a2 + i);
    v7 = v6 - 97;
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      v8 = v6 - 87;
      if ( v7 <= 5 )
        v4 = v8;
    }
    else
    {
      v4 = v6 - 48;
    }
    v9 = *(unsigned __int8 *)(a2 + i + 1);
    v10 = v9 - 97;
    if ( (unsigned __int8)(v9 - 48) > 9u )
    {
      v11 = v9 - 87;
      if ( v10 <= 5 )
        v3 = v11;
    }
    else
    {
      v3 = v9 - 48;
    }
    *(_BYTE *)(a1 + (i >> 1)) = v3 | (16 * v4);
  }
  return a3 / 2;
}
