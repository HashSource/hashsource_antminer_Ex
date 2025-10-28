void __fastcall sub_1B629C(int a1, void **ptr)
{
  if ( *ptr )
    free(*ptr);
  free(ptr);
}
