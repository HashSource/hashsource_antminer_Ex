int __fastcall sub_A7E38(int *a1, __int64 a2, int a3, int a4)
{
  int result; // r0
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  int v12; // [sp+14h] [bp-18h]
  int v13; // [sp+18h] [bp-14h]
  int j; // [sp+20h] [bp-Ch]
  int i; // [sp+24h] [bp-8h]

  *a1 = sub_A7CC4(-2128831035, a2);
  a1[1] = sub_A7CC4(*a1, SHIDWORD(a2));
  a1[2] = sub_A7CC4(a1[1], a2);
  result = sub_A7CC4(a1[2], SHIDWORD(a2));
  a1[3] = result;
  for ( i = 0; i <= 31; ++i )
  {
    *(_DWORD *)(a3 + 4 * i) = i;
    *(_DWORD *)(a4 + 4 * i) = i;
  }
  for ( j = 31; j > 0; --j )
  {
    v6 = sub_A7D00(a1);
    sub_344E9C(v6, j + 1);
    v13 = *(_DWORD *)(a3 + 4 * j);
    *(_DWORD *)(a3 + 4 * j) = *(_DWORD *)(a3 + 4 * v7);
    *(_DWORD *)(a3 + 4 * v7) = v13;
    v8 = sub_A7D00(a1);
    result = sub_344E9C(v8, j + 1);
    v12 = *(_DWORD *)(a4 + 4 * j);
    *(_DWORD *)(a4 + 4 * j) = *(_DWORD *)(a4 + 4 * v9);
    *(_DWORD *)(a4 + 4 * v9) = v12;
  }
  return result;
}
