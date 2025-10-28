double *__fastcall json_deep_copy(int a1, int a2, int a3)
{
  _DWORD *v4; // r6
  int i; // r5
  char *v6; // r7
  int v7; // r0
  _DWORD *v8; // r0
  unsigned int v9; // r3
  unsigned int j; // r5
  int v11; // r0
  _DWORD *v12; // r0

  if ( a1 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        v4 = json_object(a1, a2, a3, *(_DWORD *)a1);
        if ( !v4 )
          return 0;
        if ( !*(_DWORD *)a1 )
        {
          for ( i = hashtable_iter(a1 + 8); i; i = hashtable_iter_next(a1 + 8, i) )
          {
            v6 = (char *)hashtable_iter_key(i);
            v7 = hashtable_iter_value(i);
            v8 = (_DWORD *)json_deep_copy(v7);
            json_object_set_new_nocheck(v4, v6, v8);
            if ( *(_DWORD *)a1 )
              break;
          }
        }
        return (double *)v4;
      case 1:
        v4 = json_array();
        if ( !v4 )
          return 0;
        if ( *(_DWORD *)a1 == 1 )
        {
          v9 = *(_DWORD *)(a1 + 12);
          if ( v9 )
          {
            for ( j = 0; j < v9; ++j )
            {
              v11 = 0;
              if ( v9 > j )
                v11 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * j);
              v12 = (_DWORD *)json_deep_copy(v11);
              json_array_append_new(v4, v12);
              if ( *(_DWORD *)a1 != 1 )
                break;
              v9 = *(_DWORD *)(a1 + 12);
            }
          }
        }
        return (double *)v4;
      case 2:
        return (double *)sub_3934C(*(_BYTE **)(a1 + 8), *(_DWORD *)(a1 + 12), 0);
      case 3:
        return (double *)sub_39270(a1);
      case 4:
        return json_real();
      case 5:
      case 6:
      case 7:
        return (double *)a1;
      default:
        return 0;
    }
  }
  return 0;
}
