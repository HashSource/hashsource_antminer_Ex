int __fastcall sub_B80E4(int a1, int a2, int a3)
{
  if ( ((int (*)(void))loc_166070)() == a3 )
    JUMPOUT(0x1660E8);
  if ( a3 == ((int (__fastcall *)(int))loc_166160)(a1) )
    JUMPOUT(0x1661D8);
  if ( a3 == ((int (__fastcall *)(int))loc_166250)(a1) )
    JUMPOUT(0x1662C8);
  if ( a3 == ((int (__fastcall *)(int))loc_166340)(a1)
    || ((int (__fastcall *)(int))loc_1663B8)(a1)
    && *(_DWORD *)(*(_DWORD *)((int (__fastcall *)(int))loc_1663B8)(a1) + 4) == a3 )
  {
    JUMPOUT(0x1663B8);
  }
  return 0;
}
