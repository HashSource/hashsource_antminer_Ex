char **__fastcall sub_254874(char **a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r0
  float v12; // [sp+4h] [bp-20h] BYREF
  void *ptr; // [sp+8h] [bp-1Ch] BYREF
  char v14; // [sp+10h] [bp-14h] BYREF

  v9 = ((int (__fastcall *)(int))loc_173488)(a4);
  ((void (__fastcall *)(void **, int, int, _DWORD))loc_2520CC)(&ptr, v9, a5, 0);
  v10 = ((int (__fastcall *)(int))loc_173488)(a4);
  ((void (__fastcall *)(int, int, int, float *))loc_25460C)(a2, v10, a3, &v12);
  sub_93200(a1, (const char *)ptr, v12);
  if ( ptr != &v14 )
    sub_339E8C(ptr);
  return a1;
}
