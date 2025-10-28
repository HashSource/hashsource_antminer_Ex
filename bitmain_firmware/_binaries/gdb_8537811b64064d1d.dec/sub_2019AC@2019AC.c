int __fastcall sub_2019AC(int a1, int a2)
{
  int v4; // r0
  int (__fastcall *v5)(int, int); // r3

  v4 = sub_16F67C(a1);
  v5 = *(int (__fastcall **)(int, int))(*(_DWORD *)((int (__fastcall *)(int, int))loc_16ECB0)(v4, dword_4893A0) + 48);
  if ( v5 )
    return v5(a1, a2);
  else
    return 0;
}
