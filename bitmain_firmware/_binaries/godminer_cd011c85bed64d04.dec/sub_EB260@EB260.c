int __fastcall sub_EB260(int a1, int a2, int a3, int a4)
{
  int v6; // r1
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r12
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0

  v6 = *(_DWORD *)(a1 + 28) ^ a4;
  *(_DWORD *)(a1 + 24) ^= a3;
  *(_DWORD *)(a1 + 28) = v6;
  v7 = sub_EB158(a1);
  v8 = (_DWORD *)sub_EB158(v7);
  v9 = v8[1];
  v10 = v8[4];
  *v8 ^= a3;
  v8[1] = v9 ^ a4;
  v8[4] = v10 ^ 0xFF;
  v11 = sub_EB158((int)v8);
  v12 = sub_EB158(v11);
  v13 = sub_EB158(v12);
  return sub_EB158(v13);
}
