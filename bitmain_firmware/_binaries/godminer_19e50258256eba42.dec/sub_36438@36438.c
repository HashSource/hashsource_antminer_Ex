int __fastcall sub_36438(json_t *a1, const char *a2, int a3, unsigned int a4)
{
  int v4; // r3
  size_t v5; // r0
  json_t *v6; // r0
  char s[100]; // [sp+14h] [bp-78h] BYREF
  int v13; // [sp+78h] [bp-14h]
  int v14; // [sp+7Ch] [bp-10h]

  v14 = -2147483647;
  v13 = 0;
  memset(s, 0, sizeof(s));
  if ( !a2 || !a1 || a4 > 2 )
    return -2147483646;
  v5 = strlen(a2);
  v14 = sub_35688(a2, v5, a4);
  if ( v14 >= 0 )
  {
    v13 = v14;
    if ( !a4 )
    {
      v14 = ((int (__fastcall *)(json_t *, char **))new_cmds[3 * v13 + 2])(a1, &new_cmds[3 * v13]);
      v4 = v14;
      if ( v14 >= 0 )
        return v4;
      if ( v14 == -2147483646 )
        strcpy(s, "bad param");
      goto LABEL_10;
    }
    if ( a3 )
      v14 = ((int (__fastcall *)(json_t *, char **, int))(&old_cmds)[4 * v13 + 3])(a1, &(&old_cmds)[4 * v13], a3);
    else
      v14 = ((int (__fastcall *)(json_t *, char **, _DWORD))(&old_cmds)[4 * v13 + 3])(a1, &(&old_cmds)[4 * v13], 0);
  }
  else
  {
    if ( !a4 )
    {
      if ( v14 == -2147483645 )
        snprintf(s, 0x64u, "not support (%s)", a2);
      else
        strcpy(s, "bad param");
LABEL_10:
      v6 = (json_t *)json_string(s);
      json_object_set_new(a1, "error_message", v6);
      return v4;
    }
    v4 = v14;
    if ( v14 == -2147483645 )
      sub_2DE54(a1, 0, 14, "Invalid command");
  }
  return v4;
}
