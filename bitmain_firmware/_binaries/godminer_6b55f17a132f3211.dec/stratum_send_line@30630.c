int __fastcall stratum_send_line(int a1, char *a2)
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
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/stratum_handler.c",
      144,
      "stratum_send_line",
      17,
      31,
      60,
      v9);
  }
  v5 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v6 = send_line(*(_DWORD *)(a1 + 32), a2);
  pthread_mutex_unlock(v5);
  return v6;
}
