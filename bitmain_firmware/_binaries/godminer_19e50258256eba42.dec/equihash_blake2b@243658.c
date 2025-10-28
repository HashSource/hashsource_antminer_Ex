int __fastcall equihash_blake2b(
        void *a1,
        char *a2,
        const void *a3,
        unsigned __int8 a4,
        unsigned __int64 a5,
        unsigned __int8 a6)
{
  _BYTE v11[360]; // [sp+10h] [bp-16Ch] BYREF

  if ( !a2 && a5 )
    return -1;
  if ( !a1 )
    return -1;
  if ( !a3 && a6 )
    return -1;
  if ( !a4 || a4 > 0x40u )
    return -1;
  if ( a6 <= 0x40u )
  {
    if ( a6 )
    {
      if ( blake2b_init_key(v11, a4, a3, a6) < 0 )
        return -1;
    }
    else if ( equihash_blake2b_init(v11, a4) < 0 )
    {
      return -1;
    }
    equihash_blake2b_update((int)v11, a2, a5);
    equihash_blake2b_final((int)v11, a1, a4);
    return 0;
  }
  return -1;
}
