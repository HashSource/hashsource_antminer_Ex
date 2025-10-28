void __fastcall free_siphash(void *ptr)
{
  if ( ptr )
    free(ptr);
}
