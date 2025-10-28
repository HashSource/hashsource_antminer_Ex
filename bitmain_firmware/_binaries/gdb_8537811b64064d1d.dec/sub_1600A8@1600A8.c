_DWORD *__fastcall sub_1600A8(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r0

  if ( sub_15FEB4(a2, a3, a4, a5, a6) )
  {
    v8 = ((int (*)(void))loc_15FAB0)();
    ((void (__fastcall *)(_DWORD *, int))loc_15CFC8)(a1, v8);
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
  }
  return a1;
}
