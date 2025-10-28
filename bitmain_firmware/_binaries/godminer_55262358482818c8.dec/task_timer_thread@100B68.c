int __fastcall task_timer_thread(int a1)
{
  char *v2; // r0
  int v3; // r3
  const char *v4; // r2
  char *v5; // r4
  int v6; // r0
  int v7; // r3
  int v8; // r3
  int v9; // r1
  int result; // r0
  int v11; // r9
  int v12; // r5
  struct timespec *v13; // r6
  struct timespec *v14; // r11
  int v15; // r10
  struct timespec *v16; // r9
  int v17; // r4
  void (__fastcall *v18)(int); // r1
  int v19; // r5
  int v20; // r9
  struct timespec *v21; // r1
  int v22; // t1
  int v23; // r4
  char v25[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  LOWORD(v3) = -27036;
  LOWORD(v4) = 30580;
  HIWORD(v3) = (unsigned int)"et_full select false" >> 16;
  HIWORD(v4) = (unsigned int)"ne failed %d count %d" >> 16;
  v5 = v2;
  snprintf(v2, 0x40u, v4, v3, 0);
  V_LOCK();
  v6 = syscall(224);
  LOWORD(v7) = 30592;
  HIWORD(v7) = (unsigned int)" count %d" >> 16;
  logfmt_raw(v25, 0x1000u, 0, v7, v5, v6);
  V_UNLOCK();
  LOWORD(v8) = -27036;
  LOWORD(v9) = -27016;
  HIWORD(v9) = (unsigned int)"" >> 16;
  HIWORD(v8) = (unsigned int)"et_full select false" >> 16;
  zlog(g_zc, v9, 158, v8, 17, 44, 40, v25);
  for ( result = prctl(15, v5); ; result = usleep(1000 * v12) )
  {
    v11 = *(_DWORD *)(a1 + 6144);
    if ( v11 > 0 )
    {
      v13 = (struct timespec *)a1;
      v14 = (struct timespec *)a1;
      v15 = a1;
      v16 = (struct timespec *)(a1 + 16 * v11);
      do
      {
        while ( 1 )
        {
          clock_gettime(1, v13 + 257);
          v17 = 1000 * (v13[257].tv_sec - v13[256].tv_sec) + (v13[257].tv_nsec - v13[256].tv_nsec) / 1000000;
          if ( *(_DWORD *)(v15 + 1024) <= v17 )
            break;
          v13 += 2;
          v15 += 4;
          if ( v13 == v16 )
            goto LABEL_8;
        }
        clock_gettime(1, v13 + 256);
        v13 += 2;
        v18 = *(void (__fastcall **)(int))v15;
        v15 += 4;
        v18(v17);
      }
      while ( v13 != v16 );
LABEL_8:
      v19 = 0x7FFFFFFF;
      v20 = a1 + 1020;
      do
      {
        v21 = v14 + 257;
        v22 = *(_DWORD *)(v20 + 4);
        v20 += 4;
        v14 += 2;
        clock_gettime(1, v21);
        result = 1000 * (v14[255].tv_sec - v14[254].tv_sec) + (v14[255].tv_nsec - v14[254].tv_nsec) / 1000000;
        v23 = v22 - result;
        if ( v19 >= v22 - result )
          v19 = v23;
      }
      while ( v13 != v14 );
      v12 = v19 & ~(v19 >> 31);
    }
    else
    {
      v12 = 0x7FFFFFFF;
    }
    if ( !*(_BYTE *)(a1 + 6148) )
      break;
  }
  return result;
}
