int set_phy_external_bist_result_rvn()
{
  char s[128]; // [sp+0h] [bp-84h] BYREF

  memset(s, 0, sizeof(s));
  sprintf(s, "<phy bist err cnt> %ld", dword_C25908);
  memset(s, 0, sizeof(s));
  sprintf(s, "<phy bist lost cnt> %ld", dword_C25910);
  memset(s, 0, sizeof(s));
  sprintf(s, "<phy lost lane num> %d", dword_C25918);
  memset(s, 0, sizeof(s));
  return sprintf(s, "<phy err lane num> %d", dword_C2591C);
}
