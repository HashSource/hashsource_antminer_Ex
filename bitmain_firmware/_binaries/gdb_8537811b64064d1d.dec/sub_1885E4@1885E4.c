int __fastcall sub_1885E4(int a1, unsigned int a2)
{
  int v4; // r6
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r3
  char *v9; // r0
  int v10; // r2
  int v11; // r3
  const char *v12; // r0
  int v13; // r2
  int v14; // r3
  char *v16; // r0
  int v17; // r2
  int v18; // r3
  const char *v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r5
  char *v23; // r0
  int v24; // r2
  int v25; // r3
  const char *v26; // r0
  const char *v27; // r7
  int v28; // r2
  int v29; // r3

  v4 = ((int (*)(void))loc_23DC0C)();
  sub_B765C();
  if ( !sub_257418(a1) )
  {
    if ( sub_240104(0) )
    {
      sub_2573A8(a1, "\nThread ", v24, v25);
      v26 = (const char *)sub_240150(v4);
      sub_2576BC(a1, "thread-id", "%s", v26);
      v27 = *(const char **)(v4 + 32);
      if ( v27 || (v27 = (const char *)sub_2309B8(v4)) != 0 )
      {
        sub_2573A8(a1, " \"", v5, v6);
        sub_2576BC(a1, "name", "%s", v27);
        sub_2573A8(a1, "\"", v28, v29);
      }
    }
    else
    {
      sub_2573A8(a1, "\nProgram", v24, v25);
    }
  }
  if ( a2 )
  {
    sub_2573A8(a1, " received signal ", v5, v6);
    sub_B75DC();
    if ( !sub_257418(a1) )
    {
LABEL_9:
      v16 = sub_99A74(a2);
      sub_257610(a1, "signal-name", v16);
      sub_B75FC();
      sub_2573A8(a1, ", ", v17, v18);
      sub_B761C();
      v19 = sub_99A50(a2);
      v20 = sub_257610(a1, "signal-meaning", v19);
      if ( a2 == 11 )
      {
        v21 = sub_1DDBE4(v20);
        v22 = sub_1DD5B4(v21);
        if ( ((int (*)(void))loc_167210)() )
          ((void (__fastcall *)(int, int))loc_16725C)(v22, a1);
      }
      goto LABEL_6;
    }
LABEL_12:
    v23 = sub_98384(11);
    sub_257610(a1, "reason", v23);
    goto LABEL_9;
  }
  if ( !sub_257418(a1) )
  {
    sub_2573A8(a1, " stopped", v7, v8);
    return sub_2573A8(a1, ".\n", v13, v14);
  }
  sub_2573A8(a1, " received signal ", v7, v8);
  sub_B75DC();
  if ( sub_257418(a1) )
    goto LABEL_12;
  v9 = sub_99A74(0);
  sub_257610(a1, "signal-name", v9);
  sub_B75FC();
  sub_2573A8(a1, ", ", v10, v11);
  sub_B761C();
  v12 = sub_99A50(0);
  sub_257610(a1, "signal-meaning", v12);
LABEL_6:
  sub_B763C();
  return sub_2573A8(a1, ".\n", v13, v14);
}
