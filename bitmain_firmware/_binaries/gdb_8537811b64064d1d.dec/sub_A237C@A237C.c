__int64 __fastcall sub_A237C(int a1, int a2)
{
  int v3; // r4
  int v4; // r6
  int v5; // r4
  int v6; // r0
  int v7; // r0

  v3 = a2 - 1;
  v4 = sub_A0898(a1);
  v5 = sub_171950(
         0,
         *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 24) + 24) + 12) + 24) + 20),
         a2,
         a2 >> 31,
         v3,
         v3 >> 31);
  v6 = sub_A1798(v4, 1);
  v7 = sub_17214C(0, v6, v5);
  return sub_26BBA8(v7);
}
