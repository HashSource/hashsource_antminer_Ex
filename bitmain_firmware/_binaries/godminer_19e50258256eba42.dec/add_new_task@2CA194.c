int __fastcall add_new_task(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // [sp+14h] [bp-8h]

  v5 = *(_DWORD *)(a1 + 6144);
  *(_DWORD *)(a1 + 4 * v5) = a2;
  *(_DWORD *)(a1 + 4 * (v5 + 256)) = a3;
  result = clock_gettime(1, (struct timespec *)(a1 + 16 * (v5 + 128)));
  ++*(_DWORD *)(a1 + 6144);
  return result;
}
