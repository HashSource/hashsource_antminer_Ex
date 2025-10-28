bool __fastcall sub_1707A4(int a1, int a2)
{
  return ((int (*)(void))loc_1706F0)()
      && ((int (__fastcall *)(int, int))loc_1706F0)(a1 + 16, a2 + 16)
      && ((*(unsigned __int8 *)(a1 + 32) ^ *(unsigned __int8 *)(a2 + 32)) & 3) == 0;
}
