int __fastcall sub_1E27E4(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = sub_16F67C(a1);
  result = ((int (__fastcall *)(int))loc_1E2798)(v2);
  if ( *(_DWORD *)(dword_488C94 + 432) == a1 )
    *(_DWORD *)(dword_488C94 + 432) = -1;
  return result;
}
