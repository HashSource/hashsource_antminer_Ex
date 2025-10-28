int __fastcall sub_17F55C(int *a1)
{
  int v2; // r7
  _DWORD *v3; // r5
  int v4; // r8
  int v5; // r2
  int result; // r0
  int v7; // r0
  const char *v8[3]; // [sp+4h] [bp-Ch] BYREF

  if ( a1[3] <= 0 )
  {
    sub_24229C();
    return 1;
  }
  v2 = sub_15F734((int)a1);
  v3 = (_DWORD *)((int (*)(void))loc_23DC0C)();
  sub_17F09C((int)v3);
  if ( a1[5] )
  {
    result = a1[4];
    v3[16] = 1;
    v3[15] = 1;
    if ( !result )
    {
      v3[32] = 0;
      return result;
    }
LABEL_9:
    result = 0;
    v3[32] = 1;
    return result;
  }
  if ( !a1[4] && sub_191080(dword_4878EC, dword_4878F0, dword_4878F4) )
  {
    sub_187C68(v8, 1);
    ((void (__fastcall *)(const char *, const char *, const char *, int))loc_23EFE8)(v8[0], v8[1], v8[2], 1);
    ((void (__fastcall *)(int, int, int))loc_191014)(dword_4878EC, dword_4878F0, dword_4878F4);
    --a1[3];
    return sub_17F55C(a1);
  }
  v4 = sub_15DE24(v2);
  sub_21E6B8(v4, v3 + 15, v3 + 16);
  v5 = v3[16];
  v3[18] = 1;
  if ( !v5 )
  {
    if ( dword_4879B8 )
    {
      v3[16] = 1;
      v3[15] = 1;
      v3[18] = 0;
    }
    else
    {
      v7 = sub_C37E0(v4, v8, v3 + 15, v3 + 16);
      if ( !v7 )
        sub_94708("Cannot find bounds of current function");
      sub_22F070(v7);
      sub_259F38("Single stepping until exit from function %s,\nwhich has no line number information.\n", v8[0]);
    }
  }
  result = a1[4];
  if ( result )
    goto LABEL_9;
  return result;
}
