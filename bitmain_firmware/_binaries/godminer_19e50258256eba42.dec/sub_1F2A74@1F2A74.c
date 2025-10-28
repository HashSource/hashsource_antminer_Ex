bool __fastcall sub_1F2A74(int a1, char a2, char a3, const void *a4, size_t n)
{
  _BYTE v7[2]; // [sp+20h] [bp-14h] BYREF
  __int16 v8; // [sp+22h] [bp-12h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  memcpy(&v8, a4, n);
  return sub_1F2578(a1, 0x3Bu, v7, n + 2, 0, 0, 0) == 0;
}
