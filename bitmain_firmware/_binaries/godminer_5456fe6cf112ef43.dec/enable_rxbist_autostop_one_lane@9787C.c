int __fastcall enable_rxbist_autostop_one_lane(
        int a1,
        int a2,
        unsigned __int8 a3,
        unsigned __int16 a4,
        unsigned __int8 a5)
{
  int v8; // r0
  _BYTE v10[32]; // [sp+28h] [bp-1020h] BYREF
  _BYTE v11[4088]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  a4 <<= 12;
  V_INT((int)v10, "chain");
  v8 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rxbist_autostop_one_lane",
    31,
    9169,
    60,
    v11);
  sub_5D964(a1, a3, a4 | 1, -5);
  sub_5D964(a1, a3, a4 & 0xF000 | 0x11, 4);
  sub_5D964(a1, a3, a4 | 1, -66060289);
  sub_5D964(a1, a3, a4 & 0xF000 | 0x13, (a5 << 20) & 0x3F00000);
  sub_5D964(a1, a3, a4 | 1, 0);
  return 0;
}
