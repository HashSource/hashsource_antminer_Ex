int __fastcall json_array_insert_new(int a1, size_t a2, int a3)
{
  json_t **v8; // [sp+18h] [bp-Ch]

  if ( !a3 )
    return -1;
  if ( a1 && *(_DWORD *)a1 == 1 && a1 != a3 && a2 <= *(_DWORD *)(a1 + 12) )
  {
    v8 = json_array_grow((json_array_t *)a1, 1u, 0);
    if ( v8 )
    {
      if ( v8 == *(json_t ***)(a1 + 16) )
      {
        sub_556D4(a1, a2 + 1, a2, *(_DWORD *)(a1 + 12) - a2);
      }
      else
      {
        array_copy(*(json_t ***)(a1 + 16), 0, v8, 0, a2);
        array_copy(*(json_t ***)(a1 + 16), a2 + 1, v8, a2, *(_DWORD *)(a1 + 12) - a2);
        jsonp_free(v8);
      }
      *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * a2) = a3;
      ++*(_DWORD *)(a1 + 12);
      return 0;
    }
    else
    {
      sub_54798(a3);
      return -1;
    }
  }
  else
  {
    sub_54798(a3);
    return -1;
  }
}
