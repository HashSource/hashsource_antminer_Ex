int make_fake_version()
{
  int v0; // r3
  int v1; // r2
  const char *v2; // r1
  int v3; // r4
  int *v4; // r3
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  char v9[64]; // [sp+0h] [bp-40h] BYREF

  LOWORD(v0) = 28944;
  LOWORD(v1) = 28308;
  LOWORD(v2) = 27852;
  LOWORD(v3) = 18864;
  HIWORD(v0) = (unsigned int)"ine-terminated string" >> 16;
  HIWORD(v1) = (unsigned int)"ile '%s' failed %s" >> 16;
  HIWORD(v2) = (unsigned int)&unk_177F10 >> 16;
  HIWORD(v3) = (unsigned int)&unk_1958A0 >> 16;
  sprintf(v9, v2, v1, v0);
  strcpy((char *)(v3 + 80), v9);
  LOWORD(v4) = 28320;
  v3 += 144;
  HIWORD(v4) = (unsigned int)"led %s" >> 16;
  result = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = v4[3];
  *(_DWORD *)v3 = result;
  *(_DWORD *)(v3 + 4) = v6;
  *(_DWORD *)(v3 + 8) = v7;
  *(_DWORD *)(v3 + 12) = v8;
  return result;
}
