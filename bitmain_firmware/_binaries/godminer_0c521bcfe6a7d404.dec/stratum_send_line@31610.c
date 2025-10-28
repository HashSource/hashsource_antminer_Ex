int __fastcall stratum_send_line(pthread_mutex_t *a1, char *a2)
{
  int v4; // r0
  pthread_mutex_t *v5; // r4
  int v6; // r5
  _BYTE v8[32]; // [sp+28h] [bp-1024h] BYREF
  _BYTE v9[4100]; // [sp+48h] [bp-1004h] BYREF

  if ( opt_protocol )
  {
    V_LOCK(a1);
    V_INT((int)v8, "poolno");
    v4 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/stratum_handler.c",
      148,
      "stratum_send_line",
      17,
      31,
      60,
      v9);
  }
  v5 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  v6 = send_line(a1[1].__kind, a2);
  pthread_mutex_unlock(v5);
  return v6;
}
