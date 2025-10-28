int __fastcall read_rx_debug_reg2_one_lane(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  int v7; // r7
  int v8; // r0
  int v9; // r8
  int v11; // [sp+28h] [bp-1024h] BYREF
  _BYTE v12[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  a4 <<= 12;
  V_INT((int)&v11, "chain");
  v7 = a4 | 1;
  v8 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v8);
  v9 = a4 | 0x16;
  a4 |= 0x1Au;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "read_rx_debug_reg2_one_lane",
    27,
    9215,
    60,
    v12);
  sub_5D964(a1, (unsigned __int8)a3, v7, -9);
  sub_5D964(a1, (unsigned __int8)a3, v9, 0);
  sub_5D964(a1, (unsigned __int8)a3, v7, -9);
  sub_5D964(a1, (unsigned __int8)a3, v9, 8);
  sub_5D964(a1, (unsigned __int8)a3, v7, -9);
  sub_5D964(a1, (unsigned __int8)a3, v9, 0);
  sub_5D7BC(a1, a3, a4);
  sub_5D964(a1, (unsigned __int8)a3, v7, -9);
  sub_5D964(a1, (unsigned __int8)a3, v9, 0);
  sub_5D964(a1, (unsigned __int8)a3, v7, -9);
  sub_5D964(a1, (unsigned __int8)a3, v9, 8);
  sub_5D964(a1, (unsigned __int8)a3, v7, -9);
  sub_5D964(a1, (unsigned __int8)a3, v9, 0);
  sub_5D7BC(a1, a3, a4);
  sub_5D964(a1, (unsigned __int8)a3, v7, -9);
  sub_5D964(a1, (unsigned __int8)a3, v9, 0);
  sub_5D964(a1, (unsigned __int8)a3, v7, -9);
  sub_5D964(a1, (unsigned __int8)a3, v9, 8);
  sub_5D964(a1, (unsigned __int8)a3, v7, -9);
  sub_5D964(a1, (unsigned __int8)a3, v9, 0);
  sub_5D7BC(a1, a3, a4);
  sub_5D964(a1, (unsigned __int8)a3, v7, 0);
  return 0;
}
