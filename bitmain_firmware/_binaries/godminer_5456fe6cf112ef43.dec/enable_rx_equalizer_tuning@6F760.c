int __fastcall enable_rx_equalizer_tuning(int a1, int a2, _BYTE *a3, int a4)
{
  int v8; // r10
  int v9; // r8
  int v10; // r0
  int v11; // r6
  int v12; // r7
  int v13; // r12
  int v15; // [sp+2Ch] [bp-1028h]
  _BYTE v16[32]; // [sp+30h] [bp-1024h] BYREF
  _BYTE v17[4100]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK(a1);
  v8 = 61495;
  V_INT((int)v16, "chain");
  v9 = 61487;
  v10 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v10);
  v11 = 61441;
  v12 = 61592;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rx_equalizer_tuning",
    26,
    3453,
    60,
    v17);
  v13 = 61566;
  if ( a4 != 8 )
  {
    v11 = 1;
    v9 = 47;
    v13 = 126;
    v12 = 152;
    v8 = 55;
  }
  v15 = v13;
  sub_5D964(a1, (unsigned __int8)a3, v11, -4194305);
  sub_5D964(a1, (unsigned __int8)a3, v9, 0);
  sub_5D964(a1, (unsigned __int8)a3, v11, -4194305);
  sub_5D964(a1, (unsigned __int8)a3, v9, 0x400000);
  sub_5D964(a1, (unsigned __int8)a3, v11, -4194305);
  sub_5D964(a1, (unsigned __int8)a3, v9, 0);
  sub_5D964(a1, (unsigned __int8)a3, v11, -2049);
  sub_5D964(a1, (unsigned __int8)a3, v8, 2048);
  sub_5D964(a1, (unsigned __int8)a3, v11, -1073741825);
  sub_5D964(a1, (unsigned __int8)a3, v15, 0x40000000);
  sub_5D964(a1, (unsigned __int8)a3, v11, -16777217);
  sub_5D964(a1, (unsigned __int8)a3, v12, 0);
  sub_5D964(a1, (unsigned __int8)a3, v11, -16777217);
  sub_5D964(a1, (unsigned __int8)a3, v12, 0x1000000);
  check_d54(a1, a2, a3, a4, 8u);
  sub_5D964(a1, (unsigned __int8)a3, v11, -16777217);
  sub_5D964(a1, (unsigned __int8)a3, v12, 0);
  sub_5D964(a1, (unsigned __int8)a3, v11, 0);
  check_d54(a1, a2, a3, a4, 0);
  return 0;
}
