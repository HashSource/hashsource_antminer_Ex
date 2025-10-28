int __fastcall enable_rx_equalizer_tuning_one_lane(int a1, char a2, int a3, __int16 a4)
{
  int v8; // r0
  int v9; // r7
  int v10; // r6
  _BYTE v12[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v8 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v8);
  v9 = (unsigned __int16)(a4 << 12) | 1;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rx_equalizer_tuning_one_lane",
    35,
    3488,
    60,
    v12);
  sub_5D964(a1, a3, v9, -4194305);
  sub_5D964(a1, a3, (unsigned __int16)(a4 << 12) | 0x2F, 0);
  sub_5D964(a1, a3, v9, -4194305);
  sub_5D964(a1, a3, (unsigned __int16)(a4 << 12) | 0x2F, 0x400000);
  sub_5D964(a1, a3, v9, -4194305);
  sub_5D964(a1, a3, (unsigned __int16)(a4 << 12) | 0x2F, 0);
  sub_5D964(a1, a3, v9, -2049);
  sub_5D964(a1, a3, (unsigned __int16)(a4 << 12) | 0x37, 2048);
  sub_5D964(a1, a3, v9, -1073741825);
  v10 = (unsigned __int16)(a4 << 12) | 0x98;
  sub_5D964(a1, a3, (unsigned __int16)(a4 << 12) | 0x7E, 0x40000000);
  sub_5D964(a1, a3, v9, -16777217);
  sub_5D964(a1, a3, v10, 0);
  sub_5D964(a1, a3, v9, -16777217);
  sub_5D964(a1, a3, v10, 0x1000000);
  check_d54_one_lane(a1, a2, a3, a4, 8u);
  sub_5D964(a1, a3, v9, -16777217);
  sub_5D964(a1, a3, v10, 0);
  sub_5D964(a1, a3, v9, 0);
  check_d54_one_lane(a1, a2, a3, a4, 0);
  return 0;
}
