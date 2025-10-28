int make_fake_version()
{
  char s[64]; // [sp+8h] [bp-44h] BYREF

  sprintf(s, "%s %s", "Apr 22 2025", "12:10:15");
  strcpy(g_miner_compiletime, s);
  strcpy(g_miner_type, "Antminer unknow");
  return *(_DWORD *)"Antminer unknow";
}
