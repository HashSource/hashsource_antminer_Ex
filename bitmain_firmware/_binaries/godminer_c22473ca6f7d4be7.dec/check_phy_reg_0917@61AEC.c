int __fastcall check_phy_reg_0917(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r8
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r6
  __int16 v12; // r2
  int v13; // r7
  unsigned __int16 v14; // r6
  unsigned int v15; // r9
  int v16; // r7
  unsigned __int16 v17; // r6
  int v18; // r6
  __int16 v19; // r2
  int v20; // r7
  __int16 v21; // r6
  int v22; // r7
  __int16 v23; // r6
  int v24; // r7
  unsigned __int16 v25; // r6
  unsigned int v26; // r7
  __int16 v27; // r6
  unsigned __int16 v28; // r9
  unsigned __int16 v29; // r6
  unsigned __int16 v30; // r9
  unsigned __int16 v31; // r6
  unsigned __int16 v32; // r9
  unsigned __int16 v33; // r6
  unsigned __int16 v34; // r9
  unsigned __int16 v35; // r6
  unsigned __int16 v36; // r8
  __int16 v37; // r6
  unsigned __int16 v38; // r8
  __int16 v39; // r6
  char v41[4100]; // [sp+10h] [bp+0h] BYREF

  v7 = a4;
  V_LOCK();
  LOWORD(v8) = -24680;
  HIWORD(v8) = (unsigned int)"e" >> 16;
  logfmt_raw(v41, 0x1000u, 0, v8, "check_phy_reg_0917", a2, a3);
  V_UNLOCK();
  LOWORD(v9) = -14512;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(*v9, v10, 154, "check_phy_reg_0917", 18, 1212, 60, v41);
  if ( v7 )
  {
    LOWORD(v11) = 0;
    do
    {
      v12 = (_WORD)v11 << 12;
      v11 = (unsigned __int16)(v11 + 1);
      sub_5D6FC(a1, a3, v12 & 0xF000 | 0x6E);
    }
    while ( v11 != v7 );
    LOWORD(v13) = 0;
    sub_5D6FC(a1, a3, 0xB03Fu);
    sub_5D6FC(a1, a3, 0xC03Fu);
    sub_5D6FC(a1, a3, 0xB03Eu);
    sub_5D6FC(a1, a3, 0xC03Eu);
    sub_5D6FC(a1, a3, 0xB03Fu);
    sub_5D6FC(a1, a3, 0xC03Fu);
    do
    {
      v14 = (_WORD)v13 << 12;
      v13 = (unsigned __int16)(v13 + 1);
      v15 = v14 | 0x6E;
      sub_5D6FC(a1, a3, v15);
      sub_5D6FC(a1, a3, v14 & 0xF000 | 0x6F);
      sub_5D6FC(a1, a3, v15);
      sub_5D6FC(a1, a3, v15);
    }
    while ( v13 != v7 );
    LOWORD(v16) = 0;
    sub_5D6FC(a1, a3, 0xB002u);
    sub_5D6FC(a1, a3, 0xB002u);
    sub_5D6FC(a1, a3, 0xB003u);
    sub_5D6FC(a1, a3, 0xC003u);
    sub_5D6FC(a1, a3, 0xB005u);
    sub_5D6FC(a1, a3, 0xC005u);
    sub_5D6FC(a1, a3, 0xB006u);
    sub_5D6FC(a1, a3, 0xC006u);
    do
    {
      v17 = (_WORD)v16 << 12;
      v16 = (unsigned __int16)(v16 + 1);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0x2A);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0x2F);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0x30);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0x19);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0x1B);
      sub_5D6FC(a1, a3, v17 | 0x1A);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0x1D);
      sub_5D6FC(a1, a3, v17 | 0x1A);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0x47);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0x12);
      sub_5D6FC(a1, a3, v17 & 0xF000 | 0x4A);
    }
    while ( v16 != v7 );
    LOWORD(v18) = 0;
    sub_5D6FC(a1, a3, 0x8008u);
    sub_5D6FC(a1, a3, 0x8009u);
    do
    {
      v19 = (_WORD)v18 << 12;
      v18 = (unsigned __int16)(v18 + 1);
      sub_5D6FC(a1, a3, v19 & 0xF000 | 0x20);
    }
    while ( v18 != v7 );
    LOWORD(v20) = 0;
    sub_5D6FC(a1, a3, 0x803Eu);
    do
    {
      v21 = (_WORD)v20 << 12;
      v20 = (unsigned __int16)(v20 + 1);
      sub_5D6FC(a1, a3, v21 & 0xF000 | 0x7E);
      sub_5D6FC(a1, a3, v21 & 0xF000 | 0xB6);
    }
    while ( v20 != v7 );
    LOWORD(v22) = 0;
    sub_5D6FC(a1, a3, 0x805Du);
    sub_5D6FC(a1, a3, 0x805Du);
    sub_5D6FC(a1, a3, 0x805Du);
    sub_5D6FC(a1, a3, 0x805Du);
    sub_5D6FC(a1, a3, 0x805Eu);
    sub_5D6FC(a1, a3, 0x805Eu);
    sub_5D6FC(a1, a3, 0x805Eu);
    sub_5D6FC(a1, a3, 0x805Eu);
    sub_5D6FC(a1, a3, 0x805Eu);
    sub_5D6FC(a1, a3, 0x805Fu);
    sub_5D6FC(a1, a3, 0x8041u);
    sub_5D6FC(a1, a3, 0x8002u);
    do
    {
      v23 = (_WORD)v22 << 12;
      v22 = (unsigned __int16)(v22 + 1);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 8);
      sub_5D6FC(a1, a3, v23 & 0xF000 | 3);
    }
    while ( v22 != v7 );
    LOWORD(v24) = 0;
    sub_5D6FC(a1, a3, 0x803Eu);
    sub_5D6FC(a1, a3, 0x8002u);
    sub_5D6FC(a1, a3, 0x8048u);
    sub_5D6FC(a1, a3, 0x804Cu);
    sub_5D6FC(a1, a3, 0x800Cu);
    do
    {
      v25 = (_WORD)v24 << 12;
      v24 = (unsigned __int16)(v24 + 1);
      sub_5D6FC(a1, a3, v25 & 0xF000 | 0x96);
      sub_5D6FC(a1, a3, v25 & 0xF000 | 0x7C);
      sub_5D6FC(a1, a3, v25 | 0xBE);
      sub_5D6FC(a1, a3, v25 & 0xF000 | 0xA6);
      sub_5D6FC(a1, a3, v25 | 0xBE);
      sub_5D6FC(a1, a3, v25 & 0xF000 | 0x8B);
      sub_5D6FC(a1, a3, v25 | 0x8C);
      sub_5D6FC(a1, a3, v25 | 0x8C);
      sub_5D6FC(a1, a3, v25 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v25 & 0xF000 | 0x69);
      sub_5D6FC(a1, a3, v25 & 0xF000 | 0x48);
    }
    while ( v24 != v7 );
    LOWORD(v26) = 0;
    sub_5D6FC(a1, a3, 0x8002u);
    sub_5D6FC(a1, a3, 0x803Cu);
    sub_5D6FC(a1, a3, 0x801Bu);
    sub_5D6FC(a1, a3, 0x801Cu);
    do
    {
      v27 = (_WORD)v26 << 12;
      v26 = (unsigned __int16)(v26 + 1);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x19);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x22);
      sub_5D6FC(a1, a3, v27 & 0xF000 | 0x74);
    }
    while ( v26 != v7 );
    v28 = 0;
    sub_5D6FC(a1, a3, 0x8014u);
    do
    {
      v29 = v28++ << 12;
      sub_5D6FC(a1, a3, v29 & 0xF000 | 6);
      sub_5D6FC(a1, a3, v29 & 0xF000 | 2);
      sub_5D6FC(a1, a3, v29 | 0x50);
      sub_5D6FC(a1, a3, v29 & 0xF000 | 5);
      sub_5D6FC(a1, a3, v29 & 0xF000 | 0xA);
      sub_5D6FC(a1, a3, v29 | 0x50);
      sub_5D6FC(a1, a3, v29 & 0xF000 | 0xAF);
      sub_5D6FC(a1, a3, v29 | 0x9D);
      sub_5D6FC(a1, a3, v29 | 0x9D);
      sub_5D6FC(a1, a3, v29 | 0x9C);
      sub_5D6FC(a1, a3, v29 | 0x9C);
      sub_5D6FC(a1, a3, v29 & 0xF000 | 0x9E);
      sub_5D6FC(a1, a3, v29 & 0xF000 | 0x9F);
      sub_5D6FC(a1, a3, v29 & 0xF000 | 0x96);
      sub_5D6FC(a1, a3, v29 | 0x97);
      sub_5D6FC(a1, a3, v29 | 0x97);
      sub_5D6FC(a1, a3, v29 & 0xF000 | 0x98);
    }
    while ( v26 > v28 );
  }
  else
  {
    v26 = 0;
    sub_5D6FC(a1, a3, 0xB03Fu);
    sub_5D6FC(a1, a3, 0xC03Fu);
    sub_5D6FC(a1, a3, 0xB03Eu);
    sub_5D6FC(a1, a3, 0xC03Eu);
    sub_5D6FC(a1, a3, 0xB03Fu);
    sub_5D6FC(a1, a3, 0xC03Fu);
    sub_5D6FC(a1, a3, 0xB002u);
    sub_5D6FC(a1, a3, 0xB002u);
    sub_5D6FC(a1, a3, 0xB003u);
    sub_5D6FC(a1, a3, 0xC003u);
    sub_5D6FC(a1, a3, 0xB005u);
    sub_5D6FC(a1, a3, 0xC005u);
    sub_5D6FC(a1, a3, 0xB006u);
    sub_5D6FC(a1, a3, 0xC006u);
    sub_5D6FC(a1, a3, 0x8008u);
    sub_5D6FC(a1, a3, 0x8009u);
    sub_5D6FC(a1, a3, 0x803Eu);
    sub_5D6FC(a1, a3, 0x805Du);
    sub_5D6FC(a1, a3, 0x805Du);
    sub_5D6FC(a1, a3, 0x805Du);
    sub_5D6FC(a1, a3, 0x805Du);
    sub_5D6FC(a1, a3, 0x805Eu);
    sub_5D6FC(a1, a3, 0x805Eu);
    sub_5D6FC(a1, a3, 0x805Eu);
    sub_5D6FC(a1, a3, 0x805Eu);
    sub_5D6FC(a1, a3, 0x805Eu);
    sub_5D6FC(a1, a3, 0x805Fu);
    sub_5D6FC(a1, a3, 0x8041u);
    sub_5D6FC(a1, a3, 0x8002u);
    sub_5D6FC(a1, a3, 0x803Eu);
    sub_5D6FC(a1, a3, 0x8002u);
    sub_5D6FC(a1, a3, 0x8048u);
    sub_5D6FC(a1, a3, 0x804Cu);
    sub_5D6FC(a1, a3, 0x800Cu);
    sub_5D6FC(a1, a3, 0x8002u);
    sub_5D6FC(a1, a3, 0x803Cu);
    sub_5D6FC(a1, a3, 0x801Bu);
    sub_5D6FC(a1, a3, 0x801Cu);
    sub_5D6FC(a1, a3, 0x8014u);
  }
  sub_5D6FC(a1, a3, 0xB03Bu);
  sub_5D6FC(a1, a3, 0xC03Bu);
  sub_5D6FC(a1, a3, 0xB03Cu);
  sub_5D6FC(a1, a3, 0xC03Cu);
  sub_5D6FC(a1, a3, 0xB03Cu);
  sub_5D6FC(a1, a3, 0xC03Cu);
  sub_5D6FC(a1, a3, 0xB03Cu);
  sub_5D6FC(a1, a3, 0xC03Cu);
  sub_5D6FC(a1, a3, 0xB03Du);
  sub_5D6FC(a1, a3, 0xC03Du);
  sub_5D6FC(a1, a3, 0xB03Du);
  sub_5D6FC(a1, a3, 0xC03Du);
  sub_5D6FC(a1, a3, 0xB03Du);
  sub_5D6FC(a1, a3, 0xC03Du);
  sub_5D6FC(a1, a3, 0xB01Cu);
  sub_5D6FC(a1, a3, 0xC01Cu);
  sub_5D6FC(a1, a3, 0xB01Cu);
  sub_5D6FC(a1, a3, 0xC01Cu);
  sub_5D6FC(a1, a3, 0xB01Du);
  sub_5D6FC(a1, a3, 0xC01Du);
  sub_5D6FC(a1, a3, 0xB01Du);
  sub_5D6FC(a1, a3, 0xC01Du);
  sub_5D6FC(a1, a3, 0xB01Du);
  sub_5D6FC(a1, a3, 0xC01Du);
  sub_5D6FC(a1, a3, 0xB01Du);
  sub_5D6FC(a1, a3, 0xC01Du);
  sub_5D6FC(a1, a3, 0xB01Eu);
  sub_5D6FC(a1, a3, 0xC01Eu);
  sub_5D6FC(a1, a3, 0xB01Eu);
  sub_5D6FC(a1, a3, 0xC01Eu);
  if ( v26 )
  {
    v30 = 0;
    do
    {
      v31 = v30++ << 12;
      sub_5D6FC(a1, a3, v31 | 0xA);
      sub_5D6FC(a1, a3, v31 | 0xA);
      sub_5D6FC(a1, a3, v31 & 0xF000 | 9);
      sub_5D6FC(a1, a3, v31 | 0x12);
      sub_5D6FC(a1, a3, v31 | 0x12);
      sub_5D6FC(a1, a3, v31 & 0xF000 | 0x13);
    }
    while ( v30 < v26 );
  }
  sub_5D6FC(a1, a3, 0xA005u);
  sub_5D6FC(a1, a3, 0xA007u);
  sub_5D6FC(a1, a3, 0xB025u);
  sub_5D6FC(a1, a3, 0xC025u);
  sub_5D6FC(a1, a3, 0xB025u);
  sub_5D6FC(a1, a3, 0xC025u);
  sub_5D6FC(a1, a3, 0xB028u);
  sub_5D6FC(a1, a3, 0xC028u);
  sub_5D6FC(a1, a3, 0xB029u);
  sub_5D6FC(a1, a3, 0xC029u);
  sub_5D6FC(a1, a3, 0xB029u);
  sub_5D6FC(a1, a3, 0xC029u);
  sub_5D6FC(a1, a3, 0xB029u);
  sub_5D6FC(a1, a3, 0xC029u);
  sub_5D6FC(a1, a3, 0xB02Du);
  sub_5D6FC(a1, a3, 0xC02Du);
  sub_5D6FC(a1, a3, 0xB02Du);
  sub_5D6FC(a1, a3, 0xC02Du);
  if ( v26 )
  {
    v32 = 0;
    do
    {
      v33 = v32++ << 12;
      sub_5D6FC(a1, a3, v33 & 0xF000 | 8);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x6B);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x9D);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x9E);
      sub_5D6FC(a1, a3, v33 | 0x6A);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x50);
      sub_5D6FC(a1, a3, v33 | 0x6A);
      sub_5D6FC(a1, a3, v33 & 0xF000 | 0x53);
    }
    while ( v32 < v26 );
    v34 = 0;
    sub_5D6FC(a1, a3, 0x803Du);
    sub_5D6FC(a1, a3, 0x803Du);
    do
    {
      v35 = v34++ << 12;
      sub_5D6FC(a1, a3, v35 | 0x46);
      sub_5D6FC(a1, a3, v35 | 0x46);
      sub_5D6FC(a1, a3, v35 | 0x47);
      sub_5D6FC(a1, a3, v35 | 0x47);
      sub_5D6FC(a1, a3, v35 | 0x47);
      sub_5D6FC(a1, a3, v35 | 0x47);
      sub_5D6FC(a1, a3, v35 | 0x47);
      sub_5D6FC(a1, a3, v35 | 0x48);
      sub_5D6FC(a1, a3, v35 | 0x48);
      sub_5D6FC(a1, a3, v35 | 0x48);
      sub_5D6FC(a1, a3, v35 | 0x48);
      sub_5D6FC(a1, a3, v35 | 0x48);
      sub_5D6FC(a1, a3, v35 | 0x49);
      sub_5D6FC(a1, a3, v35 | 0x49);
      sub_5D6FC(a1, a3, v35 | 0x49);
      sub_5D6FC(a1, a3, v35 | 0x49);
      sub_5D6FC(a1, a3, v35 | 0x49);
      sub_5D6FC(a1, a3, v35 | 0x4A);
      sub_5D6FC(a1, a3, v35 | 0x4A);
      sub_5D6FC(a1, a3, v35 | 0x4A);
      sub_5D6FC(a1, a3, v35 | 0x27);
      sub_5D6FC(a1, a3, v35 | 0x27);
      sub_5D6FC(a1, a3, v35 | 0x28);
      sub_5D6FC(a1, a3, v35 | 0x28);
      sub_5D6FC(a1, a3, v35 | 0x28);
      sub_5D6FC(a1, a3, v35 | 0x28);
      sub_5D6FC(a1, a3, v35 | 0x29);
      sub_5D6FC(a1, a3, v35 | 0x29);
      sub_5D6FC(a1, a3, v35 | 0x29);
      sub_5D6FC(a1, a3, v35 | 0x2A);
      sub_5D6FC(a1, a3, v35 | 0x2A);
      sub_5D6FC(a1, a3, v35 | 0x2B);
      sub_5D6FC(a1, a3, v35 | 0x2B);
      sub_5D6FC(a1, a3, v35 | 0x2B);
      sub_5D6FC(a1, a3, v35 | 0x2B);
      sub_5D6FC(a1, a3, v35 & 0xF000 | 0x2C);
      sub_5D6FC(a1, a3, v35 & 0xF000 | 0x67);
      sub_5D6FC(a1, a3, v35 & 0xF000 | 0x96);
    }
    while ( v26 > v34 );
    v36 = 0;
    sub_5D6FC(a1, a3, 0x8051u);
    sub_5D6FC(a1, a3, 0x800Du);
    do
    {
      v37 = v36++ << 12;
      sub_5D6FC(a1, a3, v37 & 0xF000 | 0x43);
      sub_5D6FC(a1, a3, v37 & 0xF000 | 0x75);
      sub_5D6FC(a1, a3, v37 & 0xF000 | 0x76);
      sub_5D6FC(a1, a3, v37 & 0xF000 | 0xB0);
    }
    while ( v26 > v36 );
    v38 = 0;
    sub_5D6FC(a1, a3, 0x8030u);
    sub_5D6FC(a1, a3, 0x803Bu);
    sub_5D6FC(a1, a3, 0x8044u);
    sub_5D6FC(a1, a3, 0x8060u);
    sub_5D6FC(a1, a3, 0x8008u);
    sub_5D6FC(a1, a3, 0x803Eu);
    do
    {
      v39 = v38++ << 12;
      sub_5D6FC(a1, a3, v39 & 0xF000 | 0x49);
      sub_5D6FC(a1, a3, v39 & 0xF000 | 0xF);
      sub_5D6FC(a1, a3, v39 & 0xF000 | 0x96);
    }
    while ( v26 > v38 );
    return 0;
  }
  else
  {
    sub_5D6FC(a1, a3, 0x803Du);
    sub_5D6FC(a1, a3, 0x803Du);
    sub_5D6FC(a1, a3, 0x8051u);
    sub_5D6FC(a1, a3, 0x800Du);
    sub_5D6FC(a1, a3, 0x8030u);
    sub_5D6FC(a1, a3, 0x803Bu);
    sub_5D6FC(a1, a3, 0x8044u);
    sub_5D6FC(a1, a3, 0x8060u);
    sub_5D6FC(a1, a3, 0x8008u);
    sub_5D6FC(a1, a3, 0x803Eu);
    return 0;
  }
}
