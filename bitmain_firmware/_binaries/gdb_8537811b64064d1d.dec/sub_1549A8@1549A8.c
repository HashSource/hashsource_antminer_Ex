int __fastcall sub_1549A8(int a1, int a2, const char *a3)
{
  const char *v3; // r5
  char *v6; // r0
  const char *v7; // r4
  __int64 v9; // r0

  v3 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v6 = strchr(v3, 10);
      if ( !v6 )
        break;
      v7 = v6 + 1;
      sub_256854(a1, v3, v6 + 1 - v3);
      v3 = v7;
      if ( !v7 )
        goto LABEL_4;
    }
    sub_25A6E4(v3, a1);
  }
LABEL_4:
  sub_25A440(a1, (const char *)&word_356660);
  if ( a2 == -2 )
    return sub_B789C();
  if ( a2 == -1 )
    return sub_B78BC();
  v9 = sub_94728((int)"exceptions.c", 104, "Bad switch.");
  return sub_154A44(v9, HIDWORD(v9));
}
