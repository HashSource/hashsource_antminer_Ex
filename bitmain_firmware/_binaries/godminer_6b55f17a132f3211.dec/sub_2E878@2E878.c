int sub_2E878()
{
  int v0; // r3

  v0 = ++dword_1650E0;
  if ( dword_1650E0 > total_pools )
  {
    add_pool();
    v0 = dword_1650E0;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
