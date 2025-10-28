char __fastcall set_miner_network_working_status(char result)
{
  if ( !byte_1663AC )
  {
    byte_1663B0 = 0;
    byte_1663B1 = 0;
    byte_1663B2 = 0;
    byte_1663B3 = 0;
    byte_1663B4 = 0;
    byte_1663B5 = 0;
    byte_1663B7 = 0;
    byte_1663B8 = 0;
    byte_1663AC = 1;
  }
  byte_1663B6 = result;
  return result;
}
