void **__fastcall sub_1F510C(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
    free(v2);
  return a1;
}
