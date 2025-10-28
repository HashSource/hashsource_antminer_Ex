int __fastcall enable_rxbist_autostop(int a1, int a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  int v8; // r4
  int v9; // r0
  int v10; // r9
  int v11; // r8
  _BYTE v13[32]; // [sp+28h] [bp-1024h] BYREF
  _BYTE v14[4088]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v13, "chain");
  v8 = 61441;
  v9 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v9);
  v10 = 61457;
  v11 = 61459;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rxbist_autostop",
    22,
    9152,
    60,
    v14);
  if ( a4 != 8 )
  {
    v8 = 1;
    v10 = 17;
    v11 = 19;
  }
  sub_5D964(a1, a3, v8, -5);
  sub_5D964(a1, a3, v10, 4);
  sub_5D964(a1, a3, v8, -66060289);
  sub_5D964(a1, a3, v11, (a5 << 20) & 0x3F00000);
  sub_5D964(a1, a3, v8, 0);
  return 0;
}
