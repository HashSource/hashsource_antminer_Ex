int __fastcall sub_202CF0(int a1, int a2, int a3)
{
  _DWORD *v3; // r4
  int v4; // r5
  const char *v5; // r1
  const char *v6; // r1
  const char *v7; // r0
  const char *v8; // r1
  const char *v9; // r1

  v3 = (_DWORD *)dword_4893EC;
  if ( !dword_4893EC )
    return sub_259F38("No current source file.\n", a2, a3, &dword_4893EC);
  v4 = *(_DWORD *)(dword_4893EC + 4);
  sub_259F38("Current source file is %s\n", *(const char **)(dword_4893EC + 12));
  v5 = *(const char **)(v3[1] + 28);
  if ( v5 )
    sub_259F38("Compilation directory is %s\n", v5);
  v6 = (const char *)v3[7];
  if ( v6 )
    sub_259F38("Located in %s\n", v6);
  if ( v3[4] )
    sub_259F38("Contains %d line%s.\n");
  v7 = (const char *)sub_194474(v3[6]);
  sub_259F38("Source language is %s.\n", v7);
  v8 = *(const char **)(v4 + 24);
  if ( !v8 )
    v8 = "unknown";
  sub_259F38("Producer is %s.\n", v8);
  sub_259F38("Compiled with %s debugging format.\n", *(const char **)(v4 + 20));
  if ( *(_DWORD *)(v4 + 48) )
    v9 = "Includes";
  else
    v9 = "Does not include";
  return sub_259F38("%s preprocessor macro info.\n", v9, "Includes", "Does not include");
}
