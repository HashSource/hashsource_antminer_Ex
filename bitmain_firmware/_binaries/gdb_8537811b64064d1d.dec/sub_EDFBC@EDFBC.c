int __fastcall sub_EDFBC(int a1, int a2, int a3)
{
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_ED748(a2, a3, (void **)a1, 0, 0, 0);
  return a1;
}
