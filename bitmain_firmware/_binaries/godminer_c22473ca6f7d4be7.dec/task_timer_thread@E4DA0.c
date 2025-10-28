int __fastcall task_timer_thread(int a1)
{
  char *v2; // r0
  int v3; // r3
  const char *v4; // r2
  char *v5; // r4
  int v6; // r0
  int v7; // r3
  int *v8; // r3
  int v9; // r0
  int v10; // r1
  int result; // r0
  int v12; // r9
  int v13; // r5
  struct timespec *v14; // r6
  struct timespec *v15; // r11
  int v16; // r10
  struct timespec *v17; // r9
  int v18; // r4
  void (__fastcall *v19)(int); // r1
  int v20; // r5
  int v21; // r9
  struct timespec *v22; // r1
  int v23; // t1
  int v24; // r4
  char v26[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  LOWORD(v3) = 7312;
  LOWORD(v4) = -3884;
  HIWORD(v3) = (unsigned int)&unk_140FA8 >> 16;
  HIWORD(v4) = (unsigned int)"ed, trying again in 30sec" >> 16;
  v5 = v2;
  snprintf(v2, 0x40u, v4, v3, 0);
  V_LOCK();
  v6 = syscall(224);
  LOWORD(v7) = -3872;
  HIWORD(v7) = (unsigned int)"gain in 30sec" >> 16;
  logfmt_raw(v26, 0x1000u, 0, v7, v5, v6);
  V_UNLOCK();
  LOWORD(v8) = -14512;
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  v9 = *v8;
  LOWORD(v8) = 7312;
  LOWORD(v10) = 7332;
  HIWORD(v10) = (unsigned int)&unk_140FBC >> 16;
  HIWORD(v8) = (unsigned int)&unk_140FA8 >> 16;
  zlog(v9, v10, 148, v8, 17, 44, 60, v26);
  for ( result = prctl(15, v5); ; result = usleep(1000 * v13) )
  {
    v12 = *(_DWORD *)(a1 + 6144);
    if ( v12 > 0 )
    {
      v14 = (struct timespec *)a1;
      v15 = (struct timespec *)a1;
      v16 = a1;
      v17 = (struct timespec *)(a1 + 16 * v12);
      do
      {
        while ( 1 )
        {
          clock_gettime(1, v14 + 257);
          v18 = 1000 * (v14[257].tv_sec - v14[256].tv_sec) + (v14[257].tv_nsec - v14[256].tv_nsec) / 1000000;
          if ( *(_DWORD *)(v16 + 1024) <= v18 )
            break;
          v14 += 2;
          v16 += 4;
          if ( v14 == v17 )
            goto LABEL_8;
        }
        clock_gettime(1, v14 + 256);
        v14 += 2;
        v19 = *(void (__fastcall **)(int))v16;
        v16 += 4;
        v19(v18);
      }
      while ( v14 != v17 );
LABEL_8:
      v20 = 0x7FFFFFFF;
      v21 = a1 + 1020;
      do
      {
        v22 = v15 + 257;
        v23 = *(_DWORD *)(v21 + 4);
        v21 += 4;
        v15 += 2;
        clock_gettime(1, v22);
        result = 1000 * (v15[255].tv_sec - v15[254].tv_sec) + (v15[255].tv_nsec - v15[254].tv_nsec) / 1000000;
        v24 = v23 - result;
        if ( v20 >= v23 - result )
          v20 = v24;
      }
      while ( v14 != v15 );
      v13 = v20 & ~(v20 >> 31);
    }
    else
    {
      v13 = 0x7FFFFFFF;
    }
    if ( !*(_BYTE *)(a1 + 6148) )
      break;
  }
  return result;
}
