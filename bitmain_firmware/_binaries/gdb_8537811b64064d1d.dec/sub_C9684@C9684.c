int __fastcall sub_C9684(int *a1, int *a2, int a3)
{
  int v6; // r0
  __int64 v7; // r0
  int v8; // r8
  int v9; // r10
  int v10; // r6
  int v11; // r5
  __int64 v12; // r0

  if ( !a3 )
    return 0;
  v6 = sub_26BC98(a3);
  v7 = sub_26BBA8(v6);
  v8 = *a2;
  v9 = v7;
  v10 = *a1;
  v11 = sub_26E740(a3, HIDWORD(v7));
  v12 = sub_26BCA8(a3);
  ((void (__fastcall *)(int, _DWORD, int, int, int, int, int))sub_26D6BC)(
    v9,
    HIDWORD(v12),
    v10,
    v10 >> 31,
    v8,
    v8 >> 31,
    v11);
  return v9;
}
