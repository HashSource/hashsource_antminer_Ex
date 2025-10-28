int __fastcall sub_5EEE8(int a1, char **a2, int a3)
{
  int *v5; // r0
  bool v6; // zf
  int v7; // r4
  int v8; // r0
  int v9; // r2

  v5 = (int *)sub_243004(a1);
  v6 = a3 == 1;
  v7 = *v5;
  if ( !v6 )
    sub_94708("Usage: NAME.");
  v8 = sub_26FBD4(*a2);
  v9 = ((int (__fastcall *)(int))loc_26FEA4)(v8);
  return sub_257610(v7, "path_expr", v9);
}
