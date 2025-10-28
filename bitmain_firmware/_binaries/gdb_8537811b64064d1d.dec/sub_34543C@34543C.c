_DWORD *__fastcall sub_34543C(_DWORD *a1, size_t a2, unsigned int a3, unsigned __int8 a4)
{
  if ( a2 > *(_DWORD *)(*a1 - 12) )
    sub_33D234(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::insert",
      a2,
      *(_DWORD *)(*a1 - 12));
  return sub_3453B4(a1, a2, 0, a3, a4);
}
