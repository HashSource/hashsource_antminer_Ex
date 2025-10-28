int __fastcall start_freq_compensate_thread_base(void *a1)
{
  _BYTE v3[8]; // [sp+1Ch] [bp-1008h] BYREF

  if ( pthread_create((pthread_t *)&dword_5AD330, 0, (void *(*)(void *))check_working_freq, a1) )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "freq_compensate_thread create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_freq_compensate_thread_base",
      33,
      479,
      100,
      v3);
    return 5;
  }
  else
  {
    pthread_detach(dword_5AD330);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "start freq_compensate_thread");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_freq_compensate_thread_base",
      33,
      483,
      60,
      v3);
    return 0;
  }
}
