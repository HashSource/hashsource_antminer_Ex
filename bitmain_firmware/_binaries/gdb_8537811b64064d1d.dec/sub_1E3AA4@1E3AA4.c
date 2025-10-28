int __fastcall sub_1E3AA4(int a1, int a2, int a3, int a4)
{
  int v4; // r0

  v4 = sub_23E430(a2, a3, a4);
  if ( v4 && *(_DWORD *)(v4 + 248) )
    return *(_DWORD *)(((int (*)(void))loc_1E3914)() + 52);
  else
    return -1;
}
