int __fastcall get_theory_hashrate_zec_1746(int a1, double *a2)
{
  float v6; // [sp+Ch] [bp-10h] BYREF
  double v7; // [sp+10h] [bp-Ch]

  v6 = 0.0;
  v7 = 0.0;
  if ( is_eeprom_loaded() )
  {
    if ( !api_get_eeprom_nonce_response_rate(*(_DWORD *)(a1 + 264), &v6) )
    {
      if ( v6 < 98.0 )
      {
        if ( v6 < 96.0 )
          v6 = (float)(2 * ((int)v6 / 2 + 1));
        else
          v6 = 98.0;
      }
      else
      {
        v6 = 100.0;
      }
      v6 = v6 / 100.0;
    }
    v7 = *(float *)(a1 + 1020) * 6.0 * 61.11 * v6;
    *a2 = v7;
    return 0;
  }
  else
  {
    *a2 = 0.0;
    return 32;
  }
}
