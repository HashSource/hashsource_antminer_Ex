int __fastcall sub_17F458(_DWORD *a1, int *a2)
{
  _DWORD *v2; // r4
  int v3; // r6

  v2 = a1 + 2;
  v3 = *a2;
  if ( v3 == ps_getpid_0((int)(a1 + 2))
    && !sub_23F1EC(*v2, v2[1], v2[2])
    && !((int (__fastcall *)(_DWORD, _DWORD, _DWORD))loc_23F224)(*v2, v2[1], v2[2])
    && !a1[56]
    && !a1[36] )
  {
    sub_17F404(a1);
  }
  return 0;
}
