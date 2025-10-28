int __fastcall get_packet_remain_len_eth_2282(unsigned __int8 a1)
{
  int v1; // r3

  switch ( a1 )
  {
    case 0x20u:
      return 40;
    case 0u:
      return 7;
    case 1u:
      return 9;
  }
  v1 = a1;
  if ( a1 == 2 )
    return 71;
  return v1;
}
