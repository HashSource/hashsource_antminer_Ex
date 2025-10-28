int __fastcall pre_push_work_grin29(_QWORD *a1, int *a2, int a3)
{
  _DWORD *v4; // r3
  struct timeval v6; // [sp+0h] [bp-10h] BYREF
  __int64 seed; // [sp+8h] [bp-8h] BYREF

  *a1 = *a2;
  gettimeofday(&v6, 0);
  LODWORD(seed) = v6.tv_usec + (_DWORD)&loc_F4240 * v6.tv_sec;
  seed = (int)seed;
  if ( a3 )
  {
    dword_166088 = rand_r((unsigned int *)&seed);
  }
  else
  {
    LOWORD(v4) = 24712;
    HIWORD(v4) = (unsigned int)&unk_164F60 >> 16;
    ++*v4;
  }
  return 0;
}
