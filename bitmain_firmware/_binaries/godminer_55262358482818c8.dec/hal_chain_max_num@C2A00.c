int hal_chain_max_num()
{
  if ( !dword_1B3624 )
    return -1;
  if ( dword_1934BC[0] == -1 && dword_1934C0 == -1 )
    return 0;
  if ( dword_193548 != -1 )
    return 2;
  if ( dword_19354C == -1 )
    return 1;
  return 2;
}
