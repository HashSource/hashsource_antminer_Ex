int __fastcall start_voltage_monitor_base(void *arg)
{
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( pthread_create((pthread_t *)&dword_195958, 0, (void *(*)(void *))check_working_voltage, arg) )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "voltage monitor create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "start_voltage_monitor_base",
      26,
      422,
      100,
      v2);
    return 5;
  }
  else
  {
    pthread_detach(dword_195958);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "start_voltage_monitor");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "start_voltage_monitor_base",
      26,
      426,
      60,
      v2);
    return 0;
  }
}
