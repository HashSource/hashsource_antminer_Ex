int __fastcall fpga_write(int a1, int a2)
{
  *(_DWORD *)(dword_C25A9C + (a1 & 0xFFFFFFFC)) = a2;
  return 0;
}
