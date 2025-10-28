unsigned int *__fastcall sub_33BF88(unsigned int *a1, size_t a2, int a3)
{
  if ( a2 > a1[1] )
    sub_33D234("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  return sub_33BC7C(a1, a2, 0, *(char **)a3, *(_DWORD *)(a3 + 4));
}
