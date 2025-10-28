int __fastcall sub_188398(int a1, unsigned int a2)
{
  int v4; // r2
  int v5; // r3
  char *v6; // r0
  char *v7; // r0
  int v8; // r2
  int v9; // r3
  const char *v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r3

  sub_B759C();
  if ( sub_257418(a1) )
  {
    v6 = sub_98384(8);
    sub_257610(a1, "reason", v6);
  }
  sub_2573A8(a1, "\nProgram terminated with signal ", v4, v5);
  sub_B75DC();
  v7 = sub_99A74(a2);
  sub_257610(a1, "signal-name", v7);
  sub_B75FC();
  sub_2573A8(a1, ", ", v8, v9);
  sub_B761C();
  v10 = sub_99A50(a2);
  sub_257610(a1, "signal-meaning", v10);
  sub_B763C();
  sub_2573A8(a1, ".\n", v11, v12);
  return sub_2573A8(a1, "The program no longer exists.\n", v13, v14);
}
