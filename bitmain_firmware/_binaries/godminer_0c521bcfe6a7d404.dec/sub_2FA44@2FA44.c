int sub_2FA44()
{
  int v0; // r3

  v0 = ++dword_1733A8;
  if ( dword_1733A8 > total_pools )
  {
    add_pool();
    v0 = dword_1733A8;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
