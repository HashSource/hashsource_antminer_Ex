int __fastcall sub_33CC0C(int a1, unsigned __int8 a2, int a3)
{
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_33B7D8((_DWORD *)a1, *(_DWORD *)(a3 + 4) + 1);
  sub_33BA94((_DWORD *)a1, *(_DWORD *)(a1 + 4), 0, 1u, a2);
  sub_33C348((_DWORD *)a1, *(_BYTE **)a3, *(_DWORD *)(a3 + 4));
  return a1;
}
