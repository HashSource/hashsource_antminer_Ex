int __fastcall stratum_disconnect(pthread_mutex_t *a1)
{
  _BYTE v3[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v5; // [sp+104Ch] [bp-10h]

  pthread_mutex_lock(a1 + 2);
  if ( a1[1].__kind != -1 )
  {
    shutdown(a1[1].__kind, 2);
    close(a1[1].__kind);
    a1[1].__kind = -1;
    *(_BYTE *)a1[1].__spins = 0;
    V_LOCK();
    sub_45774((int)v4, a1->__lock);
    logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "pool disconnect");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_disconnect",
      18,
      227,
      20,
      v3);
  }
  return pthread_mutex_unlock(a1 + 2);
}
