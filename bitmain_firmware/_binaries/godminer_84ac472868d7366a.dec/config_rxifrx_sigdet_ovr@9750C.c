int __fastcall config_rxifrx_sigdet_ovr(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v7; // r4
  int v8; // r0
  int v9; // r8
  int v10; // r7
  int v12; // [sp+28h] [bp-1020h] BYREF
  _BYTE v13[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v12, "chain");
  v7 = 61441;
  v8 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v8);
  v9 = 61593;
  v10 = 61567;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "config_rxifrx_sigdet_ovr",
    0x18u,
    9124,
    60,
    v13);
  if ( a4 != 8 )
  {
    v7 = 1;
    v9 = 153;
    v10 = 127;
  }
  sub_5D9EC(a1, a3, v7, -134217729);
  sub_5D9EC(a1, a3, v9, 0x8000000);
  sub_5D9EC(a1, a3, v7, 0x7FFFFFFF);
  sub_5D9EC(a1, a3, v10, 0x80000000);
  sub_5D9EC(a1, a3, v7, 0);
  return 0;
}
