int __fastcall stratum_disconnect(int a1)
{
  pthread_mutex_t *v1; // r6
  int v3; // r0
  int v4; // r0
  _BYTE *v5; // r3
  int v6; // r0
  _BYTE v8[32]; // [sp+28h] [bp-1020h] BYREF
  _BYTE v9[4096]; // [sp+48h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v3 = *(_DWORD *)(a1 + 32);
  if ( v3 != -1 )
  {
    shutdown(v3, 2);
    v4 = close(*(_DWORD *)(a1 + 32));
    v5 = *(_BYTE **)(a1 + 40);
    *(_DWORD *)(a1 + 32) = -1;
    *v5 = 0;
    V_LOCK(v4);
    V_INT((int)v8, "poolno");
    v6 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_disconnect",
      18,
      214,
      20,
      v9);
  }
  return pthread_mutex_unlock(v1);
}
