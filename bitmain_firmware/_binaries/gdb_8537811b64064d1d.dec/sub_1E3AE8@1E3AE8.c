void __fastcall sub_1E3AE8(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r0
  int v6; // r0

  v5 = sub_16F67C(a1);
  ((void (__fastcall *)(int))loc_1E2798)(v5);
  if ( *(_DWORD *)(dword_488C94 + 8) )
    v6 = ((int (__fastcall *)(int, int, int))loc_23FAB4)(a1, a2, a3);
  else
    v6 = sub_23FC98(a1, a2, a3, 0);
  *(_DWORD *)(((int (__fastcall *)(int))loc_1E3914)(v6) + 84) = a5;
  sub_23F2C0(a1, a2, a3, a5);
  JUMPOUT(0x23EFE8);
}
