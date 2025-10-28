void *frontend_runtime_hns()
{
  __int64 v0; // r2
  int v1; // r4
  int v2; // r12
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  WORD2(v0) = 2468;
  LOWORD(v1) = 24912;
  HIWORD(v0) = (unsigned int)&loc_30A14 >> 16;
  HIWORD(v1) = (unsigned int)&unk_165028 >> 16;
  LOWORD(v2) = 3380;
  LOWORD(v3) = 1212;
  LOWORD(v4) = 964;
  *(_DWORD *)(v1 + 0x48) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_30DA4 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3052C >> 16;
  HIWORD(v4) = (unsigned int)&loc_30434 >> 16;
  LOWORD(v0) = -18560;
  WORD2(v0) = -21184;
  *(_DWORD *)(v1 + 0x4C) = v2;
  WORD1(v0) = (unsigned int)&loc_3B7F0 >> 16;
  *(_DWORD *)(v1 + 0x50) = v3;
  HIWORD(v0) = (unsigned int)&loc_3ADB0 >> 16;
  *(_DWORD *)(v1 + 0x54) = v4;
  LOWORD(v2) = 21712;
  LOWORD(v3) = 23260;
  LOWORD(v4) = 21624;
  *(_DWORD *)(v1 + 0x58) = v0;
  HIWORD(v2) = (unsigned int)&loc_45518 >> 16;
  *(_DWORD *)(v1 + 0x5C) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&loc_45B24 >> 16;
  HIWORD(v4) = (unsigned int)&loc_454C0 >> 16;
  LOWORD(v0) = 21656;
  WORD2(v0) = 23480;
  *(_DWORD *)(v1 + 0x60) = v2;
  *(_DWORD *)(v1 + 0x68) = v3;
  WORD1(v0) = (unsigned int)&loc_454E0 >> 16;
  *(_DWORD *)(v1 + 0x6C) = v4;
  HIWORD(v0) = (unsigned int)&loc_45C00 >> 16;
  LOWORD(v2) = 21588;
  LOWORD(v3) = -20496;
  LOWORD(v4) = -19244;
  *(_DWORD *)(v1 + 0x70) = v0;
  *(_DWORD *)(v1 + 0x64) = HIDWORD(v0);
  HIWORD(v2) = (unsigned int)&loc_4549C >> 16;
  HIWORD(v3) = (unsigned int)&loc_3B060 >> 16;
  HIWORD(v4) = (unsigned int)&loc_3B544 >> 16;
  LOWORD(v0) = 23920;
  WORD2(v0) = 22424;
  *(_DWORD *)(v1 + 0x74) = v2;
  WORD1(v0) = (unsigned int)&loc_45DB8 >> 16;
  *(_DWORD *)(v1 + 0x78) = v3;
  HIWORD(v0) = (unsigned int)&loc_457E0 >> 16;
  *(_DWORD *)(v1 + 0x7C) = v4;
  LOWORD(v2) = -22060;
  LOWORD(v3) = -31584;
  LOWORD(v4) = -31896;
  *(_DWORD *)(v1 + 0x80) = v0;
  HIWORD(v2) = (unsigned int)&loc_3AA44 >> 16;
  *(_DWORD *)(v1 + 0x84) = HIDWORD(v0);
  HIWORD(v3) = (unsigned int)&dbl_E7CC8 >> 16;
  HIWORD(v4) = (unsigned int)&loc_E7B90 >> 16;
  LOWORD(v0) = -32048;
  WORD2(v0) = 10680;
  WORD1(v0) = (unsigned int)&loc_E7AF8 >> 16;
  *(_DWORD *)(v1 + 0x88) = v2;
  HIWORD(v0) = (unsigned int)" decode failed(%d): %s" >> 16;
  *(_DWORD *)(v1 + 0x8C) = v3;
  *(_DWORD *)(v1 + 0x90) = v4;
  *(_QWORD *)(v1 + 0x94) = v0;
  *(_DWORD *)(v1 + 0x9C) = 60;
  v5 = calloc(1u, 0x60u);
  return memcpy(v5, (const void *)(v1 + 68), 0x60u);
}
