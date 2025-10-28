int __fastcall high_speed_tx_check_eth_2282(int a1)
{
  _DWORD v3[1030]; // [sp+34h] [bp-1120h] BYREF
  char s[132]; // [sp+104Ch] [bp-108h] BYREF
  _BYTE v5[64]; // [sp+10D0h] [bp-84h] BYREF
  _DWORD v6[7]; // [sp+1110h] [bp-44h] BYREF
  int v7; // [sp+112Ch] [bp-28h]
  int v9; // [sp+1134h] [bp-20h]
  unsigned __int8 j; // [sp+113Ah] [bp-1Ah]
  unsigned __int8 i; // [sp+113Bh] [bp-19h]
  unsigned int k; // [sp+113Ch] [bp-18h]
  _DWORD v13[2]; // [sp+1143h] [bp-11h] BYREF

  V_LOCK();
  sub_FBD60((int)v6, *(int *)(a1 + 272));
  logfmt_raw(
    v3,
    0x1000u,
    0,
    v7,
    v6[0],
    v6[1],
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    v6[6],
    v7,
    "%s...",
    "high_speed_tx_check_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "high_speed_tx_check_eth_2282",
    28,
    733,
    60,
    v3);
  for ( i = 0; i <= 0x47u; ++i )
  {
    sub_1070C8(a1, i, 19, i);
    usleep(0x2710u);
  }
  for ( j = 0; j <= 0x47u; ++j )
    sub_1070C8(a1, j, 28, 3);
  memset(s, 0, 0x81u);
  v3[1024] = 0;
  v3[1025] = 1;
  v3[1026] = 4096;
  v3[1027] = 4096;
  v3[1028] = 16382;
  v3[1029] = 0x3FFF;
  v9 = 0;
  memset(v13, 0, 5);
  while ( LOBYTE(v13[0]) <= 5u )
  {
    if ( sub_FC7C4(a1, v13[0], v9, v5) )
    {
      for ( k = 0; k <= 0x3F; ++k )
      {
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, "[DAG] for chip %1d: %02x", LOBYTE(v13[0]), (unsigned __int8)v5[k]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "high_speed_tx_check_eth_2282",
          28,
          791,
          20,
          v3);
        if ( !v5[k] || (unsigned __int8)v5[k] == 255 )
          ++*(_DWORD *)((char *)v13 + 1);
        sprintf(&s[2 * k], "%02x", (unsigned __int8)v5[k]);
      }
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "counter: %d, [DAG] for chip %1d: %s", *(_DWORD *)((char *)v13 + 1), LOBYTE(v13[0]), s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "high_speed_tx_check_eth_2282",
        28,
        797,
        60,
        v3);
    }
    if ( *(_DWORD *)((char *)v13 + 1) == 64 )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "check high speed baud tx failed!!!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "high_speed_tx_check_eth_2282",
        28,
        800,
        60,
        v3);
      while ( 1 )
        ;
    }
    LOBYTE(v13[1]) = 0;
    v13[0] = (unsigned __int8)(LOBYTE(v13[0]) + 1);
  }
  return 0;
}
