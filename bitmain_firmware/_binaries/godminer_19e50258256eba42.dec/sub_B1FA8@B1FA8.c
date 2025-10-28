int __fastcall sub_B1FA8(unsigned __int8 a1)
{
  float v1; // s0
  float v2; // s15
  int v3; // s15
  int v5; // [sp+4h] [bp-1038h]
  _BYTE v7[16]; // [sp+2Ch] [bp-1010h] BYREF
  int v8; // [sp+102Ch] [bp-10h]
  int v9; // [sp+1030h] [bp-Ch]
  signed int temp; // [sp+1034h] [bp-8h]

  flt_5AD624 = (float)get_temp(dword_59B1CC);
  v9 = fan_pwm_get();
  sub_B1E68((int)&flt_5AD618);
  v8 = (int)v1;
  if ( a1 && v8 < -20 )
    v8 = -20;
  v9 += v8;
  temp = get_temp(dword_59B1C4);
  if ( temp >= dword_59B1C8 )
    v9 = 100;
  flt_5AD61C = (float)g_fan_control_pwm_percent_min;
  if ( (float)v9 >= (float)g_fan_control_pwm_percent_min )
    v2 = (float)v9;
  else
    v2 = flt_5AD61C;
  if ( v2 <= flt_5AD618 )
  {
    if ( (float)v9 >= flt_5AD61C )
      v3 = (int)(float)v9;
    else
      v3 = (int)flt_5AD61C;
  }
  else
  {
    v3 = (int)flt_5AD618;
  }
  v9 = v3;
  V_LOCK();
  logfmt_raw(
    v7,
    0x1000u,
    0,
    "initial_stage: %d, feedback: %f, min_pwm: %.2f, pwm_percent: %d",
    a1,
    v5,
    flt_5AD624,
    flt_5AD61C,
    v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "set_pwm_by_pid",
    14,
    363,
    20,
    v7);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "new input: %d  ", v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "set_pwm_by_pid",
    14,
    364,
    20,
    v7);
  return v9;
}
