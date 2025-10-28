int __fastcall start_voltage_monitor_eth_2282(void *a1)
{
  _BYTE v3[8]; // [sp+1Ch] [bp-1008h] BYREF

  if ( pthread_create((pthread_t *)&dword_5AD320, 0, (void *(*)(void *))check_working_voltage_by_mps, a1) )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "voltage monitor create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
      179,
      "start_voltage_monitor_eth_2282",
      30,
      236,
      100,
      v3);
    return 5;
  }
  else
  {
    pthread_detach(dword_5AD320);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "start_voltage_monitor");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
      179,
      "start_voltage_monitor_eth_2282",
      30,
      240,
      60,
      v3);
    return 0;
  }
}
