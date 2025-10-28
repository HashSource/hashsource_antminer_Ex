int __fastcall get_core_clk(int a1)
{
  int v1; // r4
  _DWORD *v2; // r8
  char *v3; // r1
  int v4; // r9
  int v5; // r1
  int v6; // r0
  char *v7; // r5
  char *v8; // r10
  unsigned int v9; // r4
  int v10; // r7
  int v11; // r1
  int v12; // r0
  char *v13; // r10
  char *v14; // r5
  unsigned int v15; // r4
  int v16; // r7
  int v17; // r1
  int v19; // [sp+0h] [bp-105Ch]
  int v20; // [sp+0h] [bp-105Ch]
  int v21; // [sp+4h] [bp-1058h]
  int v22; // [sp+4h] [bp-1058h]
  int v23; // [sp+2Ch] [bp-1030h]
  char *ptr; // [sp+30h] [bp-102Ch]
  _DWORD v26[7]; // [sp+38h] [bp-1024h] BYREF
  int v27; // [sp+54h] [bp-1008h]
  char v28[4100]; // [sp+58h] [bp-1004h] BYREF

  v1 = a1;
  LOWORD(v2) = -14512;
  HIWORD(v2) = (unsigned int)&unk_16B55C >> 16;
  V_LOCK();
  LOWORD(v3) = -7948;
  HIWORD(v3) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v4) = -23988;
  V_INT((int)v26, v3, *(int *)(v1 + 140));
  LOWORD(v1) = -22412;
  HIWORD(v1) = (unsigned int)&unk_139BA4 >> 16;
  v23 = 0;
  logfmt_raw(v28, 0x1000u, 0, v27, v26[0], v26[1], v26[2], v26[3], v26[4], v26[5], v26[6], v27, v1, "get_core_clk");
  V_UNLOCK();
  LOWORD(v5) = -25512;
  HIWORD(v5) = (unsigned int)"one" >> 16;
  zlog(*v2, v5, 154, "get_core_clk", 12, 8349, 60, v28);
  ptr = (char *)malloc(0x600u);
  do
  {
    v6 = sub_5C5E4(a1, v23, 255, 121, ptr);
    if ( v6 > 0 )
    {
      v7 = ptr;
      v8 = &ptr[12 * v6];
      do
      {
        v9 = bswap32(*(_DWORD *)v7);
        v10 = v9;
        if ( v9 )
          v10 = sub_12D3B4(0x8BB2C97u, v9);
        V_LOCK();
        HIWORD(v4) = (unsigned int)&unk_13957C >> 16;
        v21 = (unsigned __int8)v7[8];
        v19 = (unsigned __int8)v7[4];
        v7 += 12;
        logfmt_raw(v28, 0x1000u, 0, v4, v19, v21, 121, v9, v10);
        V_UNLOCK();
        LOWORD(v11) = -25512;
        HIWORD(v11) = (unsigned int)"one" >> 16;
        zlog(*v2, v11, 154, "get_core_clk", 12, 8363, 60, v28);
      }
      while ( v7 != v8 );
    }
    v12 = sub_5C5E4(a1, v23, 255, 122, ptr);
    if ( v12 > 0 )
    {
      v13 = &ptr[12 * v12];
      v14 = ptr;
      do
      {
        v15 = bswap32(*(_DWORD *)v14);
        v16 = v15;
        if ( v15 )
          v16 = sub_12D3B4(0x8BB2C97u, v15);
        V_LOCK();
        v22 = (unsigned __int8)v14[8];
        v20 = (unsigned __int8)v14[4];
        v14 += 12;
        logfmt_raw(v28, 0x1000u, 0, "chip %02x core %02x addr %04x, %08x, rx_clk0 %lld", v20, v22, 122, v15, v16);
        V_UNLOCK();
        LOWORD(v17) = -25512;
        HIWORD(v17) = (unsigned int)"one" >> 16;
        zlog(*v2, v17, 154, "get_core_clk", 12, 8373, 60, v28);
      }
      while ( v14 != v13 );
    }
    ++v23;
  }
  while ( v23 != 8 );
  free(ptr);
  return 0;
}
