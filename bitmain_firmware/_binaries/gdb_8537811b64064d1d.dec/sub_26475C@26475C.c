int __fastcall sub_26475C(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r5
  int v7; // r8
  __int64 v8; // r0
  int v9; // r7
  void *v10; // r6
  const void *v11; // r0
  int v12; // r1
  void *v13; // r6
  const void *v14; // r0

  v5 = *(_DWORD *)(*(_DWORD *)(a3 + 24) + 20);
  v6 = sub_26BBA8(a3);
  v7 = sub_2647F0(v5, a1);
  v8 = sub_2647F0(v5, a2);
  v9 = v8;
  v10 = (void *)sub_26BCE0(v6, HIDWORD(v8));
  v11 = (const void *)sub_26E9A0(v7);
  memcpy(v10, v11, *(_DWORD *)(v5 + 20));
  v13 = (void *)(sub_26BCE0(v6, v12) + *(_DWORD *)(v5 + 20));
  v14 = (const void *)sub_26E9A0(v9);
  memcpy(v13, v14, *(_DWORD *)(v5 + 20));
  return v6;
}
