int __fastcall set_chain_isl_voltage(int a1, unsigned __int16 a2)
{
  _BYTE v5[12]; // [sp+18h] [bp-100Ch] BYREF
  unsigned __int16 v6; // [sp+101Ah] [bp-Ah]
  unsigned int i; // [sp+101Ch] [bp-8h]

  for ( i = 0; i <= 2; ++i )
  {
    v6 = sub_22044C(a1, aPqt[i], a2);
    V_LOCK();
    logfmt_raw(
      v5,
      0x1000u,
      0,
      "Set one chain ISL: domain addr = %x set vol %d, get vol %d",
      (unsigned __int8)aPqt[i],
      a2,
      v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      165,
      "set_chain_isl_voltage",
      21,
      215,
      60,
      v5);
  }
  return 1;
}
