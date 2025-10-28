char *__fastcall json_object_iter_at(_DWORD *a1, char *a2)
{
  if ( a2 && a1 && !*a1 )
    return hashtable_iter_at((int)(a1 + 2), a2);
  else
    return 0;
}
