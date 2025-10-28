json_t *__fastcall json_loadfd(int a1, unsigned int a2, json_error_t *a3)
{
  int v7; // [sp+Ch] [bp-58h] BYREF
  _BYTE v8[72]; // [sp+10h] [bp-54h] BYREF
  json_t *v9; // [sp+58h] [bp-Ch]
  const char *v10; // [sp+5Ch] [bp-8h]

  v7 = a1;
  if ( a1 )
    v10 = "<stream>";
  else
    v10 = "<stdin>";
  jsonp_error_init(a3, v10);
  if ( v7 >= 0 )
  {
    if ( lex_init((int)v8, 331292, a2, (int)&v7) )
    {
      return 0;
    }
    else
    {
      v9 = sub_5098C((unsigned int)v8, a2, (int)a3);
      lex_close((lex_t *)v8);
      return v9;
    }
  }
  else
  {
    sub_4ED28((int)a3, 0, 4, "wrong arguments");
    return 0;
  }
}
