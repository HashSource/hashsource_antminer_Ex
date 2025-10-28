int __fastcall equihash_blake2b_init(void *a1, unsigned __int8 a2)
{
  _BYTE v5[4]; // [sp+8h] [bp-44h] BYREF
  int v6; // [sp+Ch] [bp-40h] BYREF
  _BYTE v7[56]; // [sp+10h] [bp-3Ch] BYREF

  if ( !a2 || a2 > 0x40u )
    return -1;
  v5[0] = a2;
  v5[1] = 0;
  v5[2] = 1;
  v5[3] = 1;
  sub_233A30(&v6, 0);
  sub_233AE0((int)v7, 0);
  memset(&v7[8], 0, 48);
  return blake2b_init_param(a1, (int)v5);
}
