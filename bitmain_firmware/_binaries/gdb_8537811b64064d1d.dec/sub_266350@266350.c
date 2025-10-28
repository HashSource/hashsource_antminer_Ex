void __fastcall sub_266350(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
    free(v2);
  *a1 = 0;
}
