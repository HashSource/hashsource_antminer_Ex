_DWORD *__fastcall get_seedhash_by_block_num_rvn(_DWORD *a1, int a2, int a3, int a4)
{
  unsigned __int64 v7; // r6
  unsigned int i; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  _DWORD v16[9]; // [sp+0h] [bp-24h] BYREF

  memset(v16, 0, 0x20u);
  v7 = sub_12E934(a3, a4, 60000, 0);
  if ( v7 )
  {
    for ( i = 0; i < v7; ++i )
      eth_sha3_256(v16, 32, v16);
  }
  v9 = v16[1];
  v10 = v16[2];
  v11 = v16[3];
  *a1 = v16[0];
  a1[1] = v9;
  a1[2] = v10;
  a1[3] = v11;
  v12 = v16[5];
  v13 = v16[6];
  v14 = v16[7];
  a1[4] = v16[4];
  a1[5] = v12;
  a1[6] = v13;
  a1[7] = v14;
  return a1;
}
