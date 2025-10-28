int __fastcall set_logic_chip_id(int a1)
{
  int v1; // r0
  int v3; // [sp+28h] [bp-1020h] BYREF
  _BYTE v4[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v3, "chain");
  v1 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "set_logic_chip_id",
    17,
    501,
    60,
    v4);
  return 0;
}
