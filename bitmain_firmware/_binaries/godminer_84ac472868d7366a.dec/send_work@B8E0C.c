int __fastcall send_work(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r0
  void *v5; // r0
  size_t v6; // r2
  void *v7; // r5
  size_t v9; // [sp+14h] [bp-1004h]
  _BYTE v10[4096]; // [sp+18h] [bp-1000h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  v3 = snprintf(v2, 0x40u, "%.10s_%d", "send_work", *(_DWORD *)(a1 + 136));
  V_LOCK(v3);
  syscall(224);
  v4 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "send_work",
    9,
    46,
    60,
    v10);
  prctl(15, v2);
  v9 = *(_DWORD *)(a1 + 628);
  v5 = calloc(1u, v9);
  v6 = v9;
  v7 = v5;
  while ( 1 )
  {
    memset(v7, 0, v6);
    queue_dequeue(*(_DWORD *)(a1 + 652), v7, 1);
    if ( *(_BYTE *)(a1 + 686) )
      break;
    push_work_base(a1, (int)v7);
    v6 = *(_DWORD *)(a1 + 628);
  }
  *(_BYTE *)(a1 + 686) = 0;
  free(v7);
  return 0;
}
