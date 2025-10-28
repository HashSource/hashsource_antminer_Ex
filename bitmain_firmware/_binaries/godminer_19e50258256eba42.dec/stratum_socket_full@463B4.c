bool __fastcall stratum_socket_full(int a1, __time_t a2)
{
  size_t v2; // r0
  int v7; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  v2 = strlen(*(const char **)(a1 + 44));
  logfmt_raw(&v7, 0x1000u, 0, "stratum_socket_full sockbuf len %zu", v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/stratum_handler.c",
    145,
    "stratum_socket_full",
    19,
    104,
    20,
    &v7);
  return **(_BYTE **)(a1 + 44) || socket_full(*(_DWORD *)(a1 + 36), a2);
}
