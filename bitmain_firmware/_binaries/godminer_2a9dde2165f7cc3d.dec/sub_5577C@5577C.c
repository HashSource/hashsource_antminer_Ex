int __fastcall sub_5577C(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0
  int v6; // r0
  _BYTE v7[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/miner_util/power_api.c",
         153,
         "set_voltage_without_feedback",
         28,
         197,
         40,
         v7);
  v4 = bitmain_set_voltage(v3);
  if ( v4 < 0 )
  {
    V_LOCK(v4);
    v6 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/power_api.c",
      153,
      "set_voltage_without_feedback",
      28,
      200,
      100,
      v7);
    return -1;
  }
  else
  {
    usleep(0x7A120u);
    result = 0;
    dword_174364 = a1;
    dword_174368 = a1;
  }
  return result;
}
