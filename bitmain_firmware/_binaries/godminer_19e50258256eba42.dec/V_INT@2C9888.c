int __fastcall V_INT(int a1, const char *a2, __int64 a3)
{
  size_t v3; // r0

  ++dword_C26A7C;
  v3 = strlen(a2);
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = v3;
  *(_DWORD *)(a1 + 8) = 3;
  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = 0;
  return a1;
}
