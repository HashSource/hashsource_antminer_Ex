int __fastcall sub_52560(int a1, const json_t *a2, const char ***a3)
{
  int v4; // r3
  int v5; // r3
  const char **v6; // r3
  json_t *v7; // r0
  size_t v8; // r0
  void *v9; // r0
  size_t v10; // r0
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0
  const char *v14; // r3
  _BYTE v19[12]; // [sp+18h] [bp-54h] BYREF
  _DWORD v20[7]; // [sp+24h] [bp-48h] BYREF
  const char *v21; // [sp+40h] [bp-2Ch]
  int v23; // [sp+48h] [bp-24h]
  int appended; // [sp+4Ch] [bp-20h]
  char *s; // [sp+50h] [bp-1Ch]
  int v26; // [sp+54h] [bp-18h]
  const json_t *v27; // [sp+58h] [bp-14h]
  int v28; // [sp+5Ch] [bp-10h]
  _BOOL4 v29; // [sp+60h] [bp-Ch]
  int v30; // [sp+64h] [bp-8h]

  v30 = -1;
  v29 = 0;
  v28 = 0;
  if ( hashtable_init((hashtable_t *)v20) )
  {
    sub_5177C((int *)a1, "<internal>", 1, "Out of memory");
    return -1;
  }
  else
  {
    if ( a2 && *(_DWORD *)a2 )
    {
      sub_5177C((int *)a1, "<validation>", 10, "Expected object, got %s", off_35B48C[*(_DWORD *)a2]);
    }
    else
    {
      sub_5153C((_DWORD *)a1);
      while ( *(_BYTE *)(a1 + 36) != 125 )
      {
        v26 = 0;
        if ( v29 )
        {
          if ( v29 )
            v4 = 33;
          else
            v4 = 42;
          sub_5177C((int *)a1, "<format>", 9, "Expected '}' after '%c', got '%c'", v4, *(unsigned __int8 *)(a1 + 36));
          goto LABEL_57;
        }
        switch ( *(_BYTE *)(a1 + 36) )
        {
          case 0:
            sub_5177C((int *)a1, "<format>", 9, "Unexpected end of format string");
            goto LABEL_57;
          case 0x21:
          case 0x2A:
            if ( *(_BYTE *)(a1 + 36) == 33 )
              v5 = 1;
            else
              v5 = -1;
            v29 = v5;
            sub_5153C((_DWORD *)a1);
            break;
          case 0x73:
            v6 = (*a3)++;
            v21 = *v6;
            if ( !v21 )
            {
              sub_5177C((int *)a1, "<args>", 12, "NULL object key");
              goto LABEL_57;
            }
            sub_5153C((_DWORD *)a1);
            if ( *(_BYTE *)(a1 + 36) == 63 )
            {
              v28 = 1;
              v26 = 1;
              sub_5153C((_DWORD *)a1);
            }
            if ( a2 )
            {
              v27 = json_object_get(a2, v21);
              if ( !v27 && !v26 )
              {
                sub_5177C((int *)a1, "<validation>", 16, "Object item not found: %s", v21);
                goto LABEL_57;
              }
            }
            else
            {
              v27 = 0;
            }
            if ( sub_52DB0(a1, v27, a3) )
              goto LABEL_57;
            v7 = (json_t *)json_null();
            hashtable_set((hashtable_t *)v20, v21, v7);
            sub_5153C((_DWORD *)a1);
            break;
          default:
            sub_5177C((int *)a1, "<format>", 9, "Expected format 's', got '%c'", *(unsigned __int8 *)(a1 + 36));
            goto LABEL_57;
        }
      }
      if ( !v29 )
        v29 = (*(_DWORD *)(a1 + 60) & 2) != 0;
      if ( !a2 || !v29 )
        goto LABEL_56;
      appended = 1;
      v23 = 0;
      if ( v28 || (v8 = json_object_size(a2), v8 != v20[0]) )
      {
        v9 = json_object_iter(a2);
        for ( s = (char *)json_object_iter_key(v9); s; s = (char *)json_object_iter_key(v12) )
        {
          v13 = json_object_key_to_iter(s);
          if ( !json_object_iter_value(v13) )
            break;
          if ( !hashtable_get((hashtable_t *)v20, s) )
          {
            ++v23;
            if ( appended == 1 )
            {
              appended = strbuffer_init((strbuffer_t *)v19);
            }
            else if ( !appended )
            {
              appended = strbuffer_append_bytes((strbuffer_t *)v19, ", ", 2u);
            }
            if ( !appended )
            {
              v10 = strlen(s);
              appended = strbuffer_append_bytes((strbuffer_t *)v19, s, v10);
            }
          }
          v11 = json_object_key_to_iter(s);
          v12 = json_object_iter_next(a2, v11);
        }
      }
      if ( v23 )
      {
        if ( appended )
          v14 = "<unknown>";
        else
          v14 = strbuffer_value((const strbuffer_t *)v19);
        sub_5177C((int *)a1, "<validation>", 7, "%li object item(s) left unpacked: %s", v23, v14);
        strbuffer_close((strbuffer_t *)v19);
      }
      else
      {
LABEL_56:
        v30 = 0;
      }
    }
LABEL_57:
    hashtable_close((hashtable_t *)v20);
    return v30;
  }
}
