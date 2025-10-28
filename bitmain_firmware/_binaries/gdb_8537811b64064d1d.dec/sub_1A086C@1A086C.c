void __fastcall sub_1A086C(_BYTE *a1)
{
  void *v2; // r5
  void *v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r4
  _DWORD *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // [sp+0h] [bp-Ch] BYREF
  int v12; // [sp+4h] [bp-8h] BYREF

  v11 = 0;
  v12 = 0;
  v2 = sub_92564((int)sub_2589E0, (int)&v11);
  v3 = sub_92564((int)sub_2589E0, (int)&v12);
  if ( !a1 || !*a1 )
    sub_94708("You must follow the `macro expand' command with the expression you\nwant to expand.");
  v4 = sub_1A2BDC(v3);
  v11 = v4;
  if ( v4 )
  {
    v12 = sub_1A2964(a1, sub_1A2C7C, v4);
    v5 = (_DWORD *)sub_242FB4(v12);
    v6 = sub_25A6E4("expands to: ", *v5);
    v7 = v12;
    v8 = (_DWORD *)sub_242FB4(v6);
    v9 = sub_25A6E4(v7, *v8);
    v10 = (_DWORD *)sub_242FB4(v9);
    sub_25A6E4(&word_356660, *v10);
  }
  else
  {
    sub_259B5C("GDB has no preprocessor macro information for that code.\n");
  }
  sub_92648(v2);
}
