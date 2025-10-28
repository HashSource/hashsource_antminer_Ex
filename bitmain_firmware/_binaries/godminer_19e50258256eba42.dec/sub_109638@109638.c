int __fastcall sub_109638(double a1)
{
  int v2; // [sp+4h] [bp-28h]
  int i; // [sp+20h] [bp-Ch]
  float v4; // [sp+24h] [bp-8h]

  v2 = LODWORD(a1);
  v4 = 0.0;
  for ( i = 0; i <= 5; ++i )
    v4 = v4 + (float)((float)((float)sweep_freq_0[6 * *(_DWORD *)(LODWORD(a1) + 272) + i] * 12.5) + 400.0);
  floor(a1);
  mhashrate[*(_DWORD *)(v2 + 272)] = 50 * (unsigned int)(v4 * 621.0 / 600.0 / 50.0);
  return mhashrate[*(_DWORD *)(v2 + 272)];
}
