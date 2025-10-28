int __fastcall stratum_disconnect(int *a1)
{
  pthread_mutex_t *v1; // r6
  int v3; // r0
  _BYTE *v4; // r3
  char *v5; // r1
  _DWORD *v6; // r3
  _DWORD v8[7]; // [sp+28h] [bp-1020h] BYREF
  int v9; // [sp+44h] [bp-1004h]
  char v10[4096]; // [sp+48h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 11);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 11));
  v3 = a1[8];
  if ( v3 != -1 )
  {
    shutdown(v3, 2);
    close(a1[8]);
    v4 = (_BYTE *)a1[10];
    a1[8] = -1;
    *v4 = 0;
    V_LOCK();
    LOWORD(v5) = -3560;
    HIWORD(v5) = (unsigned int)"DEVS" >> 16;
    V_INT((int)v8, v5, *a1);
    logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, 1246724);
    V_UNLOCK();
    LOWORD(v6) = -14512;
    HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v6,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_disconnect",
      18,
      214,
      20,
      v10);
  }
  return pthread_mutex_unlock(v1);
}
