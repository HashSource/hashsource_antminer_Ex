int __fastcall task_timer_thread(int a1)
{
  int v1; // r0
  int v2; // r10
  _BYTE v5[80]; // [sp+1Ch] [bp-1050h] BYREF
  struct timespec *v6; // [sp+101Ch] [bp-50h]
  struct timespec *tp; // [sp+1020h] [bp-4Ch]
  struct timespec *v8; // [sp+1024h] [bp-48h]
  int v9; // [sp+1028h] [bp-44h]
  int v10; // [sp+102Ch] [bp-40h]
  int v11; // [sp+1030h] [bp-3Ch]
  int v12; // [sp+1034h] [bp-38h]
  char *s; // [sp+1038h] [bp-34h]
  int j; // [sp+103Ch] [bp-30h]
  int i; // [sp+1040h] [bp-2Ch]
  int v16; // [sp+1044h] [bp-28h]

  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "task_timer_thread", 0);
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v5, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/common/general/task_timer.c",
    155,
    "task_timer_thread",
    17,
    44,
    40,
    v5);
  prctl(15, s);
  v12 = a1;
  v11 = 0;
  v16 = 0;
  v10 = 0;
  while ( 1 )
  {
    v9 = *(_DWORD *)(v12 + 6144);
    for ( i = 0; i < v9; ++i )
    {
      v8 = (struct timespec *)(v12 + 16 * (i + 128));
      clock_gettime(1, v8 + 1);
      v11 = 1000 * (v8[1].tv_sec - v8->tv_sec) + (v8[1].tv_nsec - v8->tv_nsec) / 1000000;
      if ( v11 >= *(_DWORD *)(v12 + 4 * (i + 256)) )
      {
        tp = (struct timespec *)(v12 + 16 * (i + 128));
        clock_gettime(1, tp);
        (*(void (__fastcall **)(int))(v12 + 4 * i))(v11);
      }
    }
    v16 = 0x7FFFFFFF;
    for ( j = 0; j < v9; ++j )
    {
      v2 = *(_DWORD *)(v12 + 4 * (j + 256));
      v6 = (struct timespec *)(v12 + 16 * (j + 128));
      clock_gettime(1, v6 + 1);
      v10 = v2 - (1000 * (v6[1].tv_sec - v6->tv_sec) + (v6[1].tv_nsec - v6->tv_nsec) / 1000000);
      if ( v10 < v16 )
        v16 = v10;
    }
    v16 &= ~(v16 >> 31);
    if ( *(_BYTE *)(v12 + 6148) != 1 )
      break;
    usleep(1000 * v16);
  }
  return *(_BYTE *)(v12 + 6148) ^ 1;
}
