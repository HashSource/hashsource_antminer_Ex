int __fastcall sub_CE9E8(int a1)
{
  int v1; // r5
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_DWORD *)sub_243004(a1);
  sub_B74F0(*(_DWORD *)(v1 + 24));
  sub_CE2B0(v2);
  v4 = *(_DWORD *)(v1 + 20);
  if ( v4 )
    LOWORD(v5) = 19468;
  else
    LOWORD(v5) = 19444;
  HIWORD(v5) = 55;
  sub_2573A8(v2, v5, v3, v4);
  sub_25752C(v2, "bkptno", *(_DWORD *)(v1 + 24));
  sub_2573A8(v2, &word_356660, v6, v7);
  if ( sub_257418(v2) )
    sub_257610(v2, "disp", *(_DWORD *)&aStdVectorSymta_0[4 * *(_DWORD *)(v1 + 20) + 2436]);
  sub_C7B9C(1);
  return 0;
}
