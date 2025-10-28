unsigned int __fastcall get_packet_remain_len_kda(unsigned __int8 a1)
{
  unsigned int v2; // [sp+Ch] [bp-8h]

  v2 = a1 - 1;
  if ( v2 > 8 )
    return 8;
  return v2;
}
