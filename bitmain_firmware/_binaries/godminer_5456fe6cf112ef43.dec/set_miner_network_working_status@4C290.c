char __fastcall set_miner_network_working_status(char result)
{
  if ( !byte_1663B4 )
  {
    byte_1663B8 = 0;
    byte_1663B9 = 0;
    byte_1663BA = 0;
    byte_1663BB = 0;
    byte_1663BC = 0;
    byte_1663BD = 0;
    byte_1663BF = 0;
    byte_1663C0 = 0;
    byte_1663B4 = 1;
  }
  byte_1663BE = result;
  return result;
}
