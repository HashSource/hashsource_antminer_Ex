int __fastcall sub_1789DC(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r10
  _DWORD *v10; // r0
  __int64 v11; // r6
  _DWORD *v12; // r9
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r9
  __int64 v18; // r0
  int v19; // r0
  int v20; // r6
  _DWORD *v21; // r0
  int v22; // r3
  _DWORD *v23; // r0
  __int64 v25; // r0
  __int64 v26; // kr00_8
  int v27; // r0
  __int64 v28; // r0
  int v29; // [sp+Ch] [bp-4h] BYREF

  v4 = a2 + 16 * a3;
  v5 = *a1;
  v8 = (_DWORD *)sub_26BC98(*a1);
  v9 = (_DWORD *)sub_171280(v8);
  v10 = *(_DWORD **)(v4 + 8);
  v11 = *(unsigned __int16 *)(v4 + 14) - 2;
  if ( !v10 )
    v10 = (_DWORD *)((int (__fastcall *)(int))loc_17254C)(a4);
  v12 = sub_1700E8(v10);
  if ( *(_DWORD **)(v12[6] + 20) != v9 )
  {
    v13 = sub_2616E4(v5);
    v14 = sub_2647F0(v12, v13);
    v5 = sub_262134(v14);
    v15 = (_DWORD *)sub_26BC98(v5);
    v9 = (_DWORD *)sub_171280(v15);
  }
  v16 = sub_17326C(v9, &v29);
  v17 = ((int (__fastcall *)(int, int, _DWORD, _DWORD, int, int))loc_26F380)(v5, v29, 0, 0, v16, v29);
  v18 = sub_26BC98(v17);
  if ( **(_BYTE **)(v18 + 24) == 1
    && (v18 = sub_26BC98(v17), **(_BYTE **)(*(_DWORD *)(*(_DWORD *)(v18 + 24) + 20) + 24) == 2) )
  {
    v25 = sub_262134(v17);
    v20 = sub_25CE34(v25, HIDWORD(v25), v11, HIDWORD(v11));
  }
  else
  {
    v19 = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_25CABC)(v17, HIDWORD(v18), v11, HIDWORD(v11));
    v20 = sub_262134(v19);
  }
  v21 = (_DWORD *)sub_26BC98(v20);
  v22 = **(char **)(sub_171280(v21) + 24);
  if ( v22 == 3 )
  {
    v26 = sub_26BCA8(v5);
    v27 = sub_26F84C(v20, 0);
    v28 = sub_26EB44(v27);
    sub_26BCB0(v5, HIDWORD(v28), v26 + v28, (unsigned __int64)(v26 + v28) >> 32);
    if ( !sub_26BF74(v5) )
    {
      sub_26BF80(v5, 1);
      ((void (__fastcall *)(int))loc_26E034)(v5);
    }
    v20 = sub_26F84C(v20, 2);
  }
  else if ( v22 != 1 )
  {
    sub_94708("I'm confused:  virtual function table has bad type");
  }
  v23 = sub_1700E8(*(_DWORD **)(v4 + 4));
  sub_26BCA0(v20, v23);
  *a1 = v5;
  return v20;
}
