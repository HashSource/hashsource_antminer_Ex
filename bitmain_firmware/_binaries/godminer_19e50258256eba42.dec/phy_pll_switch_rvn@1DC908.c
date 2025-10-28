int __fastcall phy_pll_switch_rvn(int a1, unsigned __int8 a2, char a3, unsigned __int8 a4)
{
  int v9; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  sub_1D0F04(a1, a3, 82, -1431655766);
  usleep(0x12Cu);
  sub_1DC754(a1, a2, a3, (int)"check phy pstate 01");
  if ( a4 == 1 )
  {
    sub_1D0F04(a1, a3, 86, 137955337);
    usleep(0x64u);
  }
  v9 = *(_DWORD *)"[\\]^%s start";
  for ( i = 0; i <= 3; ++i )
  {
    sub_1D0F04(a1, a3, *((unsigned __int8 *)&v9 + i), (a4 << 24) | (a4 << 16) | (a4 << 8) | a4);
    usleep(0x64u);
  }
  sub_1DC754(a1, a2, a3, (int)"work mode select");
  sub_1D0F04(a1, a3, 82, 0);
  sub_1DC754(a1, a2, a3, (int)"check phy pstate 02");
  sub_1D0F04(a1, a3, 84, -1);
  usleep(0x64u);
  return 0;
}
