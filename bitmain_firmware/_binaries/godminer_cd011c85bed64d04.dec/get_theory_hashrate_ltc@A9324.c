int __fastcall get_theory_hashrate_ltc(int a1, double *a2)
{
  float v4; // s15
  int v5; // r1
  int result; // r0
  float v7; // s14
  float *v8; // r3
  float v9; // s14
  float v10; // s15
  _DWORD dest[129]; // [sp+8h] [bp-204h] BYREF

  if ( api_get_eeprom_fmt_version(*(_DWORD *)(a1 + 144)) == 4 )
  {
    api_get_eeprom_sweep_freqs(*(_DWORD *)(a1 + 144), dest);
    v5 = *(_DWORD *)(a1 + 204);
    if ( v5 )
    {
      v8 = (float *)dest;
      v9 = 0.0;
      do
      {
        v10 = *v8++;
        v9 = v9 + v10;
      }
      while ( &dest[v5] != (_DWORD *)v8 );
    }
    else
    {
      v9 = 0.0;
    }
    v4 = v9 / (float)v5;
  }
  else
  {
    v4 = *(float *)(a1 + 768);
    v5 = *(_DWORD *)(a1 + 204);
  }
  result = 0;
  if ( *(_BYTE *)(a1 + 788) )
  {
    v7 = 91136.0;
  }
  else
  {
    v7 = 130050.0;
    v4 = v4 + v4;
  }
  *a2 = (double)(8 * *(_DWORD *)(a1 + 208) - 5) * ((double)v5 * (float)(v4 / v7)) * 1000.0 * 1000.0;
  return result;
}
