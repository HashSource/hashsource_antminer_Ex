char *__fastcall sub_51808(int a1, char ***a2, const char *a3, size_t *a4, _DWORD *a5, int a6)
{
  char **v6; // r3
  char **v8; // r3
  size_t *v9; // r3
  size_t *v10; // r3
  size_t v11; // r3
  int v17; // [sp+18h] [bp-1Ch] BYREF
  unsigned int v18; // [sp+1Ch] [bp-18h]
  char *s; // [sp+24h] [bp-10h]
  unsigned __int8 v20; // [sp+2Bh] [bp-9h]
  size_t v21; // [sp+2Ch] [bp-8h]

  sub_5153C((_DWORD *)a1);
  v20 = *(_BYTE *)(a1 + 36);
  sub_5172C((_DWORD *)a1);
  *a5 = 0;
  if ( v20 == 35 || v20 == 37 || v20 == 43 )
  {
    if ( a6 )
    {
      sub_5177C((int *)a1, "<format>", 9, "Cannot use '%c' on optional strings", v20);
      *(_DWORD *)(a1 + 76) = 1;
      return 0;
    }
    else
    {
      if ( strbuffer_init((strbuffer_t *)&v17) )
      {
        sub_5177C((int *)a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
      }
      do
      {
        v8 = (*a2)++;
        s = *v8;
        if ( !s )
        {
          sub_5177C((int *)a1, "<args>", 12, "NULL %s", a3);
          *(_DWORD *)(a1 + 76) = 1;
        }
        sub_5153C((_DWORD *)a1);
        if ( *(_BYTE *)(a1 + 36) == 35 )
        {
          v9 = (size_t *)(*a2)++;
          v21 = *v9;
        }
        else if ( *(_BYTE *)(a1 + 36) == 37 )
        {
          v10 = (size_t *)(*a2)++;
          v21 = *v10;
        }
        else
        {
          sub_5172C((_DWORD *)a1);
          if ( *(_DWORD *)(a1 + 76) )
            v11 = 0;
          else
            v11 = strlen(s);
          v21 = v11;
        }
        if ( !*(_DWORD *)(a1 + 76) && strbuffer_append_bytes((strbuffer_t *)&v17, s, v21) == -1 )
        {
          sub_5177C((int *)a1, "<internal>", 1, "Out of memory");
          *(_DWORD *)(a1 + 76) = 1;
        }
        sub_5153C((_DWORD *)a1);
      }
      while ( *(_BYTE *)(a1 + 36) == 43 );
      sub_5172C((_DWORD *)a1);
      if ( *(_DWORD *)(a1 + 76) )
      {
        strbuffer_close((strbuffer_t *)&v17);
        return 0;
      }
      else if ( utf8_check_string(v17, v18) )
      {
        *a4 = v18;
        *a5 = 1;
        return (char *)strbuffer_steal_value(&v17);
      }
      else
      {
        sub_5177C((int *)a1, "<args>", 5, "Invalid UTF-8 %s", a3);
        strbuffer_close((strbuffer_t *)&v17);
        *(_DWORD *)(a1 + 76) = 1;
        return 0;
      }
    }
  }
  else
  {
    v6 = (*a2)++;
    s = *v6;
    if ( s )
    {
      v21 = strlen(s);
      if ( utf8_check_string((int)s, v21) )
      {
        *a4 = v21;
        return s;
      }
      else
      {
        sub_5177C((int *)a1, "<args>", 5, "Invalid UTF-8 %s", a3);
        *(_DWORD *)(a1 + 76) = 1;
        return 0;
      }
    }
    else
    {
      if ( !a6 )
      {
        sub_5177C((int *)a1, "<args>", 12, "NULL %s", a3);
        *(_DWORD *)(a1 + 76) = 1;
      }
      return 0;
    }
  }
}
