int __fastcall sub_10C094(int a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r3
  _DWORD v10[39]; // [sp+0h] [bp-9Ch] BYREF

  sub_29C190(v10, 0, sub_10B858);
  v10[22] = a2;
  v10[24] = a3;
  v10[23] = a4;
  v10[4] = *(_DWORD *)(((int (__fastcall *)(int))loc_163ED8)(a1) + 12);
  v10[5] = *(_DWORD *)(((int (__fastcall *)(int))loc_163ED8)(a1) + 16);
  v10[6] = ((int (__fastcall *)(int))loc_165BE0)(a1);
  v10[7] = ((int (__fastcall *)(int))loc_165C50)(a1);
  v8 = (_DWORD *)((int (__fastcall *)(int))loc_16EAF0)(a1);
  if ( v8 )
    v8 = (_DWORD *)*v8;
  v10[36] = v8;
  sub_29BF90(v10);
  return ((int (__fastcall *)(int, int, _DWORD *))loc_16A314)(a1, a4, v10);
}
