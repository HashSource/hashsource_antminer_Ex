_DWORD *__fastcall sub_ED50C(_DWORD *a1, int a2)
{
  *a1 = a1 + 2;
  sub_ED45C(a1, *(_BYTE **)a2, *(_DWORD *)a2 + *(_DWORD *)(a2 + 4));
  return a1;
}
