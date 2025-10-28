char __fastcall set_miner_network_working_status(char result)
{
  if ( !byte_1673C4 )
  {
    byte_1673C8 = 0;
    byte_1673C9 = 0;
    byte_1673CA = 0;
    byte_1673CB = 0;
    byte_1673CC = 0;
    byte_1673CD = 0;
    byte_1673CF = 0;
    byte_1673D0 = 0;
    byte_1673C4 = 1;
  }
  byte_1673CE = result;
  return result;
}
