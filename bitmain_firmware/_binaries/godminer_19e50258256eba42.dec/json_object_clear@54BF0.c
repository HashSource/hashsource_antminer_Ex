int __fastcall json_object_clear(_DWORD *a1)
{
  if ( !a1 || *a1 )
    return -1;
  hashtable_clear((int)(a1 + 2));
  return 0;
}
