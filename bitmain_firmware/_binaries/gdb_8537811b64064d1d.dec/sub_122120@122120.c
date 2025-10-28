int __fastcall sub_122120(int *a1)
{
  int v1; // r4
  void *v2; // r0

  v1 = *a1;
  ((void (__fastcall *)(_DWORD))loc_1625D0)(*(_DWORD *)(*a1 + 8));
  v2 = *(void **)(v1 + 192);
  if ( v2 )
    free(v2);
  *(_DWORD *)(v1 + 192) = 0;
  return 1;
}
