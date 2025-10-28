int __fastcall sub_15ECE4(int a1, int a2, _QWORD *a3)
{
  int v5; // r5
  int v7; // r4
  unsigned int v8; // r7
  _DWORD *v9; // r0
  int v10; // r4
  unsigned __int8 *v11; // r0
  __int64 v12; // r0

  v5 = ((int (__fastcall *)(_DWORD))loc_15E39C)(*(_DWORD *)(a1 + 76));
  if ( sub_26ED40(v5) || !sub_26E684(v5) )
    return 0;
  v7 = sub_15DB68(*(int **)(a1 + 76));
  v8 = ((int (*)(void))loc_165BE0)();
  v9 = (_DWORD *)sub_26C1E0(v5);
  v10 = ((int (__fastcall *)(int, _DWORD))loc_1DD448)(v7, *v9);
  v11 = (unsigned __int8 *)sub_26E9A0(v5);
  LODWORD(v12) = sub_15C278(v11, v10, v8);
  *a3 = v12;
  return 1;
}
