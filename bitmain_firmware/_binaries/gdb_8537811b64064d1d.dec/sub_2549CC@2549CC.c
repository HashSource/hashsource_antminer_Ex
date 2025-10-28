int __fastcall sub_2549CC(int a1, int a2, int a3)
{
  int v5; // r0
  float v7[2]; // [sp+4h] [bp-8h] BYREF

  v5 = ((int (__fastcall *)(int))loc_173488)(a3);
  ((void (__fastcall *)(int, int, int, float *))loc_25460C)(a1, v5, a2, v7);
  if ( v7[0] > 9.2234e18 )
    return -1;
  if ( v7[0] < -9.2234e18 )
    return 0;
  return sub_348000(LODWORD(v7[0]));
}
