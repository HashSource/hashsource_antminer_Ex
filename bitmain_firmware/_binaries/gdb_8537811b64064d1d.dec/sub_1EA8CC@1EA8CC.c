bool __fastcall sub_1EA8CC(int a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *v5; // r5

  v2 = sub_16F67C(a1);
  v3 = ((int (__fastcall *)(int))loc_1E2798)(v2);
  if ( *(_DWORD *)(dword_488C94 + 8) )
    return 0;
  v5 = (_DWORD *)sub_24976C(v3);
  return sub_1EA780(a1, v5) != -1 && v5[1] && v5[2] && ((int (__fastcall *)(int))loc_1E21C0)(57) == 1;
}
