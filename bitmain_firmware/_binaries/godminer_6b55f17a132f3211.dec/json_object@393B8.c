_DWORD *__fastcall json_object(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  void *v6; // r0

  v4 = jsonp_malloc((void *)0x24);
  if ( v4 )
  {
    if ( !hashtable_seed )
      json_object_seed(0);
    v4[1] = 1;
    *v4 = 0;
    if ( hashtable_init(v4 + 2) )
    {
      v6 = v4;
      v4 = 0;
      jsonp_free(v6);
    }
  }
  return v4;
}
