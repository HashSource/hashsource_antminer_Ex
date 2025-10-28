int sub_1E8094()
{
  int result; // r0
  int v1; // r0
  int v2; // r4

  if ( ((int (__fastcall *)(int))loc_1E21C0)(85) != 1 )
    return 0;
  v1 = sub_16F67C(1);
  ((void (__fastcall *)(int))loc_1E2798)(v1);
  v2 = dword_488C94;
  if ( !((int (__fastcall *)(_DWORD))loc_1E21C0)(0) )
    sub_1E7E64(v2);
  result = *(_DWORD *)(v2 + 40);
  if ( result )
    return *(_DWORD *)(v2 + 44) != 0;
  return result;
}
