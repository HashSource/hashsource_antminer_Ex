int __fastcall stratum_socket_full(int a1, __time_t a2)
{
  size_t v4; // r0
  _DWORD *v5; // r3
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  v4 = strlen(*(const char **)(a1 + 40));
  logfmt_raw(v7, 0x1000u, 0, 1246560, v4);
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/stratum_handler.c",
    138,
    "stratum_socket_full",
    19,
    97,
    20,
    v7);
  if ( **(_BYTE **)(a1 + 40) )
    return 1;
  else
    return socket_full(*(_DWORD *)(a1 + 32), a2);
}
