unsigned __int8 *__fastcall sub_9B408(int a1, int a2, int a3)
{
  int v6; // r5
  int v7; // r5
  int v8; // r8
  int v9; // r8
  int v10; // r0
  int v11; // r10
  int v12; // r0
  int v13; // r0
  int v14; // r5
  int v15; // r4
  int v16; // r0
  int v17; // r6
  int v18; // r5
  int v19; // r7
  int v20; // r9
  int v21; // r0

  v6 = ((int (__fastcall *)(int))loc_26C0C4)(a2);
  v7 = v6 - ((int (__fastcall *)(int))loc_26C0C4)(a1);
  v8 = sub_26BCB8(a2);
  v9 = v8 - sub_26BCB8(a1);
  v10 = sub_26BC98(a2);
  v11 = sub_2647F0(v10, a3);
  if ( sub_26BCC8(a2) )
    v17 = sub_26BCC8(a2);
  else
    v17 = 8 * *(_DWORD *)(sub_26BC98(a2) + 20);
  v12 = sub_26BC98(a1);
  v13 = sub_170068(v12);
  if ( ((int (__fastcall *)(int))loc_165DA0)(v13) )
  {
    v18 = sub_26E97C(a1) + v7;
    v19 = sub_26BCB8(a1);
    v20 = sub_26E9A0(v11);
    v21 = sub_26BC98(a2);
    return sub_9A27C(v18, v9 + v19, v20, 8 * *(_DWORD *)(v21 + 20) - v17, v17, 1);
  }
  else
  {
    v14 = sub_26E97C(a1) + v7;
    v15 = sub_26BCB8(a1);
    v16 = sub_26E9A0(v11);
    return sub_9A27C(v14, v9 + v15, v16, 0, v17, 0);
  }
}
