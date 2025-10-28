int __fastcall hs_header_print(_DWORD *a1, const char *a2)
{
  char v5[68]; // [sp+8h] [bp-1FCh] BYREF
  char v6[68]; // [sp+4Ch] [bp-1B8h] BYREF
  char v7[68]; // [sp+90h] [bp-174h] BYREF
  char v8[52]; // [sp+D4h] [bp-130h] BYREF
  char v9[68]; // [sp+108h] [bp-FCh] BYREF
  char v10[68]; // [sp+14Ch] [bp-B8h] BYREF
  char v11[68]; // [sp+190h] [bp-74h] BYREF
  _BYTE v12[44]; // [sp+1D4h] [bp-30h] BYREF

  hs_hex_encode((int)(a1 + 4), 20, (int)v12);
  hs_hex_encode((int)(a1 + 9), 32, (int)v11);
  hs_hex_encode((int)(a1 + 17), 32, (int)v10);
  hs_hex_encode((int)(a1 + 25), 32, (int)v9);
  hs_hex_encode((int)(a1 + 33), 24, (int)v8);
  hs_hex_encode((int)(a1 + 39), 32, (int)v7);
  hs_hex_encode((int)(a1 + 47), 32, (int)v6);
  hs_hex_encode((int)(a1 + 55), 32, (int)v5);
  printf("%sheader\n", a2);
  printf("%s  nonce=%u\n", a2, *a1);
  printf("%s  time=%u\n", a2, a1[2]);
  printf("%s  mask_hash=%s\n", a2, v9);
  printf("%s  prev_block=%s\n", a2, v11);
  printf("%s  name_root=%s\n", a2, v10);
  printf("%s  extra_nonce=%s\n", a2, v8);
  printf("%s  reserved_root=%s\n", a2, v7);
  printf("%s  witness_root=%s\n", a2, v6);
  printf("%s  merkle_root=%s\n", a2, v5);
  printf("%s  version=%u\n", a2, a1[63]);
  return printf("%s  bits=%u\n", a2, a1[64]);
}
