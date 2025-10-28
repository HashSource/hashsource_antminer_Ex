char *__fastcall sub_4FA04(unsigned __int8 *a1)
{
  unsigned __int8 *i; // r2
  int v2; // r0
  int v3; // r1
  char *result; // r0
  int v5; // r0
  _DWORD *v6; // r0
  unsigned __int8 *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a1;
  if ( a1 )
  {
    for ( i = a1; ; i = v7 )
    {
      result = "%c";
      v7 = i + 1;
      v3 = *i;
      if ( !*i )
        break;
      if ( *i != 92 )
        goto LABEL_8;
      if ( !i[1] )
        return result;
      v2 = sub_B8974();
      v3 = sub_258D44(v2, &v7);
      if ( v3 >= 0 )
LABEL_8:
        sub_259F38("%c", v3);
    }
  }
  v5 = sub_259B80("");
  v6 = (_DWORD *)sub_242FB4(v5);
  return (char *)sub_256834(*v6);
}
