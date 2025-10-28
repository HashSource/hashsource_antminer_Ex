int __fastcall set_logic_core_id(int a1)
{
  int v2; // r6
  char *v3; // r1
  int v4; // r5
  _DWORD *v5; // r3
  int v6; // r1
  _DWORD *i; // r6
  int v8; // t1
  int *v9; // r6
  int j; // r5
  int v11; // t1
  int v13; // [sp+2Ch] [bp-24h] BYREF
  _DWORD v14[7]; // [sp+30h] [bp-20h] BYREF
  int v15; // [sp+4Ch] [bp-4h]
  int v16; // [sp+50h] [bp+0h] BYREF
  int v17; // [sp+54h] [bp+4h] BYREF

  LOWORD(v2) = -22412;
  V_LOCK();
  LOWORD(v3) = -7948;
  HIWORD(v3) = (unsigned int)&loc_12D594 >> 16;
  v4 = 0;
  V_INT((int)v14, v3, *(int *)(a1 + 140));
  HIWORD(v2) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    (char *)&v16,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    v2,
    "set_logic_core_id");
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -25512;
  HIWORD(v6) = (unsigned int)"one" >> 16;
  zlog(*v5, v6, 154, "set_logic_core_id", 17, 11163, 60, &v16);
  v13 = 100925952;
  v16 = 117768961;
  for ( i = (int *)((char *)&v13 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 0, 19, 256);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 1u, 19, 257);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 2u, 19, 258);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 3u, 19, 259);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 4u, 19, 260);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 5u, 19, 261);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 6u, 19, 262);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 7u, 19, 263);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 8u, 19, 264);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 9u, 19, 265);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 0xAu, 19, 266);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 0xBu, 19, 267);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 0xCu, 19, 268);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 0xDu, 19, 269);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 0xEu, 19, 270);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v4), 0xFu, 19, 271);
    if ( i == v14 )
      break;
    v8 = *(unsigned __int8 *)i;
    v4 = v8;
  }
  v9 = (int *)((char *)&v16 + 1);
  for ( j = 1; ; j = v11 )
  {
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0, 19, 263);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 1u, 19, 262);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 2u, 19, 261);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 3u, 19, 259);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 4u, 19, 260);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 5u, 19, 258);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 6u, 19, 257);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 7u, 19, 256);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 8u, 19, 271);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 9u, 19, 270);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xAu, 19, 269);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xBu, 19, 267);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xCu, 19, 268);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xDu, 19, 266);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xEu, 19, 265);
    sub_5C1AC(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xFu, 19, 264);
    if ( &v17 == v9 )
      break;
    v11 = *(unsigned __int8 *)v9;
    v9 = (int *)((char *)v9 + 1);
  }
  return 0;
}
