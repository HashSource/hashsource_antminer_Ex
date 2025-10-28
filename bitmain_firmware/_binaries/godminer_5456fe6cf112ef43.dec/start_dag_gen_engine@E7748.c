int __fastcall start_dag_gen_engine(int a1)
{
  char v2[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num(a1) <= 0 )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "start_dag_gen_engine",
      20,
      259,
      100,
      v2);
    return 1;
  }
  else
  {
    pthread_create((pthread_t *)&dword_164FB8, 0, (void *(*)(void *))dag_gen_thread_func, 0);
    return 0;
  }
}
