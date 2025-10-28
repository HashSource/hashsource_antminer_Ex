int __fastcall read_seed_val(_DWORD *a1)
{
  _DWORD *v1; // r5
  int v2; // r4
  int v4; // lr
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD v12[9]; // [sp+4h] [bp-24h] BYREF

  v1 = v12;
  v2 = 288;
  memset(&v12[1], 0, 0x20u);
  do
  {
    fpga_read(v2, v12);
    v2 -= 4;
    v1[1] = v12[0];
    ++v1;
  }
  while ( v2 != 256 );
  if ( !a1 )
    return -1;
  v4 = 0;
  v5 = v12[2];
  v6 = v12[3];
  v7 = v12[4];
  *a1 = v12[1];
  a1[1] = v5;
  a1[2] = v6;
  a1[3] = v7;
  v8 = v12[6];
  v9 = v12[7];
  v10 = v12[8];
  a1[4] = v12[5];
  a1[5] = v8;
  a1[6] = v9;
  a1[7] = v10;
  return v4;
}
