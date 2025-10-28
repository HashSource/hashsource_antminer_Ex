int __fastcall stratum_socket_full(int a1, int a2)
{
  int v4; // r0
  _BYTE v6[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  strlen(*(const char **)(a1 + 44));
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/stratum_handler.c",
    148,
    "stratum_socket_full",
    19,
    104,
    20,
    v6);
  if ( **(_BYTE **)(a1 + 44) )
    return 1;
  else
    return socket_full(*(_DWORD *)(a1 + 36), a2);
}
