_DWORD *__fastcall V_STR(_DWORD *a1, char *s, const char *a3)
{
  _DWORD *v3; // r3
  size_t v7; // r7

  LOWORD(v3) = -14496;
  HIWORD(v3) = (unsigned int)&unk_16B56C >> 16;
  ++*v3;
  v7 = strlen(s);
  a1[6] = strlen(a3);
  *a1 = s;
  a1[1] = v7;
  a1[2] = 0;
  a1[3] = 0;
  a1[5] = 0;
  a1[7] = 0;
  a1[4] = a3;
  return a1;
}
