int __fastcall set_logic_core_id(int a1)
{
  int v2; // r5
  int v3; // r0
  _BYTE *i; // r6
  int v5; // t1
  int *v6; // r6
  int j; // r5
  int v8; // t1
  int v10; // [sp+2Ch] [bp-24h] BYREF
  _BYTE v11[32]; // [sp+30h] [bp-20h] BYREF
  int v12; // [sp+50h] [bp+0h] BYREF
  int v13; // [sp+54h] [bp+4h] BYREF

  V_LOCK(a1);
  v2 = 0;
  V_INT((int)v11, "chain");
  v3 = logfmt_raw((int)&v12, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_logic_core_id",
    17,
    11163,
    60,
    &v12);
  v10 = 100925952;
  v12 = 117768961;
  for ( i = (char *)&v10 + 1; ; ++i )
  {
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0, 19, 256);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 1u, 19, 257);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 2u, 19, 258);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 3u, 19, 259);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 4u, 19, 260);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 5u, 19, 261);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 6u, 19, 262);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 7u, 19, 263);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 8u, 19, 264);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 9u, 19, 265);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xAu, 19, 266);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xBu, 19, 267);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xCu, 19, 268);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xDu, 19, 269);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xEu, 19, 270);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + v2), 0xFu, 19, 271);
    if ( i == v11 )
      break;
    v5 = (unsigned __int8)*i;
    v2 = v5;
  }
  v6 = (int *)((char *)&v12 + 1);
  for ( j = 1; ; j = v8 )
  {
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0, 19, 263);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 1u, 19, 262);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 2u, 19, 261);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 3u, 19, 259);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 4u, 19, 260);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 5u, 19, 258);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 6u, 19, 257);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 7u, 19, 256);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 8u, 19, 271);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 9u, 19, 270);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xAu, 19, 269);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xBu, 19, 267);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xCu, 19, 268);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xDu, 19, 266);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xEu, 19, 265);
    sub_5C2F4(a1, *(_BYTE *)(*(_DWORD *)(a1 + 296) + j), 0xFu, 19, 264);
    if ( &v13 == v6 )
      break;
    v8 = *(unsigned __int8 *)v6;
    v6 = (int *)((char *)v6 + 1);
  }
  return 0;
}
