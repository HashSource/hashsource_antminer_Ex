int __fastcall json_string_setn_nocheck(int a1, const char *a2, size_t a3)
{
  char *v7; // [sp+14h] [bp-8h]

  if ( !a1 || *(_DWORD *)a1 != 2 || !a2 )
    return -1;
  v7 = jsonp_strndup(a2, a3);
  if ( !v7 )
    return -1;
  jsonp_free(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = a3;
  return 0;
}
