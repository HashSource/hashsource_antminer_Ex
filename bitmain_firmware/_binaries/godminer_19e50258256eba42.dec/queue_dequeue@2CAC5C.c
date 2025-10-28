void __fastcall queue_dequeue(int a1, char *a2, unsigned int a3)
{
  struct __jmp_buf_tag v6; // [sp+20h] [bp-112Ch] BYREF
  _BYTE v7[16]; // [sp+13Ch] [bp-1010h] BYREF
  pthread_mutex_t *v9; // [sp+1140h] [bp-Ch]
  void (__fastcall *v10)(pthread_mutex_t *); // [sp+1144h] [bp-8h]

  v10 = (void (__fastcall *)(pthread_mutex_t *))clean_up;
  v9 = (pthread_mutex_t *)(a1 + 16);
  if ( _sigsetjmp(&v6, 0) )
  {
    v10(v9);
    _pthread_unwind_next((__pthread_unwind_buf_t *)&v6);
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)&v6);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  while ( a3 > *(_DWORD *)(a1 + 12) )
  {
    if ( *(_BYTE *)(a1 + 92) )
    {
      *(_BYTE *)(a1 + 92) = 0;
      goto LABEL_11;
    }
    pthread_cond_wait((pthread_cond_t *)(a1 + 40), (pthread_mutex_t *)(a1 + 16));
  }
  if ( a3 != pipe_pop(*(_DWORD **)(a1 + 8), a2, a3) )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "%s, unkown error", "queue_dequeue");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/thread_safe_queue.c",
      162,
      "queue_dequeue",
      13,
      89,
      100,
      v7);
    exit(-1);
  }
  *(_DWORD *)(a1 + 12) -= a3;
LABEL_11:
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
  _pthread_unregister_cancel((__pthread_unwind_buf_t *)&v6);
}
