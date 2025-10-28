pool *add_url()
{
  if ( ++dword_5AC560 > total_pools )
    add_pool();
  return *(pool **)(pools + 4 * (dword_5AC560 + 0x3FFFFFFF));
}
