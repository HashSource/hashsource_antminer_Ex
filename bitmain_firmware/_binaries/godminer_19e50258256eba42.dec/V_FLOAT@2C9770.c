int __fastcall V_FLOAT(int a1, const char *a2)
{
  __int64 v2; // d0
  size_t v3; // r0

  ++dword_C26A7C;
  v3 = strlen(a2);
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = v3;
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = v2;
  *(_DWORD *)(a1 + 24) = 0;
  return a1;
}
