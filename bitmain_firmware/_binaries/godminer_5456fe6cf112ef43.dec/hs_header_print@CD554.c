int __fastcall hs_header_print(_DWORD *a1, const char *a2)
{
  char v5[52]; // [sp+4h] [bp-1D0h] BYREF
  char v6[68]; // [sp+38h] [bp-19Ch] BYREF
  char v7[68]; // [sp+7Ch] [bp-158h] BYREF
  char v8[68]; // [sp+C0h] [bp-114h] BYREF
  char v9[68]; // [sp+104h] [bp-D0h] BYREF
  char v10[68]; // [sp+148h] [bp-8Ch] BYREF
  char v11[72]; // [sp+18Ch] [bp-48h] BYREF

  printf("%sheader\n", a2);
  printf("%s  nonce=%u\n", a2, *a1);
  printf("%s  time=%u\n", a2, a1[2]);
  printf("%s  mask_hash=%s\n", a2, v8);
  printf("%s  prev_block=%s\n", a2, v6);
  printf("%s  name_root=%s\n", a2, v7);
  printf("%s  extra_nonce=%s\n", a2, v5);
  printf("%s  reserved_root=%s\n", a2, v9);
  printf("%s  witness_root=%s\n", a2, v10);
  printf("%s  merkle_root=%s\n", a2, v11);
  printf("%s  version=%u\n", a2, a1[63]);
  return printf("%s  bits=%u\n", a2, a1[64]);
}
