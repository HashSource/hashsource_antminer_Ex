int __fastcall json_object_iter_set_new(_DWORD *a1, int a2, int a3)
{
  if ( a1 && !*a1 && a2 && a3 )
  {
    hashtable_iter_set(a2, a3);
    return 0;
  }
  else
  {
    sub_54798(a3);
    return -1;
  }
}
