int set_phy_external_bist_result_rvn()
{
  char v1[132]; // [sp+0h] [bp-84h] BYREF

  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist err cnt> %lld", *(_QWORD *)&dword_18D368);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist lost cnt> %lld", *(_QWORD *)&dword_18D370);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy lost lane num> %d", dword_18D360);
  memset(v1, 0, 0x80u);
  return sprintf(v1, "<phy err lane num> %d", dword_18D364);
}
