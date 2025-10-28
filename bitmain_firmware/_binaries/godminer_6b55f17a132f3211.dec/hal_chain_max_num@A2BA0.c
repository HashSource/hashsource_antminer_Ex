int hal_chain_max_num()
{
  if ( !dword_17746C )
    return -1;
  if ( dword_163A30[0] == -1 && dword_163A34 == -1 )
    return 0;
  if ( dword_163ABC != -1 )
    return 2;
  if ( dword_163AC0 == -1 )
    return 1;
  return 2;
}
