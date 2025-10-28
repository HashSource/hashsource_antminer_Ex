int get_total_nonce_rate()
{
  int v0; // r4
  int all_created_runtime; // r0
  int result; // r0
  float v3; // s16
  int v4; // r0
  int v5; // [sp+0h] [bp-8h] BYREF
  float v6; // [sp+4h] [bp-4h] BYREF

  v0 = 0;
  v5 = 0;
  all_created_runtime = get_all_created_runtime(&v5);
  result = is_eeprom_loaded(all_created_runtime);
  if ( result && v5 > 0 )
  {
    v3 = 0.0;
    do
    {
      v4 = v0;
      v6 = 0.0;
      ++v0;
      result = api_get_eeprom_nonce_response_rate(v4, &v6);
      if ( !result )
        v3 = v3 + v6;
    }
    while ( v5 > v0 );
  }
  return result;
}
