int __fastcall global_idx_init_dash(int a1)
{
  _BYTE v3[8]; // [sp+1Ch] [bp-1008h] BYREF
  void *s; // [sp+101Ch] [bp-8h]

  s = malloc(0x5808u);
  memset(s, 0, 0x5808u);
  *(_DWORD *)(a1 + 864) = s;
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "__custom_data init %p", s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "global_idx_init_dash",
    20,
    57,
    20,
    v3);
  return 0;
}
