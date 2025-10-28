int set_phy_external_bist_result()
{
  _DWORD *v0; // r4
  const char *v1; // r1
  const char *v2; // r1
  const char *v3; // r1
  const char *v4; // r1
  char v6[132]; // [sp+0h] [bp-84h] BYREF

  LOWORD(v0) = 12024;
  memset(v6, 0, 0x80u);
  HIWORD(v0) = (unsigned int)&unk_1A3DE8 >> 16;
  LOWORD(v1) = -10948;
  HIWORD(v1) = (unsigned int)"ing_fuart_cfg_KAS_2380" >> 16;
  sprintf(v6, v1, v0[4], v0[5]);
  memset(v6, 0, 0x80u);
  LOWORD(v2) = -10928;
  HIWORD(v2) = (unsigned int)"80" >> 16;
  sprintf(v6, v2, v0[6], v0[7]);
  memset(v6, 0, 0x80u);
  LOWORD(v3) = -10908;
  HIWORD(v3) = (unsigned int)"rive_strenth_all_KAS_2380" >> 16;
  sprintf(v6, v3, v0[2]);
  memset(v6, 0, 0x80u);
  LOWORD(v4) = -10884;
  HIWORD(v4) = (unsigned int)"0" >> 16;
  return sprintf(v6, v4, v0[3]);
}
