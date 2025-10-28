int __fastcall V_BOOL(int a1, char *s, char a3)
{
  _DWORD *v3; // r3

  LOWORD(v3) = -14496;
  HIWORD(v3) = (unsigned int)&unk_16B56C >> 16;
  ++*v3;
  *(_DWORD *)(a1 + 4) = strlen(s);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = s;
  *(_QWORD *)(a1 + 8) = 2;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  return a1;
}
