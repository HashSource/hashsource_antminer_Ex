int __fastcall sub_5DDF4(int a1, const char **a2, int a3)
{
  int v3; // r0
  int v4; // r5
  bool v5; // r7
  int v6; // r6
  int v7; // r4
  _DWORD *v9; // r0
  int v11; // r1

  if ( a3 > 1 )
    sub_94708("-stack-info-depth: Usage: [MAX_DEPTH]");
  if ( a3 != 1 )
  {
    v3 = sub_15F734(a1, a2);
    v4 = v3;
    if ( v3 )
    {
      v5 = 0;
      v6 = -1;
      goto LABEL_5;
    }
LABEL_17:
    v7 = 0;
    goto LABEL_11;
  }
  v6 = strtol(*a2, 0, 10);
  v3 = sub_15F734(v6, v11);
  v4 = v3;
  if ( !v3 )
    goto LABEL_17;
  v5 = v6 != -1;
  if ( v6 <= 0 && v6 != -1 )
    goto LABEL_17;
LABEL_5:
  v7 = 0;
  do
  {
    sub_258BFC(v3);
    ++v7;
    v3 = ((int (__fastcall *)(int))loc_15FAB0)(v4);
    v4 = v3;
    if ( !v3 )
      break;
  }
  while ( v7 < v6 || !v5 );
LABEL_11:
  v9 = (_DWORD *)sub_243004(v3);
  return sub_25752C(*v9, "depth", v7);
}
