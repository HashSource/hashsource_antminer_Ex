int __fastcall write_seed_val(_DWORD *a1)
{
  int v3; // r1
  unsigned int *v4; // r5
  int v5; // r2
  int v6; // r4
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  unsigned int v11; // t1
  int v12; // r0
  unsigned int v13; // r1
  _DWORD v14[8]; // [sp+0h] [bp-20h] BYREF
  char vars0; // [sp+20h] [bp+0h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( !a1 )
    return -1;
  v3 = a1[1];
  v4 = (unsigned int *)&vars0;
  v5 = a1[2];
  v6 = 260;
  v7 = a1[3];
  v14[0] = *a1;
  v14[1] = v3;
  v14[2] = v5;
  v14[3] = v7;
  v8 = a1[5];
  v9 = a1[6];
  v10 = a1[7];
  v14[4] = a1[4];
  v14[5] = v8;
  v14[6] = v9;
  v14[7] = v10;
  do
  {
    v11 = *--v4;
    v12 = v6;
    v6 += 4;
    v13 = bswap32(v11);
    *v4 = v13;
    fpga_write(v12, v13);
  }
  while ( v6 != 292 );
  return 0;
}
