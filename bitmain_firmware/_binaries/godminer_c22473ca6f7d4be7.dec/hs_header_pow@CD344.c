int __fastcall hs_header_pow(_BYTE *a1)
{
  char *v1; // r2
  char *v2; // r12
  char *v3; // r1
  char v4; // r3
  char v5; // t1
  char v6; // t1
  _BYTE *v7; // r12
  char *v8; // r2
  _BYTE *v9; // r1
  char v10; // r3
  char v11; // t1
  char v12; // t1
  unsigned __int64 *v14; // [sp+4h] [bp-47Ch] BYREF
  char v15[7]; // [sp+8h] [bp-478h] BYREF
  char v16; // [sp+Fh] [bp-471h] BYREF
  unsigned __int64 v17[3]; // [sp+10h] [bp-470h] BYREF
  char v18; // [sp+2Fh] [bp-451h] BYREF
  unsigned __int64 v19[4]; // [sp+30h] [bp-450h] BYREF
  unsigned __int64 v20[8]; // [sp+50h] [bp-430h] BYREF
  unsigned __int64 v21[16]; // [sp+90h] [bp-3F0h] BYREF
  _BYTE v22[240]; // [sp+110h] [bp-370h] BYREF
  _BYTE v23[240]; // [sp+200h] [bp-280h] BYREF
  int v24[100]; // [sp+2F0h] [bp-190h] BYREF

  v1 = a1 + 36;
  v2 = a1 + 68;
  v3 = (char *)&v14 + 3;
  do
  {
    v5 = *v1++;
    v4 = v5;
    v6 = *v2++;
    *++v3 = v4 ^ v6;
  }
  while ( v1 != a1 + 44 );
  v7 = a1 + 35;
  v8 = &v16;
  v9 = a1 + 67;
  do
  {
    v11 = *++v7;
    v10 = v11;
    v12 = *++v9;
    *++v8 = v10 ^ v12;
  }
  while ( v8 != &v18 );
  v14 = v21;
  hs_header_share_write((int)a1, (int *)&v14);
  hs_blake2b_update((int)v22, v21, 0x80u);
  hs_sha3_256_init(v24);
  hs_sha3_update(v24, (char *)v21, 0x80u);
  hs_sha3_update(v24, v15, 8u);
  hs_sha3_final(v24, v19);
  hs_blake2b_update((int)v23, v20, 0x40u);
  hs_blake2b_update((int)v23, v17, 0x20u);
  return hs_blake2b_update((int)v23, v19, 0x20u);
}
