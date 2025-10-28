int __fastcall stratum_send_line(pthread_mutex_t *a1, const char *a2)
{
  _BYTE v5[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v6[7]; // [sp+1030h] [bp-34h] BYREF
  int v7; // [sp+104Ch] [bp-18h]
  unsigned __int8 v8; // [sp+1057h] [bp-Dh]

  v8 = 0;
  if ( opt_protocol )
  {
    V_LOCK();
    sub_45774((int)v6, a1->__lock);
    logfmt_raw(v5, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "> %s", a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_send_line",
      17,
      31,
      60,
      v5);
  }
  pthread_mutex_lock(a1 + 2);
  v8 = send_line(a1[1].__kind, a2);
  pthread_mutex_unlock(a1 + 2);
  return v8;
}
