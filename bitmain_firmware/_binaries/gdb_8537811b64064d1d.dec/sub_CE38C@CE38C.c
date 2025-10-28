int __fastcall sub_CE38C(int a1)
{
  int *v2; // r0
  _DWORD *v3; // r5
  int v4; // r4
  int v5; // r2
  int v6; // r3
  int v7; // r1
  char *v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r3

  v2 = (int *)sub_243004(a1);
  v3 = *(_DWORD **)(a1 + 8);
  v4 = *v2;
  sub_B74F0(v3[6]);
  sub_CE2B0(v4);
  v6 = v3[5];
  if ( v6 )
    LOWORD(v7) = 19468;
  else
    LOWORD(v7) = 19444;
  HIWORD(v7) = 55;
  sub_2573A8(v4, v7, v5, v6);
  if ( sub_257418(v4) )
  {
    v8 = sub_98384(17);
    sub_257610(v4, "reason", v8);
    sub_257610(v4, "disp", *(_DWORD *)&aStdVectorSymta_0[4 * v3[5] + 2436]);
  }
  sub_25752C(v4, "bkptno", v3[6]);
  sub_2573A8(v4, " (exec'd ", v9, v10);
  sub_257610(v4, "new-exec", v3[34]);
  sub_2573A8(v4, "), ", v11, v12);
  return 0;
}
