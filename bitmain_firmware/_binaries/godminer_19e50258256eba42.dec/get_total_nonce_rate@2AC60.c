void get_total_nonce_rate()
{
  float v0; // [sp+4h] [bp-18h] BYREF
  _DWORD v1[2]; // [sp+8h] [bp-14h] BYREF
  int i; // [sp+10h] [bp-Ch]
  float v3; // [sp+14h] [bp-8h]

  if ( opt_algo != 7 )
  {
    v1[0] = 0;
    v3 = 0.0;
    v1[1] = get_all_created_runtime(v1);
    if ( is_eeprom_loaded() )
    {
      for ( i = 0; i < v1[0]; ++i )
      {
        v0 = 0.0;
        if ( !api_get_eeprom_nonce_response_rate(i, &v0) )
          v3 = v3 + v0;
      }
    }
  }
}
