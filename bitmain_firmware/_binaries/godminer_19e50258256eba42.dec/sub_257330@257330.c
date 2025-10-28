size_t __fastcall sub_257330(void **a1, const void *a2, size_t a3)
{
  if ( !a1 || !*a1 )
    return a3;
  memcpy(*a1, a2, a3);
  *a1 = (char *)*a1 + a3;
  return a3;
}
