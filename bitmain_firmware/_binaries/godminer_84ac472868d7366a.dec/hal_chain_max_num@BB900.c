int hal_chain_max_num()
{
  if ( !dword_16C6C4 )
    return -1;
  if ( dword_163BF8[0] == -1 && dword_163BFC == -1 )
    return 0;
  if ( dword_163C80 != -1 )
    return 2;
  if ( dword_163C84 == -1 )
    return 1;
  return 2;
}
