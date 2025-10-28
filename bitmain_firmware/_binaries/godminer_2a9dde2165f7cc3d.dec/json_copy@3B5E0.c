double *__fastcall json_copy(int a1, int a2, int a3)
{
  _DWORD *v4; // r7
  int i; // r0
  unsigned int v6; // r1
  int v7; // r0
  char *v8; // r5
  _DWORD *v9; // r0
  unsigned int *v10; // r3
  unsigned int v11; // r3
  unsigned int j; // r5
  _DWORD *v13; // r1
  unsigned int *v14; // r2
  unsigned int v15; // r3

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
          for ( i = hashtable_iter(a1 + 8); i; i = hashtable_iter_next(a1 + 8, (int)(v8 - 16)) )
          {
            v7 = hashtable_iter_key(i);
            v8 = (char *)v7;
            if ( !v7 )
              break;
            v9 = (_DWORD *)hashtable_iter_value(v7 - 16);
            v10 = v9 + 1;
            if ( !v9 )
              break;
            if ( v9[1] != -1 )
            {
              do
                v6 = __ldrex(v10);
              while ( __strex(v6 + 1, v10) );
              __dmb(0xBu);
            }
            json_object_set_new_nocheck(v4, v8, v9);
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
          v11 = *(_DWORD *)(a1 + 12);
          if ( v11 )
          {
            for ( j = 0; j < v11; ++j )
            {
              v13 = 0;
              if ( v11 > j )
              {
                v13 = *(_DWORD **)(*(_DWORD *)(a1 + 16) + 4 * j);
                v14 = v13 + 1;
                if ( v13 )
                {
                  if ( v13[1] != -1 )
                  {
                    do
                      v15 = __ldrex(v14);
                    while ( __strex(v15 + 1, v14) );
                    __dmb(0xBu);
                  }
                }
              }
              json_array_append_new(v4, v13);
              if ( *(_DWORD *)a1 != 1 )
                break;
              v11 = *(_DWORD *)(a1 + 12);
            }
          }
        }
        return (double *)v4;
      case 2:
        return (double *)sub_3A19C(*(_BYTE **)(a1 + 8), *(_DWORD *)(a1 + 12), 0);
      case 3:
        return (double *)sub_3A0C0(a1);
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
