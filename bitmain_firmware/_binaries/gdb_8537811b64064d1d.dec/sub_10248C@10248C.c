int __fastcall sub_10248C(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r8
  __int64 v10; // r0
  int v11; // r4
  int v12; // r0
  int v14; // [sp+8h] [bp-8h] BYREF
  unsigned int v15; // [sp+Ch] [bp-4h] BYREF

  v8 = sub_170068(a2);
  v9 = ((int (__fastcall *)(int))loc_165BE0)(v8);
  v14 = ((int (__fastcall *)(int))loc_170908)(a2);
  v10 = sub_15C1B8(a1, *(_DWORD *)(a2 + 20), v9);
  if ( v10 == -1 )
    return sub_25A440(a3, "NULL");
  v11 = v10;
  sub_1011AC(&v14, &v15, 8 * v10);
  if ( !v14 )
    return sub_25A440(a3, "%ld", v11);
  sub_25A6E4(a4, a3);
  v12 = sub_170CEC(v14);
  if ( v12 )
    sub_25A6E4(v12, a3);
  else
    sub_EBBF4(v14, a3, 0, 0);
  sub_25A440(a3, "::");
  return sub_25A6E4(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v14 + 24) + 24) + 24 * v15 + 16), a3);
}
