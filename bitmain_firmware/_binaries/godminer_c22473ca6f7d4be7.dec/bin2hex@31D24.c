int __fastcall bin2hex(int s, int a2, int a3)
{
  int v3; // r4
  const char *v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // t1
  char *v8; // r0

  if ( a3 )
  {
    v3 = a2 - 1;
    LOWORD(v4) = -24656;
    v5 = a2 - 1 + a3;
    v6 = s;
    do
    {
      v7 = *(unsigned __int8 *)++v3;
      v8 = (char *)v6;
      HIWORD(v4) = (unsigned int)"div4_seq_one_lane" >> 16;
      v6 += 2;
      s = sprintf(v8, v4, v7);
    }
    while ( v3 != v5 );
  }
  return s;
}
