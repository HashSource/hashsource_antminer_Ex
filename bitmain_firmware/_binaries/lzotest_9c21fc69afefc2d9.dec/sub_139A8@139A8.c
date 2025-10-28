int __fastcall sub_139A8(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  struct timeval v5; // [sp+0h] [bp-8h] BYREF

  result = gettimeofday(&v5, 0);
  if ( result )
    return -1;
  v4 = 1000 * v5.tv_usec;
  *(_QWORD *)a2 = v5.tv_sec;
  *(_DWORD *)(a2 + 8) = v4;
  return result;
}
