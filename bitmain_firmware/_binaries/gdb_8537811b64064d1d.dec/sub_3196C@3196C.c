int __fastcall sub_3196C(int a1)
{
  int v2; // r0
  int v3; // r0

  v2 = sub_16F67C();
  if ( ((int (__fastcall *)(int))loc_16661C)(v2) == 32 )
    return a1;
  v3 = sub_16F67C();
  return a1 & ~(-1 << ((int (__fastcall *)(int))loc_16661C)(v3));
}
