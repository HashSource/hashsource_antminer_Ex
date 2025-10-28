int __fastcall sub_AEBA0(int a1, int a2, int a3, int a4, _DWORD *a5, int *a6)
{
  int v10; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r4
  int v15; // r0
  __int64 v17; // r0
  int v18; // r0
  int v19; // [sp+Ch] [bp-4h] BYREF

  v10 = sub_26C208(a1);
  v11 = sub_26BC98(a2);
  if ( **(_BYTE **)(sub_171280(v11) + 24) == 2 )
  {
    v17 = sub_1780DC(a5[1]);
    v19 = sub_26DB1C(*(_DWORD *)(v17 + 12), HIDWORD(v17), a3, a4);
    v18 = sub_A9320(a2, 1, (int)&v19);
    v14 = sub_AAEBC(v18);
  }
  else
  {
    v12 = sub_26BC98(a2);
    v19 = a3;
    v13 = sub_A8820(&v19, a2, 0, v12);
    v14 = sub_AAFBC(v13);
  }
  if ( a5[4 * *a6 + 4] == 113 )
  {
    sub_AE450(a1, v14, a5, a6, 0);
  }
  else
  {
    v15 = sub_AB8A0(0, a5, a6, 0);
    sub_9B408(a1, v14, v15);
  }
  return sub_26C328(v10);
}
