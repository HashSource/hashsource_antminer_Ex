int __fastcall sub_5F2BC(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r6
  int v6; // r0

  if ( a3 != 3 )
    sub_94708("-var-set-update-range: Usage: VAROBJ FROM TO");
  v4 = sub_26FBD4(*(char **)a2);
  v5 = strtol(*(const char **)(a2 + 4), 0, 10);
  v6 = strtol(*(const char **)(a2 + 8), 0, 10);
  return sub_26FFDC(v4, v5, v6);
}
