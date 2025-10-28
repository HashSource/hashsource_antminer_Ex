void *__fastcall json_object_iter_value(void *a1)
{
  if ( a1 )
    return hashtable_iter_value(a1);
  else
    return 0;
}
