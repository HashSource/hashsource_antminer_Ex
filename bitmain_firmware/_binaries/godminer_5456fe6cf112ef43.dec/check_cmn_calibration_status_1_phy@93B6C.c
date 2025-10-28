int __fastcall check_cmn_calibration_status_1_phy(int a1, char a2, int a3)
{
  int v6; // r0
  int back_1_chip; // r0
  int v8; // r0
  _BYTE v10[32]; // [sp+28h] [bp-1060h] BYREF
  char v11; // [sp+48h] [bp-1040h] BYREF
  _BYTE v12[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v10, "chain");
  v6 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_cmn_calibration_status_1_phy",
    34,
    8480,
    60,
    v12);
  back_1_chip = serdes_apb_read_back_1_chip(a1, a2, a3, 32797, (int)&v11);
  if ( back_1_chip )
  {
    V_LOCK(back_1_chip);
    v8 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_cmn_calibration_status_1_phy",
      34,
      8486,
      60,
      v12);
  }
  return 0;
}
