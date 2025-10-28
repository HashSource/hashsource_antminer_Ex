int sub_2E9B8()
{
  int v0; // r3

  v0 = ++dword_165458;
  if ( dword_165458 > total_pools )
  {
    add_pool();
    v0 = dword_165458;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
