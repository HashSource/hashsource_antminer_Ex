int __fastcall sub_5EB84(int a1, char **a2, int a3)
{
  int v5; // r6
  bool v6; // zf
  char *v7; // r4
  const char *v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r2

  v5 = *(_DWORD *)sub_243004(a1);
  if ( (unsigned int)(a3 - 1) > 1 )
    sub_94708("-var-delete: Usage: [-c] EXPRESSION.");
  v6 = a3 == 1;
  v7 = *a2;
  v8 = *a2;
  if ( v6 )
  {
    if ( !strcmp(v8, "-c") )
      sub_94708("-var-delete: Missing required argument after '-c': variable object name");
    if ( *v7 == 45 )
      sub_94708("-var-delete: Illegal variable object name");
    v9 = 0;
  }
  else
  {
    if ( strcmp(v8, "-c") )
      sub_94708("-var-delete: Invalid option.");
    v7 = a2[1];
    v9 = 1;
  }
  v10 = sub_26FBD4(v7);
  v11 = sub_2704C4(v10, v9);
  return sub_25752C(v5, "ndeleted", v11);
}
