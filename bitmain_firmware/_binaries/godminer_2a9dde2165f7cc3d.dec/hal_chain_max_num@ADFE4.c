int hal_chain_max_num()
{
  if ( !dword_18D87C )
    return -1;
  if ( dword_171CF4[0] == -1 && dword_171CF8 == -1 )
    return 0;
  if ( dword_171D80 != -1 )
    return 2;
  if ( dword_171D84 == -1 )
    return 1;
  return 2;
}
