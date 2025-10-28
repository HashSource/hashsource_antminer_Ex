int __fastcall send_work(int a1)
{
  int v1; // r0
  _BYTE v3[16]; // [sp+1Ch] [bp-1010h] BYREF
  void *ptr; // [sp+101Ch] [bp-10h]
  char *s; // [sp+1020h] [bp-Ch]
  int v6; // [sp+1024h] [bp-8h]

  v6 = a1;
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "send_work", *(_DWORD *)(v6 + 264));
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v3, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "send_work",
    9,
    66,
    40,
    v3);
  prctl(15, s);
  for ( ptr = calloc(1u, *(_DWORD *)(v6 + 868)); ; push_work_base(v6, (int)ptr) )
  {
    memset(ptr, 0, *(_DWORD *)(v6 + 868));
    queue_dequeue(*(_DWORD *)(v6 + 892), (char *)ptr, 1u);
    if ( *(_BYTE *)(v6 + 940) )
      break;
  }
  *(_BYTE *)(v6 + 940) = 0;
  free(ptr);
  return 0;
}
