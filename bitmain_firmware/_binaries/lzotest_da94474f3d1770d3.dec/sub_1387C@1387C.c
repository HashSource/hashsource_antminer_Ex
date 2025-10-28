int __fastcall sub_1387C(int a1, int a2)
{
  int result; // r0
  __int64 tv_sec; // r2
  struct timespec v5; // [sp+0h] [bp-8h] BYREF

  result = clock_gettime(3, &v5);
  if ( result )
    return -1;
  tv_sec = v5.tv_sec;
  *(_DWORD *)(a2 + 8) = v5.tv_nsec;
  *(_QWORD *)a2 = tv_sec;
  return result;
}
