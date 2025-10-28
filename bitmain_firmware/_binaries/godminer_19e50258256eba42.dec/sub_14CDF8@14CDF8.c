bool __fastcall sub_14CDF8(int a1, char a2, char a3, void *dest, size_t n)
{
  _BYTE v6[4]; // [sp+24h] [bp-8h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  v6[2] = n;
  return sub_14C7EC(a1, 0x51u, v6, 3u, 1, dest, n) == 0;
}
