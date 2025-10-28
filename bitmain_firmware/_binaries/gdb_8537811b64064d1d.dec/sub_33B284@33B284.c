_QWORD *__fastcall sub_33B284(_QWORD *a1)
{
  struct timespec v3; // [sp+0h] [bp-Ch] BYREF

  clock_gettime(1, &v3);
  *a1 = 1000000000LL * v3.tv_sec + v3.tv_nsec;
  return a1;
}
