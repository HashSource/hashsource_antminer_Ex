int __fastcall setup_mac_lane_cross(int a1)
{
  int v2; // r5
  int v3; // r0
  _BYTE *i; // r10
  int v5; // t1
  int v6; // r5
  char *j; // [sp+2Ch] [bp-1038h]
  int v9; // [sp+3Ch] [bp-1028h] BYREF
  _BYTE v10[32]; // [sp+40h] [bp-1024h] BYREF
  int v11; // [sp+60h] [bp-1004h] BYREF
  char v12; // [sp+64h] [bp-1000h] BYREF

  v2 = 0;
  V_LOCK(a1);
  V_INT((int)v10, "chain");
  v3 = logfmt_raw((int)&v11, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_mac_lane_cross",
    20,
    11272,
    60,
    &v11);
  v9 = 100925952;
  v11 = 117768961;
  for ( i = (char *)&v9 + 1; ; ++i )
  {
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 199, 1757183);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0, 83, 255);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 1u, 83, 255);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 2u, 83, 0);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 83, 192);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 5u, 83, 127);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 6u, 83, 254);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 7u, 83, 255);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 8u, 83, 255);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 9u, 83, 15);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xAu, 83, 32);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xBu, 83, 0);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xDu, 83, 0);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xEu, 83, 15);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xFu, 83, 0);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 1u, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 2u, 96, 128);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 96, 16);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 5u, 96, 128);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 6u, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 7u, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 8u, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 9u, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xAu, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xBu, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xDu, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xEu, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xFu, 96, 1);
    if ( i == v10 )
      break;
    v5 = (unsigned __int8)*i;
    v2 = v5;
  }
  v6 = 1;
  for ( j = (char *)&v11 + 1; ; ++j )
  {
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 1u, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 3u, 199, 1527807);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 6u, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 7u, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 8u, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 9u, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xAu, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xBu, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xDu, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xEu, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xFu, 199, 342384);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0, 83, 255);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 1u, 83, 255);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 2u, 83, 0);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 3u, 83, 192);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 5u, 83, 127);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 6u, 83, 254);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 7u, 83, 255);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 8u, 83, 255);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 9u, 83, 15);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xAu, 83, 32);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xBu, 83, 0);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xDu, 83, 0);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xEu, 83, 15);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xFu, 83, 0);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 1u, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 2u, 96, 128);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 3u, 96, 16);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 5u, 96, 128);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 6u, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 7u, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 8u, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 9u, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xAu, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xBu, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xDu, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xEu, 96, 1);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v6), 0xFu, 96, 1);
    if ( &v12 == j )
      break;
    v6 = (unsigned __int8)*j;
  }
  usleep(0xF4240u);
  return 0;
}
