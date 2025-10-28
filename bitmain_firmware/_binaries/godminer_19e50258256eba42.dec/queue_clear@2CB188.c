int __fastcall queue_clear(int a1)
{
  size_t v1; // r0
  _BYTE v4[8]; // [sp+1Ch] [bp-1008h] BYREF
  void *ptr; // [sp+101Ch] [bp-8h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  v1 = pipe_elem_size(*(_DWORD *)a1);
  ptr = calloc(1u, v1);
  while ( *(int *)(a1 + 12) > 0 )
  {
    if ( pipe_pop(*(_DWORD **)(a1 + 8), (char *)ptr, 1) != 1 )
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "%s, unkown error", "queue_clear");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/thread_safe_queue.c",
        162,
        "queue_clear",
        11,
        129,
        100,
        v4);
      exit(-1);
    }
    --*(_DWORD *)(a1 + 12);
  }
  free(ptr);
  return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
}
