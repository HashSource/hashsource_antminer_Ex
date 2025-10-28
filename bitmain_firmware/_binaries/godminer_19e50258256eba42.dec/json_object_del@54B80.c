int __fastcall json_object_del(_DWORD *a1, char *a2)
{
  if ( a2 && a1 && !*a1 )
    return hashtable_del((int)(a1 + 2), a2);
  else
    return -1;
}
