int __fastcall system_info_init(unsigned int a1)
{
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v6; // r0
  _BYTE v7[4096]; // [sp+18h] [bp-1000h] BYREF

  if ( a1 > 0xB )
  {
    V_LOCK(a1);
    v6 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/system_info.c",
      134,
      "system_info_init",
      16,
      13,
      100,
      v7);
    return -1;
  }
  else
  {
    v1 = (_DWORD *)((char *)&all_algo_system_info + 76 * a1);
    if ( a1 - 5 > 2 )
      v2 = 10;
    else
      v2 = 4;
    v3 = set_pic_device_high(v2);
    V_LOCK(v3);
    v4 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/system_info.c",
      134,
      "system_info_init",
      16,
      24,
      60,
      v7);
    power_info_init(v1[1], v1[2], v1[3], v1[4], v1[5], v1[6], v1[7]);
    fan_info_init(v1[8], v1[9]);
    fan_control_info_init(v1[10], v1[11], v1[12], v1[13], v1[14], v1[15], v1[16], v1[17], v1[18]);
    return 0;
  }
}
