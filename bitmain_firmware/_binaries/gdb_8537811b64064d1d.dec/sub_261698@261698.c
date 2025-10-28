int __fastcall sub_261698(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  int v4; // r1

  if ( *(_DWORD *)nullsub_31(a1) != 1 )
    sub_94708("Attempt to take address of value not located in memory.");
  v2 = (_DWORD *)sub_26BC98(a1);
  v3 = sub_1700E8(v2);
  v4 = ((int (__fastcall *)(int))loc_26C0C4)(a1);
  return sub_26DCC4(v3, v4);
}
