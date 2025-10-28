int __fastcall sub_1E8AAC(int a1)
{
  int v1; // r0
  int result; // r0

  v1 = sub_16F67C(a1);
  result = ((int (__fastcall *)(int))loc_1E2798)(v1);
  if ( *(_DWORD *)(dword_488C94 + 56) )
    JUMPOUT(0x1E8884);
  return result;
}
