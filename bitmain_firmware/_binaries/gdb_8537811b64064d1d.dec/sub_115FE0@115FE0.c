int __fastcall sub_115FE0(int a1, int a2)
{
  int result; // r0

  result = ((int (*)(void))loc_16772C)();
  if ( result == -1 && dword_47AC88 > 0 )
  {
    sub_F43DC(&off_46D334, "bad DWARF register number %d", a2);
    return -1;
  }
  return result;
}
