int __fastcall sub_1E8010(int a1)
{
  int v1; // r0
  int result; // r0
  int v3; // r4

  v1 = sub_16F67C(a1);
  result = ((int (__fastcall *)(int))loc_1E2798)(v1);
  if ( dword_46DB2C )
  {
    v3 = dword_488C94;
    if ( !*(_DWORD *)(dword_488C94 + 56) )
      return sub_946D8("Range stepping is not supported by the current target");
    if ( !((int (__fastcall *)(_DWORD))loc_1E21C0)(0) )
      sub_1E7E64(v3);
    result = ((int (__fastcall *)(_DWORD))loc_1E21C0)(0);
    if ( result != 1 || !*(_DWORD *)(v3 + 36) )
      return sub_946D8("Range stepping is not supported by the current target");
  }
  return result;
}
