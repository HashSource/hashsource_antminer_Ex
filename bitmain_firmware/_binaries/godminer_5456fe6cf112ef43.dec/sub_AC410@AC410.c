int __fastcall sub_AC410(unsigned int a1)
{
  float v1; // s0
  double v2; // d8
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v9[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = (double)a1 * 3.3 / (float)(v1 * 1024.0);
  v3 = snprintf(s, 0x800u, "v_an2 = %f", v2);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "decode_an_voltage_buf",
    21,
    407,
    20,
    v9);
  v5 = snprintf(s, 0x800u, "v_10 = %f", v2 * 7.5999999);
  V_LOCK(v5);
  v6 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v6);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/drv_pic/pic_1704.c",
           158,
           "decode_an_voltage_buf",
           21,
           410,
           20,
           v9);
}
