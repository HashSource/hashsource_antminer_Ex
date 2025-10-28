int __fastcall start_dag_gen_engine(int a1)
{
  int device_num; // r0
  int v3; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  device_num = query_device_num(a1);
  if ( device_num <= 0 )
  {
    V_LOCK(device_num);
    v3 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/dhash_content/eth/eth_dhash_common.c",
      163,
      "start_dag_gen_engine",
      20,
      264,
      100,
      v4);
    return 1;
  }
  else
  {
    pthread_create((pthread_t *)&dword_163450, 0, (void *(*)(void *))dag_gen_thread_func, 0);
    return 0;
  }
}
