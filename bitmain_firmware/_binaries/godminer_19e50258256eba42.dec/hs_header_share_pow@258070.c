int __fastcall hs_header_share_pow(char *a1, char *a2, void *a3)
{
  unsigned int v7[60]; // [sp+10h] [bp-3D4h] BYREF
  unsigned int v8[100]; // [sp+100h] [bp-2E4h] BYREF
  _DWORD v9[60]; // [sp+290h] [bp-154h] BYREF
  char v10[32]; // [sp+380h] [bp-64h] BYREF
  char v11[64]; // [sp+3A0h] [bp-44h] BYREF

  hs_blake2b_init(v9, 0x40u);
  hs_blake2b_update((int)v9, a1, 0x80u);
  hs_blake2b_final((int)v9, v11, 0x40u);
  hs_sha3_256_init(v8);
  hs_sha3_update(v8, a1, 0x80u);
  hs_sha3_update(v8, a2, 8u);
  hs_sha3_final(v8, v10);
  hs_blake2b_init(v7, 0x20u);
  hs_blake2b_update((int)v7, v11, 0x40u);
  hs_blake2b_update((int)v7, a2, 0x20u);
  hs_blake2b_update((int)v7, v10, 0x20u);
  return hs_blake2b_final((int)v7, a3, 0x20u);
}
