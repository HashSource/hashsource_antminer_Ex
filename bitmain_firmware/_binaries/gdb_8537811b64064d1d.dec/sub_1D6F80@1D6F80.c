int __fastcall sub_1D6F80(int a1, int *a2, int **a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r5
  int v9; // r7
  int v10; // r0
  int *v11; // r5
  int *v12; // r3
  int v13; // r8
  char *v14; // r0
  _DWORD v15[2]; // [sp+0h] [bp-8h] BYREF

  v5 = sub_15D708(a2);
  if ( !v5 )
    return 0;
  v6 = sub_1D41B0(v5);
  v7 = v6;
  if ( !v6 )
    return 0;
  if ( (*(_DWORD *)(v6 + 48) & 2) == 0 )
    return 0;
  v9 = sub_23E430(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
  if ( !sub_E1E30(v15, v9 + 252, *(_DWORD *)(v7 + 16)) )
    return 0;
  v10 = sub_E1B98(v15);
  v11 = (int *)v10;
  if ( dword_487D4C )
  {
    v13 = *(_DWORD *)sub_242FF0(v10);
    v14 = sub_1D41E8(v11);
    sub_2594D8(v13, "[record-btrace] [frame] sniffed tailcall frame for %s on level %d\n", v14, v11[11]);
  }
  v12 = (int *)((int (__fastcall *)(int *))loc_1D6DC8)(a2);
  *v12 = v9;
  v12[2] = (int)v11;
  *a3 = v12;
  return 1;
}
