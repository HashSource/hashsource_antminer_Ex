int __fastcall get_packet_remain_len_zec_1746(unsigned __int8 a1)
{
  if ( (a1 & 0xF0) == 0xE0 )
    return 90;
  if ( a1 == 204 )
    return 6;
  if ( a1 == 208 )
    return 1027;
  return 6;
}
