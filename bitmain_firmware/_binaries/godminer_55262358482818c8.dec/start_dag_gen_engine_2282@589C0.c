int start_dag_gen_engine_2282()
{
  void *(*v0)(void *); // r2
  int v2; // r3
  int v3; // r1
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v2) = -16764;
    HIWORD(v2) = (unsigned int)"e work to open cores" >> 16;
    logfmt_raw(v4, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = -10296;
    HIWORD(v3) = (unsigned int)&unk_15D7B0 >> 16;
    zlog(g_zc, v3, 177, "start_dag_gen_engine_2282", 25, 311, 100, v4);
    return 1;
  }
  else
  {
    LOWORD(v0) = -31696;
    HIWORD(v0) = (unsigned int)&loc_58414 >> 16;
    pthread_create(&dword_19270C, 0, v0, 0);
    return 0;
  }
}
