int __fastcall check_phy_reg_0917(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v6; // r8
  int v7; // r0
  int v8; // r6
  __int16 v9; // r2
  int v10; // r7
  unsigned __int16 v11; // r6
  int v12; // r9
  int v13; // r7
  unsigned __int16 v14; // r6
  int v15; // r6
  __int16 v16; // r2
  int v17; // r7
  __int16 v18; // r6
  int v19; // r7
  __int16 v20; // r6
  int v21; // r7
  unsigned __int16 v22; // r6
  unsigned int v23; // r7
  __int16 v24; // r6
  unsigned __int16 v25; // r9
  unsigned __int16 v26; // r6
  unsigned __int16 v27; // r9
  unsigned __int16 v28; // r6
  unsigned __int16 v29; // r9
  unsigned __int16 v30; // r6
  unsigned __int16 v31; // r9
  unsigned __int16 v32; // r6
  unsigned __int16 v33; // r8
  __int16 v34; // r6
  unsigned __int16 v35; // r8
  __int16 v36; // r6
  _BYTE v38[4100]; // [sp+10h] [bp+0h] BYREF

  v6 = a4;
  V_LOCK(a1);
  v7 = logfmt_raw((int)v38, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_phy_reg_0917",
    18,
    1212,
    60,
    v38);
  if ( v6 )
  {
    LOWORD(v8) = 0;
    do
    {
      v9 = (_WORD)v8 << 12;
      v8 = (unsigned __int16)(v8 + 1);
      sub_5DF0C(a1, a3, v9 & 0xF000 | 0x6E);
    }
    while ( v8 != v6 );
    LOWORD(v10) = 0;
    sub_5DF0C(a1, a3, 45119);
    sub_5DF0C(a1, a3, 49215);
    sub_5DF0C(a1, a3, 45118);
    sub_5DF0C(a1, a3, 49214);
    sub_5DF0C(a1, a3, 45119);
    sub_5DF0C(a1, a3, 49215);
    do
    {
      v11 = (_WORD)v10 << 12;
      v10 = (unsigned __int16)(v10 + 1);
      v12 = v11 | 0x6E;
      sub_5DF0C(a1, a3, v12);
      sub_5DF0C(a1, a3, v11 & 0xF000 | 0x6F);
      sub_5DF0C(a1, a3, v12);
      sub_5DF0C(a1, a3, v12);
    }
    while ( v10 != v6 );
    LOWORD(v13) = 0;
    sub_5DF0C(a1, a3, 45058);
    sub_5DF0C(a1, a3, 45058);
    sub_5DF0C(a1, a3, 45059);
    sub_5DF0C(a1, a3, 49155);
    sub_5DF0C(a1, a3, 45061);
    sub_5DF0C(a1, a3, 49157);
    sub_5DF0C(a1, a3, 45062);
    sub_5DF0C(a1, a3, 49158);
    do
    {
      v14 = (_WORD)v13 << 12;
      v13 = (unsigned __int16)(v13 + 1);
      sub_5DF0C(a1, a3, v14 & 0xF000 | 0x2A);
      sub_5DF0C(a1, a3, v14 & 0xF000 | 0x2F);
      sub_5DF0C(a1, a3, v14 & 0xF000 | 0x30);
      sub_5DF0C(a1, a3, v14 & 0xF000 | 0x19);
      sub_5DF0C(a1, a3, v14 & 0xF000 | 0x1B);
      sub_5DF0C(a1, a3, v14 | 0x1A);
      sub_5DF0C(a1, a3, v14 & 0xF000 | 0x1D);
      sub_5DF0C(a1, a3, v14 | 0x1A);
      sub_5DF0C(a1, a3, v14 & 0xF000 | 0x47);
      sub_5DF0C(a1, a3, v14 & 0xF000 | 0x12);
      sub_5DF0C(a1, a3, v14 & 0xF000 | 0x4A);
    }
    while ( v13 != v6 );
    LOWORD(v15) = 0;
    sub_5DF0C(a1, a3, 32776);
    sub_5DF0C(a1, a3, 32777);
    do
    {
      v16 = (_WORD)v15 << 12;
      v15 = (unsigned __int16)(v15 + 1);
      sub_5DF0C(a1, a3, v16 & 0xF000 | 0x20);
    }
    while ( v15 != v6 );
    LOWORD(v17) = 0;
    sub_5DF0C(a1, a3, 32830);
    do
    {
      v18 = (_WORD)v17 << 12;
      v17 = (unsigned __int16)(v17 + 1);
      sub_5DF0C(a1, a3, v18 & 0xF000 | 0x7E);
      sub_5DF0C(a1, a3, v18 & 0xF000 | 0xB6);
    }
    while ( v17 != v6 );
    LOWORD(v19) = 0;
    sub_5DF0C(a1, a3, 32861);
    sub_5DF0C(a1, a3, 32861);
    sub_5DF0C(a1, a3, 32861);
    sub_5DF0C(a1, a3, 32861);
    sub_5DF0C(a1, a3, 32862);
    sub_5DF0C(a1, a3, 32862);
    sub_5DF0C(a1, a3, 32862);
    sub_5DF0C(a1, a3, 32862);
    sub_5DF0C(a1, a3, 32862);
    sub_5DF0C(a1, a3, 32863);
    sub_5DF0C(a1, a3, 32833);
    sub_5DF0C(a1, a3, 32770);
    do
    {
      v20 = (_WORD)v19 << 12;
      v19 = (unsigned __int16)(v19 + 1);
      sub_5DF0C(a1, a3, v20 & 0xF000 | 2);
      sub_5DF0C(a1, a3, v20 & 0xF000 | 8);
      sub_5DF0C(a1, a3, v20 & 0xF000 | 3);
    }
    while ( v19 != v6 );
    LOWORD(v21) = 0;
    sub_5DF0C(a1, a3, 32830);
    sub_5DF0C(a1, a3, 32770);
    sub_5DF0C(a1, a3, 32840);
    sub_5DF0C(a1, a3, 32844);
    sub_5DF0C(a1, a3, 32780);
    do
    {
      v22 = (_WORD)v21 << 12;
      v21 = (unsigned __int16)(v21 + 1);
      sub_5DF0C(a1, a3, v22 & 0xF000 | 0x96);
      sub_5DF0C(a1, a3, v22 & 0xF000 | 0x7C);
      sub_5DF0C(a1, a3, v22 | 0xBE);
      sub_5DF0C(a1, a3, v22 & 0xF000 | 0xA6);
      sub_5DF0C(a1, a3, v22 | 0xBE);
      sub_5DF0C(a1, a3, v22 & 0xF000 | 0x8B);
      sub_5DF0C(a1, a3, v22 | 0x8C);
      sub_5DF0C(a1, a3, v22 | 0x8C);
      sub_5DF0C(a1, a3, v22 & 0xF000 | 2);
      sub_5DF0C(a1, a3, v22 & 0xF000 | 0x69);
      sub_5DF0C(a1, a3, v22 & 0xF000 | 0x48);
    }
    while ( v21 != v6 );
    LOWORD(v23) = 0;
    sub_5DF0C(a1, a3, 32770);
    sub_5DF0C(a1, a3, 32828);
    sub_5DF0C(a1, a3, 32795);
    sub_5DF0C(a1, a3, 32796);
    do
    {
      v24 = (_WORD)v23 << 12;
      v23 = (unsigned __int16)(v23 + 1);
      sub_5DF0C(a1, a3, v24 & 0xF000 | 0x19);
      sub_5DF0C(a1, a3, v24 & 0xF000 | 0x22);
      sub_5DF0C(a1, a3, v24 & 0xF000 | 0x74);
    }
    while ( v23 != v6 );
    v25 = 0;
    sub_5DF0C(a1, a3, 32788);
    do
    {
      v26 = v25++ << 12;
      sub_5DF0C(a1, a3, v26 & 0xF000 | 6);
      sub_5DF0C(a1, a3, v26 & 0xF000 | 2);
      sub_5DF0C(a1, a3, v26 | 0x50);
      sub_5DF0C(a1, a3, v26 & 0xF000 | 5);
      sub_5DF0C(a1, a3, v26 & 0xF000 | 0xA);
      sub_5DF0C(a1, a3, v26 | 0x50);
      sub_5DF0C(a1, a3, v26 & 0xF000 | 0xAF);
      sub_5DF0C(a1, a3, v26 | 0x9D);
      sub_5DF0C(a1, a3, v26 | 0x9D);
      sub_5DF0C(a1, a3, v26 | 0x9C);
      sub_5DF0C(a1, a3, v26 | 0x9C);
      sub_5DF0C(a1, a3, v26 & 0xF000 | 0x9E);
      sub_5DF0C(a1, a3, v26 & 0xF000 | 0x9F);
      sub_5DF0C(a1, a3, v26 & 0xF000 | 0x96);
      sub_5DF0C(a1, a3, v26 | 0x97);
      sub_5DF0C(a1, a3, v26 | 0x97);
      sub_5DF0C(a1, a3, v26 & 0xF000 | 0x98);
    }
    while ( v23 > v25 );
  }
  else
  {
    v23 = 0;
    sub_5DF0C(a1, a3, 45119);
    sub_5DF0C(a1, a3, 49215);
    sub_5DF0C(a1, a3, 45118);
    sub_5DF0C(a1, a3, 49214);
    sub_5DF0C(a1, a3, 45119);
    sub_5DF0C(a1, a3, 49215);
    sub_5DF0C(a1, a3, 45058);
    sub_5DF0C(a1, a3, 45058);
    sub_5DF0C(a1, a3, 45059);
    sub_5DF0C(a1, a3, 49155);
    sub_5DF0C(a1, a3, 45061);
    sub_5DF0C(a1, a3, 49157);
    sub_5DF0C(a1, a3, 45062);
    sub_5DF0C(a1, a3, 49158);
    sub_5DF0C(a1, a3, 32776);
    sub_5DF0C(a1, a3, 32777);
    sub_5DF0C(a1, a3, 32830);
    sub_5DF0C(a1, a3, 32861);
    sub_5DF0C(a1, a3, 32861);
    sub_5DF0C(a1, a3, 32861);
    sub_5DF0C(a1, a3, 32861);
    sub_5DF0C(a1, a3, 32862);
    sub_5DF0C(a1, a3, 32862);
    sub_5DF0C(a1, a3, 32862);
    sub_5DF0C(a1, a3, 32862);
    sub_5DF0C(a1, a3, 32862);
    sub_5DF0C(a1, a3, 32863);
    sub_5DF0C(a1, a3, 32833);
    sub_5DF0C(a1, a3, 32770);
    sub_5DF0C(a1, a3, 32830);
    sub_5DF0C(a1, a3, 32770);
    sub_5DF0C(a1, a3, 32840);
    sub_5DF0C(a1, a3, 32844);
    sub_5DF0C(a1, a3, 32780);
    sub_5DF0C(a1, a3, 32770);
    sub_5DF0C(a1, a3, 32828);
    sub_5DF0C(a1, a3, 32795);
    sub_5DF0C(a1, a3, 32796);
    sub_5DF0C(a1, a3, 32788);
  }
  sub_5DF0C(a1, a3, 45115);
  sub_5DF0C(a1, a3, 49211);
  sub_5DF0C(a1, a3, 45116);
  sub_5DF0C(a1, a3, 49212);
  sub_5DF0C(a1, a3, 45116);
  sub_5DF0C(a1, a3, 49212);
  sub_5DF0C(a1, a3, 45116);
  sub_5DF0C(a1, a3, 49212);
  sub_5DF0C(a1, a3, 45117);
  sub_5DF0C(a1, a3, 49213);
  sub_5DF0C(a1, a3, 45117);
  sub_5DF0C(a1, a3, 49213);
  sub_5DF0C(a1, a3, 45117);
  sub_5DF0C(a1, a3, 49213);
  sub_5DF0C(a1, a3, 45084);
  sub_5DF0C(a1, a3, 49180);
  sub_5DF0C(a1, a3, 45084);
  sub_5DF0C(a1, a3, 49180);
  sub_5DF0C(a1, a3, 45085);
  sub_5DF0C(a1, a3, 49181);
  sub_5DF0C(a1, a3, 45085);
  sub_5DF0C(a1, a3, 49181);
  sub_5DF0C(a1, a3, 45085);
  sub_5DF0C(a1, a3, 49181);
  sub_5DF0C(a1, a3, 45085);
  sub_5DF0C(a1, a3, 49181);
  sub_5DF0C(a1, a3, 45086);
  sub_5DF0C(a1, a3, 49182);
  sub_5DF0C(a1, a3, 45086);
  sub_5DF0C(a1, a3, 49182);
  if ( v23 )
  {
    v27 = 0;
    do
    {
      v28 = v27++ << 12;
      sub_5DF0C(a1, a3, v28 | 0xA);
      sub_5DF0C(a1, a3, v28 | 0xA);
      sub_5DF0C(a1, a3, v28 & 0xF000 | 9);
      sub_5DF0C(a1, a3, v28 | 0x12);
      sub_5DF0C(a1, a3, v28 | 0x12);
      sub_5DF0C(a1, a3, v28 & 0xF000 | 0x13);
    }
    while ( v27 < v23 );
  }
  sub_5DF0C(a1, a3, 40965);
  sub_5DF0C(a1, a3, 40967);
  sub_5DF0C(a1, a3, 45093);
  sub_5DF0C(a1, a3, 49189);
  sub_5DF0C(a1, a3, 45093);
  sub_5DF0C(a1, a3, 49189);
  sub_5DF0C(a1, a3, 45096);
  sub_5DF0C(a1, a3, 49192);
  sub_5DF0C(a1, a3, 45097);
  sub_5DF0C(a1, a3, 49193);
  sub_5DF0C(a1, a3, 45097);
  sub_5DF0C(a1, a3, 49193);
  sub_5DF0C(a1, a3, 45097);
  sub_5DF0C(a1, a3, 49193);
  sub_5DF0C(a1, a3, 45101);
  sub_5DF0C(a1, a3, 49197);
  sub_5DF0C(a1, a3, 45101);
  sub_5DF0C(a1, a3, 49197);
  if ( v23 )
  {
    v29 = 0;
    do
    {
      v30 = v29++ << 12;
      sub_5DF0C(a1, a3, v30 & 0xF000 | 8);
      sub_5DF0C(a1, a3, v30 & 0xF000 | 0x6B);
      sub_5DF0C(a1, a3, v30 & 0xF000 | 0x9D);
      sub_5DF0C(a1, a3, v30 & 0xF000 | 0x9E);
      sub_5DF0C(a1, a3, v30 | 0x6A);
      sub_5DF0C(a1, a3, v30 & 0xF000 | 0x50);
      sub_5DF0C(a1, a3, v30 | 0x6A);
      sub_5DF0C(a1, a3, v30 & 0xF000 | 0x53);
    }
    while ( v29 < v23 );
    v31 = 0;
    sub_5DF0C(a1, a3, 32829);
    sub_5DF0C(a1, a3, 32829);
    do
    {
      v32 = v31++ << 12;
      sub_5DF0C(a1, a3, v32 | 0x46);
      sub_5DF0C(a1, a3, v32 | 0x46);
      sub_5DF0C(a1, a3, v32 | 0x47);
      sub_5DF0C(a1, a3, v32 | 0x47);
      sub_5DF0C(a1, a3, v32 | 0x47);
      sub_5DF0C(a1, a3, v32 | 0x47);
      sub_5DF0C(a1, a3, v32 | 0x47);
      sub_5DF0C(a1, a3, v32 | 0x48);
      sub_5DF0C(a1, a3, v32 | 0x48);
      sub_5DF0C(a1, a3, v32 | 0x48);
      sub_5DF0C(a1, a3, v32 | 0x48);
      sub_5DF0C(a1, a3, v32 | 0x48);
      sub_5DF0C(a1, a3, v32 | 0x49);
      sub_5DF0C(a1, a3, v32 | 0x49);
      sub_5DF0C(a1, a3, v32 | 0x49);
      sub_5DF0C(a1, a3, v32 | 0x49);
      sub_5DF0C(a1, a3, v32 | 0x49);
      sub_5DF0C(a1, a3, v32 | 0x4A);
      sub_5DF0C(a1, a3, v32 | 0x4A);
      sub_5DF0C(a1, a3, v32 | 0x4A);
      sub_5DF0C(a1, a3, v32 | 0x27);
      sub_5DF0C(a1, a3, v32 | 0x27);
      sub_5DF0C(a1, a3, v32 | 0x28);
      sub_5DF0C(a1, a3, v32 | 0x28);
      sub_5DF0C(a1, a3, v32 | 0x28);
      sub_5DF0C(a1, a3, v32 | 0x28);
      sub_5DF0C(a1, a3, v32 | 0x29);
      sub_5DF0C(a1, a3, v32 | 0x29);
      sub_5DF0C(a1, a3, v32 | 0x29);
      sub_5DF0C(a1, a3, v32 | 0x2A);
      sub_5DF0C(a1, a3, v32 | 0x2A);
      sub_5DF0C(a1, a3, v32 | 0x2B);
      sub_5DF0C(a1, a3, v32 | 0x2B);
      sub_5DF0C(a1, a3, v32 | 0x2B);
      sub_5DF0C(a1, a3, v32 | 0x2B);
      sub_5DF0C(a1, a3, v32 & 0xF000 | 0x2C);
      sub_5DF0C(a1, a3, v32 & 0xF000 | 0x67);
      sub_5DF0C(a1, a3, v32 & 0xF000 | 0x96);
    }
    while ( v23 > v31 );
    v33 = 0;
    sub_5DF0C(a1, a3, 32849);
    sub_5DF0C(a1, a3, 32781);
    do
    {
      v34 = v33++ << 12;
      sub_5DF0C(a1, a3, v34 & 0xF000 | 0x43);
      sub_5DF0C(a1, a3, v34 & 0xF000 | 0x75);
      sub_5DF0C(a1, a3, v34 & 0xF000 | 0x76);
      sub_5DF0C(a1, a3, v34 & 0xF000 | 0xB0);
    }
    while ( v23 > v33 );
    v35 = 0;
    sub_5DF0C(a1, a3, 32816);
    sub_5DF0C(a1, a3, 32827);
    sub_5DF0C(a1, a3, 32836);
    sub_5DF0C(a1, a3, 32864);
    sub_5DF0C(a1, a3, 32776);
    sub_5DF0C(a1, a3, 32830);
    do
    {
      v36 = v35++ << 12;
      sub_5DF0C(a1, a3, v36 & 0xF000 | 0x49);
      sub_5DF0C(a1, a3, v36 & 0xF000 | 0xF);
      sub_5DF0C(a1, a3, v36 & 0xF000 | 0x96);
    }
    while ( v23 > v35 );
    return 0;
  }
  else
  {
    sub_5DF0C(a1, a3, 32829);
    sub_5DF0C(a1, a3, 32829);
    sub_5DF0C(a1, a3, 32849);
    sub_5DF0C(a1, a3, 32781);
    sub_5DF0C(a1, a3, 32816);
    sub_5DF0C(a1, a3, 32827);
    sub_5DF0C(a1, a3, 32836);
    sub_5DF0C(a1, a3, 32864);
    sub_5DF0C(a1, a3, 32776);
    sub_5DF0C(a1, a3, 32830);
    return 0;
  }
}
