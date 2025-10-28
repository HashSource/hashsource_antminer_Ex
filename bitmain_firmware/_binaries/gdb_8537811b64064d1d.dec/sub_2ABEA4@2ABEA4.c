void __fastcall sub_2ABEA4(void **a1)
{
  if ( a1[42] )
  {
    sub_2AAA44((int)(a1 + 18));
    sub_324D78(a1[42]);
  }
  if ( *a1 )
    free(*a1);
  free(a1[34]);
  free(a1);
}
