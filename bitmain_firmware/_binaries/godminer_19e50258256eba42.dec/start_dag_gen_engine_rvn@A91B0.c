int start_dag_gen_engine_rvn()
{
  _BYTE v2[8]; // [sp+14h] [bp-1008h] BYREF
  int device_num; // [sp+1014h] [bp-8h]

  device_num = query_device_num();
  if ( device_num > 0 )
  {
    pthread_create((pthread_t *)&dword_59A748, 0, (void *(*)(void *))dag_gen_rvn_thread_func, 0);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
      164,
      "start_dag_gen_engine_rvn",
      24,
      452,
      100,
      v2);
    return 1;
  }
}
