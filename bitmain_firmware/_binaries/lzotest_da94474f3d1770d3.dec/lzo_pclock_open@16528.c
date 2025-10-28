int __fastcall lzo_pclock_open(int a1, int a2)
{
  int (__fastcall *v4)(int, __int64 *, const char *, _DWORD, _DWORD, _DWORD, __suseconds_t); // r3
  const char *v5; // r2
  __time_t v6; // r0
  __suseconds_t tv_usec; // r1
  __time_t tv_sec; // r0
  clock_t v9; // r0
  __int64 v10; // r6
  __suseconds_t v11; // r2
  bool v12; // zf
  int v13; // r5
  __time_t v15; // r0
  __suseconds_t v16; // r12
  __suseconds_t v17; // r1
  __time_t v18; // r0
  __int64 v19; // [sp+0h] [bp-58h] BYREF
  __suseconds_t v20; // [sp+8h] [bp-50h]
  struct rusage tp; // [sp+10h] [bp-48h] BYREF

  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = 2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  switch ( a2 )
  {
    case 0:
      if ( gettimeofday(&tp.ru_utime, 0) )
        goto LABEL_3;
      tv_usec = tp.ru_utime.tv_usec;
      tv_sec = tp.ru_utime.tv_sec;
      *(_DWORD *)(a1 + 16) = sub_13770;
      v5 = "gettimeofday";
      *(_DWORD *)(a1 + 12) = "gettimeofday";
      v19 = tv_sec;
      v20 = 1000 * tv_usec;
      goto LABEL_12;
    case 1:
      v9 = clock();
      v10 = sub_16F40(
              COERCE_UNSIGNED_INT64((double)v9 / 1000000.0 * 1000000000.0),
              HIDWORD(COERCE_UNSIGNED_INT64((double)v9 / 1000000.0 * 1000000000.0)));
      v19 = sub_16F00(v10, HIDWORD(v10), 1000000000, 0);
      sub_16F00(v10, HIDWORD(v10), 1000000000, 0);
      v20 = v11;
      v5 = "clock";
      *(_DWORD *)(a1 + 16) = sub_137BC;
      *(_DWORD *)(a1 + 12) = "clock";
      goto LABEL_12;
    case 2:
      if ( !clock_gettime(2, (struct timespec *)&tp) )
      {
        v6 = tp.ru_utime.tv_sec;
        *(_DWORD *)(a1 + 12) = "CLOCK_PROCESS_CPUTIME_ID/libc";
        *(_DWORD *)(a1 + 16) = sub_13838;
        v5 = "CLOCK_PROCESS_CPUTIME_ID/libc";
        v12 = *(_DWORD *)a1 == 0;
        v19 = v6;
        v20 = tp.ru_utime.tv_usec;
        if ( !v12 )
        {
LABEL_8:
          *(_DWORD *)(a1 + 4) = a2;
          *(_DWORD *)(a1 + 8) = 0;
          v4 = *(int (__fastcall **)(int, __int64 *, const char *, _DWORD, _DWORD, _DWORD, __suseconds_t))(a1 + 16);
          goto LABEL_19;
        }
        goto LABEL_13;
      }
      if ( !getrusage(0, &tp) )
      {
        v17 = tp.ru_utime.tv_usec;
        v18 = tp.ru_utime.tv_sec;
        *(_DWORD *)(a1 + 16) = sub_138C0;
        v5 = "getrusage";
        *(_DWORD *)(a1 + 12) = "getrusage";
        v19 = v18;
        v20 = 1000 * v17;
LABEL_12:
        if ( *(_DWORD *)a1 )
          goto LABEL_8;
LABEL_13:
        v4 = *(int (__fastcall **)(int, __int64 *, const char *, _DWORD, _DWORD, _DWORD, __suseconds_t))(a1 + 16);
LABEL_14:
        *(_DWORD *)a1 = 1;
        goto LABEL_15;
      }
LABEL_3:
      v4 = *(int (__fastcall **)(int, __int64 *, const char *, _DWORD, _DWORD, _DWORD, __suseconds_t))(a1 + 16);
      if ( !v4 )
        return -1;
      v5 = *(const char **)(a1 + 12);
      if ( !*(_DWORD *)a1 )
        goto LABEL_14;
LABEL_15:
      v12 = v5 == 0;
      v5 = 0;
      *(_DWORD *)(a1 + 8) = 0;
      if ( v12 )
        v5 = "unknown";
      *(_DWORD *)(a1 + 4) = a2;
      if ( v12 )
        *(_DWORD *)(a1 + 12) = v5;
LABEL_19:
      v13 = 10;
      while ( 1 )
      {
        if ( !v4 || v4(a1, &v19, v5, v4, v19, HIDWORD(v19), v20) )
        {
          *(_DWORD *)(a1 + 8) = 1;
          v19 = 0;
          v20 = 0;
        }
        if ( !--v13 )
          break;
        v4 = *(int (__fastcall **)(int, __int64 *, const char *, _DWORD, _DWORD, _DWORD, __suseconds_t))(a1 + 16);
      }
      return 0;
    case 3:
      if ( clock_gettime(3, (struct timespec *)&tp) )
        goto LABEL_3;
      v15 = tp.ru_utime.tv_sec;
      v16 = tp.ru_utime.tv_usec;
      *(_DWORD *)(a1 + 16) = sub_1387C;
      v5 = "CLOCK_THREAD_CPUTIME_ID/libc";
      *(_DWORD *)(a1 + 12) = "CLOCK_THREAD_CPUTIME_ID/libc";
      v20 = v16;
      v19 = v15;
      goto LABEL_12;
    default:
      return -1;
  }
}
