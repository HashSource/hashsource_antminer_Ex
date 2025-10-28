int __fastcall phy_reg_read_0928_28G(int a1, int a2, _BYTE *a3, int a4)
{
  int v7; // r0
  int v8; // r6
  __int16 v9; // r2
  int v10; // r7
  __int16 v11; // r2
  int v12; // r10
  unsigned __int16 v13; // r6
  int v14; // r6
  _BYTE v16[4096]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v7 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_reg_read_0928_28G",
    21,
    2340,
    60,
    v16);
  sub_5DF0C(a1, a3, 61459);
  sub_5DF0C(a1, a3, 61460);
  sub_5DF0C(a1, a3, 61461);
  sub_5DF0C(a1, a3, 61462);
  sub_5DF0C(a1, a3, 61463);
  sub_5DF0C(a1, a3, 61462);
  sub_5DF0C(a1, a3, 61463);
  sub_5DF0C(a1, a3, 61463);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147422150);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147422150);
  sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147422150);
  if ( a4 )
  {
    v8 = 0;
    do
    {
      v9 = (_WORD)v8++ << 12;
      sub_5DF0C(a1, a3, v9 & 0xF000 | 0x6A);
    }
    while ( (unsigned __int8)(a4 - 1) + 1 != v8 );
    sub_5C968(a1, (unsigned __int8)a3, 144, -129);
    v10 = 0;
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C968(a1, (unsigned __int8)a3, 144, 0);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5C968(a1, (unsigned __int8)a3, 144, -129);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C968(a1, (unsigned __int8)a3, 144, 128);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5C968(a1, (unsigned __int8)a3, 144, -129);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C968(a1, (unsigned __int8)a3, 144, 0);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422113);
    do
    {
      v11 = (_WORD)v10++ << 12;
      sub_5DF0C(a1, a3, v11 & 0xF000 | 0x98);
    }
    while ( v10 != v8 );
  }
  else
  {
    sub_5C968(a1, (unsigned __int8)a3, 144, -129);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C968(a1, (unsigned __int8)a3, 144, 0);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5C968(a1, (unsigned __int8)a3, 144, -129);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C968(a1, (unsigned __int8)a3, 144, 128);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_5C968(a1, (unsigned __int8)a3, 144, -129);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_5C968(a1, (unsigned __int8)a3, 144, 0);
    sub_5C968(a1, (unsigned __int8)a3, 145, -2147422113);
  }
  sub_5C968(a1, (unsigned __int8)a3, 144, -17);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_5C968(a1, (unsigned __int8)a3, 144, -17);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 16);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_5C968(a1, (unsigned __int8)a3, 144, -17);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_5DF0C(a1, a3, 32804);
  sub_5C968(a1, (unsigned __int8)a3, 144, -2097153);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_5C968(a1, (unsigned __int8)a3, 144, -2097153);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0x200000);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_5C968(a1, (unsigned __int8)a3, 144, -2097153);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_5DF0C(a1, a3, 32806);
  if ( a4 )
  {
    v12 = 0;
    do
    {
      v13 = (_WORD)v12++ << 12;
      sub_5DF0C(a1, a3, v13 & 0xF000 | 0x46);
      sub_5DF0C(a1, a3, v13 | 0x4A);
      sub_5DF0C(a1, a3, v13 | 0x4A);
      sub_5DF0C(a1, a3, v13 | 0x4B);
      sub_5DF0C(a1, a3, v13 | 0x4B);
      sub_5DF0C(a1, a3, v13 & 0xF000 | 0x56);
      sub_5DF0C(a1, a3, v13 | 0x4B);
      sub_5DF0C(a1, a3, v13 & 0xF000 | 0x1A);
    }
    while ( (unsigned __int8)(a4 - 1) + 1 != v12 );
    sub_5C968(a1, (unsigned __int8)a3, 144, -67108865);
    LOBYTE(v14) = 0;
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
    do
    {
      v14 = (unsigned __int8)(v14 + 1);
      sub_5DF0C(a1, a3, 32863);
    }
    while ( a4 != v14 );
  }
  else
  {
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
  }
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_5C968(a1, (unsigned __int8)a3, 144, 0);
  sub_5C968(a1, (unsigned __int8)a3, 145, -2147450879);
  return 0;
}
