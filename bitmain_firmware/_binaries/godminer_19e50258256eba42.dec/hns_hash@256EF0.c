int __fastcall hns_hash(int a1, void *a2)
{
  _BYTE dest[18]; // [sp+8h] [bp-124h] BYREF
  _BYTE v6[6]; // [sp+1Ah] [bp-112h] BYREF
  _DWORD v7[2]; // [sp+20h] [bp-10Ch] BYREF
  __int64 v8; // [sp+28h] [bp-104h]
  int v9; // [sp+30h] [bp-FCh] BYREF
  int v10; // [sp+44h] [bp-E8h] BYREF
  int v11; // [sp+64h] [bp-C8h] BYREF
  int v12; // [sp+84h] [bp-A8h] BYREF
  int v13; // [sp+A4h] [bp-88h] BYREF
  int v14; // [sp+BCh] [bp-70h] BYREF
  int v15; // [sp+DCh] [bp-50h] BYREF
  _DWORD v16[11]; // [sp+FCh] [bp-30h] BYREF

  hs_header_init(v7);
  v16[9] = sub_256AC8((unsigned int *)a1);
  v16[8] = sub_256AC8((unsigned int *)(a1 + 4));
  sub_256B2C((int)v16, a1 + 8, 32);
  sub_256B2C((int)&v15, a1 + 40, 32);
  sub_256B2C((int)&v14, a1 + 72, 32);
  memcpy(dest, (const void *)(a1 + 104), 0x10u);
  dest[16] = *(_BYTE *)(a1 + 250);
  dest[17] = *(_BYTE *)(a1 + 251);
  memcpy(v6, (const void *)(a1 + 120), sizeof(v6));
  sub_256B2C((int)&v13, (int)dest, 24);
  sub_256B2C((int)&v12, a1 + 126, 32);
  sub_256B2C((int)&v11, a1 + 158, 32);
  sub_256B2C((int)&v10, a1 + 190, 32);
  sub_256B2C((int)&v9, a1 + 222, 20);
  v8 = sub_256AC8((unsigned int *)(a1 + 246));
  v7[0] = sub_256AC8((unsigned int *)(a1 + 252));
  return hs_header_pow(v7, a2);
}
