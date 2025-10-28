json_t *__fastcall sub_51E28(unsigned int a1, unsigned int a2)
{
  json_t *v6; // [sp+Ch] [bp-10h]
  char v7; // [sp+13h] [bp-9h]
  json_t *v8; // [sp+14h] [bp-8h]

  v8 = (json_t *)json_array();
  sub_5153C((_DWORD *)a1);
  while ( *(_BYTE *)(a1 + 36) != 93 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      sub_5177C((int *)a1, "<format>", 9, "Unexpected end of format string");
      goto LABEL_17;
    }
    sub_5153C((_DWORD *)a1);
    v7 = *(_BYTE *)(a1 + 36);
    sub_5172C((_DWORD *)a1);
    v6 = sub_522E0(COERCE_DOUBLE(__PAIR64__(a2, a1)));
    if ( v6 )
    {
      if ( *(_DWORD *)(a1 + 76) )
        sub_51400((int)v6);
      if ( !*(_DWORD *)(a1 + 76) && json_array_append_new(v8, v6) )
      {
        sub_5177C((int *)a1, "<internal>", 1, "Unable to append to array");
        *(_DWORD *)(a1 + 76) = 1;
      }
    }
    else if ( v7 != 42 )
    {
      *(_DWORD *)(a1 + 76) = 1;
    }
    sub_5153C((_DWORD *)a1);
  }
  if ( !*(_DWORD *)(a1 + 76) )
    return v8;
LABEL_17:
  sub_51400((int)v8);
  return 0;
}
