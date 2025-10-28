int __fastcall sub_210998(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = sub_15ECDC(a1);
  if ( ((int (*)(void))loc_167318)() < 0 )
    sub_94708("Standard register ``$sp'' is not available for this target");
  v3 = ((int (__fastcall *)(int))loc_167318)(v2);
  return sub_15B1D4(v3, a1);
}
