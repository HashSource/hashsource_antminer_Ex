int sub_318BC()
{
  int v0; // r3

  v0 = ++dword_194B80;
  if ( dword_194B80 > total_pools )
  {
    add_pool();
    v0 = dword_194B80;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
