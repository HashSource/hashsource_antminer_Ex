int __fastcall phy_reg_read_0928_28G(int a1, int a2, _BYTE *a3, int a4)
{
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r6
  __int16 v12; // r2
  int v13; // r7
  __int16 v14; // r2
  int v15; // r10
  unsigned __int16 v16; // r6
  int v17; // r6
  char v19[4096]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v8) = -24680;
  HIWORD(v8) = (unsigned int)"e" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v8, "phy_reg_read_0928_28G", a2, a3);
  V_UNLOCK();
  LOWORD(v9) = -14512;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(*v9, v10, 154, "phy_reg_read_0928_28G", 21, 2340, 60, v19);
  sub_5D6FC(a1, a3, 0xF013u);
  sub_5D6FC(a1, a3, 0xF014u);
  sub_5D6FC(a1, a3, 0xF015u);
  sub_5D6FC(a1, a3, 0xF016u);
  sub_5D6FC(a1, a3, 0xF017u);
  sub_5D6FC(a1, a3, 0xF016u);
  sub_5D6FC(a1, a3, 0xF017u);
  sub_5D6FC(a1, a3, 0xF017u);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147422150);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147422150);
  sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147422150);
  if ( a4 )
  {
    v11 = 0;
    do
    {
      v12 = (_WORD)v11++ << 12;
      sub_5D6FC(a1, a3, v12 & 0xF000 | 0x6A);
    }
    while ( (unsigned __int8)(a4 - 1) + 1 != v11 );
    sub_5C158(a1, (unsigned __int8)a3, 144, -129);
    v13 = 0;
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5C158(a1, (unsigned __int8)a3, 144, -129);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C158(a1, (unsigned __int8)a3, 144, 128);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5C158(a1, (unsigned __int8)a3, 144, -129);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422113);
    do
    {
      v14 = (_WORD)v13++ << 12;
      sub_5D6FC(a1, a3, v14 & 0xF000 | 0x98);
    }
    while ( v13 != v11 );
  }
  else
  {
    sub_5C158(a1, (unsigned __int8)a3, 144, -129);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5C158(a1, (unsigned __int8)a3, 144, -129);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C158(a1, (unsigned __int8)a3, 144, 128);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5C158(a1, (unsigned __int8)a3, 144, -129);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147422113);
  }
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
  if ( a4 )
  {
    v15 = 0;
    do
    {
      v16 = (_WORD)v15++ << 12;
      sub_5D6FC(a1, a3, v16 & 0xF000 | 0x46);
      sub_5D6FC(a1, a3, v16 | 0x4A);
      sub_5D6FC(a1, a3, v16 | 0x4A);
      sub_5D6FC(a1, a3, v16 | 0x4B);
      sub_5D6FC(a1, a3, v16 | 0x4B);
      sub_5D6FC(a1, a3, v16 & 0xF000 | 0x56);
      sub_5D6FC(a1, a3, v16 | 0x4B);
      sub_5D6FC(a1, a3, v16 & 0xF000 | 0x1A);
    }
    while ( (unsigned __int8)(a4 - 1) + 1 != v15 );
    sub_5C158(a1, (unsigned __int8)a3, 144, -67108865);
    LOBYTE(v17) = 0;
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
    do
    {
      v17 = (unsigned __int8)(v17 + 1);
      sub_5D6FC(a1, a3, 0x805Fu);
    }
    while ( a4 != v17 );
  }
  else
  {
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
  }
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147450879);
  return 0;
}
