int __fastcall setup_mac_lane_cross(int a1)
{
  int v2; // r5
  char *v3; // r1
  _DWORD *v4; // r3
  int v5; // r1
  _DWORD *i; // r10
  int v7; // t1
  int v8; // r5
  char *j; // [sp+2Ch] [bp-1038h]
  int v11; // [sp+3Ch] [bp-1028h] BYREF
  _DWORD v12[7]; // [sp+40h] [bp-1024h] BYREF
  int v13; // [sp+5Ch] [bp-1008h]
  int v14; // [sp+60h] [bp-1004h] BYREF
  char v15; // [sp+64h] [bp-1000h] BYREF

  v2 = 0;
  V_LOCK();
  LOWORD(v3) = -7948;
  HIWORD(v3) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v12, v3, *(int *)(a1 + 140));
  logfmt_raw(
    (char *)&v14,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s...",
    "setup_mac_lane_cross");
  V_UNLOCK();
  LOWORD(v4) = -14512;
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v5) = -25512;
  HIWORD(v5) = (unsigned int)"one" >> 16;
  zlog(*v4, v5, 154, "setup_mac_lane_cross", 20, 11272, 60, &v14);
  v11 = 100925952;
  v14 = 117768961;
  for ( i = (int *)((char *)&v11 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 199, 1757183);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0, 83, 255);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 1u, 83, 255);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 2u, 83, 0);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 83, 192);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 5u, 83, 127);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 6u, 83, 254);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 7u, 83, 255);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 8u, 83, 255);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 9u, 83, 15);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xAu, 83, 32);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xBu, 83, 0);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xDu, 83, 0);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xEu, 83, 15);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xFu, 83, 0);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 1u, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 2u, 96, 128);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 96, 16);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 5u, 96, 128);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 6u, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 7u, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 8u, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 9u, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xAu, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xBu, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xDu, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xEu, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xFu, 96, 1);
    if ( i == v12 )
      break;
    v7 = *(unsigned __int8 *)i;
    v2 = v7;
  }
  v8 = 1;
  for ( j = (char *)&v14 + 1; ; ++j )
  {
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 1u, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 3u, 199, 1527807);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 6u, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 7u, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 8u, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 9u, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xAu, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xBu, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xDu, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xEu, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xFu, 199, 342384);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0, 83, 255);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 1u, 83, 255);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 2u, 83, 0);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 3u, 83, 192);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 5u, 83, 127);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 6u, 83, 254);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 7u, 83, 255);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 8u, 83, 255);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 9u, 83, 15);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xAu, 83, 32);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xBu, 83, 0);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xDu, 83, 0);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xEu, 83, 15);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xFu, 83, 0);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 1u, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 2u, 96, 128);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 3u, 96, 16);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 5u, 96, 128);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 6u, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 7u, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 8u, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 9u, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xAu, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xBu, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xDu, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xEu, 96, 1);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v8), 0xFu, 96, 1);
    if ( &v15 == j )
      break;
    v8 = (unsigned __int8)*j;
  }
  usleep(0xF4240u);
  return 0;
}
