int __fastcall insert_c_map(_DWORD *a1)
{
  if ( a1 )
    return insert_c_rb(*a1);
  else
    return 501;
}
