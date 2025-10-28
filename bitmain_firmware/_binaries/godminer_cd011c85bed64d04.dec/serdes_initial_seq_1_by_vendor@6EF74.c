int __fastcall serdes_initial_seq_1_by_vendor(int a1, int a2, unsigned __int8 a3, unsigned __int16 a4)
{
  int v4; // r8
  int v7; // r0
  int v8; // r7
  __int16 v9; // r4
  int v11; // [sp+14h] [bp-Ch]
  _BYTE v12[4100]; // [sp+20h] [bp+0h] BYREF

  v4 = a4;
  v11 = a4;
  V_LOCK(a1);
  v7 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_initial_seq_1_by_vendor",
    30,
    3299,
    60,
    v12);
  sub_5C968(a1, a3, 144, 252182532);
  sub_5C968(a1, a3, 145, -2147438529);
  sub_5C968(a1, a3, 144, 839027724);
  sub_5C968(a1, a3, 145, -2147438590);
  sub_5C968(a1, a3, 144, -1073676160);
  sub_5C968(a1, a3, 145, -2147438589);
  sub_5C968(a1, a3, 144, 252182532);
  sub_5C968(a1, a3, 145, -2147434433);
  sub_5C968(a1, a3, 144, 839027724);
  sub_5C968(a1, a3, 145, -2147434494);
  sub_5C968(a1, a3, 144, -1073676160);
  sub_5C968(a1, a3, 145, -2147434493);
  if ( v4 )
  {
    LOWORD(v8) = 0;
    do
    {
      v9 = (_WORD)v8 << 12;
      v8 = (unsigned __int16)(v8 + 1);
      sub_5E0B4(a1, a3, v9 & 0xF000 | 0x6E, 17694978);
      sub_5E0B4(a1, a3, v9 & 0xF000 | 0x1D, 134283265);
      sub_5E0B4(a1, a3, v9 & 0xF000 | 0x2A, 504234034);
      sub_5E0B4(a1, a3, v9 & 0xF000 | 0x19, 267913217);
      sub_5E0B4(a1, a3, v9 & 0xF000 | 0x1A, -1610579952);
      sub_5E0B4(a1, a3, v9 & 0xF000 | 0x47, 338179136);
    }
    while ( v8 != v11 );
  }
  return 0;
}
