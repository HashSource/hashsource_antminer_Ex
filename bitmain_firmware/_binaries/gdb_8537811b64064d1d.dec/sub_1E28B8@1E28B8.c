int __fastcall sub_1E28B8(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r3

  v1 = sub_16F67C(a1);
  v2 = ((int (__fastcall *)(int))loc_1E2798)(v1);
  v3 = dword_488C94;
  v4 = sub_16F67C(v2);
  v5 = ((int (__fastcall *)(int))loc_1E2798)(v4);
  v6 = *(_DWORD *)(v3 + 12);
  if ( !v6 )
    return *(_DWORD *)(v5 + 12);
  return v6;
}
