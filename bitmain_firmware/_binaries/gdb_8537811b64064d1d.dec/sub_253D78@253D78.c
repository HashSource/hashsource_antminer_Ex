int __fastcall sub_253D78(int a1, int a2, int a3)
{
  int v5; // r0
  double v7; // [sp+0h] [bp-Ch] BYREF

  v5 = ((int (__fastcall *)(int))loc_173488)(a3);
  ((void (__fastcall *)(int, int, int, double *))loc_2539D0)(a1, v5, a2, &v7);
  if ( v7 > 9.22337204e18 )
    return -1;
  if ( v7 < -9.22337204e18 )
    return 0;
  return sub_348024(LODWORD(v7), HIDWORD(v7));
}
