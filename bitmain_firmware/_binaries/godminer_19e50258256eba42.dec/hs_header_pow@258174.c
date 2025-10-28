int __fastcall hs_header_pow(_DWORD *a1, void *a2)
{
  unsigned int v5[3]; // [sp+8h] [bp-47Ch] BYREF
  unsigned int v6[100]; // [sp+F8h] [bp-38Ch] BYREF
  _DWORD v7[60]; // [sp+288h] [bp-1FCh] BYREF
  char v8[32]; // [sp+378h] [bp-10Ch] BYREF
  char v9[64]; // [sp+398h] [bp-ECh] BYREF
  char v10[32]; // [sp+3D8h] [bp-ACh] BYREF
  char v11[8]; // [sp+3F8h] [bp-8Ch] BYREF
  char v12[128]; // [sp+400h] [bp-84h] BYREF

  hs_header_padding((int)a1, (int)v11, 8u);
  hs_header_padding((int)a1, (int)v10, 0x20u);
  hs_header_share_encode(a1, v12);
  hs_blake2b_init(v7, 0x40u);
  hs_blake2b_update((int)v7, v12, 0x80u);
  hs_blake2b_final((int)v7, v9, 0x40u);
  hs_sha3_256_init(v6);
  hs_sha3_update(v6, v12, 0x80u);
  hs_sha3_update(v6, v11, 8u);
  hs_sha3_final(v6, v8);
  hs_blake2b_init(v5, 0x20u);
  hs_blake2b_update((int)v5, v9, 0x40u);
  hs_blake2b_update((int)v5, v10, 0x20u);
  hs_blake2b_update((int)v5, v8, 0x20u);
  return hs_blake2b_final((int)v5, a2, 0x20u);
}
