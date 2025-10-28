int sub_1C5BB0()
{
  int result; // r0
  int i; // r4
  int v2; // r0
  int v3; // r0
  _DWORD *v4; // r0

  if ( dword_487CEC )
    result = sub_259F38("Auto-display expressions now in effect:\nNum Enb Expression\n");
  else
    result = sub_259880("There are no auto-display expressions now.\n");
  for ( i = dword_487CEC; i; i = *(_DWORD *)i )
  {
    sub_259F38("%d:   %c  ", *(_DWORD *)(i + 12), (unsigned __int8)aNy[*(_DWORD *)(i + 32)]);
    if ( *(_BYTE *)(i + 21) )
    {
      sub_259F38("/%d%c%c ", *(_DWORD *)(i + 16), *(unsigned __int8 *)(i + 21), *(unsigned __int8 *)(i + 20));
    }
    else if ( *(_BYTE *)(i + 20) )
    {
      sub_259F38("/%c ", *(unsigned __int8 *)(i + 20));
    }
    sub_259B5C(*(_DWORD *)(i + 4));
    if ( *(_DWORD *)(i + 28) )
    {
      v2 = sub_20F3B0(0);
      if ( !sub_C2388(v2, *(_DWORD *)(i + 28)) )
        sub_259F38(" (cannot be evaluated in the current context)");
    }
    v3 = sub_259F38((const char *)&word_356660);
    v4 = (_DWORD *)sub_242FB4(v3);
    result = sub_256834(*v4);
  }
  return result;
}
