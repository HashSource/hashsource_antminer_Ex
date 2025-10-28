int __fastcall start_temp_monitor_base(void *a1)
{
  _BYTE v3[8]; // [sp+1Ch] [bp-1008h] BYREF

  if ( pthread_create((pthread_t *)&dword_5AD334, 0, (void *(*)(void *))check_working_temp, a1) )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "temp monitor create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_temp_monitor_base",
      23,
      504,
      100,
      v3);
    return 5;
  }
  else
  {
    pthread_detach(dword_5AD334);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "start_temp_monitor");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_temp_monitor_base",
      23,
      508,
      60,
      v3);
    return 0;
  }
}
