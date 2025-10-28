__int64 sub_AE308()
{
  double v0; // d0
  int (**v1)(); // r0
  int v2; // r0
  int (**v3)(); // r0
  int v4; // r0
  int v6; // [sp+4h] [bp-1028h]
  _BYTE v7[28]; // [sp+10h] [bp-101Ch] BYREF
  double v8; // [sp+1010h] [bp-1Ch]
  double v9; // [sp+1018h] [bp-14h]
  int i; // [sp+1020h] [bp-Ch]
  int device_num; // [sp+1024h] [bp-8h]

  v9 = 0.0;
  device_num = query_device_num();
  for ( i = 0; i < device_num; ++i )
  {
    v1 = dev_ctrl();
    v2 = ((int (__fastcall *)(int))v1[15])(i);
    read_feedback_voltage(v2);
    v8 = v0;
    V_LOCK();
    v3 = dev_ctrl();
    v4 = ((int (__fastcall *)(int))v3[15])(i);
    logfmt_raw(v7, 0x1000u, 0, "chain %d feedback voltage = %.2f", v4, v6, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "get_minimal_feedback_voltage",
      28,
      69,
      40,
      v7);
    if ( v8 > 0.1 && (v9 > v8 || v9 < 0.1) )
      v9 = v8;
  }
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "the minimal voltage = %.2f", v9);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/miner_util/power_api.c",
           150,
           "get_minimal_feedback_voltage",
           28,
           74,
           20,
           v7);
}
