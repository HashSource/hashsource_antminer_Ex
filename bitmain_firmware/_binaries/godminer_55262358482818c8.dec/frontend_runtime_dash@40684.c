void *frontend_runtime_dash()
{
  int v0; // r12
  int v1; // r2
  int v2; // r3
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  LOWORD(v0) = 15308;
  LOWORD(v1) = 16428;
  LOWORD(v2) = 14052;
  HIWORD(v0) = (unsigned int)&loc_32218 >> 16;
  HIWORD(v1) = (unsigned int)&loc_32678 >> 16;
  HIWORD(v2) = (unsigned int)&loc_31D30 >> 16;
  LOWORD(v3) = 13804;
  LOWORD(v4) = -5800;
  dword_1955C0 = v0;
  dword_1955C4 = v1;
  HIWORD(v3) = (unsigned int)&loc_31C38 >> 16;
  dword_1955C8 = v2;
  HIWORD(v4) = (unsigned int)&loc_3D024 >> 16;
  LOWORD(v0) = -9280;
  LOWORD(v1) = -8592;
  LOWORD(v2) = -5752;
  dword_1955CC = v3;
  dword_1955D0 = v4;
  HIWORD(v0) = (unsigned int)&loc_3C290 >> 16;
  HIWORD(v1) = (unsigned int)&loc_3C540 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3D054 >> 16;
  LOWORD(v4) = -1808;
  dword_1955D4 = v0;
  dword_1955D8 = v1;
  HIWORD(v4) = (unsigned int)&loc_3DFBC >> 16;
  dword_1955DC = v2;
  LOWORD(v0) = -7920;
  LOWORD(v1) = -6484;
  LOWORD(v2) = -1700;
  dword_1955E0 = 263608;
  HIWORD(v0) = (unsigned int)&loc_3C7DC >> 16;
  dword_1955E4 = v4;
  HIWORD(v1) = (unsigned int)&loc_3CD78 >> 16;
  HIWORD(v2) = (unsigned int)&loc_3E028 >> 16;
  LOWORD(v3) = -2564;
  LOWORD(v4) = -10152;
  dword_1955E8 = v0;
  dword_1955EC = v1;
  HIWORD(v3) = (unsigned int)&loc_3DCC8 >> 16;
  dword_1955F0 = v2;
  HIWORD(v4) = (unsigned int)&loc_3BF28 >> 16;
  dword_1955F4 = v3;
  dword_1955F8 = v4;
  *(_QWORD *)&dword_195600 = 0x56A5000056AE8LL;
  dword_1955FC = 355496;
  v5 = calloc(1u, 0x54u);
  return memcpy(v5, &dword_1955C0, 0x54u);
}
