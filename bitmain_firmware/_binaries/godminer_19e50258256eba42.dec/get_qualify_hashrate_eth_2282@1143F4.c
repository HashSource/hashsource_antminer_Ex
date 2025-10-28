int __fastcall get_qualify_hashrate_eth_2282(int a1, double *a2)
{
  float v2; // s0
  double v6; // [sp+8h] [bp-14h] BYREF
  float v7; // [sp+10h] [bp-Ch]
  int v8; // [sp+14h] [bp-8h]

  v8 = 0;
  v6 = 0.0;
  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 148))(a1, &v6);
  if ( strcmp((const char *)(a1 + 340), "E11") )
    return 25;
  sub_1143C8();
  v7 = v2 * 0.98;
  *a2 = (float)(v2 * 0.98) * v6;
  return v8;
}
