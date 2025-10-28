int __fastcall sub_160418(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = sub_15DB68(*(int **)(a1 + 76));
  if ( ((int (*)(void))loc_169AB8)() )
    JUMPOUT(0x169B04);
  if ( ((int (__fastcall *)(int))loc_167318)(v2) < 0 )
  {
    sub_94728((int)"frame.c", 2797, "Missing unwind SP method");
    JUMPOUT(0x160488);
  }
  v3 = ((int (__fastcall *)(int))loc_167318)(v2);
  return ((int (__fastcall *)(_DWORD, int))loc_15EBE4)(*(_DWORD *)(a1 + 76), v3);
}
