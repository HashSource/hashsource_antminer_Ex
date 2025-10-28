json_t *__fastcall json_loadf(int a1, unsigned int a2, json_error_t *a3)
{
  _BYTE v8[72]; // [sp+10h] [bp-54h] BYREF
  json_t *v9; // [sp+58h] [bp-Ch]
  const char *v10; // [sp+5Ch] [bp-8h]

  if ( a1 == stdin )
    v10 = "<stdin>";
  else
    v10 = "<stream>";
  jsonp_error_init(a3, v10);
  if ( a1 )
  {
    if ( lex_init((int)v8, (int)fgetc, a2, a1) )
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
