int __fastcall get_packet_remain_len_grin32(int result)
{
  switch ( result )
  {
    case 33:
      return 176;
    case 0:
      return 7;
    case 1:
      return 9;
  }
  return result;
}
