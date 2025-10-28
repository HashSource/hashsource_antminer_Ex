void __fastcall sub_C1E28(_DWORD *a1)
{
  _DWORD *v2; // r4
  void *v3; // r0

  v2 = (_DWORD *)a1[4];
  ((void (__fastcall *)(_DWORD))loc_1625D0)(*v2);
  v3 = (void *)v2[1];
  if ( v3 )
    free(v3);
  free(v2);
  free(a1);
}
