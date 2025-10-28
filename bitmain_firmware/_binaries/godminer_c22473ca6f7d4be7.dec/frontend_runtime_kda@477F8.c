void *frontend_runtime_kda()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 2468;
  LOWORD(v1) = 25080;
  HIWORD(v0) = (unsigned int)&loc_30A14 >> 16;
  HIWORD(v1) = (unsigned int)&opt_api_remote >> 16;
  LOWORD(v2) = 3380;
  LOWORD(v3) = 1212;
  LOWORD(v4) = 964;
  *(_DWORD *)(v1 + 0xC) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_30DA4 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3052C >> 16;
  HIWORD(v4) = (unsigned int)&loc_30434 >> 16;
  LOWORD(v0) = -18560;
  WORD2(v0) = -21184;
  *(_DWORD *)(v1 + 0x10) = v2;
  WORD1(v0) = (unsigned int)&loc_3B7F0 >> 16;
  *(_DWORD *)(v1 + 0x14) = v3;
  HIWORD(v0) = (unsigned int)&loc_3ADB0 >> 16;
  *(_DWORD *)(v1 + 0x18) = v4;
  LOWORD(v2) = -18512;
  LOWORD(v3) = 30524;
  LOWORD(v4) = 30632;
  *(_DWORD *)(v1 + 0x1C) = v0;
  HIWORD(v2) = (unsigned int)&loc_3B820 >> 16;
  *(_DWORD *)(v1 + 0x20) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_47784 >> 16;
  HIWORD(v4) = (unsigned int)&loc_477F0 >> 16;
  LOWORD(v0) = 29556;
  WORD2(v0) = 30300;
  *(_DWORD *)(v1 + 0x24) = v2;
  *(_DWORD *)(v1 + 0x2C) = v3;
  WORD1(v0) = (unsigned int)&loc_473BC >> 16;
  *(_DWORD *)(v1 + 0x30) = v4;
  HIWORD(v0) = (unsigned int)&loc_476A4 >> 16;
  LOWORD(v2) = 28588;
  LOWORD(v3) = -20496;
  LOWORD(v4) = -19244;
  *(_DWORD *)(v1 + 0x34) = v0;
  *(_DWORD *)(v1 + 0x28) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_46FF4 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B060 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3B544 >> 16;
  LOWORD(v0) = 29612;
  WORD2(v0) = 28836;
  *(_DWORD *)(v1 + 0x38) = v2;
  WORD1(v0) = (unsigned int)&loc_473F4 >> 16;
  *(_DWORD *)(v1 + 0x3C) = v3;
  HIWORD(v0) = (unsigned int)&loc_470EC >> 16;
  *(_DWORD *)(v1 + 0x40) = v4;
  LOWORD(v2) = -22060;
  LOWORD(v3) = -30800;
  LOWORD(v4) = -31280;
  *(_DWORD *)(v1 + 0x44) = v0;
  HIWORD(v2) = (unsigned int)&loc_3AA44 >> 16;
  *(_DWORD *)(v1 + 0x48) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_E7FD8 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E7DF8 >> 16;
  LOWORD(v0) = -31512;
  WORD2(v0) = 7192;
  WORD1(v0) = (unsigned int)&loc_E7D10 >> 16;
  *(_DWORD *)(v1 + 0x4C) = v2;
  HIWORD(v0) = (unsigned int)"ster/util.c" >> 16;
  *(_DWORD *)(v1 + 0x50) = v3;
  *(_DWORD *)(v1 + 0x54) = v4;
  *(_QWORD *)(v1 + 0x58) = v0;
  *(_DWORD *)(v1 + 0x60) = 70;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)(v1 + 8), 0x60u);
}
