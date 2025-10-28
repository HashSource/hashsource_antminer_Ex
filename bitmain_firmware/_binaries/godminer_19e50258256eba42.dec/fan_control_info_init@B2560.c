int __fastcall fan_control_info_init(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  _DWORD _38[1030]; // [sp+38h] [bp-1004h] BYREF

  _38[1026] = a1;
  _38[1027] = a2;
  _38[1028] = a3;
  _38[1029] = a4;
  g_fan_control_info = a1;
  dword_59B1BC = a2;
  dword_59B1C0 = a3;
  dword_59B1C4 = a4;
  dword_59B1C8 = a5;
  dword_59B1CC = a6;
  dword_59B1D0 = a7;
  dword_59B1D4 = a8;
  dword_59B1D8 = a9;
  dword_59B1DC = a10;
  dword_59B1E0 = a11;
  dword_59B1E4 = a12;
  dword_59B1E8 = a13;
  memset(&flt_5AD618, 0, 0x2Cu);
  if ( g_fan_control_info == 2 )
  {
    dword_5AD628 = dword_59B1DC;
    dword_5AD62C = dword_59B1E0;
    dword_5AD630 = dword_59B1E4;
    dword_5AD634 = dword_59B1E8;
    flt_5AD620 = (float)dword_59B1D0;
    flt_5AD61C = (float)dword_59B1BC;
    flt_5AD618 = (float)dword_59B1C0;
  }
  V_LOCK();
  logfmt_raw(
    _38,
    0x1000u,
    0,
    "startup P: %f, p: %f, i: %f, d: %f   target: %f, min %f, max %f",
    *(float *)&dword_5AD628,
    *(float *)&dword_5AD62C,
    *(float *)&dword_5AD630,
    *(float *)&dword_5AD634,
    flt_5AD620,
    flt_5AD61C,
    flt_5AD618);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "fan_control_info_init",
    21,
    428,
    40,
    _38);
  return 0;
}
