int __fastcall sub_21095C(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = sub_15ECDC(a1);
  if ( ((int (*)(void))loc_167408)() < 0 )
    sub_94708("Standard register ``$ps'' is not available for this target");
  v3 = ((int (__fastcall *)(int))loc_167408)(v2);
  return sub_15B1D4(v3, a1);
}
