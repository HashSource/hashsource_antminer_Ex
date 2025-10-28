int __fastcall global_idx_init_dash(int a1)
{
  void *v2; // r0
  int v3; // r0
  _BYTE v5[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = calloc(0x5808u, 1u);
  *(_DWORD *)(a1 + 624) = v2;
  V_LOCK(v2);
  v3 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "global_idx_init_dash",
    20,
    59,
    20,
    v5);
  return 0;
}
