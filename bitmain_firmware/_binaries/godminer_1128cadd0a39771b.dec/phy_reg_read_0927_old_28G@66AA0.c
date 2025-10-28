int __fastcall phy_reg_read_0927_old_28G(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v6; // r9
  int v7; // r0
  int v8; // r7
  __int16 v9; // r6
  int v10; // r7
  __int16 v11; // r6
  int v12; // r7
  __int16 v13; // r6
  int v14; // r3
  unsigned __int16 v15; // r6
  int v16; // r6
  __int16 v17; // r2
  int v18; // r7
  __int16 v19; // r6
  unsigned int v20; // r7
  unsigned __int16 v21; // r6
  unsigned __int16 v22; // r10
  unsigned __int16 v23; // r6
  unsigned __int16 v24; // r11
  unsigned __int16 v25; // r8
  int v26; // r2
  int v27; // r9
  unsigned __int16 v28; // r10
  unsigned __int16 v29; // r6
  int v30; // r2
  int v31; // r6
  unsigned __int16 v32; // r10
  unsigned __int16 v33; // r6
  int v34; // r9
  int v35; // r2
  int v36; // r8
  unsigned __int16 v37; // r9
  unsigned __int16 v38; // r6
  __int16 v40; // [sp+14h] [bp-4h]
  _BYTE v41[4100]; // [sp+18h] [bp+0h] BYREF

  v6 = a4;
  V_LOCK(a1);
  v7 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_reg_read_0927_old_28G",
    25,
    1909,
    60,
    v41);
  if ( v6 )
  {
    LOWORD(v8) = 0;
    do
    {
      v9 = (_WORD)v8 << 12;
      v8 = (unsigned __int16)(v8 + 1);
      sub_5DF0C(a1, a3, v9 & 0xF000 | 0x67);
      sub_5DF0C(a1, a3, v9 & 0xF000 | 0x96);
    }
    while ( v8 != v6 );
    LOWORD(v10) = 0;
    sub_5DF0C(a1, a3, 32849);
    sub_5DF0C(a1, a3, 32781);
    do
    {
      v11 = (_WORD)v10 << 12;
      v10 = (unsigned __int16)(v10 + 1);
      sub_5DF0C(a1, a3, v11 & 0xF000 | 0x43);
      sub_5DF0C(a1, a3, v11 & 0xF000 | 0x75);
      sub_5DF0C(a1, a3, v11 & 0xF000 | 0x76);
      sub_5DF0C(a1, a3, v11 & 0xF000 | 0xB0);
    }
    while ( v10 != v6 );
    LOWORD(v12) = 0;
    sub_5DF0C(a1, a3, 32816);
    sub_5DF0C(a1, a3, 32827);
    sub_5DF0C(a1, a3, 32836);
    sub_5DF0C(a1, a3, 32864);
    sub_5DF0C(a1, a3, 32776);
    sub_5DF0C(a1, a3, 32830);
    do
    {
      v13 = (_WORD)v12 << 12;
      v12 = (unsigned __int16)(v12 + 1);
      sub_5DF0C(a1, a3, v13 & 0xF000 | 0x49);
      sub_5DF0C(a1, a3, v13 & 0xF000 | 0xF);
    }
    while ( v12 != v6 );
    sub_5DF0C(a1, a3, 32863);
    sub_5DF0C(a1, a3, 32863);
    sub_5DF0C(a1, a3, 32830);
    LOWORD(v14) = 0;
    do
    {
      v40 = v14;
      v15 = (_WORD)v14 << 12;
      sub_5DF0C(a1, a3, (unsigned __int16)((_WORD)v14 << 12) | 0x16);
      sub_5DF0C(a1, a3, v15 | 0xA9);
      sub_5DF0C(a1, a3, v15 | 0xA9);
      sub_5DF0C(a1, a3, v15 | 0xA9);
      sub_5DF0C(a1, a3, v15 | 0xA9);
      sub_5DF0C(a1, a3, v15 | 0xAA);
      sub_5DF0C(a1, a3, v15 | 0xAA);
      sub_5DF0C(a1, a3, v15 | 0xAA);
      sub_5DF0C(a1, a3, v15 | 0xAA);
      sub_5DF0C(a1, a3, v15 | 0xAA);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0xAB);
      sub_5DF0C(a1, a3, v15 | 0x9F);
      sub_5DF0C(a1, a3, v15 | 0x9F);
      sub_5DF0C(a1, a3, v15 | 0xA0);
      sub_5DF0C(a1, a3, v15 | 0xA0);
      sub_5DF0C(a1, a3, v15 | 0xA0);
      sub_5DF0C(a1, a3, v15 | 0xA0);
      sub_5DF0C(a1, a3, v15 | 0xA1);
      sub_5DF0C(a1, a3, v15 | 0xA1);
      sub_5DF0C(a1, a3, v15 | 0x75);
      sub_5DF0C(a1, a3, v15 | 0x75);
      sub_5DF0C(a1, a3, v15 | 0x76);
      sub_5DF0C(a1, a3, v15 | 0x76);
      sub_5DF0C(a1, a3, v15 | 0x76);
      sub_5DF0C(a1, a3, v15 | 0x76);
      sub_5DF0C(a1, a3, v15 | 0x77);
      sub_5DF0C(a1, a3, v15 | 0x77);
      sub_5DF0C(a1, a3, v15 | 0x77);
      sub_5DF0C(a1, a3, v15 | 0x77);
      sub_5DF0C(a1, a3, v15 | 0x78);
      sub_5DF0C(a1, a3, v15 | 0x78);
      sub_5DF0C(a1, a3, v15 | 0x78);
      sub_5DF0C(a1, a3, v15 | 0x78);
      sub_5DF0C(a1, a3, v15 | 0x79);
      sub_5DF0C(a1, a3, v15 | 0x79);
      sub_5DF0C(a1, a3, v15 | 0x25);
      sub_5DF0C(a1, a3, v15 | 0x25);
      sub_5DF0C(a1, a3, v15 | 0x26);
      sub_5DF0C(a1, a3, v15 | 0x26);
      sub_5DF0C(a1, a3, v15 | 0x26);
      sub_5DF0C(a1, a3, v15 | 0x26);
      sub_5DF0C(a1, a3, v15 | 0x26);
      sub_5DF0C(a1, a3, v15 | 0x27);
      sub_5DF0C(a1, a3, v15 | 0x27);
      sub_5DF0C(a1, a3, v15 | 0x27);
      sub_5DF0C(a1, a3, v15 | 0x27);
      sub_5DF0C(a1, a3, v15 | 0x27);
      sub_5DF0C(a1, a3, v15 | 0x28);
      sub_5DF0C(a1, a3, v15 | 0x28);
      sub_5DF0C(a1, a3, v15 | 0x28);
      sub_5DF0C(a1, a3, v15 | 0x28);
      sub_5DF0C(a1, a3, v15 | 0x28);
      sub_5DF0C(a1, a3, v15 | 0x29);
      sub_5DF0C(a1, a3, v15 | 0x29);
      sub_5DF0C(a1, a3, v15 | 0x29);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0x24);
      sub_5DF0C(a1, a3, v15 | 0x25);
      sub_5DF0C(a1, a3, v15 | 0x26);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0x56);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0x7C);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0x89);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0x95);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0xA2);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0x12);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0x4A);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0x85);
      sub_5DF0C(a1, a3, v15 | 0x9F);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0x11);
      sub_5DF0C(a1, a3, v15 & 0xF000 | 0x13);
      v14 = (unsigned __int16)(v40 + 1);
    }
    while ( v14 != v6 );
    LOWORD(v16) = 0;
    sub_5DF0C(a1, a3, 32776);
    sub_5DF0C(a1, a3, 32777);
    sub_5DF0C(a1, a3, 40962);
    sub_5DF0C(a1, a3, 40998);
    do
    {
      v17 = (_WORD)v16 << 12;
      v16 = (unsigned __int16)(v16 + 1);
      sub_5DF0C(a1, a3, v17 & 0xF000 | 0xD);
    }
    while ( v16 != v6 );
    LOWORD(v18) = 0;
    sub_5DF0C(a1, a3, 32795);
    sub_5DF0C(a1, a3, 32796);
    sub_5DF0C(a1, a3, 32828);
    do
    {
      v19 = (_WORD)v18 << 12;
      v18 = (unsigned __int16)(v18 + 1);
      sub_5DF0C(a1, a3, v19 & 0xF000 | 0x19);
      sub_5DF0C(a1, a3, v19 & 0xF000 | 0x22);
      sub_5DF0C(a1, a3, v19 & 0xF000 | 0x74);
      sub_5DF0C(a1, a3, v19 & 0xF000 | 0xA1);
      sub_5DF0C(a1, a3, v19 & 0xF000 | 0x88);
      sub_5DF0C(a1, a3, v19 & 0xF000 | 0x12);
      sub_5DF0C(a1, a3, v19 & 0xF000 | 0x4A);
      sub_5DF0C(a1, a3, v19 & 0xF000 | 0x7E);
      sub_5DF0C(a1, a3, v19 & 0xF000 | 0xB6);
    }
    while ( v18 != v6 );
    LOWORD(v20) = 0;
    sub_5DF0C(a1, a3, 32770);
    do
    {
      v21 = (_WORD)v20 << 12;
      v20 = (unsigned __int16)(v20 + 1);
      sub_5DF0C(a1, a3, v21 & 0xF000 | 2);
      sub_5DF0C(a1, a3, v21 | 8);
      sub_5DF0C(a1, a3, v21 | 8);
      sub_5DF0C(a1, a3, v21 & 0xF000 | 3);
    }
    while ( v20 != v6 );
    v22 = 0;
    sub_5DF0C(a1, a3, 32830);
    do
    {
      v23 = v22++ << 12;
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x1A);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x1D);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x1E);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x45);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x46);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x47);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x71);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 2);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x99);
      v24 = v23 | 0x6A;
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x7F);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x13);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x14);
      sub_5DF0C(a1, a3, v23 | 0x11);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x15);
      sub_5DF0C(a1, a3, v23 | 0x11);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x16);
      sub_5DF0C(a1, a3, v23 | 0x17);
      sub_5DF0C(a1, a3, v23 | 0x17);
      sub_5DF0C(a1, a3, v23 | 0xA5);
      sub_5DF0C(a1, a3, v23 | 0xA5);
      sub_5DF0C(a1, a3, v23 | 0xA6);
      sub_5DF0C(a1, a3, v23 | 0xA6);
      sub_5DF0C(a1, a3, v23 | 0xA6);
      sub_5DF0C(a1, a3, v23 | 0xA6);
      sub_5DF0C(a1, a3, v23 | 0xA7);
      sub_5DF0C(a1, a3, v23 | 0xA7);
      sub_5DF0C(a1, a3, v23 | 0xA7);
      v25 = v23 | 1;
      sub_5DF0C(a1, a3, v23 | 0xA7);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x4A);
      sub_5DF0C(a1, a3, v23 & 0xF000 | 0x90);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 1, -67108865);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 0x3A, 0);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 1, -67108865);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 0x3A, 0x4000000);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 1, -67108865);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 0x3A, 0);
      sub_5DF0C(a1, a3, v23 | 0x6A);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 1, -67108865);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 0x3A, 0);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 1, -67108865);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 0x3A, 0x4000000);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 1, -67108865);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 0x3A, 0);
      sub_5DF0C(a1, a3, v23 | 0x6A);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 1, -67108865);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 0x3A, 0);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 1, -67108865);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 0x3A, 0x4000000);
      sub_5E0B4(a1, (unsigned __int8)a3, v23 | 1, -67108865);
      v26 = v23 | 0x3A;
      v27 = v23 | 0x5F;
      v23 |= 0x98u;
      sub_5E0B4(a1, (unsigned __int8)a3, v26, 0);
      sub_5DF0C(a1, a3, v24);
      sub_5E0B4(a1, (unsigned __int8)a3, v25, -129);
      sub_5E0B4(a1, (unsigned __int8)a3, v27, 0);
      sub_5E0B4(a1, (unsigned __int8)a3, v25, -129);
      sub_5E0B4(a1, (unsigned __int8)a3, v27, 128);
      sub_5E0B4(a1, (unsigned __int8)a3, v25, -129);
      sub_5E0B4(a1, (unsigned __int8)a3, v27, 0);
      sub_5DF0C(a1, a3, v23);
      sub_5E0B4(a1, (unsigned __int8)a3, v25, -129);
      sub_5E0B4(a1, (unsigned __int8)a3, v27, 0);
      sub_5E0B4(a1, (unsigned __int8)a3, v25, -129);
      sub_5E0B4(a1, (unsigned __int8)a3, v27, 128);
      sub_5E0B4(a1, (unsigned __int8)a3, v25, -129);
      sub_5E0B4(a1, (unsigned __int8)a3, v27, 0);
      sub_5DF0C(a1, a3, v23);
      sub_5E0B4(a1, (unsigned __int8)a3, v25, -129);
      sub_5E0B4(a1, (unsigned __int8)a3, v27, 0);
      sub_5E0B4(a1, (unsigned __int8)a3, v25, -129);
      sub_5E0B4(a1, (unsigned __int8)a3, v27, 128);
      sub_5E0B4(a1, (unsigned __int8)a3, v25, -129);
      sub_5E0B4(a1, (unsigned __int8)a3, v27, 0);
      sub_5DF0C(a1, a3, v23);
    }
    while ( v20 > v22 );
  }
  else
  {
    v20 = 0;
    sub_5DF0C(a1, a3, 32849);
    sub_5DF0C(a1, a3, 32781);
    sub_5DF0C(a1, a3, 32816);
    sub_5DF0C(a1, a3, 32827);
    sub_5DF0C(a1, a3, 32836);
    sub_5DF0C(a1, a3, 32864);
    sub_5DF0C(a1, a3, 32776);
    sub_5DF0C(a1, a3, 32830);
    sub_5DF0C(a1, a3, 32863);
    sub_5DF0C(a1, a3, 32863);
    sub_5DF0C(a1, a3, 32830);
    sub_5DF0C(a1, a3, 32776);
    sub_5DF0C(a1, a3, 32777);
    sub_5DF0C(a1, a3, 40962);
    sub_5DF0C(a1, a3, 40998);
    sub_5DF0C(a1, a3, 32795);
    sub_5DF0C(a1, a3, 32796);
    sub_5DF0C(a1, a3, 32828);
    sub_5DF0C(a1, a3, 32770);
    sub_5DF0C(a1, a3, 32830);
  }
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5DF0C(a1, a3, 32863);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5DF0C(a1, a3, 32863);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450815);
  sub_5DF0C(a1, a3, 32863);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x1000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5C968(a1, (unsigned __int8)a3, 144, -16777217);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450813);
  sub_5DF0C(a1, a3, 32834);
  sub_5DF0C(a1, a3, 32855);
  sub_5DF0C(a1, a3, 32856);
  sub_5DF0C(a1, a3, 32856);
  sub_5DF0C(a1, a3, 32840);
  sub_5DF0C(a1, a3, 32844);
  if ( v20 )
  {
    v28 = 0;
    do
    {
      v29 = v28++ << 12;
      sub_5DF0C(a1, a3, v29 | 0x11);
      sub_5DF0C(a1, a3, v29 | 0x11);
      sub_5DF0C(a1, a3, v29 | 0x9A);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x65);
      sub_5DF0C(a1, a3, v29 | 0x9A);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x27);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x96);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x7C);
      sub_5DF0C(a1, a3, v29 | 0xBE);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0xA6);
      sub_5DF0C(a1, a3, v29 | 0xBE);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x8B);
      sub_5DF0C(a1, a3, v29 | 0x8C);
      sub_5DF0C(a1, a3, v29 | 0x8C);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x46);
      sub_5DF0C(a1, a3, v29 | 0x4A);
      sub_5DF0C(a1, a3, v29 | 0x4A);
      sub_5DF0C(a1, a3, v29 | 0x4B);
      sub_5DF0C(a1, a3, v29 | 0x4B);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x56);
      sub_5DF0C(a1, a3, v29 | 0x4B);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x53);
      sub_5DF0C(a1, a3, v29 | 0x1A);
      sub_5DF0C(a1, a3, v29 | 0x1A);
      sub_5DF0C(a1, a3, v29 | 0x1A);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x73);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x84);
      sub_5DF0C(a1, a3, v29 | 0x24);
      sub_5DF0C(a1, a3, v29 | 0x25);
      sub_5DF0C(a1, a3, v29 | 0xE);
      sub_5DF0C(a1, a3, v29 | 0xE);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x85);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x86);
      sub_5DF0C(a1, a3, v29 | 0x11);
      sub_5DF0C(a1, a3, v29 | 0x11);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0xF);
      sub_5DF0C(a1, a3, v29 | 0x91);
      sub_5DF0C(a1, a3, v29 | 0x77);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 2);
      sub_5DF0C(a1, a3, v29 | 0x91);
      sub_5DF0C(a1, a3, v29 | 0x77);
      sub_5DF0C(a1, a3, v29 | 0x24);
      sub_5DF0C(a1, a3, v29 | 0x25);
      sub_5DF0C(a1, a3, v29 | 0x60);
      sub_5DF0C(a1, a3, v29 | 0x60);
      sub_5DF0C(a1, a3, v29 | 0x24);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x41);
      sub_5DF0C(a1, a3, v29 | 0x7B);
      sub_5DF0C(a1, a3, v29 | 0x7B);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x88);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x89);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x94);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0x95);
      sub_5DF0C(a1, a3, v29 & 0xF000 | 0xA1);
      v30 = v29 & 0xF000;
      v31 = v29 | 0x6E;
      sub_5DF0C(a1, a3, v30 | 0xA4);
      sub_5DF0C(a1, a3, v31);
      sub_5DF0C(a1, a3, v31);
    }
    while ( v20 > v28 );
    v32 = 0;
    sub_5DF0C(a1, a3, 32842);
    sub_5DF0C(a1, a3, 32847);
    sub_5DF0C(a1, a3, 32829);
    sub_5DF0C(a1, a3, 32833);
    sub_5DF0C(a1, a3, 32770);
    sub_5DF0C(a1, a3, 32788);
    do
    {
      v33 = v32++ << 12;
      v34 = v33 | 0x2C;
      sub_5DF0C(a1, a3, v33 & 0xF000 | 0x69);
      sub_5DF0C(a1, a3, v33 & 0xF000 | 0x48);
      sub_5DF0C(a1, a3, v33 & 0xF000 | 2);
      sub_5DF0C(a1, a3, v33 & 0xF000 | 6);
      sub_5DF0C(a1, a3, v34);
      sub_5DF0C(a1, a3, v33 | 0x27);
      sub_5DF0C(a1, a3, v33 | 0x27);
      sub_5DF0C(a1, a3, v33 | 0x28);
      sub_5DF0C(a1, a3, v33 | 0x28);
      sub_5DF0C(a1, a3, v33 | 0x28);
      sub_5DF0C(a1, a3, v33 | 0x28);
      sub_5DF0C(a1, a3, v33 | 0x29);
      sub_5DF0C(a1, a3, v33 | 0x29);
      v35 = v33 | 0x29;
      v36 = v33 | 0x2A;
      v33 |= 0x2Bu;
      sub_5DF0C(a1, a3, v35);
      sub_5DF0C(a1, a3, v36);
      sub_5DF0C(a1, a3, v36);
      sub_5DF0C(a1, a3, v33);
      sub_5DF0C(a1, a3, v33);
      sub_5DF0C(a1, a3, v33);
      sub_5DF0C(a1, a3, v33);
      sub_5DF0C(a1, a3, v34);
    }
    while ( v20 > v32 );
    v37 = 0;
    sub_5DF0C(a1, a3, 32797);
    sub_5DF0C(a1, a3, 32803);
    sub_5DF0C(a1, a3, 32804);
    sub_5DF0C(a1, a3, 32838);
    sub_5DF0C(a1, a3, 32865);
    do
    {
      v38 = v37++ << 12;
      sub_5DF0C(a1, a3, v38 | 0x56);
      sub_5DF0C(a1, a3, v38 | 0x56);
      sub_5DF0C(a1, a3, v38 & 0xF000 | 0x57);
      sub_5DF0C(a1, a3, v38 & 0xF000 | 0x58);
      sub_5DF0C(a1, a3, v38 | 0x5D);
      sub_5DF0C(a1, a3, v38 | 0x5D);
      sub_5DF0C(a1, a3, v38 | 0x5D);
      sub_5DF0C(a1, a3, v38 & 0xF000 | 0x5E);
      sub_5DF0C(a1, a3, v38 | 0x5B);
      sub_5DF0C(a1, a3, v38 | 0x5B);
      sub_5DF0C(a1, a3, v38 & 0xF000 | 0x88);
      sub_5DF0C(a1, a3, v38 & 0xF000 | 0x61);
    }
    while ( v20 > v37 );
  }
  else
  {
    sub_5DF0C(a1, a3, 32842);
    sub_5DF0C(a1, a3, 32847);
    sub_5DF0C(a1, a3, 32829);
    sub_5DF0C(a1, a3, 32833);
    sub_5DF0C(a1, a3, 32770);
    sub_5DF0C(a1, a3, 32788);
    sub_5DF0C(a1, a3, 32797);
    sub_5DF0C(a1, a3, 32803);
    sub_5DF0C(a1, a3, 32804);
    sub_5DF0C(a1, a3, 32838);
    sub_5DF0C(a1, a3, 32865);
  }
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147442687);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147438591);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147434495);
  return 0;
}
