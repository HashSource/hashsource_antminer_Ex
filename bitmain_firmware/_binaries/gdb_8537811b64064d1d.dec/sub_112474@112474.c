int __fastcall sub_112474(int a1, unsigned int a2)
{
  int v3; // r4
  int v4; // r7
  int v5; // r0
  int v6; // r6
  int v7; // r0
  __int64 v8; // kr00_8
  int v10; // r0
  int v11; // r4
  int v12; // r0
  int v13; // r9
  int v14; // r3
  _BYTE vars0[32]; // [sp+8h] [bp-1Ch] BYREF

  v3 = sub_11243C(a1, a2);
  v4 = ((int (__fastcall *)(_DWORD))loc_165BE0)(*(_DWORD *)(a1 + 16));
  v5 = sub_26BC98(v3);
  sub_112288(*(char **)(v5 + 24));
  v6 = sub_26E9A0(v3);
  v7 = sub_26BC98(v3);
  v8 = sub_15C278(v6, *(_DWORD *)(v7 + 20), v4);
  if ( !((int (__fastcall *)(_DWORD))loc_168A6C)(*(_DWORD *)(a1 + 16)) )
    return v8;
  v10 = v3;
  v11 = *(_DWORD *)(a1 + 16);
  v12 = sub_26BC98(v10);
  v13 = sub_1122B0(v11, *(_DWORD *)(v12 + 20));
  sub_15C374(vars0, *(_DWORD *)(a1 + 20), v4, v14, v8, HIDWORD(v8));
  return ((int (__fastcall *)(_DWORD, int, _BYTE *))loc_168AB8)(*(_DWORD *)(a1 + 16), v13, vars0);
}
