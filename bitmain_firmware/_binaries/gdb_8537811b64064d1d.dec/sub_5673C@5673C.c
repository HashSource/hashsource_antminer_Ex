_DWORD *__fastcall sub_5673C(_DWORD *a1, int a2, int a3)
{
  int v3; // r7
  _DWORD *v7; // r0
  int v8; // r8
  int v9; // r7
  int *v10; // r0
  int v11; // r9
  _DWORD *v12; // r0
  int v13; // r7
  int v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0

  v3 = *(_DWORD *)(a2 + 16);
  v7 = (_DWORD *)sub_242FB4(a1);
  v8 = sub_F0064(v3, *v7);
  v9 = *(_DWORD *)(a2 + 16);
  v10 = (int *)sub_243004(0);
  v11 = *v10;
  v12 = (_DWORD *)sub_243004(v10);
  *v12 = v9;
  v13 = sub_92E50(v12);
  sub_2435D8(a3, 1);
  v14 = sub_92E68(v13);
  v15 = (_DWORD *)sub_243004(v14);
  *v15 = v11;
  v16 = (_DWORD *)sub_242FDC(v15);
  sub_154B60(*v16, 0, 0, 0);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  sub_F0064(*(_DWORD *)(a2 + 16), v8);
  return a1;
}
