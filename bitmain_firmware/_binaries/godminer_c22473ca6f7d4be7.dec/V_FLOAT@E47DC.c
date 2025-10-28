int __fastcall V_FLOAT(int a1, char *s)
{
  __int64 v2; // d0
  _DWORD *v3; // r3
  size_t v6; // r0

  LOWORD(v3) = -14496;
  HIWORD(v3) = (unsigned int)&unk_16B56C >> 16;
  ++*v3;
  v6 = strlen(s);
  *(_QWORD *)(a1 + 16) = v2;
  *(_DWORD *)(a1 + 4) = v6;
  *(_DWORD *)a1 = s;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 24) = 0;
  return a1;
}
