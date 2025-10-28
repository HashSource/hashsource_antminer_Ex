_DWORD *__fastcall sub_201F0C(_DWORD *a1, int a2, int a3, int a4)
{
  int v8; // r0
  void (__fastcall *v9)(_DWORD *, int, int, int); // r5

  v8 = sub_16F67C((int)a1);
  v9 = *(void (__fastcall **)(_DWORD *, int, int, int))(*(_DWORD *)((int (__fastcall *)(int, int))loc_16ECB0)(
                                                                     v8,
                                                                     dword_4893A0)
                                                      + 40);
  if ( v9 )
  {
    v9(a1, a2, a3, a4);
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
  }
  return a1;
}
