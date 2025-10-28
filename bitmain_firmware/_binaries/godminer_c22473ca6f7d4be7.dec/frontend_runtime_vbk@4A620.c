void *frontend_runtime_vbk()
{
  int v0; // r1
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r2
  int v4; // r12
  int v5; // r3
  void *v6; // r0

  LOWORD(v0) = 2468;
  LOWORD(v1) = 25288;
  LOWORD(v2) = 3380;
  HIWORD(v1) = (unsigned int)&g_miner_compiletime[192] >> 16;
  HIWORD(v0) = (unsigned int)&loc_30A14 >> 16;
  HIWORD(v2) = (unsigned int)&loc_30DA4 >> 16;
  LOWORD(v3) = 1212;
  v1[3] = v0;
  HIWORD(v3) = (unsigned int)&loc_3052C >> 16;
  v1[4] = v2;
  LOWORD(v4) = 964;
  LOWORD(v5) = -23084;
  LOWORD(v0) = -27376;
  LOWORD(v2) = -25224;
  v1[5] = v3;
  HIWORD(v4) = (unsigned int)&loc_30434 >> 16;
  HIWORD(v5) = (unsigned int)&locret_4A61C >> 16;
  HIWORD(v0) = (unsigned int)&loc_49558 >> 16;
  HIWORD(v2) = (unsigned int)&loc_49DC0 >> 16;
  LOWORD(v3) = -30384;
  v1[6] = v4;
  v1[7] = v5;
  HIWORD(v3) = (unsigned int)&loc_48998 >> 16;
  v1[8] = v0;
  LOWORD(v4) = -29880;
  v1[9] = v2;
  LOWORD(v5) = -30068;
  LOWORD(v0) = -30564;
  LOWORD(v2) = -30296;
  v1[11] = v3;
  HIWORD(v4) = (unsigned int)&loc_48B90 >> 16;
  HIWORD(v5) = (unsigned int)&loc_48AD4 >> 16;
  HIWORD(v0) = (unsigned int)&loc_488E4 >> 16;
  HIWORD(v2) = (unsigned int)&loc_489F0 >> 16;
  LOWORD(v3) = -28360;
  v1[12] = v4;
  HIWORD(v3) = (unsigned int)&loc_49180 >> 16;
  v1[13] = v5;
  LOWORD(v4) = -29380;
  v1[10] = v0;
  LOWORD(v5) = -30048;
  v1[14] = v2;
  LOWORD(v0) = -29960;
  LOWORD(v2) = -29976;
  v1[15] = v3;
  HIWORD(v4) = (unsigned int)&loc_48D84 >> 16;
  HIWORD(v5) = (unsigned int)&dbl_E82C8 >> 16;
  HIWORD(v0) = (unsigned int)&loc_E8320 >> 16;
  HIWORD(v2) = (unsigned int)&loc_E8310 >> 16;
  LOWORD(v3) = 7192;
  v1[16] = v4;
  HIWORD(v3) = (unsigned int)"ster/util.c" >> 16;
  v1[20] = v5;
  v1[21] = v0;
  v1[22] = v2;
  v1[23] = v3;
  v1[24] = 60;
  v1[17] = 0;
  v1[18] = 0;
  v1[19] = 0;
  v6 = calloc(1u, 0x60u);
  return memcpy(v6, v1 + 2, 0x60u);
}
