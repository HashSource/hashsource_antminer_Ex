int __fastcall sub_24A84(int a1, int *a2)
{
  int v4; // r6
  int v5; // r7
  int v7; // r3
  unsigned int v8; // r0
  __int16 v9; // r0
  _BYTE v10[8]; // [sp+4h] [bp-8h] BYREF

  v4 = sub_163EA0(a1);
  v5 = ((int (__fastcall *)(int))loc_165C50)(a1);
  if ( !sub_24874(a1, *a2) )
    return 4;
  v7 = *(_DWORD *)(v4 + 56);
  v8 = *a2 & 0xFFFFFFFE;
  *a2 = v8;
  if ( v7 && !sub_230048(v8, v10, 2) && (v9 = sub_15C278(v10, 2, v5), sub_182C4(v9) == 4) )
    return 3;
  else
    return 2;
}
