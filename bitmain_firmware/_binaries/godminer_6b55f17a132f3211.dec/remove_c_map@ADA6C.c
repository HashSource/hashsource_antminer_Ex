int __fastcall remove_c_map(_DWORD *a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  void *ptr[3]; // [sp+4h] [bp-Ch] BYREF

  if ( !a1 )
    return 501;
  v1 = remove_c_rb(*a1);
  v2 = (_DWORD *)v1;
  if ( v1 )
  {
    get_raw_clib_object(*(_DWORD *)(v1 + 16), ptr);
    free(ptr[0]);
    delete_clib_object(v2[4]);
    get_raw_clib_object(v2[5], ptr);
    free(ptr[0]);
    delete_clib_object(v2[5]);
    free(v2);
  }
  return 0;
}
