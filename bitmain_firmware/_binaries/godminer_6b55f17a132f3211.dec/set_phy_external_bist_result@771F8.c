int set_phy_external_bist_result()
{
  char v1[132]; // [sp+0h] [bp-84h] BYREF

  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist err cnt> %lld", *(_QWORD *)&dword_176F08);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy bist lost cnt> %lld", *(_QWORD *)&dword_176F10);
  memset(v1, 0, 0x80u);
  sprintf(v1, "<phy lost lane num> %d", dword_176F00);
  memset(v1, 0, 0x80u);
  return sprintf(v1, "<phy err lane num> %d", dword_176F04);
}
