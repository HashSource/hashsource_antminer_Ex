int hal_chain_max_num()
{
  if ( !dword_16D6D4 )
    return -1;
  if ( dword_164C08[0] == -1 && dword_164C0C == -1 )
    return 0;
  if ( dword_164C90 != -1 )
    return 2;
  if ( dword_164C94 == -1 )
    return 1;
  return 2;
}
