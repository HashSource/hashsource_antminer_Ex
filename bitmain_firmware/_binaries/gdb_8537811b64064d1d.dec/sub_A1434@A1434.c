int __fastcall sub_A1434(int a1)
{
  int v1; // r4
  int result; // r0
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r0
  __int64 v7; // r0
  int v8; // r6
  __int64 v9; // r0
  int v10; // r0
  int v11; // [sp+Ch] [bp-4h] BYREF

  v11 = a1;
  v1 = sub_26BC98(a1);
  if ( sub_A0AE0(v1) )
  {
    v3 = sub_26BC98(v11);
    v4 = sub_A0898(v3);
    v5 = sub_A0F84(v4);
    v6 = sub_A0FD8(v5);
    v7 = sub_1700E8(v6);
    v8 = v7;
    if ( **(_BYTE **)(v4 + 24) == 1 )
    {
      v10 = sub_26C508(v11, HIDWORD(v7));
      return sub_2647F0(v8, v10);
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(int, _DWORD))loc_26C0C4)(v11, HIDWORD(v7));
      return sub_26DB1C(v8, HIDWORD(v9), v9, 0);
    }
  }
  else
  {
    result = sub_A0B58(v1);
    if ( result )
      return sub_2624F0(&v11, 0, "P_ARRAY", 0, "Bad GNAT array descriptor");
  }
  return result;
}
