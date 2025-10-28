int __fastcall set_logic_core_id_rvn(int a1)
{
  int v2; // r5
  int v3; // r0
  _BYTE *i; // r6
  int v5; // t1
  int *v6; // r7
  int j; // r5
  int v8; // t1
  int v10; // [sp+2Ch] [bp-1028h] BYREF
  _BYTE v11[32]; // [sp+30h] [bp-1024h] BYREF
  int v12; // [sp+50h] [bp-1004h] BYREF
  int v13; // [sp+54h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = 0;
  V_INT((int)v11, "chain");
  v3 = logfmt_raw((int)&v12, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "set_logic_core_id_rvn",
    21,
    428,
    60,
    &v12);
  v10 = 100925952;
  v12 = 117768961;
  for ( i = (char *)&v10 + 1; ; ++i )
  {
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 0, 0);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 1u, 1);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 2u, 2);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 3u, 3);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 4u, 4);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 5u, 5);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 6u, 6);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 7u, 7);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 8u, 8);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 9u, 9);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 0xAu, 10);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 0xBu, 11);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 0xCu, 12);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 0xDu, 13);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 0xEu, 14);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + v2), 0xFu, 15);
    if ( i == v11 )
      break;
    v5 = (unsigned __int8)*i;
    v2 = v5;
  }
  v6 = (int *)((char *)&v12 + 1);
  for ( j = 1; ; j = v8 )
  {
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 0, 8);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 1u, 9);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 2u, 10);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 3u, 11);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 4u, 12);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 5u, 13);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 6u, 14);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 7u, 15);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 8u, 0);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 9u, 1);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 0xAu, 2);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 0xBu, 3);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 0xCu, 4);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 0xDu, 5);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 0xEu, 6);
    sub_94214(a1, *(_BYTE *)(*(_DWORD *)(a1 + 456) + j), 0xFu, 7);
    if ( &v13 == v6 )
      break;
    v8 = *(unsigned __int8 *)v6;
    v6 = (int *)((char *)v6 + 1);
  }
  return 0;
}
