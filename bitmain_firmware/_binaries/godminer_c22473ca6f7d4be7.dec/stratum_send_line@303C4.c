int __fastcall stratum_send_line(int *a1, char *a2)
{
  _BYTE *v2; // r3
  char *v5; // r1
  _DWORD *v6; // r3
  pthread_mutex_t *v7; // r4
  int v8; // r5
  _DWORD v10[7]; // [sp+28h] [bp-1024h] BYREF
  int v11; // [sp+44h] [bp-1008h]
  char v12[4100]; // [sp+48h] [bp-1004h] BYREF

  LOWORD(v2) = 20700;
  HIWORD(v2) = (unsigned int)&unk_163FB4 >> 16;
  if ( *v2 )
  {
    V_LOCK();
    LOWORD(v5) = -3560;
    HIWORD(v5) = (unsigned int)"DEVS" >> 16;
    V_INT((int)v10, v5, *a1);
    logfmt_raw(v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, 1246188, a2);
    V_UNLOCK();
    LOWORD(v6) = -14512;
    HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v6,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_send_line",
      17,
      26,
      60,
      v12);
  }
  v7 = (pthread_mutex_t *)(a1 + 11);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 11));
  v8 = send_line(a1[8], a2);
  pthread_mutex_unlock(v7);
  return v8;
}
