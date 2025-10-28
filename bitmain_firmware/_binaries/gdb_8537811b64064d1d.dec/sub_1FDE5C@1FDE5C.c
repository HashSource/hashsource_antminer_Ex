void __fastcall sub_1FDE5C(void *ptr)
{
  if ( *(_DWORD *)ptr == 1 )
    free(ptr);
  else
    --*(_DWORD *)ptr;
}
