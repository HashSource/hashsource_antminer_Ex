int __fastcall sub_138C0(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  struct rusage v5; // [sp+0h] [bp-48h] BYREF

  result = getrusage(0, &v5);
  if ( result )
    return -1;
  v4 = 1000 * v5.ru_utime.tv_usec;
  *(_QWORD *)a2 = v5.ru_utime.tv_sec;
  *(_DWORD *)(a2 + 8) = v4;
  return result;
}
