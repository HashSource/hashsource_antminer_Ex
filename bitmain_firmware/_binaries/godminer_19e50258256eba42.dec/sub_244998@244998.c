int __fastcall sub_244998(const void *a1, int a2, void *a3, unsigned __int8 a4)
{
  _BYTE dest[364]; // [sp+10h] [bp-174h] BYREF
  int v9; // [sp+17Ch] [bp-8h] BYREF

  v9 = convirt_total_rate(a2);
  memcpy(dest, a1, 0x168u);
  equihash_blake2b_update((int)dest, (char *)&v9, 4u);
  return equihash_blake2b_final((int)dest, a3, a4);
}
