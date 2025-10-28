int __fastcall phy_reg_read(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  char *v7; // r1
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r7
  __int16 v12; // r6
  int v13; // r7
  __int16 v14; // r6
  int v15; // r7
  __int16 v16; // r6
  int v17; // r7
  __int16 v18; // r6
  int v19; // r3
  unsigned __int16 v20; // r6
  int v21; // r6
  __int16 v22; // r2
  int v23; // r7
  __int16 v24; // r6
  unsigned int v25; // r9
  unsigned __int16 v26; // r6
  unsigned __int16 v27; // r10
  unsigned __int16 v28; // r7
  int v29; // r6
  unsigned __int16 v30; // r11
  int v31; // r2
  int v32; // r8
  unsigned __int16 v33; // r7
  unsigned __int16 v34; // r6
  unsigned __int16 v35; // r7
  __int16 v36; // r6
  __int16 v38; // [sp+2Ch] [bp-1028h]
  _DWORD v39[7]; // [sp+30h] [bp-1024h] BYREF
  int v40; // [sp+4Ch] [bp-1008h]
  char v41[4100]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = -7948;
  HIWORD(v7) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v39, v7, *(int *)(a1 + 140));
  LOWORD(v8) = -22412;
  HIWORD(v8) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v41, 0x1000u, 0, v40, v39[0], v39[1], v39[2], v39[3], v39[4], v39[5], v39[6], v40, v8, "phy_reg_read");
  V_UNLOCK();
  LOWORD(v9) = -14512;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(*v9, v10, 154, "phy_reg_read", 12, 925, 60, v41);
  if ( a4 )
  {
    LOWORD(v11) = 0;
    do
    {
      v12 = (_WORD)v11 << 12;
      v11 = (unsigned __int16)(v11 + 1);
      sub_5D6FC(a1, a3, v12 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v12 & 0xF000 | 3);
      sub_5D6FC(a1, a3, v12 & 0xF000 | 8);
    }
    while ( v11 != a4 );
    LOWORD(v13) = 0;
    sub_5D6FC(a1, a3, 0x803Eu);
    do
    {
      v14 = (_WORD)v13 << 12;
      v13 = (unsigned __int16)(v13 + 1);
      sub_5D6FC(a1, a3, v14 & 0xF000 | 0x67);
      sub_5D6FC(a1, a3, v14 & 0xF000 | 0x96);
    }
    while ( v13 != a4 );
    LOWORD(v15) = 0;
    sub_5D6FC(a1, a3, 0x8051u);
    sub_5D6FC(a1, a3, 0x800Du);
    do
    {
      v16 = (_WORD)v15 << 12;
      v15 = (unsigned __int16)(v15 + 1);
      sub_5D6FC(a1, a3, v16 & 0xF000 | 0x43);
      sub_5D6FC(a1, a3, v16 & 0xF000 | 0x75);
      sub_5D6FC(a1, a3, v16 & 0xF000 | 0x76);
      sub_5D6FC(a1, a3, v16 & 0xF000 | 0xB0);
    }
    while ( v15 != a4 );
    LOWORD(v17) = 0;
    sub_5D6FC(a1, a3, 0x8030u);
    sub_5D6FC(a1, a3, 0x803Bu);
    sub_5D6FC(a1, a3, 0x8044u);
    sub_5D6FC(a1, a3, 0x8060u);
    sub_5D6FC(a1, a3, 0x8008u);
    sub_5D6FC(a1, a3, 0x803Eu);
    do
    {
      v18 = (_WORD)v17 << 12;
      v17 = (unsigned __int16)(v17 + 1);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x49);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0xF);
    }
    while ( v17 != a4 );
    sub_5D6FC(a1, a3, 0x805Fu);
    sub_5D6FC(a1, a3, 0x805Fu);
    sub_5D6FC(a1, a3, 0x803Eu);
    LOWORD(v19) = 0;
    do
    {
      v38 = v19;
      v20 = (_WORD)v19 << 12;
      sub_5D6FC(a1, a3, (unsigned __int16)((_WORD)v19 << 12) | 0x16);
      sub_5D6FC(a1, a3, v20 | 0xA9);
      sub_5D6FC(a1, a3, v20 | 0xA9);
      sub_5D6FC(a1, a3, v20 | 0xA9);
      sub_5D6FC(a1, a3, v20 | 0xA9);
      sub_5D6FC(a1, a3, v20 | 0xAA);
      sub_5D6FC(a1, a3, v20 | 0xAA);
      sub_5D6FC(a1, a3, v20 | 0xAA);
      sub_5D6FC(a1, a3, v20 | 0xAA);
      sub_5D6FC(a1, a3, v20 | 0xAA);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0xAB);
      sub_5D6FC(a1, a3, v20 | 0x9F);
      sub_5D6FC(a1, a3, v20 | 0x9F);
      sub_5D6FC(a1, a3, v20 | 0xA0);
      sub_5D6FC(a1, a3, v20 | 0xA0);
      sub_5D6FC(a1, a3, v20 | 0xA0);
      sub_5D6FC(a1, a3, v20 | 0xA0);
      sub_5D6FC(a1, a3, v20 | 0xA1);
      sub_5D6FC(a1, a3, v20 | 0xA1);
      sub_5D6FC(a1, a3, v20 | 0x75);
      sub_5D6FC(a1, a3, v20 | 0x75);
      sub_5D6FC(a1, a3, v20 | 0x76);
      sub_5D6FC(a1, a3, v20 | 0x76);
      sub_5D6FC(a1, a3, v20 | 0x76);
      sub_5D6FC(a1, a3, v20 | 0x76);
      sub_5D6FC(a1, a3, v20 | 0x77);
      sub_5D6FC(a1, a3, v20 | 0x77);
      sub_5D6FC(a1, a3, v20 | 0x77);
      sub_5D6FC(a1, a3, v20 | 0x77);
      sub_5D6FC(a1, a3, v20 | 0x78);
      sub_5D6FC(a1, a3, v20 | 0x78);
      sub_5D6FC(a1, a3, v20 | 0x78);
      sub_5D6FC(a1, a3, v20 | 0x78);
      sub_5D6FC(a1, a3, v20 | 0x79);
      sub_5D6FC(a1, a3, v20 | 0x79);
      sub_5D6FC(a1, a3, v20 | 0x25);
      sub_5D6FC(a1, a3, v20 | 0x25);
      sub_5D6FC(a1, a3, v20 | 0x26);
      sub_5D6FC(a1, a3, v20 | 0x26);
      sub_5D6FC(a1, a3, v20 | 0x26);
      sub_5D6FC(a1, a3, v20 | 0x26);
      sub_5D6FC(a1, a3, v20 | 0x26);
      sub_5D6FC(a1, a3, v20 | 0x27);
      sub_5D6FC(a1, a3, v20 | 0x27);
      sub_5D6FC(a1, a3, v20 | 0x27);
      sub_5D6FC(a1, a3, v20 | 0x27);
      sub_5D6FC(a1, a3, v20 | 0x27);
      sub_5D6FC(a1, a3, v20 | 0x28);
      sub_5D6FC(a1, a3, v20 | 0x28);
      sub_5D6FC(a1, a3, v20 | 0x28);
      sub_5D6FC(a1, a3, v20 | 0x28);
      sub_5D6FC(a1, a3, v20 | 0x28);
      sub_5D6FC(a1, a3, v20 | 0x29);
      sub_5D6FC(a1, a3, v20 | 0x29);
      sub_5D6FC(a1, a3, v20 | 0x29);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0x24);
      sub_5D6FC(a1, a3, v20 | 0x25);
      sub_5D6FC(a1, a3, v20 | 0x26);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0x56);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0x7C);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0x89);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0x95);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0xA2);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0x12);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0x4A);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0x85);
      sub_5D6FC(a1, a3, v20 | 0x9F);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0x11);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0x13);
      v19 = (unsigned __int16)(v38 + 1);
    }
    while ( v19 != a4 );
    LOWORD(v21) = 0;
    sub_5D6FC(a1, a3, 0x8008u);
    sub_5D6FC(a1, a3, 0x8009u);
    sub_5D6FC(a1, a3, 0xA002u);
    sub_5D6FC(a1, a3, 0xA026u);
    do
    {
      v22 = (_WORD)v21 << 12;
      v21 = (unsigned __int16)(v21 + 1);
      sub_5D6FC(a1, a3, v22 & 0xF000 | 0xD);
    }
    while ( v21 != a4 );
    LOWORD(v23) = 0;
    sub_5D6FC(a1, a3, 0x801Bu);
    sub_5D6FC(a1, a3, 0x801Cu);
    sub_5D6FC(a1, a3, 0x803Cu);
    do
    {
      v24 = (_WORD)v23 << 12;
      v23 = (unsigned __int16)(v23 + 1);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 0x19);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 0x22);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 0x74);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 0xA1);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 0x88);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 0x12);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 0x4A);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 0x7E);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 0xB6);
    }
    while ( v23 != a4 );
    LOWORD(v25) = 0;
    sub_5D6FC(a1, a3, 0x8002u);
    do
    {
      v26 = (_WORD)v25 << 12;
      v25 = (unsigned __int16)(v25 + 1);
      sub_5D6FC(a1, a3, v26 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v26 | 8);
      sub_5D6FC(a1, a3, v26 | 8);
      sub_5D6FC(a1, a3, v26 & 0xF000 | 3);
    }
    while ( v25 != a4 );
    v27 = 0;
    sub_5D6FC(a1, a3, 0x803Eu);
    do
    {
      v28 = v27++ << 12;
      v29 = v28 | 1;
      v30 = v28 | 0x6A;
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v28 | 0x3A, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v28 | 0x3A, 0x4000000);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v28 | 0x3A, 0);
      sub_5D6FC(a1, a3, v28 | 0x6A);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v28 | 0x3A, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v28 | 0x3A, 0x4000000);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v28 | 0x3A, 0);
      sub_5D6FC(a1, a3, v28 | 0x6A);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v28 | 0x3A, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v28 | 0x3A, 0x4000000);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -67108865);
      v31 = v28 | 0x3A;
      v32 = v28 | 0x5F;
      v28 |= 0x98u;
      sub_5D8A4(a1, (unsigned __int8)a3, v31, 0);
      sub_5D6FC(a1, a3, v30);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 128);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 0);
      sub_5D6FC(a1, a3, v28);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 128);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 0);
      sub_5D6FC(a1, a3, v28);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 128);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 0);
      sub_5D6FC(a1, a3, v28);
    }
    while ( v25 > v27 );
  }
  else
  {
    v25 = 0;
    sub_5D6FC(a1, a3, 0x803Eu);
    sub_5D6FC(a1, a3, 0x8051u);
    sub_5D6FC(a1, a3, 0x800Du);
    sub_5D6FC(a1, a3, 0x8030u);
    sub_5D6FC(a1, a3, 0x803Bu);
    sub_5D6FC(a1, a3, 0x8044u);
    sub_5D6FC(a1, a3, 0x8060u);
    sub_5D6FC(a1, a3, 0x8008u);
    sub_5D6FC(a1, a3, 0x803Eu);
    sub_5D6FC(a1, a3, 0x805Fu);
    sub_5D6FC(a1, a3, 0x805Fu);
    sub_5D6FC(a1, a3, 0x803Eu);
    sub_5D6FC(a1, a3, 0x8008u);
    sub_5D6FC(a1, a3, 0x8009u);
    sub_5D6FC(a1, a3, 0xA002u);
    sub_5D6FC(a1, a3, 0xA026u);
    sub_5D6FC(a1, a3, 0x801Bu);
    sub_5D6FC(a1, a3, 0x801Cu);
    sub_5D6FC(a1, a3, 0x803Cu);
    sub_5D6FC(a1, a3, 0x8002u);
    sub_5D6FC(a1, a3, 0x803Eu);
  }
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5D6FC(a1, a3, 0x805Fu);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5D6FC(a1, a3, 0x805Fu);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5D6FC(a1, a3, 0x805Fu);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D6FC(a1, a3, 0x8042u);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D6FC(a1, a3, 0x8042u);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D6FC(a1, a3, 0x8042u);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D6FC(a1, a3, 0x8042u);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D6FC(a1, a3, 0x8042u);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C158(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5D6FC(a1, a3, 0x8042u);
  if ( v25 )
  {
    v33 = 0;
    do
    {
      v34 = v33++ << 12;
      sub_5D8A4(a1, (unsigned __int8)a3, v34 | 1, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v34 | 1, -65521);
      sub_5D8A4(a1, (unsigned __int8)a3, v34 & 0xF000 | 2, 0x8000);
    }
    while ( v25 > v33 );
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    v35 = 0;
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147442687);
    do
    {
      v36 = v35++ << 12;
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x1A);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x1D);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x1E);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x45);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x46);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x47);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x71);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x99);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x7F);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0xA5);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0xA6);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0xA7);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x6F);
    }
    while ( v25 > v35 );
    return 0;
  }
  else
  {
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147442687);
    return 0;
  }
}
