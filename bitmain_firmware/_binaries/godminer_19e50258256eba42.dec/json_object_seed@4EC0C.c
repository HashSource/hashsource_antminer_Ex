unsigned int __fastcall json_object_seed(unsigned int result)
{
  unsigned __int8 v1; // r2
  int v2; // r3
  int v3; // [sp+Ch] [bp-8h]

  v3 = result;
  if ( !hashtable_seed )
  {
    do
    {
      v1 = __ldrex((unsigned __int8 *)&unk_5ACF88);
      result = __strex(1u, (unsigned __int8 *)&unk_5ACF88);
    }
    while ( result );
    if ( v1 != 1 )
    {
      if ( !v3 )
      {
        result = sub_4EB94();
        v3 = result;
      }
      __dmb(0xBu);
      hashtable_seed = v3;
    }
    else
    {
      do
      {
        result = sched_yield();
        v2 = hashtable_seed;
        __dmb(0xBu);
      }
      while ( !v2 );
    }
  }
  return result;
}
