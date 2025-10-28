void *frontend_runtime_eth()
{
  int v0; // r0
  _DWORD *v1; // r4
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r12
  void *v6; // r0

  LOWORD(v0) = 2468;
  LOWORD(v1) = 24612;
  LOWORD(v2) = 3380;
  HIWORD(v1) = (unsigned int)aOahznehzwstg >> 16;
  HIWORD(v0) = (unsigned int)&loc_30A14 >> 16;
  HIWORD(v2) = (unsigned int)&loc_30DA4 >> 16;
  LOWORD(v3) = 1212;
  LOWORD(v4) = 964;
  v1[2] = v0;
  v1[3] = v2;
  HIWORD(v3) = (unsigned int)&loc_3052C >> 16;
  HIWORD(v4) = (unsigned int)&loc_30434 >> 16;
  LOWORD(v5) = -18560;
  LOWORD(v0) = -2644;
  LOWORD(v2) = -18512;
  v1[4] = v3;
  HIWORD(v5) = (unsigned int)&loc_3B7F0 >> 16;
  v1[5] = v4;
  HIWORD(v0) = (unsigned int)&loc_3F5F4 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3B820 >> 16;
  LOWORD(v3) = -4396;
  LOWORD(v4) = -2848;
  v1[6] = v5;
  v1[7] = v0;
  HIWORD(v3) = (unsigned int)&loc_3EF1C >> 16;
  v1[8] = v2;
  HIWORD(v4) = (unsigned int)&loc_3F528 >> 16;
  LOWORD(v5) = -4492;
  LOWORD(v0) = -4804;
  LOWORD(v2) = -4592;
  v1[10] = v3;
  v1[11] = v4;
  HIWORD(v5) = (unsigned int)&loc_3EEBC >> 16;
  HIWORD(v0) = (unsigned int)&loc_3EDE8 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3EDA4 >> 16;
  LOWORD(v3) = -20496;
  LOWORD(v4) = -4184;
  v1[12] = v5;
  HIWORD(v3) = (unsigned int)&loc_3B060 >> 16;
  v1[9] = v0;
  HIWORD(v4) = (unsigned int)&loc_3EFF0 >> 16;
  v1[13] = v2;
  LOWORD(v5) = -4812;
  LOWORD(v0) = 28112;
  LOWORD(v2) = 28108;
  v1[14] = v3;
  HIWORD(v5) = (unsigned int)&loc_3EDE0 >> 16;
  v1[15] = v4;
  HIWORD(v0) = (unsigned int)&dbl_E6C88 >> 16;
  HIWORD(v2) = ((unsigned int)&dbl_E6C80 + 4) >> 16;
  LOWORD(v3) = 28116;
  LOWORD(v4) = 7192;
  HIWORD(v3) = ((unsigned int)&dbl_E6C88 + 4) >> 16;
  v1[17] = v5;
  HIWORD(v4) = (unsigned int)"ster/util.c" >> 16;
  v1[19] = v0;
  v1[20] = v2;
  v1[21] = v3;
  v1[22] = v4;
  v1[23] = 120;
  v1[16] = 0;
  v1[18] = 0;
  v6 = calloc(1u, 0x60u);
  return memcpy(v6, v1 + 1, 0x60u);
}
