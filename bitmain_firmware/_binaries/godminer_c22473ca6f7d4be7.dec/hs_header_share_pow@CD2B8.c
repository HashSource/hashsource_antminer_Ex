int __fastcall hs_header_share_pow(unsigned __int64 *a1, char *a2)
{
  unsigned __int64 v5[4]; // [sp+0h] [bp-3D4h] BYREF
  unsigned __int64 v6[8]; // [sp+20h] [bp-3B4h] BYREF
  _BYTE v7[240]; // [sp+60h] [bp-374h] BYREF
  _BYTE v8[240]; // [sp+150h] [bp-284h] BYREF
  int v9[101]; // [sp+240h] [bp-194h] BYREF

  hs_blake2b_update((int)v7, a1, 0x80u);
  hs_sha3_256_init(v9);
  hs_sha3_update(v9, (char *)a1, 0x80u);
  hs_sha3_update(v9, a2, 8u);
  hs_sha3_final(v9, v5);
  hs_blake2b_update((int)v8, v6, 0x40u);
  hs_blake2b_update((int)v8, (unsigned __int64 *)a2, 0x20u);
  return hs_blake2b_update((int)v8, v5, 0x20u);
}
