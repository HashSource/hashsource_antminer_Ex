__int64 __fastcall read_feedback_voltage(int a1)
{
  double v1; // d0
  int v3; // [sp+4h] [bp-1020h]
  _BYTE v5[12]; // [sp+18h] [bp-100Ch] BYREF
  double v6; // [sp+1018h] [bp-Ch]

  v6 = 0.0;
  if ( platform_is_pic_mcu_en() )
    pic1704_get_an_voltage1(a1);
  else
    bitmain_get_sample_voltage();
  v6 = v1;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "read_feedback_voltage chain = %d, voltage = %f", a1, v3, v1);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/miner_util/power_api.c",
           150,
           "read_feedback_voltage",
           21,
           57,
           20,
           v5);
}
