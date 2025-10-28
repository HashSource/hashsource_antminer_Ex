int __fastcall load_32G_advance(int a1, int a2, unsigned __int8 a3)
{
  int v5; // r0
  _BYTE v7[32]; // [sp+28h] [bp-1020h] BYREF
  _BYTE v8[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v7, "chain");
  v5 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "load_32G_advance",
    16,
    8638,
    60,
    v8);
  sub_5C968(a1, a3, 144, 0x7FFFFFFF);
  sub_5C968(a1, a3, 145, -2147450879);
  sub_5C968(a1, a3, 144, 0);
  sub_5C968(a1, a3, 145, -2147450807);
  sub_5C968(a1, a3, 144, 0);
  sub_5C968(a1, a3, 145, -2147450879);
  return 0;
}
