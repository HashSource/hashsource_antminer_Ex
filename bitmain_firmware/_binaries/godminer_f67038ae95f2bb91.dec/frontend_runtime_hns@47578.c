void *frontend_runtime_hns()
{
  int v0; // r12
  __int64 v1; // r2
  int v2; // r1
  int v3; // r0
  void *v4; // r0

  LOWORD(v0) = 15308;
  LOWORD(v1) = 16428;
  WORD2(v1) = 14052;
  HIWORD(v0) = (unsigned int)&loc_32218 >> 16;
  WORD1(v1) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v1) = (unsigned int)&loc_31D30 >> 16;
  LOWORD(v2) = 13804;
  LOWORD(v3) = -5800;
  dword_195750 = v0;
  qword_195754 = v1;
  HIWORD(v2) = (unsigned int)&loc_31C38 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3D024 >> 16;
  LOWORD(v0) = -9280;
  LOWORD(v1) = -8592;
  WORD2(v1) = 24640;
  dword_19575C = v2;
  dword_195760 = v3;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  WORD1(v1) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v1) = (unsigned int)&loc_42058 >> 16;
  LOWORD(v2) = 26108;
  LOWORD(v3) = 24584;
  dword_195764 = v0;
  HIWORD(v2) = (unsigned int)&loc_42614 >> 16;
  qword_195768 = v1;
  HIWORD(v3) = (unsigned int)&loc_42020 >> 16;
  LOWORD(v0) = -7920;
  LOWORD(v1) = -6484;
  WORD2(v1) = 26368;
  dword_195770 = v2;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  dword_195774 = v3;
  WORD1(v1) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v1) = (unsigned int)&loc_42718 >> 16;
  LOWORD(v2) = 25352;
  LOWORD(v3) = -10152;
  dword_195778 = v0;
  qword_19577C = v1;
  HIWORD(v2) = (unsigned int)&loc_42320 >> 16;
  HIWORD(v3) = (unsigned int)&loc_3BF28 >> 16;
  LOWORD(v0) = -29384;
  LOWORD(v1) = -29496;
  WORD2(v1) = -29476;
  HIWORD(v0) = (unsigned int)&loc_50F20 >> 16;
  WORD1(v1) = (unsigned int)&locret_50EB0 >> 16;
  HIWORD(v1) = (unsigned int)sub_50EC4 >> 16;
  dword_195784 = v2;
  dword_195788 = v3;
  *(_QWORD *)&dword_195790 = v1;
  dword_19578C = v0;
  v4 = calloc(1u, 0x54u);
  return memcpy(v4, &dword_195750, 0x54u);
}
