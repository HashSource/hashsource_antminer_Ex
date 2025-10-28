int __fastcall sub_2571BC(const void **a1, size_t *a2, void *a3, size_t a4)
{
  if ( a4 > *a2 )
    return 0;
  memcpy(a3, *a1, a4);
  *a1 = (char *)*a1 + a4;
  *a2 -= a4;
  return 1;
}
