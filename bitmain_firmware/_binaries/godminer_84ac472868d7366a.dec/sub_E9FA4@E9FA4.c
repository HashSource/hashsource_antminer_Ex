int __fastcall sub_E9FA4(int a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6, __int64 a7)
{
  _DWORD *v10; // r0
  int v11; // r1
  int result; // r0

  v10 = memset((void *)(a1 + 40), 0, 0x20u);
  v11 = a2 + a3;
  *(_DWORD *)(v11 - 4) = bswap32(a5);
  *(_DWORD *)(v11 - 8) = bswap32(a6);
  result = blake2b(v10, a2, a3);
  *(_QWORD *)(a1 + 32) = a7;
  return result;
}
