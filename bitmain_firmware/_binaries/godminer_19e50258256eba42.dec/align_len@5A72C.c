void __cdecl align_len(size_t *len)
{
  if ( (*len & 3) != 0 )
    *len = (*len & 0xFFFFFFFC) + 4;
}
