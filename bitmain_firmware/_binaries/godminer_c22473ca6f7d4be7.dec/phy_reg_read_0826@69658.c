int __fastcall phy_reg_read_0826(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r7
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r5
  __int16 v12; // r4
  int v13; // r5
  __int16 v14; // r4
  int v15; // r5
  __int16 v16; // r4
  int v17; // r8
  unsigned __int16 v18; // r4
  int v19; // r4
  __int16 v20; // r2
  int v21; // r5
  __int16 v22; // r4
  unsigned int v23; // r5
  unsigned __int16 v24; // r4
  unsigned int v25; // r8
  unsigned __int16 v26; // r7
  unsigned __int16 v27; // r4
  unsigned __int16 v28; // r9
  unsigned __int16 v29; // r5
  int v30; // r2
  int v31; // r6
  unsigned __int16 v32; // r7
  unsigned __int16 v33; // r4
  int v34; // r2
  unsigned int v35; // r4
  unsigned __int16 v36; // r4
  unsigned __int16 v37; // r4
  __int16 v38; // r2
  unsigned int v40; // [sp+14h] [bp-1020h]
  int v41; // [sp+18h] [bp-101Ch]
  unsigned int v42; // [sp+1Ch] [bp-1018h]
  char v43[4100]; // [sp+30h] [bp-1004h] BYREF

  v7 = a4;
  V_LOCK();
  LOWORD(v8) = -24680;
  HIWORD(v8) = (unsigned int)"e" >> 16;
  logfmt_raw(v43, 0x1000u, 0, v8, "phy_reg_read_0826", a2, a3);
  V_UNLOCK();
  LOWORD(v9) = -14512;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(*v9, v10, 154, "phy_reg_read_0826", 17, 2410, 60, v43);
  if ( v7 )
  {
    LOWORD(v11) = 0;
    do
    {
      v12 = (_WORD)v11 << 12;
      v11 = (unsigned __int16)(v11 + 1);
      sub_5D6FC(a1, a3, v12 & 0xF000 | 0x67);
      sub_5D6FC(a1, a3, v12 & 0xF000 | 0x96);
    }
    while ( v11 != v7 );
    LOWORD(v13) = 0;
    sub_5D6FC(a1, a3, 0x8051u);
    sub_5D6FC(a1, a3, 0x800Du);
    do
    {
      v14 = (_WORD)v13 << 12;
      v13 = (unsigned __int16)(v13 + 1);
      sub_5D6FC(a1, a3, v14 & 0xF000 | 0x43);
      sub_5D6FC(a1, a3, v14 & 0xF000 | 0x75);
      sub_5D6FC(a1, a3, v14 & 0xF000 | 0x76);
      sub_5D6FC(a1, a3, v14 & 0xF000 | 0xB0);
    }
    while ( v13 != v7 );
    LOWORD(v15) = 0;
    sub_5D6FC(a1, a3, 0x8030u);
    sub_5D6FC(a1, a3, 0x803Bu);
    sub_5D6FC(a1, a3, 0x8044u);
    sub_5D6FC(a1, a3, 0x8060u);
    sub_5D6FC(a1, a3, 0x8008u);
    sub_5D6FC(a1, a3, 0x803Eu);
    do
    {
      v16 = (_WORD)v15 << 12;
      v15 = (unsigned __int16)(v15 + 1);
      sub_5D6FC(a1, a3, v16 & 0xF000 | 0x49);
      sub_5D6FC(a1, a3, v16 & 0xF000 | 0xF);
    }
    while ( v15 != v7 );
    LOWORD(v17) = 0;
    sub_5D6FC(a1, a3, 0x805Fu);
    sub_5D6FC(a1, a3, 0x805Fu);
    sub_5D6FC(a1, a3, 0x803Eu);
    do
    {
      v18 = (_WORD)v17 << 12;
      v17 = (unsigned __int16)(v17 + 1);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x16);
      sub_5D6FC(a1, a3, v18 | 0xA9);
      sub_5D6FC(a1, a3, v18 | 0xA9);
      sub_5D6FC(a1, a3, v18 | 0xA9);
      sub_5D6FC(a1, a3, v18 | 0xA9);
      sub_5D6FC(a1, a3, v18 | 0xAA);
      sub_5D6FC(a1, a3, v18 | 0xAA);
      sub_5D6FC(a1, a3, v18 | 0xAA);
      sub_5D6FC(a1, a3, v18 | 0xAA);
      sub_5D6FC(a1, a3, v18 | 0xAA);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0xAB);
      sub_5D6FC(a1, a3, v18 | 0x9F);
      sub_5D6FC(a1, a3, v18 | 0x9F);
      sub_5D6FC(a1, a3, v18 | 0xA0);
      sub_5D6FC(a1, a3, v18 | 0xA0);
      sub_5D6FC(a1, a3, v18 | 0xA0);
      sub_5D6FC(a1, a3, v18 | 0xA0);
      sub_5D6FC(a1, a3, v18 | 0xA1);
      sub_5D6FC(a1, a3, v18 | 0xA1);
      sub_5D6FC(a1, a3, v18 | 0x75);
      sub_5D6FC(a1, a3, v18 | 0x75);
      sub_5D6FC(a1, a3, v18 | 0x76);
      sub_5D6FC(a1, a3, v18 | 0x76);
      sub_5D6FC(a1, a3, v18 | 0x76);
      sub_5D6FC(a1, a3, v18 | 0x76);
      sub_5D6FC(a1, a3, v18 | 0x77);
      sub_5D6FC(a1, a3, v18 | 0x77);
      sub_5D6FC(a1, a3, v18 | 0x77);
      sub_5D6FC(a1, a3, v18 | 0x77);
      sub_5D6FC(a1, a3, v18 | 0x78);
      sub_5D6FC(a1, a3, v18 | 0x78);
      sub_5D6FC(a1, a3, v18 | 0x78);
      sub_5D6FC(a1, a3, v18 | 0x78);
      sub_5D6FC(a1, a3, v18 | 0x79);
      sub_5D6FC(a1, a3, v18 | 0x79);
      sub_5D6FC(a1, a3, v18 | 0x25);
      sub_5D6FC(a1, a3, v18 | 0x25);
      sub_5D6FC(a1, a3, v18 | 0x26);
      sub_5D6FC(a1, a3, v18 | 0x26);
      sub_5D6FC(a1, a3, v18 | 0x26);
      sub_5D6FC(a1, a3, v18 | 0x26);
      sub_5D6FC(a1, a3, v18 | 0x26);
      sub_5D6FC(a1, a3, v18 | 0x27);
      sub_5D6FC(a1, a3, v18 | 0x27);
      sub_5D6FC(a1, a3, v18 | 0x27);
      sub_5D6FC(a1, a3, v18 | 0x27);
      sub_5D6FC(a1, a3, v18 | 0x27);
      sub_5D6FC(a1, a3, v18 | 0x28);
      sub_5D6FC(a1, a3, v18 | 0x28);
      sub_5D6FC(a1, a3, v18 | 0x28);
      sub_5D6FC(a1, a3, v18 | 0x28);
      sub_5D6FC(a1, a3, v18 | 0x28);
      sub_5D6FC(a1, a3, v18 | 0x29);
      sub_5D6FC(a1, a3, v18 | 0x29);
      sub_5D6FC(a1, a3, v18 | 0x29);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x24);
      sub_5D6FC(a1, a3, v18 | 0x25);
      sub_5D6FC(a1, a3, v18 | 0x26);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x56);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x7C);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x89);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x95);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0xA2);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x12);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x4A);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x85);
      sub_5D6FC(a1, a3, v18 | 0x9F);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x11);
      sub_5D6FC(a1, a3, v18 & 0xF000 | 0x13);
    }
    while ( v17 != v7 );
    sub_5D6FC(a1, a3, 0x8008u);
    LOWORD(v19) = 0;
    sub_5D6FC(a1, a3, 0x8009u);
    sub_5D6FC(a1, a3, 0xA002u);
    sub_5D6FC(a1, a3, 0xA026u);
    do
    {
      v20 = (_WORD)v19 << 12;
      v19 = (unsigned __int16)(v19 + 1);
      sub_5D6FC(a1, a3, v20 & 0xF000 | 0xD);
    }
    while ( v19 != v7 );
    LOWORD(v21) = 0;
    sub_5D6FC(a1, a3, 0x801Bu);
    sub_5D6FC(a1, a3, 0x801Cu);
    sub_5D6FC(a1, a3, 0x803Cu);
    do
    {
      v22 = (_WORD)v21 << 12;
      v21 = (unsigned __int16)(v21 + 1);
      sub_5D6FC(a1, a3, v22 & 0xF000 | 0x19);
      sub_5D6FC(a1, a3, v22 & 0xF000 | 0x22);
      sub_5D6FC(a1, a3, v22 & 0xF000 | 0x74);
      sub_5D6FC(a1, a3, v22 & 0xF000 | 0xA1);
      sub_5D6FC(a1, a3, v22 & 0xF000 | 0x88);
      sub_5D6FC(a1, a3, v22 & 0xF000 | 0x12);
      sub_5D6FC(a1, a3, v22 & 0xF000 | 0x4A);
      sub_5D6FC(a1, a3, v22 & 0xF000 | 0x7E);
      sub_5D6FC(a1, a3, v22 & 0xF000 | 0xB6);
    }
    while ( v21 != v7 );
    LOWORD(v23) = 0;
    sub_5D6FC(a1, a3, 0x8002u);
    do
    {
      v24 = (_WORD)v23 << 12;
      v23 = (unsigned __int16)(v23 + 1);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v24 | 8);
      sub_5D6FC(a1, a3, v24 | 8);
      sub_5D6FC(a1, a3, v24 & 0xF000 | 3);
    }
    while ( v23 != v7 );
    v42 = v23;
    sub_5D6FC(a1, a3, 0x803Eu);
    v25 = v23;
    v26 = 0;
    do
    {
      v27 = v26++ << 12;
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x1A);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x1D);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x1E);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x45);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x46);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x47);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x71);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x99);
      v28 = v27 | 0x6A;
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x7F);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x13);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x14);
      sub_5D6FC(a1, a3, v27 | 0x11);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x15);
      sub_5D6FC(a1, a3, v27 | 0x11);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x16);
      sub_5D6FC(a1, a3, v27 | 0x17);
      sub_5D6FC(a1, a3, v27 | 0x17);
      sub_5D6FC(a1, a3, v27 | 0xA5);
      sub_5D6FC(a1, a3, v27 | 0xA5);
      sub_5D6FC(a1, a3, v27 | 0xA6);
      sub_5D6FC(a1, a3, v27 | 0xA6);
      sub_5D6FC(a1, a3, v27 | 0xA6);
      sub_5D6FC(a1, a3, v27 | 0xA6);
      sub_5D6FC(a1, a3, v27 | 0xA7);
      sub_5D6FC(a1, a3, v27 | 0xA7);
      sub_5D6FC(a1, a3, v27 | 0xA7);
      v29 = v27 | 1;
      sub_5D6FC(a1, a3, v27 | 0xA7);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x4A);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x90);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 1, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 0x3A, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 1, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 0x3A, 0x4000000);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 1, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 0x3A, 0);
      sub_5D6FC(a1, a3, v27 | 0x6A);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 1, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 0x3A, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 1, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 0x3A, 0x4000000);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 1, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 0x3A, 0);
      sub_5D6FC(a1, a3, v27 | 0x6A);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 1, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 0x3A, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 1, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 0x3A, 0x4000000);
      sub_5D8A4(a1, (unsigned __int8)a3, v27 | 1, -67108865);
      v30 = v27 | 0x3A;
      v31 = v27 | 0x5F;
      v27 |= 0x98u;
      sub_5D8A4(a1, (unsigned __int8)a3, v30, 0);
      sub_5D6FC(a1, a3, v28);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v31, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v31, 128);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v31, 0);
      sub_5D6FC(a1, a3, v27);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v31, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v31, 128);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v31, 0);
      sub_5D6FC(a1, a3, v27);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v31, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v31, 128);
      sub_5D8A4(a1, (unsigned __int8)a3, v29, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v31, 0);
      sub_5D6FC(a1, a3, v27);
    }
    while ( v25 > v26 );
  }
  else
  {
    v42 = 0;
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
  sub_5D6FC(a1, a3, 0x8057u);
  sub_5D6FC(a1, a3, 0x8058u);
  sub_5D6FC(a1, a3, 0x8058u);
  sub_5D6FC(a1, a3, 0x8048u);
  sub_5D6FC(a1, a3, 0x804Cu);
  if ( v42 )
  {
    v32 = 0;
    do
    {
      v33 = v32++ << 12;
      sub_5D6FC(a1, a3, v33 | 0x11);
      sub_5D6FC(a1, a3, v33 | 0x11);
      sub_5D6FC(a1, a3, v33 | 0x9A);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x65);
      sub_5D6FC(a1, a3, v33 | 0x9A);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x27);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x96);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x7C);
      sub_5D6FC(a1, a3, v33 | 0xBE);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0xA6);
      sub_5D6FC(a1, a3, v33 | 0xBE);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x8B);
      sub_5D6FC(a1, a3, v33 | 0x8C);
      sub_5D6FC(a1, a3, v33 | 0x8C);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x46);
      sub_5D6FC(a1, a3, v33 | 0x4A);
      sub_5D6FC(a1, a3, v33 | 0x4A);
      sub_5D6FC(a1, a3, v33 | 0x4B);
      sub_5D6FC(a1, a3, v33 | 0x4B);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x56);
      sub_5D6FC(a1, a3, v33 | 0x4B);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x53);
      sub_5D6FC(a1, a3, v33 | 0x1A);
      sub_5D6FC(a1, a3, v33 | 0x1A);
      sub_5D6FC(a1, a3, v33 | 0x1A);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x73);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x84);
      sub_5D6FC(a1, a3, v33 | 0x24);
      sub_5D6FC(a1, a3, v33 | 0x25);
      sub_5D6FC(a1, a3, v33 | 0xE);
      sub_5D6FC(a1, a3, v33 | 0xE);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x85);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x86);
      sub_5D6FC(a1, a3, v33 | 0x11);
      sub_5D6FC(a1, a3, v33 | 0x11);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0xF);
      sub_5D6FC(a1, a3, v33 | 0x91);
      sub_5D6FC(a1, a3, v33 | 0x77);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v33 | 0x91);
      sub_5D6FC(a1, a3, v33 | 0x77);
      sub_5D6FC(a1, a3, v33 | 0x24);
      sub_5D6FC(a1, a3, v33 | 0x25);
      sub_5D6FC(a1, a3, v33 | 0x60);
      sub_5D6FC(a1, a3, v33 | 0x60);
      sub_5D6FC(a1, a3, v33 | 0x24);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x41);
      sub_5D6FC(a1, a3, v33 | 0x7B);
      sub_5D6FC(a1, a3, v33 | 0x7B);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x88);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x89);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x94);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x95);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0xA1);
      v34 = v33 & 0xF000;
      v35 = v33 | 0x6E;
      sub_5D6FC(a1, a3, v34 | 0xA4);
      sub_5D6FC(a1, a3, v35);
      sub_5D6FC(a1, a3, v35);
    }
    while ( v42 > v32 );
    v41 = 0;
    sub_5D6FC(a1, a3, 0x804Au);
    sub_5D6FC(a1, a3, 0x804Fu);
    sub_5D6FC(a1, a3, 0x803Du);
    sub_5D6FC(a1, a3, 0x8041u);
    sub_5D6FC(a1, a3, 0x8002u);
    sub_5D6FC(a1, a3, 0x8014u);
    do
    {
      v36 = (_WORD)v41++ << 12;
      sub_5D6FC(a1, a3, v36 | 0x69);
      sub_5D6FC(a1, a3, v36 | 0x48);
      sub_5D6FC(a1, a3, v36 | 2);
      sub_5D6FC(a1, a3, v36 | 6);
      v40 = v36 | 0x2C;
      sub_5D6FC(a1, a3, v40);
      sub_5D6FC(a1, a3, v36 | 0x27);
      sub_5D6FC(a1, a3, v36 | 0x27);
      sub_5D6FC(a1, a3, v36 | 0x28);
      sub_5D6FC(a1, a3, v36 | 0x28);
      sub_5D6FC(a1, a3, v36 | 0x28);
      sub_5D6FC(a1, a3, v36 | 0x28);
      sub_5D6FC(a1, a3, v36 | 0x29);
      sub_5D6FC(a1, a3, v36 | 0x29);
      sub_5D6FC(a1, a3, v36 | 0x29);
      sub_5D6FC(a1, a3, v36 | 0x2A);
      sub_5D6FC(a1, a3, v36 | 0x2A);
      sub_5D6FC(a1, a3, v36 | 0x2B);
      sub_5D6FC(a1, a3, v36 | 0x2B);
      sub_5D6FC(a1, a3, v36 | 0x2B);
      sub_5D6FC(a1, a3, v36 | 0x2B);
      sub_5D6FC(a1, a3, v40);
      sub_5D6FC(a1, a3, v36 | 0x69);
      sub_5D6FC(a1, a3, v36 | 0x48);
      sub_5D6FC(a1, a3, v36 | 2);
      sub_5D6FC(a1, a3, v36 | 6);
      sub_5D6FC(a1, a3, v40);
      sub_5D6FC(a1, a3, v36 | 0x27);
      sub_5D6FC(a1, a3, v36 | 0x27);
      sub_5D6FC(a1, a3, v36 | 0x28);
      sub_5D6FC(a1, a3, v36 | 0x28);
      sub_5D6FC(a1, a3, v36 | 0x28);
      sub_5D6FC(a1, a3, v36 | 0x28);
      sub_5D6FC(a1, a3, v36 | 0x29);
      sub_5D6FC(a1, a3, v36 | 0x29);
      sub_5D6FC(a1, a3, v36 | 0x29);
      sub_5D6FC(a1, a3, v36 | 0x2A);
      sub_5D6FC(a1, a3, v36 | 0x2A);
      sub_5D6FC(a1, a3, v36 | 0x2B);
      sub_5D6FC(a1, a3, v36 | 0x2B);
      sub_5D6FC(a1, a3, v36 | 0x2B);
      sub_5D6FC(a1, a3, v36 | 0x2B);
      sub_5D6FC(a1, a3, v40);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 3);
    }
    while ( v42 > (unsigned __int16)v41 );
  }
  else
  {
    sub_5D6FC(a1, a3, 0x804Au);
    sub_5D6FC(a1, a3, 0x804Fu);
    sub_5D6FC(a1, a3, 0x803Du);
    sub_5D6FC(a1, a3, 0x8041u);
    sub_5D6FC(a1, a3, 0x8002u);
    sub_5D6FC(a1, a3, 0x8014u);
  }
  sub_5D6FC(a1, a3, 0x801Du);
  sub_5D6FC(a1, a3, 0x8023u);
  sub_5C158(a1, (unsigned __int8)a3, 144, -17);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_5C158(a1, (unsigned __int8)a3, 144, -17);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 16);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_5C158(a1, (unsigned __int8)a3, 144, -17);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_5D6FC(a1, a3, 0x8024u);
  sub_5C158(a1, (unsigned __int8)a3, 144, -2097153);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_5C158(a1, (unsigned __int8)a3, 144, -2097153);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x200000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_5C158(a1, (unsigned __int8)a3, 144, -2097153);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_5D6FC(a1, a3, 0x8026u);
  sub_5D6FC(a1, a3, 0x8046u);
  sub_5D6FC(a1, a3, 0x8061u);
  if ( v42 )
  {
    v37 = 0;
    do
    {
      v38 = v37++ << 12;
      sub_5D8A4(a1, (unsigned __int8)a3, v38 & 0xF000 | 1, 0);
    }
    while ( v42 > v37 );
  }
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  return 0;
}
