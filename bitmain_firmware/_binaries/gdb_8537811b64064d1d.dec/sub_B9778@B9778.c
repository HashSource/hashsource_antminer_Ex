void __fastcall sub_B9778(int a1, _DWORD *ptr)
{
  if ( *ptr )
    sub_323BAC();
  if ( ptr[1] )
    sub_323BAC();
  free(ptr);
}
