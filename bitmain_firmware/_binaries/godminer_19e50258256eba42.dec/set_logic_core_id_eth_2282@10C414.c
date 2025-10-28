int __fastcall set_logic_core_id_eth_2282(int a1)
{
  _BYTE v3[60]; // [sp+30h] [bp-103Ch] BYREF
  int v4; // [sp+1030h] [bp-3Ch]
  int v5; // [sp+1034h] [bp-38h]
  _DWORD v6[7]; // [sp+1038h] [bp-34h] BYREF
  int v7; // [sp+1054h] [bp-18h]
  unsigned int j; // [sp+1058h] [bp-14h]
  unsigned int i; // [sp+105Ch] [bp-10h]

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
    "set_logic_core_id_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_logic_core_id_eth_2282",
    26,
    812,
    60,
    v3);
  v5 = 100925952;
  v4 = 117768961;
  for ( i = 0; i <= 3; ++i )
  {
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 0, 19, 0);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 1, 19, 1);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 2, 19, 2);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 3, 19, 3);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 4, 19, 4);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 5, 19, 5);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 6, 19, 6);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 7, 19, 7);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 8, 19, 8);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 9, 19, 9);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 10, 19, 10);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 11, 19, 11);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 12, 19, 12);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 13, 19, 13);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 14, 19, 14);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 15, 19, 15);
  }
  for ( j = 0; j <= 3; ++j )
  {
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 0, 19, 8);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 1, 19, 9);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 2, 19, 10);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 3, 19, 11);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 4, 19, 12);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 5, 19, 13);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 6, 19, 14);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 7, 19, 15);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 8, 19, 0);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 9, 19, 1);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 10, 19, 2);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 11, 19, 3);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 12, 19, 4);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 13, 19, 5);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 14, 19, 6);
    sub_10702C(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 15, 19, 7);
  }
  return 0;
}
