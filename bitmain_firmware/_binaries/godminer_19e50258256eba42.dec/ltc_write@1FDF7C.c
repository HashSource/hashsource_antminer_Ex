int __fastcall ltc_write(int a1, int a2)
{
  *(_DWORD *)(dword_C25B84 + (a1 & 0xFFFFFFFC)) = a2;
  return 0;
}
