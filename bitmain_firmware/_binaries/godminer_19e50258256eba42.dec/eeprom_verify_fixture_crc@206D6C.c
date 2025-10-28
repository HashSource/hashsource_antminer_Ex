int __fastcall eeprom_verify_fixture_crc(_BYTE *a1, unsigned __int8 *a2)
{
  if ( sub_206BB0(a1, a2) )
    return 0;
  else
    return -1;
}
