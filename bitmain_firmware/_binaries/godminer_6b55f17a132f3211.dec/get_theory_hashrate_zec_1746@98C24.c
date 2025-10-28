int __fastcall get_theory_hashrate_zec_1746(int a1, double *a2)
{
  float v2; // s14
  int eeprom_nonce_response_rate; // r0
  bool v6; // zf
  int result; // r0
  float v8; // s12
  float v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[0] = 0.0;
  if ( is_eeprom_loaded(a1) )
  {
    eeprom_nonce_response_rate = api_get_eeprom_nonce_response_rate(*(_DWORD *)(a1 + 208), v9);
    v6 = eeprom_nonce_response_rate == 0;
    if ( !eeprom_nonce_response_rate )
      v2 = v9[0];
    result = 0;
    if ( v6 )
      v8 = v2 / 100.0;
    else
      v8 = v9[0];
    *a2 = (float)((float)(*(float *)(a1 + 916) / 669.0) * 40.0) * 6.0 * 1000.0 * v8;
  }
  else
  {
    *a2 = 0.0;
    return 32;
  }
  return result;
}
