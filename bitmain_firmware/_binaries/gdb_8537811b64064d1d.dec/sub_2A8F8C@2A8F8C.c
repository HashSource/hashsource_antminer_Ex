int sub_2A8F8C()
{
  int v0; // r0
  int v1; // r6

  v0 = dword_48BBE4;
  if ( !dword_48BBE4 )
    return 1;
  v1 = 1;
  do
  {
    while ( *(int (***)())(v0 + 12) != off_411A7C || !*(_DWORD *)(v0 + 8) )
    {
      v0 = dword_48BBE4;
      if ( !dword_48BBE4 )
        return v1;
    }
    v1 &= sub_2A8D74(v0);
    v0 = dword_48BBE4;
  }
  while ( dword_48BBE4 );
  return v1;
}
