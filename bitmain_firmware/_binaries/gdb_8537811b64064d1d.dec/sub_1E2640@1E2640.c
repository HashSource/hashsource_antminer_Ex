bool __fastcall sub_1E2640(int a1, int a2)
{
  __int64 v4; // r0

  if ( ((int (__fastcall *)(int))loc_1E21C0)(66) != 1 || ((int (__fastcall *)(int))loc_1E21C0)(69) != 1 )
    return 0;
  if ( a2 != 1 )
  {
    if ( a2 && a2 != 2 )
    {
      v4 = sub_94728((int)"remote.c", 13129, "Unknown branch trace format");
      return ((int (__fastcall *)(int, _DWORD))loc_1E21C0)(67, HIDWORD(v4)) == 1;
    }
    return 0;
  }
  return ((int (__fastcall *)(int, _DWORD))loc_1E21C0)(67, HIDWORD(v4)) == 1;
}
