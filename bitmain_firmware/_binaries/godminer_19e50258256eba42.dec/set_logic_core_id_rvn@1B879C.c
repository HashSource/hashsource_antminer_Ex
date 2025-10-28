int __fastcall set_logic_core_id_rvn(int a1)
{
  _BYTE v3[60]; // [sp+30h] [bp-103Ch] BYREF
  int v4; // [sp+1030h] [bp-3Ch]
  int v5; // [sp+1034h] [bp-38h]
  _DWORD v6[7]; // [sp+1038h] [bp-34h] BYREF
  int v7; // [sp+1054h] [bp-18h]
  unsigned int j; // [sp+1058h] [bp-14h]
  unsigned int i; // [sp+105Ch] [bp-10h]

  V_LOCK();
  sub_1A9DE8((int)v6, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "%s...", "set_logic_core_id_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "set_logic_core_id_rvn",
    21,
    400,
    60,
    v3);
  v5 = 100925952;
  v4 = 117768961;
  for ( i = 0; i <= 3; ++i )
  {
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 0, 179, 0);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 1, 179, 1);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 2, 179, 2);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 3, 179, 3);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 4, 179, 4);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 5, 179, 5);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 6, 179, 6);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 7, 179, 7);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 8, 179, 8);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 9, 179, 9);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 10, 179, 10);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 11, 179, 11);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 12, 179, 12);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 13, 179, 13);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 14, 179, 14);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v6[-1] + i)), 15, 179, 15);
  }
  for ( j = 0; j <= 3; ++j )
  {
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 0, 179, 8);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 1, 179, 9);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 2, 179, 10);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 3, 179, 11);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 4, 179, 12);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 5, 179, 13);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 6, 179, 14);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 7, 179, 15);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 8, 179, 0);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 9, 179, 1);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 10, 179, 2);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 11, 179, 3);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 12, 179, 4);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 13, 179, 5);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 14, 179, 6);
    sub_1B4C24(a1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + *((unsigned __int8 *)&v4 + j)), 15, 179, 7);
  }
  return 0;
}
