int __fastcall start_voltage_monitor_base(void *arg)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v5; // r0
  _BYTE v6[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = pthread_create((pthread_t *)&dword_1740D8, 0, (void *(*)(void *))check_working_voltage, arg);
  if ( v1 )
  {
    V_LOCK(v1);
    v5 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "start_voltage_monitor_base",
      26,
      365,
      100,
      v6);
    return 5;
  }
  else
  {
    v2 = pthread_detach(dword_1740D8);
    V_LOCK(v2);
    v3 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "start_voltage_monitor_base",
      26,
      369,
      60,
      v6);
    return 0;
  }
}
