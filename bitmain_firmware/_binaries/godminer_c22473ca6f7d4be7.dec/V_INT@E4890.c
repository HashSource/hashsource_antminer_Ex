int __fastcall V_INT(int a1, char *s, __int64 a3)
{
  _DWORD *v3; // r12

  LOWORD(v3) = -14496;
  HIWORD(v3) = (unsigned int)&unk_16B56C >> 16;
  ++*v3;
  *(_DWORD *)(a1 + 4) = strlen(s);
  *(_DWORD *)a1 = s;
  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 8) = 3;
  *(_DWORD *)(a1 + 24) = 0;
  return a1;
}
