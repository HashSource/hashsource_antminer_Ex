int __fastcall sub_22D204(int a1)
{
  _DWORD *v2; // r0
  int v3; // r0
  int v4; // r5
  unsigned int i; // r4
  int v7; // r6
  char *v8; // r0
  _DWORD *v9; // r0

  v2 = (_DWORD *)sub_242FF0(a1);
  v3 = sub_256878("{", *v2);
  if ( a1 )
  {
    v4 = a1 - 1;
    for ( i = 0; i != 152; ++i )
    {
      while ( !*(unsigned __int8 *)++v4 )
      {
        if ( ++i == 152 )
          goto LABEL_6;
      }
      v7 = *(_DWORD *)sub_242FF0(v3);
      v8 = sub_99A74(i);
      v3 = sub_2594D8(v7, " %s", v8);
    }
  }
LABEL_6:
  v9 = (_DWORD *)sub_242FF0(v3);
  return sub_256878(" }", *v9);
}
