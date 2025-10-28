void __cdecl json_delete_array(json_array_t *array)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < *((_DWORD *)array + 3); ++i )
    sub_54798(*(_DWORD *)(*((_DWORD *)array + 4) + 4 * i));
  jsonp_free(*((void **)array + 4));
  jsonp_free(array);
}
