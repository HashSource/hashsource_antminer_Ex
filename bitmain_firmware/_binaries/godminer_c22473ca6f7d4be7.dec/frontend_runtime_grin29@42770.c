void *frontend_runtime_grin29()
{
  int v0; // r1
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r2
  int v4; // r12
  int v5; // r3
  void *v6; // r0

  LOWORD(v0) = 2468;
  LOWORD(v1) = 24712;
  LOWORD(v2) = 3380;
  HIWORD(v1) = (unsigned int)&unk_164F60 >> 16;
  HIWORD(v0) = (unsigned int)&loc_30A14 >> 16;
  HIWORD(v2) = (unsigned int)&loc_30DA4 >> 16;
  LOWORD(v3) = 1212;
  v1[2] = v0;
  HIWORD(v3) = (unsigned int)&loc_3052C >> 16;
  v1[3] = v2;
  LOWORD(v4) = 964;
  LOWORD(v5) = -18560;
  LOWORD(v0) = 4136;
  LOWORD(v2) = -18512;
  v1[4] = v3;
  HIWORD(v4) = (unsigned int)&loc_30434 >> 16;
  HIWORD(v5) = (unsigned int)&loc_3B7F0 >> 16;
  HIWORD(v0) = (unsigned int)&loc_41070 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3B820 >> 16;
  LOWORD(v3) = -544;
  v1[5] = v4;
  v1[6] = v5;
  HIWORD(v3) = (unsigned int)&loc_3FE28 >> 16;
  v1[7] = v0;
  LOWORD(v4) = -240;
  v1[8] = v2;
  LOWORD(v5) = -716;
  LOWORD(v0) = 152;
  LOWORD(v2) = -856;
  v1[10] = v3;
  HIWORD(v4) = (unsigned int)&loc_3FF58 >> 16;
  HIWORD(v5) = (unsigned int)&loc_3FD7C >> 16;
  HIWORD(v0) = (unsigned int)&loc_400E0 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3FCF0 >> 16;
  LOWORD(v3) = -20496;
  v1[11] = v4;
  HIWORD(v3) = (unsigned int)&loc_3B060 >> 16;
  v1[12] = v5;
  LOWORD(v4) = 2672;
  v1[9] = v0;
  LOWORD(v5) = 31928;
  v1[13] = v2;
  LOWORD(v0) = 31856;
  LOWORD(v2) = 31936;
  v1[14] = v3;
  HIWORD(v4) = (unsigned int)&loc_40AB8 >> 16;
  HIWORD(v5) = (unsigned int)&loc_E74E0 >> 16;
  HIWORD(v0) = (unsigned int)&loc_E7498 >> 16;
  HIWORD(v2) = (unsigned int)&loc_E74E8 >> 16;
  LOWORD(v3) = -1128;
  v1[15] = v4;
  HIWORD(v3) = (unsigned int)"fan slow happend" >> 16;
  v1[19] = v5;
  v1[20] = v0;
  v1[21] = v2;
  v1[22] = v3;
  v1[23] = 60;
  v1[16] = 0;
  v1[17] = 0;
  v1[18] = 0;
  v6 = calloc(1u, 0x60u);
  return memcpy(v6, v1 + 1, 0x60u);
}
