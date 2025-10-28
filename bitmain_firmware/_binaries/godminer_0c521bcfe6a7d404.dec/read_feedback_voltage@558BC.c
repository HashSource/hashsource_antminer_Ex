int __fastcall read_feedback_voltage(int a1)
{
  unsigned __int8 v1; // r5
  int an_voltage1; // r0
  int v3; // r0
  _BYTE v5[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = a1;
  if ( platform_is_pic_mcu_en(a1) )
    an_voltage1 = pic1704_get_an_voltage1(v1);
  else
    an_voltage1 = bitmain_get_sample_voltage();
  V_LOCK(an_voltage1);
  v3 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v3);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/miner_util/power_api.c",
           153,
           "read_feedback_voltage",
           21,
           57,
           20,
           v5);
}
