int sub_2F10C()
{
  int v0; // r3

  v0 = ++dword_166468;
  if ( dword_166468 > total_pools )
  {
    add_pool();
    v0 = dword_166468;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
