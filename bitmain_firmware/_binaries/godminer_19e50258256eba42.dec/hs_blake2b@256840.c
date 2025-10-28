int __fastcall hs_blake2b(void *a1, unsigned int a2, char *a3, unsigned int a4, const void *a5, size_t a6)
{
  _DWORD v12[60]; // [sp+10h] [bp-F4h] BYREF

  if ( !a3 && a4 )
    return -1;
  if ( !a1 )
    return -1;
  if ( !a5 && a6 )
    return -1;
  if ( !a2 || a2 > 0x40 )
    return -1;
  if ( a6 <= 0x40 )
  {
    if ( a6 )
    {
      if ( hs_blake2b_init_key(v12, a2, a5, a6) < 0 )
        return -1;
    }
    else if ( hs_blake2b_init(v12, a2) < 0 )
    {
      return -1;
    }
    hs_blake2b_update((int)v12, a3, a4);
    hs_blake2b_final((int)v12, a1, a2);
    return 0;
  }
  return -1;
}
