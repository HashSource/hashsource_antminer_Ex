size_t sub_280554()
{
  size_t result; // r0

  result = _ctype_get_mb_cur_max();
  if ( result > 1 && !dword_48BB60 )
    return sub_280528();
  --dword_4900D8;
  return result;
}
