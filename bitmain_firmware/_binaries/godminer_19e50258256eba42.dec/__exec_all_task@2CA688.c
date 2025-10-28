int __fastcall _exec_all_task(int result)
{
  int v1; // [sp+4h] [bp-30h]
  int v2; // [sp+14h] [bp-20h]
  int v3; // [sp+18h] [bp-1Ch]
  int i; // [sp+1Ch] [bp-18h]

  v1 = result;
  v3 = *(_DWORD *)(result + 6144);
  for ( i = 0; i < v3; ++i )
  {
    clock_gettime(1, (struct timespec *)(v1 + 16 * (i + 128) + 8));
    v2 = 1000 * (*(_DWORD *)(v1 + 16 * (i + 128) + 8) - *(_DWORD *)(v1 + 16 * (i + 128)))
       + (*(_DWORD *)(v1 + 16 * (i + 128) + 12) - *(_DWORD *)(v1 + 16 * (i + 128) + 4)) / 1000000;
    clock_gettime(1, (struct timespec *)(v1 + 16 * (i + 128)));
    result = (*(int (__fastcall **)(int))(v1 + 4 * i))(v2);
  }
  return result;
}
