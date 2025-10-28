__int64 __fastcall sub_1F505C(unsigned int a1)
{
  float v1; // s0
  char v3[20]; // [sp+18h] [bp-1814h] BYREF
  double v4[513]; // [sp+818h] [bp-1014h] BYREF
  double v5; // [sp+1820h] [bp-Ch]

  v5 = (double)a1 * 3.3 / (float)(v1 * 1024.0);
  snprintf(v3, 0x800u, "v_an2 = %f", v5);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/drv_pic/pic_1704.c",
    165,
    "decode_an_voltage_buf",
    21,
    447,
    20,
    v4);
  v4[512] = v5 * 7.5999999;
  snprintf(v3, 0x800u, "v_10 = %f", v5 * 7.5999999);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
           165,
           "decode_an_voltage_buf",
           21,
           450,
           20,
           v4);
}
