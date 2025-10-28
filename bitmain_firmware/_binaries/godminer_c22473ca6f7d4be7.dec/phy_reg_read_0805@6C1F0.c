int __fastcall phy_reg_read_0805(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  _DWORD *v8; // r12
  int v9; // r3
  _DWORD *v10; // r6
  int v11; // r1
  int v12; // r7
  __int16 v13; // r6
  int v14; // r7
  __int16 v15; // r6
  int v16; // r7
  __int16 v17; // r6
  int v18; // r9
  unsigned __int16 v19; // r6
  int v20; // r6
  __int16 v21; // r2
  int v22; // r7
  __int16 v23; // r6
  int v24; // r7
  unsigned __int16 v25; // r6
  unsigned int v26; // r9
  unsigned __int16 v27; // r6
  unsigned __int16 v28; // r11
  unsigned __int16 v29; // r7
  int v30; // r6
  unsigned __int16 v31; // r10
  int v32; // r2
  int v33; // r8
  int v34; // r1
  unsigned __int16 v35; // r8
  unsigned __int16 v36; // r6
  int v38; // [sp+4h] [bp-1018h]
  _DWORD *v39; // [sp+14h] [bp-1008h]
  char v40[4100]; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = -14512;
  LOWORD(v9) = -24680;
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v9) = (unsigned int)"e" >> 16;
  v38 = a2;
  v10 = v8;
  v39 = v8;
  logfmt_raw(v40, 0x1000u, 0, v9, "phy_reg_read_0805", v38, a3);
  V_UNLOCK();
  LOWORD(v11) = -25512;
  HIWORD(v11) = (unsigned int)"one" >> 16;
  zlog(*v10, v11, 154, "phy_reg_read_0805", 17, 2905, 60, v40);
  if ( a4 )
  {
    LOWORD(v12) = 0;
    do
    {
      v13 = (_WORD)v12 << 12;
      v12 = (unsigned __int16)(v12 + 1);
      sub_5D6FC(a1, a3, v13 & 0xF000 | 0x67);
      sub_5D6FC(a1, a3, v13 & 0xF000 | 0x96);
    }
    while ( v12 != a4 );
    LOWORD(v14) = 0;
    sub_5D6FC(a1, a3, 0x8051u);
    sub_5D6FC(a1, a3, 0x800Du);
    do
    {
      v15 = (_WORD)v14 << 12;
      v14 = (unsigned __int16)(v14 + 1);
      sub_5D6FC(a1, a3, v15 & 0xF000 | 0x43);
      sub_5D6FC(a1, a3, v15 & 0xF000 | 0x75);
      sub_5D6FC(a1, a3, v15 & 0xF000 | 0x76);
      sub_5D6FC(a1, a3, v15 & 0xF000 | 0xB0);
    }
    while ( v14 != a4 );
    LOWORD(v16) = 0;
    sub_5D6FC(a1, a3, 0x8030u);
    sub_5D6FC(a1, a3, 0x803Bu);
    sub_5D6FC(a1, a3, 0x8044u);
    sub_5D6FC(a1, a3, 0x8060u);
    sub_5D6FC(a1, a3, 0x8008u);
    sub_5D6FC(a1, a3, 0x803Eu);
    do
    {
      v17 = (_WORD)v16 << 12;
      v16 = (unsigned __int16)(v16 + 1);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0x49);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0xF);
    }
    while ( v16 != a4 );
    sub_5D6FC(a1, a3, 0x805Fu);
    sub_5D6FC(a1, a3, 0x805Fu);
    sub_5D6FC(a1, a3, 0x803Eu);
    LOWORD(v18) = 0;
    do
    {
      v19 = (_WORD)v18 << 12;
      v18 = (unsigned __int16)(v18 + 1);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x16);
      sub_5D6FC(a1, a3, v19 | 0xA9);
      sub_5D6FC(a1, a3, v19 | 0xA9);
      sub_5D6FC(a1, a3, v19 | 0xA9);
      sub_5D6FC(a1, a3, v19 | 0xA9);
      sub_5D6FC(a1, a3, v19 | 0xAA);
      sub_5D6FC(a1, a3, v19 | 0xAA);
      sub_5D6FC(a1, a3, v19 | 0xAA);
      sub_5D6FC(a1, a3, v19 | 0xAA);
      sub_5D6FC(a1, a3, v19 | 0xAA);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0xAB);
      sub_5D6FC(a1, a3, v19 | 0x9F);
      sub_5D6FC(a1, a3, v19 | 0x9F);
      sub_5D6FC(a1, a3, v19 | 0xA0);
      sub_5D6FC(a1, a3, v19 | 0xA0);
      sub_5D6FC(a1, a3, v19 | 0xA0);
      sub_5D6FC(a1, a3, v19 | 0xA0);
      sub_5D6FC(a1, a3, v19 | 0xA1);
      sub_5D6FC(a1, a3, v19 | 0xA1);
      sub_5D6FC(a1, a3, v19 | 0x75);
      sub_5D6FC(a1, a3, v19 | 0x75);
      sub_5D6FC(a1, a3, v19 | 0x76);
      sub_5D6FC(a1, a3, v19 | 0x76);
      sub_5D6FC(a1, a3, v19 | 0x76);
      sub_5D6FC(a1, a3, v19 | 0x76);
      sub_5D6FC(a1, a3, v19 | 0x77);
      sub_5D6FC(a1, a3, v19 | 0x77);
      sub_5D6FC(a1, a3, v19 | 0x77);
      sub_5D6FC(a1, a3, v19 | 0x77);
      sub_5D6FC(a1, a3, v19 | 0x78);
      sub_5D6FC(a1, a3, v19 | 0x78);
      sub_5D6FC(a1, a3, v19 | 0x78);
      sub_5D6FC(a1, a3, v19 | 0x78);
      sub_5D6FC(a1, a3, v19 | 0x79);
      sub_5D6FC(a1, a3, v19 | 0x79);
      sub_5D6FC(a1, a3, v19 | 0x25);
      sub_5D6FC(a1, a3, v19 | 0x25);
      sub_5D6FC(a1, a3, v19 | 0x26);
      sub_5D6FC(a1, a3, v19 | 0x26);
      sub_5D6FC(a1, a3, v19 | 0x26);
      sub_5D6FC(a1, a3, v19 | 0x26);
      sub_5D6FC(a1, a3, v19 | 0x26);
      sub_5D6FC(a1, a3, v19 | 0x27);
      sub_5D6FC(a1, a3, v19 | 0x27);
      sub_5D6FC(a1, a3, v19 | 0x27);
      sub_5D6FC(a1, a3, v19 | 0x27);
      sub_5D6FC(a1, a3, v19 | 0x27);
      sub_5D6FC(a1, a3, v19 | 0x28);
      sub_5D6FC(a1, a3, v19 | 0x28);
      sub_5D6FC(a1, a3, v19 | 0x28);
      sub_5D6FC(a1, a3, v19 | 0x28);
      sub_5D6FC(a1, a3, v19 | 0x28);
      sub_5D6FC(a1, a3, v19 | 0x29);
      sub_5D6FC(a1, a3, v19 | 0x29);
      sub_5D6FC(a1, a3, v19 | 0x29);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x24);
      sub_5D6FC(a1, a3, v19 | 0x25);
      sub_5D6FC(a1, a3, v19 | 0x26);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x56);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x7C);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x89);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x95);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0xA2);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x12);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x4A);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x85);
      sub_5D6FC(a1, a3, v19 | 0x9F);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x11);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x13);
    }
    while ( v18 != a4 );
    sub_5D6FC(a1, a3, 0x8008u);
    LOWORD(v20) = 0;
    sub_5D6FC(a1, a3, 0x8009u);
    sub_5D6FC(a1, a3, 0xA002u);
    sub_5D6FC(a1, a3, 0xA026u);
    do
    {
      v21 = (_WORD)v20 << 12;
      v20 = (unsigned __int16)(v20 + 1);
      sub_5D6FC(a1, a3, v21 & 0xF000 | 0xD);
    }
    while ( v20 != a4 );
    LOWORD(v22) = 0;
    sub_5D6FC(a1, a3, 0x801Bu);
    sub_5D6FC(a1, a3, 0x801Cu);
    sub_5D6FC(a1, a3, 0x803Cu);
    do
    {
      v23 = (_WORD)v22 << 12;
      v22 = (unsigned __int16)(v22 + 1);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 0x19);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 0x22);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 0x74);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 0xA1);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 0x88);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 0x12);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 0x4A);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 0x7E);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 0xB6);
    }
    while ( v22 != a4 );
    LOWORD(v24) = 0;
    sub_5D6FC(a1, a3, 0x8002u);
    do
    {
      v25 = (_WORD)v24 << 12;
      v24 = (unsigned __int16)(v24 + 1);
      sub_5D6FC(a1, a3, v25 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v25 | 8);
      sub_5D6FC(a1, a3, v25 | 8);
      sub_5D6FC(a1, a3, v25 & 0xF000 | 3);
    }
    while ( v24 != a4 );
    LOWORD(v26) = 0;
    sub_5D6FC(a1, a3, 0x803Eu);
    do
    {
      v27 = (_WORD)v26 << 12;
      v26 = (unsigned __int16)(v26 + 1);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x1A);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x1D);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x1E);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x45);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x46);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x47);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x71);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x99);
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
      sub_5D6FC(a1, a3, v27 | 0xA7);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x4A);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x90);
    }
    while ( v26 != a4 );
    v28 = 0;
    do
    {
      v29 = v28++ << 12;
      v30 = v29 | 1;
      v31 = v29 | 0x6A;
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v29 | 0x3A, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v29 | 0x3A, 0x4000000);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v29 | 0x3A, 0);
      sub_5D6FC(a1, a3, v29 | 0x6A);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v29 | 0x3A, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v29 | 0x3A, 0x4000000);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v29 | 0x3A, 0);
      sub_5D6FC(a1, a3, v29 | 0x6A);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v29 | 0x3A, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -67108865);
      sub_5D8A4(a1, (unsigned __int8)a3, v29 | 0x3A, 0x4000000);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -67108865);
      v32 = v29 | 0x3A;
      v33 = v29 | 0x5F;
      v29 |= 0x98u;
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 0);
      sub_5D6FC(a1, a3, v31);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v33, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v33, 128);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v33, 0);
      sub_5D6FC(a1, a3, v29);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v33, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v33, 128);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v33, 0);
      sub_5D6FC(a1, a3, v29);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v33, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v33, 128);
      sub_5D8A4(a1, (unsigned __int8)a3, v30, -129);
      sub_5D8A4(a1, (unsigned __int8)a3, v33, 0);
      sub_5D6FC(a1, a3, v29);
    }
    while ( v26 > v28 );
  }
  else
  {
    v26 = 0;
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
  V_LOCK();
  logfmt_raw(v40, 0x1000u, 0, "%s change list 20210807", "phy_reg_read_0805");
  V_UNLOCK();
  LOWORD(v34) = -25512;
  HIWORD(v34) = (unsigned int)"one" >> 16;
  zlog(*v39, v34, 154, "phy_reg_read_0805", 17, 3218, 60, v40);
  sub_5D6FC(a1, a3, 0x8057u);
  sub_5D6FC(a1, a3, 0x8058u);
  sub_5D6FC(a1, a3, 0x8058u);
  sub_5D6FC(a1, a3, 0x8048u);
  sub_5D6FC(a1, a3, 0x804Cu);
  if ( v26 )
  {
    v35 = 0;
    do
    {
      v36 = v35++ << 12;
      sub_5D6FC(a1, a3, v36 | 0x11);
      sub_5D6FC(a1, a3, v36 | 0x11);
      sub_5D6FC(a1, a3, v36 | 0x9A);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x65);
      sub_5D6FC(a1, a3, v36 | 0x9A);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x27);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x96);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x7C);
      sub_5D6FC(a1, a3, v36 | 0xBE);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0xA6);
      sub_5D6FC(a1, a3, v36 | 0xBE);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x8B);
      sub_5D6FC(a1, a3, v36 | 0x8C);
      sub_5D6FC(a1, a3, v36 | 0x8C);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x46);
      sub_5D6FC(a1, a3, v36 | 0x4A);
      sub_5D6FC(a1, a3, v36 | 0x4A);
      sub_5D6FC(a1, a3, v36 | 0x4B);
      sub_5D6FC(a1, a3, v36 | 0x4B);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x56);
      sub_5D6FC(a1, a3, v36 | 0x4B);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x53);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x73);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x84);
      sub_5D6FC(a1, a3, v36 | 0x24);
      sub_5D6FC(a1, a3, v36 | 0x25);
      sub_5D6FC(a1, a3, v36 | 0xE);
      sub_5D6FC(a1, a3, v36 | 0xE);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x85);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x86);
      sub_5D6FC(a1, a3, v36 | 0x11);
      sub_5D6FC(a1, a3, v36 | 0x11);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0xF);
      sub_5D6FC(a1, a3, v36 | 0x91);
      sub_5D6FC(a1, a3, v36 | 0x77);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v36 | 0x91);
      sub_5D6FC(a1, a3, v36 | 0x77);
      sub_5D6FC(a1, a3, v36 | 0x24);
      sub_5D6FC(a1, a3, v36 | 0x25);
      sub_5D6FC(a1, a3, v36 | 0x60);
      sub_5D6FC(a1, a3, v36 | 0x60);
      sub_5D6FC(a1, a3, v36 | 0x24);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x41);
      sub_5D6FC(a1, a3, v36 | 0x7B);
      sub_5D6FC(a1, a3, v36 | 0x7B);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x88);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x89);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x94);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0x95);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0xA1);
      sub_5D6FC(a1, a3, v36 & 0xF000 | 0xA4);
      sub_5D6FC(a1, a3, v36 | 0x6E);
      sub_5D6FC(a1, a3, v36 | 0x6E);
      sub_5D8A4(a1, (unsigned __int8)a3, v36 & 0xF000 | 1, 0);
    }
    while ( v26 > v35 );
  }
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147442687);
  return 0;
}
