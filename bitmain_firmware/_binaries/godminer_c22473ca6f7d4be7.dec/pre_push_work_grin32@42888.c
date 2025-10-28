int __fastcall pre_push_work_grin32(_QWORD *a1, int *a2, int a3)
{
  struct timeval v5; // [sp+0h] [bp-10h] BYREF
  __int64 seed; // [sp+8h] [bp-8h] BYREF

  *a1 = *a2;
  gettimeofday(&v5, 0);
  LODWORD(seed) = v5.tv_usec + (_DWORD)&loc_F4240 * v5.tv_sec;
  seed = (int)seed;
  if ( a3 )
    dword_1660EC = rand_r((unsigned int *)&seed);
  else
    ++dword_1660EC;
  return 0;
}
